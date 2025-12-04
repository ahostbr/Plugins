#include "SOTS_BPGenBuilder.h"
#include "SOTS_BlueprintGen.h"

#include "K2Node_EditablePinBase.h"
#include "K2Node_Event.h"
#include "K2Node_FunctionEntry.h"
#include "K2Node_CustomEvent.h"
#include "K2Node_FunctionResult.h"
#include "K2Node_IfThenElse.h"
#include "K2Node_MacroInstance.h"
#include "K2Node_Switch.h"
#include "K2Node_SwitchInteger.h"
#include "K2Node_SwitchString.h"
#include "K2Node_SwitchEnum.h"
#include "K2Node_Select.h"
#include "K2Node_ExecutionSequence.h"
#include "K2Node_VariableGet.h"
#include "K2Node_VariableSet.h"
#include "K2Node_CallFunction.h"
#include "K2Node_CallArrayFunction.h"
#include "K2Node_MakeStruct.h"
#include "K2Node_BreakStruct.h"
#include "K2Node_EnumLiteral.h"
#include "K2Node_Knot.h"


#include "EdGraph/EdGraph.h"
#include "EdGraph/EdGraphSchema.h"
#include "EdGraphSchema_K2_Actions.h"

#include "BlueprintActionDatabase.h"
#include "BlueprintActionFilter.h"
#include "BlueprintActionMenuBuilder.h"
#include "BlueprintActionMenuItem.h"
#include "BlueprintActionMenuUtils.h"
#include "BlueprintEditor.h"
#include "BlueprintFunctionNodeSpawner.h"

#include "Kismet2/BlueprintEditorUtils.h"
#include "Kismet2/KismetEditorUtilities.h"
#include "Engine/LevelScriptBlueprint.h"
#include "Engine/UserDefinedEnum.h"

#include "AssetToolsModule.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "UserDefinedStructure/UserDefinedStructEditorData.h"
#include "UObject/SavePackage.h"







namespace
{
	static void ApplyExtraPinDefaults(UEdGraphNode* Node, const FSOTS_BPGenGraphNode& NodeSpec);

	static FString GetNormalizedPackageName(const FString& InAssetPath)
	{
		FString Result = InAssetPath;
		Result.TrimStartAndEndInline();
		return Result;
	}

	static FName GetSafeObjectName(const FName& InName, const FString& AssetPath)
	{
		if (!InName.IsNone())
		{
			return InName;
		}

		FString DummyLeft, Right;
		if (AssetPath.Split(TEXT("/"), &DummyLeft, &Right, ESearchCase::IgnoreCase, ESearchDir::FromEnd))
		{
			return FName(*Right);
		}

		return FName(TEXT("SOTS_BPGenObject"));
	}

	static bool FillPinTypeFromBPGen(const FSOTS_BPGenPin& InPin, FEdGraphPinType& OutType)
	{
		OutType.ResetToDefaults();

		OutType.PinCategory = InPin.Category;
		OutType.PinSubCategory = InPin.SubCategory;
		OutType.PinSubCategoryObject = nullptr;

		if (!InPin.SubObjectPath.IsEmpty())
		{
			if (UObject* LoadedObj = LoadObject<UObject>(nullptr, *InPin.SubObjectPath))
			{
				OutType.PinSubCategoryObject = LoadedObj;
			}
		}

		switch (InPin.ContainerType)
		{
		case ESOTS_BPGenContainerType::Array:
			OutType.ContainerType = EPinContainerType::Array;
			break;
		case ESOTS_BPGenContainerType::Set:
			OutType.ContainerType = EPinContainerType::Set;
			break;
		case ESOTS_BPGenContainerType::Map:
			OutType.ContainerType = EPinContainerType::Map;
			break;
		default:
			OutType.ContainerType = EPinContainerType::None;
			break;
		}

		return true;
	}

	static UEdGraph* FindFunctionGraph(UBlueprint* Blueprint, FName FunctionName)
	{
		if (!Blueprint)
		{
			return nullptr;
		}

		for (UEdGraph* Graph : Blueprint->FunctionGraphs)
		{
			if (Graph && Graph->GetFName() == FunctionName)
			{
				return Graph;
			}
		}

		return nullptr;
	}

	static UK2Node_FunctionEntry* SpawnFunctionEntryNode(UEdGraph* Graph, const FVector2D& Position)
	{
		if (!Graph)
		{
			return nullptr;
		}

		Graph->Modify();

		UK2Node_FunctionEntry* EntryNode = NewObject<UK2Node_FunctionEntry>(Graph);
		Graph->AddNode(EntryNode, /*bFromUI=*/false, /*bSelectNewNode=*/false);
		EntryNode->SetFlags(RF_Transactional);
		EntryNode->CreateNewGuid();
		EntryNode->PostPlacedNewNode();
		EntryNode->AllocateDefaultPins();

		EntryNode->NodePosX = static_cast<int32>(Position.X);
		EntryNode->NodePosY = static_cast<int32>(Position.Y);

		return EntryNode;
	}

	static UK2Node_FunctionResult* SpawnFunctionResultNode(UEdGraph* Graph, const FVector2D& Position)
	{
		if (!Graph)
		{
			return nullptr;
		}

		Graph->Modify();

		UK2Node_FunctionResult* ResultNode = NewObject<UK2Node_FunctionResult>(Graph);
		Graph->AddNode(ResultNode, /*bFromUI=*/false, /*bSelectNewNode=*/false);
		ResultNode->SetFlags(RF_Transactional);
		ResultNode->CreateNewGuid();
		ResultNode->PostPlacedNewNode();
		ResultNode->AllocateDefaultPins();

		ResultNode->NodePosX = static_cast<int32>(Position.X);
		ResultNode->NodePosY = static_cast<int32>(Position.Y);

		return ResultNode;
	}

