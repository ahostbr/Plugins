#include "BlueprintFlowExporter.h"

#include "AssetRegistry/AssetRegistryModule.h"
#include "Blueprint/BlueprintSupport.h"
#include "EdGraph/EdGraph.h"
#include "EdGraph/EdGraphNode.h"
#include "Engine/Blueprint.h"
#include "Engine/DataAsset.h"
#include "Engine/DataTable.h"
#include "Engine/Level.h"
#include "Engine/SkeletalMesh.h"
#include "Engine/StaticMesh.h"
#include "Engine/World.h"
#include "EnhancedInput/Public/InputMappingContext.h"
#include "JsonObjectConverter.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "Serialization/JsonSerializer.h"

#include "Animation/AnimMontage.h"
#include "Animation/AnimSequence.h"
#include "Sound/SoundBase.h"

#include "BEP.h"

	namespace
	{
	IAssetRegistry& GetAssetRegistry()
	{
		FAssetRegistryModule& AssetRegistryModule =
			FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
		return AssetRegistryModule.Get();
	}

	void DumpGraphText(UBlueprint* Blueprint, UEdGraph* Graph, FString& OutText)
	{
		if (!Graph)
		{
			return;
		}

		OutText += FString::Printf(TEXT("  Graph: %s\n"), *Graph->GetName());

		for (UEdGraphNode* Node : Graph->Nodes)
		{
			if (!Node)
			{
				continue;
			}

			const FString NodeTitle = Node->GetNodeTitle(ENodeTitleType::FullTitle).ToString();
			OutText += FString::Printf(TEXT("    Node: %s (%s)\n"),
				*NodeTitle,
				*Node->GetClass()->GetName());

			for (UEdGraphPin* Pin : Node->Pins)
			{
				if (!Pin)
				{
					continue;
				}

				const TCHAR* DirectionText = Pin->Direction == EGPD_Input ? TEXT("In") : TEXT("Out");
				OutText += FString::Printf(TEXT("      Pin: %s (%s) Dir=%s\n"),
					*Pin->PinName.ToString(),
					*Pin->PinType.PinCategory.ToString(),
					DirectionText);

				for (UEdGraphPin* LinkedPin : Pin->LinkedTo)
				{
					if (!LinkedPin || !LinkedPin->GetOwningNode())
					{
						continue;
					}

					const FString LinkedNodeTitle =
						LinkedPin->GetOwningNode()->GetNodeTitle(ENodeTitleType::FullTitle).ToString();

					OutText += FString::Printf(TEXT("        -> %s.%s\n"),
						*LinkedNodeTitle,
						*LinkedPin->PinName.ToString());
				}
			}
		}
	}

	void LogFileWriteFailure(const FString& FilePath, const TCHAR* Context)
	{
		const FString FullPath = FPaths::ConvertRelativePathToFull(FilePath);
		const FString Directory = FPaths::GetPath(FullPath);
		const bool bDirExists = IFileManager::Get().DirectoryExists(*Directory);
		const bool bIsReadOnly = IFileManager::Get().IsReadOnly(*FullPath);

		UE_LOG(
			LogBEP,
			Warning,
			TEXT("[BEP] Failed to write file (%s)\n  FilePath: %s\n  FullPath: %s\n  Directory: %s (Exists=%s)\n  ReadOnly=%s"),
			Context ? Context : TEXT("NoContext"),
			*FilePath,
			*FullPath,
			*Directory,
			bDirExists ? TEXT("true") : TEXT("false"),
			bIsReadOnly ? TEXT("true") : TEXT("false"));
	}

	bool PropertyContainsUnsupportedLocator(FProperty* Prop);

	bool StructContainsUnsupportedLocator(UStruct* InStruct)
	{
		if (!InStruct)
		{
			return false;
		}

		for (TFieldIterator<FProperty> It(InStruct, EFieldIterationFlags::IncludeSuper); It; ++It)
		{
			FProperty* Prop = *It;
			if (!Prop)
			{
				continue;
			}

			if (PropertyContainsUnsupportedLocator(Prop))
			{
				return true;
			}
		}

		return false;
	}

	bool PropertyContainsUnsupportedLocator(FProperty* Prop)
	{
		if (!Prop)
		{
			return false;
		}

		// Direct struct property.
		if (FStructProperty* StructProp = CastField<FStructProperty>(Prop))
		{
			if (UScriptStruct* InnerStruct = StructProp->Struct)
			{
				const FString StructName = InnerStruct->GetName();

				// Universal Object Locator / Actor locator fragments currently assert
				// in ToString when they contain certain characters. Rather than
				// crashing the editor during export, we conservatively skip any
				// asset whose class has such a property and log it.
				if (StructName.Contains(TEXT("UniversalObjectLocator")) ||
					StructName.Contains(TEXT("ActorLocatorFragment")))
				{
					return true;
				}

				if (StructContainsUnsupportedLocator(InnerStruct))
				{
					return true;
				}
			}
		}

		// Arrays of structs / locators.
		if (FArrayProperty* ArrayProp = CastField<FArrayProperty>(Prop))
		{
			return PropertyContainsUnsupportedLocator(ArrayProp->Inner);
		}

		// Maps whose key or value is or contains a locator struct.
		if (FMapProperty* MapProp = CastField<FMapProperty>(Prop))
		{
			return PropertyContainsUnsupportedLocator(MapProp->KeyProp) ||
			       PropertyContainsUnsupportedLocator(MapProp->ValueProp);
		}

		return false;
	}

	void EnsureDirectory(const FString& Dir)
	{
		if (!Dir.IsEmpty())
		{
			const FString FullDir = FPaths::ConvertRelativePathToFull(Dir);

			const bool bOk = IFileManager::Get().MakeDirectory(*FullDir, true);
			if (!bOk)
			{
				const bool bDirExists = IFileManager::Get().DirectoryExists(*FullDir);

				UE_LOG(
					LogBEP,
					Warning,
					TEXT("[BEP] Failed to create directory\n  DirArg: %s\n  FullDir: %s\n  AlreadyExists=%s"),
					*Dir,
					*FullDir,
					bDirExists ? TEXT("true") : TEXT("false"));
			}
			else
			{
				UE_LOG(
					LogBEP,
					Verbose,
					TEXT("[BEP] Ensured directory exists\n  DirArg: %s\n  FullDir: %s"),
					*Dir,
					*FullDir);
			}
		}
	}
}