	static UEdGraphPin* FindPinByName(UEdGraphNode* Node, const FName& PinName)
	{
		if (!Node)
		{
			return nullptr;
		}

		for (UEdGraphPin* Pin : Node->Pins)
		{
			if (Pin && Pin->PinName == PinName)
			{
				return Pin;
			}
		}
		return nullptr;
	}

	static void AddNodeToMap(TMap<FString, UEdGraphNode*>& NodeMap, const FString& Key, UEdGraphNode* Node)
	{
		if (Key.IsEmpty() || !Node)
		{
			return;
		}

		if (!NodeMap.Contains(Key))
		{
			NodeMap.Add(Key, Node);
		}
	}

	static bool SaveBlueprint(UBlueprint* Blueprint)
	{
		if (!Blueprint)
		{
			return false;
		}

		UPackage* Package = Blueprint->GetOutermost();
		if (!Package)
		{
			return false;
		}

		const FString FileName = FPackageName::LongPackageNameToFilename(Package->GetName(), FPackageName::GetAssetPackageExtension());
		FSavePackageArgs SaveArgs;
		SaveArgs.TopLevelFlags = RF_Public | RF_Standalone;
		SaveArgs.Error = GError;
		SaveArgs.bWarnOfLongFilename = false;

		if (!UPackage::SavePackage(Package, Blueprint, *FileName, SaveArgs))
		{
			return false;
		}

		return true;
	}

	static UEdGraphNode* SpawnCallFunctionNode(UEdGraph* Graph, const FSOTS_BPGenGraphNode& NodeSpec)
	{
		if (!Graph)
		{
			return nullptr;
		}

		if (NodeSpec.FunctionPath.IsEmpty())
		{
			UE_LOG(LogSOTS_BlueprintGen, Warning,
				TEXT("SpawnCallFunctionNode: Node '%s' missing FunctionPath."),
				*NodeSpec.Id);
			return nullptr;
		}

		UFunction* TargetFunction = FindObject<UFunction>(nullptr, *NodeSpec.FunctionPath);
		if (!TargetFunction)
		{
			UE_LOG(LogSOTS_BlueprintGen, Warning,
				TEXT("SpawnCallFunctionNode: Could not find function '%s' for node '%s'."),
				*NodeSpec.FunctionPath, *NodeSpec.Id);
			return nullptr;
		}

		Graph->Modify();

		UK2Node_CallFunction* CallNode = NewObject<UK2Node_CallFunction>(Graph);
		Graph->AddNode(CallNode, /*bFromUI=*/false, /*bSelectNewNode=*/false);
		CallNode->SetFlags(RF_Transactional);
		CallNode->CreateNewGuid();
		CallNode->PostPlacedNewNode();
		CallNode->SetFromFunction(TargetFunction);
		CallNode->AllocateDefaultPins();

		CallNode->NodePosX = static_cast<int32>(NodeSpec.NodePosition.X);
		CallNode->NodePosY = static_cast<int32>(NodeSpec.NodePosition.Y);

		ApplyExtraPinDefaults(CallNode, NodeSpec);

		return CallNode;
	}

	static UEdGraphNode* SpawnVariableGetNode(UEdGraph* Graph, const FSOTS_BPGenGraphNode& NodeSpec)
	{
		if (!Graph)
		{
			return nullptr;
		}

		if (NodeSpec.VariableName.IsNone())
		{
			UE_LOG(LogSOTS_BlueprintGen, Warning,
				TEXT("SpawnVariableGetNode: Node '%s' missing VariableName."),
				*NodeSpec.Id);
			return nullptr;
		}

		Graph->Modify();

		UK2Node_VariableGet* VarNode = NewObject<UK2Node_VariableGet>(Graph);
		Graph->AddNode(VarNode, /*bFromUI=*/false, /*bSelectNewNode=*/false);
		VarNode->SetFlags(RF_Transactional);
		VarNode->CreateNewGuid();
		VarNode->VariableReference.SetSelfMember(NodeSpec.VariableName);
		VarNode->PostPlacedNewNode();
		VarNode->AllocateDefaultPins();

		VarNode->NodePosX = static_cast<int32>(NodeSpec.NodePosition.X);
		VarNode->NodePosY = static_cast<int32>(NodeSpec.NodePosition.Y);

		ApplyExtraPinDefaults(VarNode, NodeSpec);

		return VarNode;
	}

	static UEdGraphNode* SpawnVariableSetNode(UEdGraph* Graph, const FSOTS_BPGenGraphNode& NodeSpec)
	{
		if (!Graph)
		{
			return nullptr;
		}

		if (NodeSpec.VariableName.IsNone())
		{
			UE_LOG(LogSOTS_BlueprintGen, Warning,
				TEXT("SpawnVariableSetNode: Node '%s' missing VariableName."),
				*NodeSpec.Id);
			return nullptr;
		}

		Graph->Modify();

		UK2Node_VariableSet* VarNode = NewObject<UK2Node_VariableSet>(Graph);
		Graph->AddNode(VarNode, /*bFromUI=*/false, /*bSelectNewNode=*/false);
		VarNode->SetFlags(RF_Transactional);
		VarNode->CreateNewGuid();
		VarNode->VariableReference.SetSelfMember(NodeSpec.VariableName);
		VarNode->PostPlacedNewNode();
		VarNode->AllocateDefaultPins();

		VarNode->NodePosX = static_cast<int32>(NodeSpec.NodePosition.X);
		VarNode->NodePosY = static_cast<int32>(NodeSpec.NodePosition.Y);

		ApplyExtraPinDefaults(VarNode, NodeSpec);

		return VarNode;
	}

	static UEdGraphNode* SpawnBranchNode(UEdGraph* Graph, const FSOTS_BPGenGraphNode& NodeSpec)
	{
		if (!Graph)
		{
			return nullptr;
		}

		Graph->Modify();

		UK2Node_IfThenElse* BranchNode = NewObject<UK2Node_IfThenElse>(Graph);
		Graph->AddNode(BranchNode, /*bFromUI=*/false, /*bSelectNewNode=*/false);
		BranchNode->SetFlags(RF_Transactional);
		BranchNode->CreateNewGuid();
		BranchNode->PostPlacedNewNode();
		BranchNode->AllocateDefaultPins();

		BranchNode->NodePosX = static_cast<int32>(NodeSpec.NodePosition.X);
		BranchNode->NodePosY = static_cast<int32>(NodeSpec.NodePosition.Y);

		ApplyExtraPinDefaults(BranchNode, NodeSpec);

		return BranchNode;
	}

	static UEdGraphNode* SpawnKnotNode(UEdGraph* Graph, const FSOTS_BPGenGraphNode& NodeSpec)
	{
		if (!Graph)
		{
			return nullptr;
		}

		Graph->Modify();

		UK2Node_Knot* KnotNode = NewObject<UK2Node_Knot>(Graph);
		Graph->AddNode(KnotNode, /*bFromUI=*/false, /*bSelectNewNode=*/false);
		KnotNode->SetFlags(RF_Transactional);
		KnotNode->CreateNewGuid();
		KnotNode->PostPlacedNewNode();
		KnotNode->AllocateDefaultPins();

		KnotNode->NodePosX = static_cast<int32>(NodeSpec.NodePosition.X);
		KnotNode->NodePosY = static_cast<int32>(NodeSpec.NodePosition.Y);

		ApplyExtraPinDefaults(KnotNode, NodeSpec);

		return KnotNode;
	}

	static void ApplyExtraPinDefaults(UEdGraphNode* Node, const FSOTS_BPGenGraphNode& NodeSpec)
	{
		if (!Node)
		{
			return;
		}

		for (const TPair<FName, FString>& ExtraPair : NodeSpec.ExtraData)
		{
			if (UEdGraphPin* Pin = FindPinByName(Node, ExtraPair.Key))
			{
				Pin->DefaultValue = ExtraPair.Value;
			}
		}
	}

	static void ClearNonExecPins(UEdGraphNode* Node)
	{
		if (!Node)
		{
			return;
		}

		Node->Modify();

		TArray<UEdGraphPin*> PinsToRemove;
		for (UEdGraphPin* Pin : Node->Pins)
		{
			if (!Pin)
			{
				continue;
			}

			if (Pin->PinType.PinCategory == UEdGraphSchema_K2::PC_Exec)
			{
				continue;
			}

			PinsToRemove.Add(Pin);
		}

		for (UEdGraphPin* Pin : PinsToRemove)
		{
			Pin->BreakAllPinLinks();
			Node->RemovePin(Pin);
		}
	}

	static FString GetPinDirectionText(EEdGraphPinDirection Direction)
	{
		if (const UEnum* Enum = StaticEnum<EEdGraphPinDirection>())
		{
			return Enum->GetNameStringByValue(static_cast<int64>(Direction));
		}

		return TEXT("Unknown");
	}

	static bool ValidateLinkPins(const FSOTS_BPGenGraphLink& Link, UEdGraphPin* FromPin, UEdGraphPin* ToPin, FSOTS_BPGenApplyResult& Result)
	{
		if (!FromPin || !ToPin)
		{
			return false;
		}

		bool bIsValid = true;
		if (FromPin->Direction != EGPD_Output)
		{
			const FString Message = FString::Printf(
				TEXT("Link '%s.%s' expects an output pin but '%s' has direction '%s'."),
				*Link.FromNodeId,
				*Link.FromPinName.ToString(),
				*Link.FromNodeId,
				*GetPinDirectionText(FromPin->Direction));
			UE_LOG(LogSOTS_BlueprintGen, Warning, TEXT("%s"), *Message);
			Result.Warnings.Add(Message);
			bIsValid = false;
		}

		if (ToPin->Direction != EGPD_Input)
		{
			const FString Message = FString::Printf(
				TEXT("Link '%s.%s' expects an input pin but '%s' has direction '%s'."),
				*Link.ToNodeId,
				*Link.ToPinName.ToString(),
				*Link.ToNodeId,
				*GetPinDirectionText(ToPin->Direction));
			UE_LOG(LogSOTS_BlueprintGen, Warning, TEXT("%s"), *Message);
			Result.Warnings.Add(Message);
			bIsValid = false;
		}

		return bIsValid;
	}

	static FString ResolvePinCategoryString(const FName& PinCategory)
	{
		return PinCategory.IsNone() ? FString() : PinCategory.ToString();
	}