static FString ToCsvSafe(const FString& In)
{
	FString Result = In;
	Result.ReplaceInline(TEXT("\""), TEXT("\"\""));
	return FString::Printf(TEXT("\"%s\""), *Result);
}

void FBlueprintFlowExporter::ExportAllBlueprintFlows(const FString& OutputDirectory, const FString& RootPath, EBEPExportFormat Format)
{
	IAssetRegistry& AssetRegistry = GetAssetRegistry();

	FARFilter Filter;
	// Include UBlueprint and all derived types (e.g. UWidgetBlueprint) so that
	// regular Blueprints **and** UMG widget Blueprints are exported.
	Filter.ClassPaths.Add(UBlueprint::StaticClass()->GetClassPathName());
	Filter.bRecursiveClasses = true;
	Filter.PackagePaths.Add(*RootPath);
	Filter.bRecursivePaths = true;

	TArray<FAssetData> BlueprintAssets;
	AssetRegistry.GetAssets(Filter, BlueprintAssets);

	const FString OutDir = OutputDirectory.IsEmpty()
		                        ? (FPaths::ProjectSavedDir() / TEXT("BEPExport/BlueprintFlows"))
		                        : OutputDirectory;
	EnsureDirectory(OutDir);

	UE_LOG(LogBEP, Log, TEXT("[BEP] ExportAllBlueprintFlows: RootPath=%s AssetsFound=%d OutputDir=%s Format=%d"),
		*RootPath, BlueprintAssets.Num(), *OutDir, static_cast<int32>(Format));

	int32 ExportedCount = 0;

	for (const FAssetData& Asset : BlueprintAssets)
	{
		UBlueprint* Blueprint = Cast<UBlueprint>(Asset.GetAsset());
		if (!Blueprint)
		{
			continue;
		}

		const FString SafeName = Asset.AssetName.ToString().Replace(TEXT("/"), TEXT("_"));

		if (Format == EBEPExportFormat::Text)
		{
			FString Dump;
			Dump += FString::Printf(TEXT("Blueprint: %s (%s)\n"),
				*Blueprint->GetName(),
				*Blueprint->GetPathName());

			if (Blueprint->UbergraphPages.Num() > 0)
			{
				for (UEdGraph* Graph : Blueprint->UbergraphPages)
				{
					DumpGraphText(Blueprint, Graph, Dump);
				}
			}

			for (UEdGraph* Graph : Blueprint->FunctionGraphs)
			{
				DumpGraphText(Blueprint, Graph, Dump);
			}

			for (UEdGraph* Graph : Blueprint->MacroGraphs)
			{
				DumpGraphText(Blueprint, Graph, Dump);
			}

			const FString FilePath = OutDir / (SafeName + TEXT("_Flow.txt"));
			if (!FFileHelper::SaveStringToFile(Dump, *FilePath))
			{
				LogFileWriteFailure(FilePath, TEXT("Blueprint flow text"));
			}
			else
			{
				++ExportedCount;
			}
		}
		else if (Format == EBEPExportFormat::Csv)
		{
			TArray<FString> Lines;
			Lines.Add(TEXT("Blueprint,Graph,NodeTitle,NodeClass,PinName,PinCategory,PinDirection,LinkedNodeTitle,LinkedPinName"));

			auto EmitRow = [&Lines](const FString& BPName, const FString& GraphName,
				const FString& NodeTitle, const FString& NodeClass,
				const FString& PinName, const FString& PinCategory, const FString& PinDir,
				const FString& LinkedNodeTitle, const FString& LinkedPinName)
			{
				Lines.Add(FString::Printf(TEXT("%s,%s,%s,%s,%s,%s,%s,%s,%s"),
					*ToCsvSafe(BPName),
					*ToCsvSafe(GraphName),
					*ToCsvSafe(NodeTitle),
					*ToCsvSafe(NodeClass),
					*ToCsvSafe(PinName),
					*ToCsvSafe(PinCategory),
					*ToCsvSafe(PinDir),
					*ToCsvSafe(LinkedNodeTitle),
					*ToCsvSafe(LinkedPinName)));
			};

			auto ProcessGraphCsv = [&EmitRow, &Blueprint](UEdGraph* Graph)
			{
				if (!Graph) return;

				const FString GraphName = Graph->GetName();

				for (UEdGraphNode* Node : Graph->Nodes)
				{
					if (!Node) continue;

					const FString NodeTitle = Node->GetNodeTitle(ENodeTitleType::FullTitle).ToString();
					const FString NodeClass = Node->GetClass()->GetName();

					for (UEdGraphPin* Pin : Node->Pins)
					{
						if (!Pin) continue;

						const FString PinName = Pin->PinName.ToString();
						const FString PinCategory = Pin->PinType.PinCategory.ToString();
						const FString PinDir = (Pin->Direction == EGPD_Input) ? TEXT("In") : TEXT("Out");

						if (Pin->LinkedTo.Num() == 0)
						{
							EmitRow(Blueprint->GetName(), GraphName, NodeTitle, NodeClass,
								PinName, PinCategory, PinDir, FString(), FString());
						}
						else
						{
							for (UEdGraphPin* LinkedPin : Pin->LinkedTo)
							{
								if (!LinkedPin || !LinkedPin->GetOwningNode()) continue;

								const FString LinkedNodeTitle =
									LinkedPin->GetOwningNode()->GetNodeTitle(ENodeTitleType::FullTitle).ToString();
								const FString LinkedPinName = LinkedPin->PinName.ToString();

								EmitRow(Blueprint->GetName(), GraphName, NodeTitle, NodeClass,
									PinName, PinCategory, PinDir, LinkedNodeTitle, LinkedPinName);
							}
						}
					}
				}
			};

			for (UEdGraph* Graph : Blueprint->UbergraphPages)
			{
				ProcessGraphCsv(Graph);
			}
			for (UEdGraph* Graph : Blueprint->FunctionGraphs)
			{
				ProcessGraphCsv(Graph);
			}
			for (UEdGraph* Graph : Blueprint->MacroGraphs)
			{
				ProcessGraphCsv(Graph);
			}

			const FString FilePath = OutDir / (SafeName + TEXT("_Flow.csv"));
			const FString Csv = FString::Join(Lines, TEXT("\n"));

			if (!FFileHelper::SaveStringToFile(Csv, *FilePath))
			{
				LogFileWriteFailure(FilePath, TEXT("Blueprint flow CSV"));
			}
			else
			{
				++ExportedCount;
			}
		}
		else // Json
		{
			TSharedRef<FJsonObject> RootObj = MakeShared<FJsonObject>();
			RootObj->SetStringField(TEXT("BlueprintName"), Blueprint->GetName());
			RootObj->SetStringField(TEXT("PathName"), Blueprint->GetPathName());

			TArray<TSharedPtr<FJsonValue>> GraphArray;

			auto ProcessGraphJson = [&GraphArray](UEdGraph* Graph, const FString& GraphType)
			{
				if (!Graph) return;

				TSharedRef<FJsonObject> GraphObj = MakeShared<FJsonObject>();
				GraphObj->SetStringField(TEXT("graph_name"), Graph->GetName());
				GraphObj->SetStringField(TEXT("graph_type"), GraphType);

				TArray<TSharedPtr<FJsonValue>> NodeArray;
				TArray<TSharedPtr<FJsonValue>> EdgeArray;

				for (UEdGraphNode* Node : Graph->Nodes)
				{
					if (!Node) continue;

					TSharedRef<FJsonObject> NodeObj = MakeShared<FJsonObject>();
					const FString NodeTitle = Node->GetNodeTitle(ENodeTitleType::FullTitle).ToString();
					const FString NodeClass = Node->GetClass()->GetName();

					NodeObj->SetStringField(TEXT("title"), NodeTitle);
					NodeObj->SetStringField(TEXT("class"), NodeClass);

					TArray<TSharedPtr<FJsonValue>> PinArray;

					for (UEdGraphPin* Pin : Node->Pins)
					{
						if (!Pin) continue;

						TSharedRef<FJsonObject> PinObj = MakeShared<FJsonObject>();
						const FString PinName = Pin->PinName.ToString();
						const FString PinCategory = Pin->PinType.PinCategory.ToString();
						const FString PinDir = (Pin->Direction == EGPD_Input) ? TEXT("In") : TEXT("Out");

						PinObj->SetStringField(TEXT("name"), PinName);
						PinObj->SetStringField(TEXT("category"), PinCategory);
						PinObj->SetStringField(TEXT("direction"), PinDir);

						TArray<TSharedPtr<FJsonValue>> LinksArray;
						for (UEdGraphPin* LinkedPin : Pin->LinkedTo)
						{
							if (!LinkedPin || !LinkedPin->GetOwningNode()) continue;

							TSharedRef<FJsonObject> LinkObj = MakeShared<FJsonObject>();
							LinkObj->SetStringField(TEXT("NodeTitle"),
								LinkedPin->GetOwningNode()->GetNodeTitle(ENodeTitleType::FullTitle).ToString());
							LinkObj->SetStringField(TEXT("pin_name"), LinkedPin->PinName.ToString());

							// Also add an edge entry (from node title/pin -> linked node title/pin)
							TSharedRef<FJsonObject> EdgeObj = MakeShared<FJsonObject>();
							EdgeObj->SetStringField(TEXT("from_node_title"), NodeTitle);
							EdgeObj->SetStringField(TEXT("from_pin"), PinName);
							EdgeObj->SetStringField(TEXT("to_node_title"),
								LinkedPin->GetOwningNode()->GetNodeTitle(ENodeTitleType::FullTitle).ToString());
							EdgeObj->SetStringField(TEXT("to_pin"), LinkedPin->PinName.ToString());
							EdgeArray.Add(MakeShared<FJsonValueObject>(EdgeObj));

							LinksArray.Add(MakeShared<FJsonValueObject>(LinkObj));
						}

						PinObj->SetArrayField(TEXT("links"), LinksArray);
						PinArray.Add(MakeShared<FJsonValueObject>(PinObj));
					}

					NodeObj->SetArrayField(TEXT("Pins"), PinArray);
					NodeArray.Add(MakeShared<FJsonValueObject>(NodeObj));
				}

				GraphObj->SetArrayField(TEXT("nodes"), NodeArray);
				GraphObj->SetArrayField(TEXT("edges"), EdgeArray);
				GraphArray.Add(MakeShared<FJsonValueObject>(GraphObj));
			};

			for (UEdGraph* Graph : Blueprint->UbergraphPages)
			{
				ProcessGraphJson(Graph, TEXT("Ubergraph"));
			}
			for (UEdGraph* Graph : Blueprint->FunctionGraphs)
			{
				ProcessGraphJson(Graph, TEXT("Function"));
			}
			for (UEdGraph* Graph : Blueprint->MacroGraphs)
			{
				ProcessGraphJson(Graph, TEXT("Macro"));
			}

			RootObj->SetStringField(TEXT("asset_type"), TEXT("Blueprint"));
			RootObj->SetStringField(TEXT("asset_name"), Blueprint->GetName());
			RootObj->SetStringField(TEXT("asset_path"), Blueprint->GetPathName());
			RootObj->SetArrayField(TEXT("graphs"), GraphArray);

			const FString FilePath = OutDir / (SafeName + TEXT("_Flow.json"));

			FString JsonString;
			TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&JsonString);
			FJsonSerializer::Serialize(RootObj, Writer);

			if (!FFileHelper::SaveStringToFile(JsonString, *FilePath))
			{
				LogFileWriteFailure(FilePath, TEXT("Blueprint flow JSON"));
			}
			else
			{
				++ExportedCount;
			}
		}
	}

	UE_LOG(LogBEP, Log, TEXT("[BEP] ExportAllBlueprintFlows: Exported=%d"), ExportedCount);
}