	static int32 AddPinsFromSpec(UEdGraphNode* Node, EEdGraphPinDirection Direction, const TArray<FSOTS_BPGenPin>& PinDefs, TArray<FString>& OutWarnings)
	{
		if (!Node || PinDefs.Num() == 0)
		{
			return 0;
		}

		int32 AddedCount = 0;
		int32 FallbackIndex = 0;
		for (const FSOTS_BPGenPin& PinDef : PinDefs)
		{
			FString PinNameString;
			if (PinDef.Name.IsNone())
			{
				PinNameString = FString::Printf(TEXT("BPGenPin_%d"), ++FallbackIndex);
			}
			else
			{
				PinNameString = PinDef.Name.ToString();
			}

			FEdGraphPinType PinType;
			if (!FillPinTypeFromBPGen(PinDef, PinType))
			{
				OutWarnings.Add(FString::Printf(
					TEXT("ApplyFunctionSkeleton: Pin '%s' has invalid type information."),
					*PinNameString));
				continue;
			}

			UEdGraphPin* NewPin = Node->CreatePin(Direction, PinType, FName(*PinNameString));

			if (!NewPin)
			{
				OutWarnings.Add(FString::Printf(
					TEXT("ApplyFunctionSkeleton: Failed to create pin '%s'."),
					*PinNameString));
				continue;
			}

			if (!PinDef.DefaultValue.IsEmpty())
			{
				NewPin->DefaultValue = PinDef.DefaultValue;
			}

			++AddedCount;
		}

		if (UEdGraph* Graph = Node->GetGraph())
		{
			Graph->NotifyGraphChanged();
		}
		return AddedCount;
	}
}

FSOTS_BPGenAssetResult USOTS_BPGenBuilder::CreateStructAssetFromDef(
	const UObject* WorldContextObject,
	const FSOTS_BPGenStructDef& StructDef)
{
	FSOTS_BPGenAssetResult Result;
	Result.AssetPath = StructDef.AssetPath;

	if (StructDef.AssetPath.IsEmpty())
	{
		Result.bSuccess = false;
		Result.Message = TEXT("StructDef.AssetPath is empty.");
		UE_LOG(LogSOTS_BlueprintGen, Error, TEXT("CreateStructAssetFromDef failed: AssetPath is empty."));
		return Result;
	}

	const FString PackageName = GetNormalizedPackageName(StructDef.AssetPath);
	const FName StructName = GetSafeObjectName(StructDef.StructName, PackageName);

	UPackage* Package = CreatePackage(*PackageName);
	if (!Package)
	{
		Result.bSuccess = false;
		Result.Message = FString::Printf(TEXT("Failed to create or load package '%s'."), *PackageName);
		UE_LOG(LogSOTS_BlueprintGen, Error, TEXT("%s"), *Result.Message);
		return Result;
	}

	UUserDefinedStruct* TargetStruct = FindObject<UUserDefinedStruct>(Package, *StructName.ToString());
	if (!TargetStruct)
	{
		TargetStruct = FStructureEditorUtils::CreateUserDefinedStruct(
			Package,
			StructName,
			RF_Public | RF_Standalone | RF_Transactional);

		if (!TargetStruct)
		{
			Result.bSuccess = false;
			Result.Message = FString::Printf(TEXT("Failed to create user-defined struct '%s'."), *StructName.ToString());
			UE_LOG(LogSOTS_BlueprintGen, Error, TEXT("%s"), *Result.Message);
			return Result;
		}
	}
	else
	{
		UE_LOG(LogSOTS_BlueprintGen, Log,
			TEXT("CreateStructAssetFromDef: Updating existing struct '%s' in package '%s'."),
			*StructName.ToString(), *PackageName);
	}

	TArray<FStructVariableDescription>& VarDescs = FStructureEditorUtils::GetVarDesc(TargetStruct);
	VarDescs.Reset();

	for (const FSOTS_BPGenPin& MemberPin : StructDef.Members)
	{
		FStructVariableDescription NewVar;
		NewVar.VarGuid = FGuid::NewGuid();
		NewVar.VarName = MemberPin.Name.IsNone() ? FName(TEXT("Member")) : MemberPin.Name;
		NewVar.FriendlyName = NewVar.VarName.ToString();

		FEdGraphPinType PinType;
		if (FillPinTypeFromBPGen(MemberPin, PinType))
		{
			NewVar.SetPinType(PinType);
		}
		else
		{
			UE_LOG(LogSOTS_BlueprintGen, Warning, TEXT("CreateStructAssetFromDef: Invalid pin definition for member '%s'."), *NewVar.VarName.ToString());
		}

		VarDescs.Add(MoveTemp(NewVar));
	}

	FStructureEditorUtils::OnStructureChanged(TargetStruct);

	FAssetRegistryModule::AssetCreated(TargetStruct);
	Package->MarkPackageDirty();

	const FString FileName = FPackageName::LongPackageNameToFilename(PackageName, FPackageName::GetAssetPackageExtension());

	FSavePackageArgs SaveArgs;
	SaveArgs.TopLevelFlags = RF_Public | RF_Standalone;
	SaveArgs.Error = GError;
	SaveArgs.bWarnOfLongFilename = false;

	if (!UPackage::SavePackage(Package, TargetStruct, *FileName, SaveArgs))
	{
		Result.bSuccess = false;
		Result.Message = FString::Printf(TEXT("Failed to save struct package '%s'."), *FileName);
		UE_LOG(LogSOTS_BlueprintGen, Error, TEXT("%s"), *Result.Message);
		return Result;
	}

	Result.bSuccess = true;
	Result.Message = FString::Printf(TEXT("Struct '%s' created/updated at '%s'."), *StructName.ToString(), *PackageName);
	return Result;
}

FSOTS_BPGenAssetResult USOTS_BPGenBuilder::CreateEnumAssetFromDef(
	const UObject* WorldContextObject,
	const FSOTS_BPGenEnumDef& EnumDef)
{
	FSOTS_BPGenAssetResult Result;
	Result.AssetPath = EnumDef.AssetPath;

	if (EnumDef.AssetPath.IsEmpty())
	{
		Result.bSuccess = false;
		Result.Message = TEXT("EnumDef.AssetPath is empty.");
		UE_LOG(LogSOTS_BlueprintGen, Error, TEXT("CreateEnumAssetFromDef failed: AssetPath is empty."));
		return Result;
	}

	const FString PackageName = GetNormalizedPackageName(EnumDef.AssetPath);
	const FName EnumName = GetSafeObjectName(EnumDef.EnumName, PackageName);

	UPackage* Package = CreatePackage(*PackageName);
	if (!Package)
	{
		Result.bSuccess = false;
		Result.Message = FString::Printf(TEXT("Failed to create or load package '%s'."), *PackageName);
		UE_LOG(LogSOTS_BlueprintGen, Error, TEXT("%s"), *Result.Message);
		return Result;
	}

	UUserDefinedEnum* TargetEnum = FindObject<UUserDefinedEnum>(Package, *EnumName.ToString());
	if (!TargetEnum)
	{
		TargetEnum = NewObject<UUserDefinedEnum>(
			Package,
			EnumName,
			RF_Public | RF_Standalone | RF_Transactional);

		if (!TargetEnum)
		{
			Result.bSuccess = false;
			Result.Message = FString::Printf(TEXT("Failed to create user-defined enum '%s'."), *EnumName.ToString());
			UE_LOG(LogSOTS_BlueprintGen, Error, TEXT("%s"), *Result.Message);
			return Result;
		}
	}
	else
	{
		UE_LOG(LogSOTS_BlueprintGen, Log,
			TEXT("CreateEnumAssetFromDef: Updating existing enum '%s' in package '%s'."),
			*EnumName.ToString(), *PackageName);
	}

	TArray<TPair<FName, int64>> EnumNames;
	for (int32 Index = 0; Index < EnumDef.Values.Num(); ++Index)
	{
		const FString& EntryString = EnumDef.Values[Index];
		const FName EntryName = FName(*EntryString);

		EnumNames.Add(TPair<FName, int64>(EntryName, Index));
	}

	TargetEnum->SetEnums(EnumNames, UUserDefinedEnum::ECppForm::Regular);
	TargetEnum->MarkPackageDirty();

	FAssetRegistryModule::AssetCreated(TargetEnum);
	Package->MarkPackageDirty();

	const FString FileName = FPackageName::LongPackageNameToFilename(PackageName, FPackageName::GetAssetPackageExtension());

	FSavePackageArgs SaveArgs;
	SaveArgs.TopLevelFlags = RF_Public | RF_Standalone;
	SaveArgs.Error = GError;
	SaveArgs.bWarnOfLongFilename = false;

	if (!UPackage::SavePackage(Package, TargetEnum, *FileName, SaveArgs))
	{
		Result.bSuccess = false;
		Result.Message = FString::Printf(TEXT("Failed to save enum package '%s'."), *FileName);
		UE_LOG(LogSOTS_BlueprintGen, Error, TEXT("%s"), *Result.Message);
		return Result;
	}

	Result.bSuccess = true;
	Result.Message = FString::Printf(TEXT("Enum '%s' created/updated at '%s'."), *EnumName.ToString(), *PackageName);
	return Result;
}