void FBlueprintFlowExporter::ExportAllInputMappingContexts(const FString& OutputDirectory, const FString& RootPath, EBEPExportFormat Format)
{
	IAssetRegistry& AssetRegistry = GetAssetRegistry();

	FARFilter Filter;
	Filter.ClassPaths.Add(UInputMappingContext::StaticClass()->GetClassPathName());
	Filter.PackagePaths.Add(*RootPath);
	Filter.bRecursivePaths = true;

	TArray<FAssetData> IMCAssets;
	AssetRegistry.GetAssets(Filter, IMCAssets);

	const FString OutDir = OutputDirectory.IsEmpty()
		                        ? (FPaths::ProjectSavedDir() / TEXT("BEPExport/IMC"))
		                        : OutputDirectory;
	EnsureDirectory(OutDir);

	UE_LOG(LogBEP, Log, TEXT("[BEP] ExportAllInputMappingContexts: RootPath=%s AssetsFound=%d OutputDir=%s Format=%d"),
		*RootPath, IMCAssets.Num(), *OutDir, static_cast<int32>(Format));

	int32 ExportedCount = 0;

	for (const FAssetData& Asset : IMCAssets)
	{
		UInputMappingContext* IMC = Cast<UInputMappingContext>(Asset.GetAsset());
		if (!IMC)
		{
			continue;
		}

		const FString SafeName = Asset.AssetName.ToString().Replace(TEXT("/"), TEXT("_"));

		const TArray<FEnhancedActionKeyMapping>& Mappings = IMC->GetMappings();

		if (Format == EBEPExportFormat::Text)
		{
			FString Dump;
			Dump += FString::Printf(TEXT("InputMappingContext: %s (%s)\n"),
				*IMC->GetName(),
				*IMC->GetPathName());

 			for (const FEnhancedActionKeyMapping& Mapping : Mappings)
 			{
 				const FString ActionName = GetNameSafe(Mapping.Action);
 				const FString KeyName = Mapping.Key.GetDisplayName().ToString();

 				Dump += FString::Printf(TEXT("  Action=%s Key=%s\n"),
 					*ActionName,
 					*KeyName);
 			}

			const FString FilePath = OutDir / (SafeName + TEXT("_IMC.txt"));
			if (!FFileHelper::SaveStringToFile(Dump, *FilePath))
			{
				LogFileWriteFailure(FilePath, TEXT("IMC text"));
			}
			else
			{
				++ExportedCount;
			}
		}
		else if (Format == EBEPExportFormat::Csv)
		{
			TArray<FString> Lines;
			Lines.Add(TEXT("IMC,Action,Key"));

			for (const FEnhancedActionKeyMapping& Mapping : Mappings)
			{
				const FString ActionName = GetNameSafe(Mapping.Action);
				const FString KeyName = Mapping.Key.GetDisplayName().ToString();

				Lines.Add(FString::Printf(TEXT("%s,%s,%s"),
					*ToCsvSafe(IMC->GetName()),
					*ToCsvSafe(ActionName),
					*ToCsvSafe(KeyName)));
			}

 			const FString FilePath = OutDir / (SafeName + TEXT("_IMC.csv"));
			const FString Csv = FString::Join(Lines, TEXT("\n"));

			if (!FFileHelper::SaveStringToFile(Csv, *FilePath))
			{
				LogFileWriteFailure(FilePath, TEXT("IMC CSV"));
			}
			else
			{
				++ExportedCount;
			}
		}
		else // Json
		{
			TSharedRef<FJsonObject> RootObj = MakeShared<FJsonObject>();
			RootObj->SetStringField(TEXT("asset_type"), TEXT("InputMappingContext"));
			RootObj->SetStringField(TEXT("asset_name"), IMC->GetName());
			RootObj->SetStringField(TEXT("asset_path"), IMC->GetPathName());

			TArray<TSharedPtr<FJsonValue>> MappingArray;
			for (const FEnhancedActionKeyMapping& Mapping : Mappings)
			{
				TSharedRef<FJsonObject> MappingObj = MakeShared<FJsonObject>();
				MappingObj->SetStringField(TEXT("Action"), GetNameSafe(Mapping.Action));
				MappingObj->SetStringField(TEXT("Key"), Mapping.Key.GetDisplayName().ToString());
				MappingArray.Add(MakeShared<FJsonValueObject>(MappingObj));
			}
			RootObj->SetArrayField(TEXT("Mappings"), MappingArray);

			FString JsonString;
			TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&JsonString);
 			FJsonSerializer::Serialize(RootObj, Writer);
 
 			const FString FilePath = OutDir / (SafeName + TEXT("_IMC.json"));
 			if (!FFileHelper::SaveStringToFile(JsonString, *FilePath))
 			{
				LogFileWriteFailure(FilePath, TEXT("IMC JSON"));
 			}
			else
			{
				++ExportedCount;
			}
		}
	}

	UE_LOG(LogBEP, Log, TEXT("[BEP] ExportAllInputMappingContexts: Exported=%d"), ExportedCount);
}

void FBlueprintFlowExporter::ExportAllDataAssetsAndTables(const FString& OutputDirectory, const FString& RootPath)
{
	IAssetRegistry& AssetRegistry = GetAssetRegistry();

	FARFilter Filter;
	Filter.PackagePaths.Add(*RootPath);
	Filter.bRecursivePaths = true;
	// We will filter by class at runtime; this pass tries to serialize as many
	// asset types as possible to JSON (DataAssets, DataTables, curves, etc.).

	TArray<FAssetData> Assets;
	AssetRegistry.GetAssets(Filter, Assets);

	const FString OutDir = OutputDirectory.IsEmpty()
		                        ? (FPaths::ProjectSavedDir() / TEXT("BEPExport/Data"))
		                        : OutputDirectory;
	EnsureDirectory(OutDir);

	UE_LOG(LogBEP, Log, TEXT("[BEP] ExportAllDataAssetsAndTables: RootPath=%s AssetsFound=%d OutputDir=%s"),
		*RootPath, Assets.Num(), *OutDir);

	int32 ExportedCount = 0;

 	for (const FAssetData& Asset : Assets)
 	{
 		UObject* Obj = Asset.GetAsset();
 		if (!Obj)
 		{
 			continue;
 		}

		// Skip types that have dedicated, richer exporters elsewhere or are
		// known to produce extremely noisy / low‑value JSON dumps.
		// Blueprints and IMCs are handled by their own exporters.
		if (Obj->IsA<UBlueprint>() ||
			Obj->IsA<UInputMappingContext>())
		{
			continue;
		}

		// Levels / worlds.
		if (Obj->IsA<UWorld>() || Obj->IsA<ULevel>())
		{
			continue;
		}

		// Audio.
		if (Obj->IsA<USoundBase>())
		{
			continue;
		}

		// Mesh assets.
		if (Obj->IsA<UStaticMesh>() || Obj->IsA<USkeletalMesh>())
		{
			continue;
		}

		// Raw animation assets – keep only animation blueprints (handled above
		// as UBlueprint); skip sequences/montages here.
 		if (Obj->IsA<UAnimSequence>() || Obj->IsA<UAnimMontage>())
 		{
 			continue;
 		}

		// Assets that contain Universal Object Locator fragments can hit a hard
		// assert in engine ToString() when serialized to text/JSON. To keep BEP
		// robust, skip these and log at verbose level.
		if (StructContainsUnsupportedLocator(Obj->GetClass()))
		{
			UE_LOG(LogBEP, Verbose,
				TEXT("[BEP] Skipping %s (%s) – contains UniversalObjectLocator / ActorLocatorFragment properties"),
				*Obj->GetName(),
				*Obj->GetClass()->GetName());
			continue;
		}

  		FString Json;
  		if (!FJsonObjectConverter::UStructToJsonObjectString(
  			    Obj->GetClass(), Obj, Json, 0, 0))
  		{
			UE_LOG(LogBEP, Verbose, TEXT("[BEP] UStructToJsonObjectString failed for %s (%s)"),
				*Obj->GetName(), *Obj->GetClass()->GetName());
  			continue;
  		}

 		const FString SafeName = Asset.AssetName.ToString().Replace(TEXT("/"), TEXT("_"));
 		const FString FilePath = OutDir / (SafeName + TEXT(".json"));
 
 		if (!FFileHelper::SaveStringToFile(Json, *FilePath))
 		{
			LogFileWriteFailure(FilePath, TEXT("DataAsset/DataTable JSON"));
 		}
		else
		{
			++ExportedCount;
		}
	}

	UE_LOG(LogBEP, Log, TEXT("[BEP] ExportAllDataAssetsAndTables: Exported=%d"), ExportedCount);
}