FSOTS_BPGenApplyResult USOTS_BPGenBuilder::ApplyFunctionSkeleton(
	const UObject* WorldContextObject,
	const FSOTS_BPGenFunctionDef& FunctionDef)
{
	FSOTS_BPGenApplyResult Result;
	Result.TargetBlueprintPath = FunctionDef.TargetBlueprintPath;
	Result.FunctionName = FunctionDef.FunctionName;

	if (FunctionDef.TargetBlueprintPath.IsEmpty())
	{
		Result.bSuccess = false;
		Result.ErrorMessage = TEXT("ApplyFunctionSkeleton: TargetBlueprintPath is empty.");
		UE_LOG(LogSOTS_BlueprintGen, Error, TEXT("%s"), *Result.ErrorMessage);
		return Result;
	}

	if (FunctionDef.FunctionName.IsNone())
	{
		Result.bSuccess = false;
		Result.ErrorMessage = TEXT("ApplyFunctionSkeleton: FunctionName is None.");
		UE_LOG(LogSOTS_BlueprintGen, Error, TEXT("%s"), *Result.ErrorMessage);
		return Result;
	}

	UBlueprint* Blueprint = Cast<UBlueprint>(
		StaticLoadObject(UBlueprint::StaticClass(), nullptr, *FunctionDef.TargetBlueprintPath));

	if (!Blueprint)
	{
		Result.bSuccess = false;
		Result.ErrorMessage = FString::Printf(
			TEXT("ApplyFunctionSkeleton: Failed to load Blueprint at '%s'."),
			*FunctionDef.TargetBlueprintPath);
		UE_LOG(LogSOTS_BlueprintGen, Error, TEXT("%s"), *Result.ErrorMessage);
		return Result;
	}

	UEdGraph* FunctionGraph = FindFunctionGraph(Blueprint, FunctionDef.FunctionName);

	if (!FunctionGraph)
	{
		// Create a new function graph using the K2 schema.
		FunctionGraph = FBlueprintEditorUtils::CreateNewGraph(
			Blueprint,
			FunctionDef.FunctionName,
			UEdGraph::StaticClass(),
			UEdGraphSchema_K2::StaticClass());

		if (!FunctionGraph)
		{
			Result.bSuccess = false;
			Result.ErrorMessage = FString::Printf(
				TEXT("ApplyFunctionSkeleton: Failed to create function graph '%s'."),
				*FunctionDef.FunctionName.ToString());
			UE_LOG(LogSOTS_BlueprintGen, Error, TEXT("%s"), *Result.ErrorMessage);
			return Result;
		}

		FBlueprintEditorUtils::AddFunctionGraph<UFunction>(
			Blueprint,
			FunctionGraph,
			/*bIsUserCreated=*/true,
			nullptr);

		UE_LOG(LogSOTS_BlueprintGen, Log,
			TEXT("ApplyFunctionSkeleton: Created new function graph '%s' in '%s'."),
			*FunctionDef.FunctionName.ToString(),
			*FunctionDef.TargetBlueprintPath);
	}
	else
	{
		UE_LOG(LogSOTS_BlueprintGen, Log,
			TEXT("ApplyFunctionSkeleton: Reusing existing function graph '%s' in '%s'."),
			*FunctionDef.FunctionName.ToString(),
			*FunctionDef.TargetBlueprintPath);
	}

	UK2Node_FunctionEntry* EntryNode = nullptr;
	TArray<UK2Node_FunctionResult*> ResultNodes;
	for (UEdGraphNode* Node : FunctionGraph->Nodes)
	{
		if (UK2Node_FunctionEntry* AsEntry = Cast<UK2Node_FunctionEntry>(Node))
		{
			EntryNode = AsEntry;
		}
		else if (UK2Node_FunctionResult* AsResult = Cast<UK2Node_FunctionResult>(Node))
		{
			ResultNodes.Add(AsResult);
		}
	}

	if (!EntryNode)
	{
		EntryNode = SpawnFunctionEntryNode(FunctionGraph, FVector2D::ZeroVector);
		if (!EntryNode)
		{
			Result.bSuccess = false;
			Result.ErrorMessage = TEXT("ApplyFunctionSkeleton: Failed to create function entry node.");
			UE_LOG(LogSOTS_BlueprintGen, Error, TEXT("%s"), *Result.ErrorMessage);
			return Result;
		}
	}

	if (ResultNodes.Num() == 0)
	{
		if (UK2Node_FunctionResult* NewResult = SpawnFunctionResultNode(FunctionGraph, FVector2D::ZeroVector))
		{
			ResultNodes.Add(NewResult);
		}
	}

	if (ResultNodes.Num() == 0)
	{
		Result.bSuccess = false;
		Result.ErrorMessage = TEXT("ApplyFunctionSkeleton: Failed to create function result node.");
		UE_LOG(LogSOTS_BlueprintGen, Error, TEXT("%s"), *Result.ErrorMessage);
		return Result;
	}

	TArray<FString> PinWarnings;
	ClearNonExecPins(EntryNode);
	const int32 InputPinsAdded = AddPinsFromSpec(EntryNode, EGPD_Input, FunctionDef.Inputs, PinWarnings);
	int32 OutputPinsAdded = 0;
	for (UK2Node_FunctionResult* ResultNode : ResultNodes)
	{
		ClearNonExecPins(ResultNode);
		OutputPinsAdded += AddPinsFromSpec(ResultNode, EGPD_Output, FunctionDef.Outputs, PinWarnings);
	}

	for (const FString& Warning : PinWarnings)
	{
		Result.Warnings.Add(Warning);
	}

	if (FunctionDef.Inputs.Num() > 0 || FunctionDef.Outputs.Num() > 0)
	{
		UE_LOG(LogSOTS_BlueprintGen, Display,
			TEXT("ApplyFunctionSkeleton: Added %d input pin(s) and %d output pin(s) to function '%s'."),
			InputPinsAdded,
			OutputPinsAdded,
			*FunctionDef.FunctionName.ToString());
	}

	FBlueprintEditorUtils::MarkBlueprintAsStructurallyModified(Blueprint);
	FKismetEditorUtilities::CompileBlueprint(Blueprint);
	if (UPackage* Package = Blueprint->GetOutermost())
	{
		Package->MarkPackageDirty();
	}
	if (!SaveBlueprint(Blueprint))
	{
		Result.Warnings.Add(TEXT("ApplyFunctionSkeleton: Failed to save Blueprint after creating function."));
	}

	Result.bSuccess = true;

	return Result;
}