void FBlueprintFlowExporter::ExportAllStructSchemas(const FString& OutputFilePath)
{
	FString OutPath = OutputFilePath;
	if (OutPath.IsEmpty())
	{
		OutPath = FPaths::ProjectSavedDir() / TEXT("BEPExport/StructSchemas.txt");
	}

	FString Dump;

	ForEachObjectOfClass(UScriptStruct::StaticClass(), [&Dump](UObject* Obj)
	{
		UScriptStruct* Struct = Cast<UScriptStruct>(Obj);
		if (!Struct)
		{
			return true;
		}

		// Skip non-project structs if you want only game ones.
		const FString PackageName = Struct->GetOutermost()->GetName();
		if (!PackageName.StartsWith(TEXT("/Game")))
		{
			return true;
		}

		Dump += FString::Printf(TEXT("Struct: %s (%s)\n"),
			*Struct->GetName(),
			*Struct->GetPathName());

		for (TFieldIterator<FProperty> It(Struct); It; ++It)
		{
			FProperty* Prop = *It;
			if (!Prop)
			{
				continue;
			}

			Dump += FString::Printf(TEXT("  %s %s\n"),
				*Prop->GetClass()->GetName(),
				*Prop->GetName());
		}

		Dump += TEXT("\n");
		return true;
 	});
 
 	if (!FFileHelper::SaveStringToFile(Dump, *OutPath))
 	{
		LogFileWriteFailure(OutPath, TEXT("Struct schema text"));
 	}
	else
	{
		UE_LOG(LogBEP, Log, TEXT("[BEP] ExportAllStructSchemas: Wrote schema file to %s"), *OutPath);
	}
}

void FBlueprintFlowExporter::ExportAll(const FString& OutputRoot, const FString& RootPath, EBEPExportFormat Format)
{
	// Hard‑coded export base so we never end up under the engine install or
	// an unexpected working directory. This keeps all BEP exports in a single,
	// predictable location the user can clean or diff easily.
	const FString ExportBaseDir = TEXT("C:/BEP_EXPORTS");
	EnsureDirectory(ExportBaseDir);

	// Optional sub‑folder under the base, coming from the console command.
	FString CleanOutputRoot = OutputRoot;
	// Strip any quotes that might have come from the console argument.
	CleanOutputRoot.ReplaceInline(TEXT("\""), TEXT(""));
	CleanOutputRoot.TrimStartAndEndInline();

	const FString RootDir = CleanOutputRoot.IsEmpty()
		                         ? ExportBaseDir
		                         : FPaths::Combine(ExportBaseDir, CleanOutputRoot);

	EnsureDirectory(RootDir);

	const FString AssetRoot = RootPath.IsEmpty() ? TEXT("/Game") : RootPath;

	UE_LOG(LogBEP, Log, TEXT("[BEP] ExportAll: RootDir=%s AssetRoot=%s Format=%d"),
		*RootDir, *AssetRoot, static_cast<int32>(Format));

	ExportAllBlueprintFlows(RootDir / TEXT("BlueprintFlows"), AssetRoot, Format);
	ExportAllInputMappingContexts(RootDir / TEXT("IMC"), AssetRoot, Format);
	ExportAllDataAssetsAndTables(RootDir / TEXT("Data"), AssetRoot);
	ExportAllStructSchemas(RootDir / TEXT("StructSchemas.txt"));
}

EBEPExportFormat FBlueprintFlowExporter::ParseFormat(const FString& InFormatString)
{
	const FString Lower = InFormatString.ToLower();
	if (Lower == TEXT("json"))
	{
		return EBEPExportFormat::Json;
	}
	if (Lower == TEXT("csv"))
	{
		return EBEPExportFormat::Csv;
	}
	return EBEPExportFormat::Text;
}