FSOTS_BPGenApplyResult USOTS_BPGenBuilder::ApplyGraphSpecToFunction(
	const UObject* WorldContextObject,
	const FSOTS_BPGenFunctionDef& FunctionDef,
	const FSOTS_BPGenGraphSpec& GraphSpec)
{
	FSOTS_BPGenApplyResult Result;
	Result.TargetBlueprintPath = FunctionDef.TargetBlueprintPath;
	Result.FunctionName = FunctionDef.FunctionName;

	if (FunctionDef.TargetBlueprintPath.IsEmpty())
	{
		Result.bSuccess = false;
		Result.ErrorMessage = TEXT("ApplyGraphSpecToFunction: TargetBlueprintPath is empty.");
		UE_LOG(LogSOTS_BlueprintGen, Error, TEXT("%s"), *Result.ErrorMessage);
		return Result;
	}

	if (FunctionDef.FunctionName.IsNone())
	{
		Result.bSuccess = false;
		Result.ErrorMessage = TEXT("ApplyGraphSpecToFunction: FunctionName is None.");
		UE_LOG(LogSOTS_BlueprintGen, Error, TEXT("%s"), *Result.ErrorMessage);
		return Result;
	}

	UBlueprint* Blueprint = Cast<UBlueprint>(
		StaticLoadObject(UBlueprint::StaticClass(), nullptr, *FunctionDef.TargetBlueprintPath));

	if (!Blueprint)
	{
		Result.bSuccess = false;
		Result.ErrorMessage = FString::Printf(
			TEXT("ApplyGraphSpecToFunction: Failed to load Blueprint at '%s'."),
			*FunctionDef.TargetBlueprintPath);
		UE_LOG(LogSOTS_BlueprintGen, Error, TEXT("%s"), *Result.ErrorMessage);
		return Result;
	}

	UEdGraph* FunctionGraph = FindFunctionGraph(Blueprint, FunctionDef.FunctionName);
	if (!FunctionGraph)
	{
		Result.bSuccess = false;
		Result.ErrorMessage = FString::Printf(
			TEXT("ApplyGraphSpecToFunction: Function graph '%s' not found in '%s'. Did you call ApplyFunctionSkeleton first?"),
			*FunctionDef.FunctionName.ToString(),
			*FunctionDef.TargetBlueprintPath);
		UE_LOG(LogSOTS_BlueprintGen, Error, TEXT("%s"), *Result.ErrorMessage);
		return Result;
	}

	// Identify existing entry/result nodes before clearing anything.
	UK2Node_FunctionEntry* EntryNode = nullptr;
	TArray<UK2Node_FunctionResult*> ResultNodes;

	for (UEdGraphNode* Node : FunctionGraph->Nodes)
	{
		if (UK2Node_FunctionEntry* AsEntry = Cast<UK2Node_FunctionEntry>(Node))
		{
			if (!EntryNode)
			{
				EntryNode = AsEntry;
			}
		}
		else if (UK2Node_FunctionResult* AsResult = Cast<UK2Node_FunctionResult>(Node))
		{
			ResultNodes.Add(AsResult);
		}
	}

	// Remove all non-entry/result nodes to get a clean slate.
	{
		TArray<UEdGraphNode*> NodesToRemove;
		for (UEdGraphNode* Node : FunctionGraph->Nodes)
		{
			if (!Node)
			{
				continue;
			}

			if (Node == EntryNode || ResultNodes.Contains(Cast<UK2Node_FunctionResult>(Node)))
			{
				continue;
			}

			NodesToRemove.Add(Node);
		}

		for (UEdGraphNode* Node : NodesToRemove)
		{
			FunctionGraph->RemoveNode(Node);
		}
	}

	// Ensure we have entry/result nodes to work with.
	if (!EntryNode)
	{
		EntryNode = SpawnFunctionEntryNode(FunctionGraph, FVector2D::ZeroVector);
	}

	if (ResultNodes.Num() == 0)
	{
		if (UK2Node_FunctionResult* NewResult = SpawnFunctionResultNode(FunctionGraph, FVector2D::ZeroVector))
		{
			ResultNodes.Add(NewResult);
		}
	}

	// Map node ids to spawned/located nodes.
	TMap<FString, UEdGraphNode*> NodeMap;

	AddNodeToMap(NodeMap, TEXT("Entry"), EntryNode);
	AddNodeToMap(NodeMap, TEXT("FunctionEntry"), EntryNode);
	if (ResultNodes.Num() > 0)
	{
		AddNodeToMap(NodeMap, TEXT("Result"), ResultNodes[0]);
		AddNodeToMap(NodeMap, TEXT("FunctionResult"), ResultNodes[0]);
	}
	for (int32 Index = 0; Index < ResultNodes.Num(); ++Index)
	{
		AddNodeToMap(NodeMap, FString::Printf(TEXT("Result%d"), Index), ResultNodes[Index]);
	}

	// First, map any spec nodes that reference the existing entry/result nodes.
	for (const FSOTS_BPGenGraphNode& NodeSpec : GraphSpec.Nodes)
	{
		if (NodeSpec.NodeType == FName(TEXT("K2Node_FunctionEntry")))
		{
			if (EntryNode)
			{
				AddNodeToMap(NodeMap, NodeSpec.Id, EntryNode);
				EntryNode->NodePosX = static_cast<int32>(NodeSpec.NodePosition.X);
				EntryNode->NodePosY = static_cast<int32>(NodeSpec.NodePosition.Y);
				ApplyExtraPinDefaults(EntryNode, NodeSpec);
			}
			else
			{
				UE_LOG(LogSOTS_BlueprintGen, Warning,
					TEXT("ApplyGraphSpecToFunction: Node '%s' requests K2Node_FunctionEntry but none found in graph."),
					*NodeSpec.Id);
			}
		}
		else if (NodeSpec.NodeType == FName(TEXT("K2Node_FunctionResult")))
		{
			if (ResultNodes.Num() > 0)
			{
				// For now, bind to the first result node. More complex mappings
				// can be added later if needed.
				AddNodeToMap(NodeMap, NodeSpec.Id, ResultNodes[0]);
				ResultNodes[0]->NodePosX = static_cast<int32>(NodeSpec.NodePosition.X);
				ResultNodes[0]->NodePosY = static_cast<int32>(NodeSpec.NodePosition.Y);
				ApplyExtraPinDefaults(ResultNodes[0], NodeSpec);
			}
			else
			{
				UE_LOG(LogSOTS_BlueprintGen, Warning,
					TEXT("ApplyGraphSpecToFunction: Node '%s' requests K2Node_FunctionResult but none found in graph."),
					*NodeSpec.Id);
			}
		}
	}

	// Spawn new nodes for all remaining specs.
	for (const FSOTS_BPGenGraphNode& NodeSpec : GraphSpec.Nodes)
	{
		if (NodeMap.Contains(NodeSpec.Id))
		{
			continue; // Already mapped (entry/result).
		}

		UEdGraphNode* NewNode = nullptr;

		if (NodeSpec.NodeType == FName(TEXT("K2Node_CallFunction")))
		{
			NewNode = SpawnCallFunctionNode(FunctionGraph, NodeSpec);
		}
		else if (NodeSpec.NodeType == FName(TEXT("K2Node_VariableGet")))
		{
			NewNode = SpawnVariableGetNode(FunctionGraph, NodeSpec);
		}
		else if (NodeSpec.NodeType == FName(TEXT("K2Node_VariableSet")))
		{
			NewNode = SpawnVariableSetNode(FunctionGraph, NodeSpec);
		}
		else if (NodeSpec.NodeType == FName(TEXT("K2Node_Branch"))
			|| NodeSpec.NodeType == FName(TEXT("K2Node_IfThenElse")))
		{
			NewNode = SpawnBranchNode(FunctionGraph, NodeSpec);
		}
		else if (NodeSpec.NodeType == FName(TEXT("K2Node_Knot")))
		{
			NewNode = SpawnKnotNode(FunctionGraph, NodeSpec);
		}
		else
		{
			UE_LOG(LogSOTS_BlueprintGen, Warning,
				TEXT("ApplyGraphSpecToFunction: Unsupported NodeType '%s' for node '%s'."),
				*NodeSpec.NodeType.ToString(), *NodeSpec.Id);
			Result.Warnings.Add(FString::Printf(
				TEXT("Unsupported NodeType '%s' for node '%s'."),
				*NodeSpec.NodeType.ToString(), *NodeSpec.Id));
		}

		if (NewNode)
		{
			AddNodeToMap(NodeMap, NodeSpec.Id, NewNode);
		}
	}

	// Connect pins according to Links.
	for (const FSOTS_BPGenGraphLink& Link : GraphSpec.Links)
	{
		UEdGraphNode** FromNodePtr = NodeMap.Find(Link.FromNodeId);
		UEdGraphNode** ToNodePtr = NodeMap.Find(Link.ToNodeId);

		if (!FromNodePtr || !ToNodePtr || !(*FromNodePtr) || !(*ToNodePtr))
		{
			UE_LOG(LogSOTS_BlueprintGen, Warning,
				TEXT("ApplyGraphSpecToFunction: Link from '%s' to '%s' could not find nodes."),
				*Link.FromNodeId, *Link.ToNodeId);
			Result.Warnings.Add(FString::Printf(
				TEXT("Link from '%s' to '%s' could not find nodes."),
				*Link.FromNodeId, *Link.ToNodeId));
			continue;
		}

		UEdGraphPin* FromPin = FindPinByName(*FromNodePtr, Link.FromPinName);
		UEdGraphPin* ToPin = FindPinByName(*ToNodePtr, Link.ToPinName);

		if (!ToPin && ToNodePtr && *ToNodePtr)
		{
			if (UK2Node_FunctionResult* ResultNode = Cast<UK2Node_FunctionResult>(*ToNodePtr))
			{
				ToPin = FindPinByName(*ToNodePtr, UEdGraphSchema_K2::PN_Execute);
				if (ToPin)
				{
					UE_LOG(LogSOTS_BlueprintGen, Verbose,
						TEXT("ApplyGraphSpecToFunction: Link '%s' fell back to Execute pin on result node."),
						*Link.ToNodeId);
				}
			}
		}

		if (!FromPin || !ToPin)
		{
			UE_LOG(LogSOTS_BlueprintGen, Warning,
				TEXT("ApplyGraphSpecToFunction: Link from '%s.%s' to '%s.%s' could not find pins."),
				*Link.FromNodeId,
				*Link.FromPinName.ToString(),
				*Link.ToNodeId,
				*Link.ToPinName.ToString());
			Result.Warnings.Add(FString::Printf(
				TEXT("Link from '%s.%s' to '%s.%s' could not find pins."),
				*Link.FromNodeId,
				*Link.FromPinName.ToString(),
				*Link.ToNodeId,
				*Link.ToPinName.ToString()));
			continue;
		}

		if (!ValidateLinkPins(Link, FromPin, ToPin, Result))
		{
			continue;
		}

		FromPin->MakeLinkTo(ToPin);

		if (UEdGraphNode* OwningNode = FromPin->GetOwningNode())
		{
			OwningNode->NodeConnectionListChanged();
		}
		if (UEdGraphNode* OwningNode = ToPin->GetOwningNode())
		{
			OwningNode->NodeConnectionListChanged();
		}
	}

	FBlueprintEditorUtils::MarkBlueprintAsStructurallyModified(Blueprint);
	FKismetEditorUtilities::CompileBlueprint(Blueprint);
	if (UPackage* Package = Blueprint->GetOutermost())
	{
		Package->MarkPackageDirty();
	}
	if (!SaveBlueprint(Blueprint))
	{
		Result.Warnings.Add(TEXT("ApplyGraphSpecToFunction: Failed to save Blueprint after applying graph."));
	}

	Result.bSuccess = true;
	return Result;
}
