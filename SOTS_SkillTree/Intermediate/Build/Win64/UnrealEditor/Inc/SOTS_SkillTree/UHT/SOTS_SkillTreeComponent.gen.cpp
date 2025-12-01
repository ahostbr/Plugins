// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTS_SkillTreeComponent.h"
#include "SOTS_SkillTreeTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_SkillTreeComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
SOTS_SKILLTREE_API UClass* Z_Construct_UClass_USOTS_SkillTreeComponent();
SOTS_SKILLTREE_API UClass* Z_Construct_UClass_USOTS_SkillTreeComponent_NoRegister();
SOTS_SKILLTREE_API UClass* Z_Construct_UClass_USOTS_SkillTreeDefinition_NoRegister();
SOTS_SKILLTREE_API UEnum* Z_Construct_UEnum_SOTS_SkillTree_ESOTS_SkillNodeStatus();
SOTS_SKILLTREE_API UFunction* Z_Construct_UDelegateFunction_SOTS_SkillTree_SOTS_SkillTreeNodeChangedSignature__DelegateSignature();
SOTS_SKILLTREE_API UFunction* Z_Construct_UDelegateFunction_SOTS_SkillTree_SOTS_SkillTreePointsChangedSignature__DelegateSignature();
SOTS_SKILLTREE_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_SkillNodeState();
UPackage* Z_Construct_UPackage__Script_SOTS_SkillTree();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FSOTS_SkillTreeNodeChangedSignature ***********************************
struct Z_Construct_UDelegateFunction_SOTS_SkillTree_SOTS_SkillTreeNodeChangedSignature__DelegateSignature_Statics
{
	struct _Script_SOTS_SkillTree_eventSOTS_SkillTreeNodeChangedSignature_Parms
	{
		FName NodeId;
		ESOTS_SkillNodeStatus NewStatus;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FSOTS_SkillTreeNodeChangedSignature constinit property declarations ***
	static const UECodeGen_Private::FNamePropertyParams NewProp_NodeId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewStatus_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewStatus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FSOTS_SkillTreeNodeChangedSignature constinit property declarations *****
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FSOTS_SkillTreeNodeChangedSignature Property Definitions **************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_SOTS_SkillTree_SOTS_SkillTreeNodeChangedSignature__DelegateSignature_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SOTS_SkillTree_eventSOTS_SkillTreeNodeChangedSignature_Parms, NodeId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SOTS_SkillTree_SOTS_SkillTreeNodeChangedSignature__DelegateSignature_Statics::NewProp_NewStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SOTS_SkillTree_SOTS_SkillTreeNodeChangedSignature__DelegateSignature_Statics::NewProp_NewStatus = { "NewStatus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SOTS_SkillTree_eventSOTS_SkillTreeNodeChangedSignature_Parms, NewStatus), Z_Construct_UEnum_SOTS_SkillTree_ESOTS_SkillNodeStatus, METADATA_PARAMS(0, nullptr) }; // 2160274606
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SOTS_SkillTree_SOTS_SkillTreeNodeChangedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SOTS_SkillTree_SOTS_SkillTreeNodeChangedSignature__DelegateSignature_Statics::NewProp_NodeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SOTS_SkillTree_SOTS_SkillTreeNodeChangedSignature__DelegateSignature_Statics::NewProp_NewStatus_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SOTS_SkillTree_SOTS_SkillTreeNodeChangedSignature__DelegateSignature_Statics::NewProp_NewStatus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_SkillTree_SOTS_SkillTreeNodeChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FSOTS_SkillTreeNodeChangedSignature Property Definitions ****************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SOTS_SkillTree_SOTS_SkillTreeNodeChangedSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SOTS_SkillTree, nullptr, "SOTS_SkillTreeNodeChangedSignature__DelegateSignature", 	Z_Construct_UDelegateFunction_SOTS_SkillTree_SOTS_SkillTreeNodeChangedSignature__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_SkillTree_SOTS_SkillTreeNodeChangedSignature__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SOTS_SkillTree_SOTS_SkillTreeNodeChangedSignature__DelegateSignature_Statics::_Script_SOTS_SkillTree_eventSOTS_SkillTreeNodeChangedSignature_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_SkillTree_SOTS_SkillTreeNodeChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SOTS_SkillTree_SOTS_SkillTreeNodeChangedSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SOTS_SkillTree_SOTS_SkillTreeNodeChangedSignature__DelegateSignature_Statics::_Script_SOTS_SkillTree_eventSOTS_SkillTreeNodeChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SOTS_SkillTree_SOTS_SkillTreeNodeChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SOTS_SkillTree_SOTS_SkillTreeNodeChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSOTS_SkillTreeNodeChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& SOTS_SkillTreeNodeChangedSignature, FName NodeId, ESOTS_SkillNodeStatus NewStatus)
{
	struct _Script_SOTS_SkillTree_eventSOTS_SkillTreeNodeChangedSignature_Parms
	{
		FName NodeId;
		ESOTS_SkillNodeStatus NewStatus;
	};
	_Script_SOTS_SkillTree_eventSOTS_SkillTreeNodeChangedSignature_Parms Parms;
	Parms.NodeId=NodeId;
	Parms.NewStatus=NewStatus;
	SOTS_SkillTreeNodeChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FSOTS_SkillTreeNodeChangedSignature *************************************

// ********** Begin Delegate FSOTS_SkillTreePointsChangedSignature *********************************
struct Z_Construct_UDelegateFunction_SOTS_SkillTree_SOTS_SkillTreePointsChangedSignature__DelegateSignature_Statics
{
	struct _Script_SOTS_SkillTree_eventSOTS_SkillTreePointsChangedSignature_Parms
	{
		int32 NewPoints;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FSOTS_SkillTreePointsChangedSignature constinit property declarations *
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewPoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FSOTS_SkillTreePointsChangedSignature constinit property declarations ***
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FSOTS_SkillTreePointsChangedSignature Property Definitions ************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SOTS_SkillTree_SOTS_SkillTreePointsChangedSignature__DelegateSignature_Statics::NewProp_NewPoints = { "NewPoints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SOTS_SkillTree_eventSOTS_SkillTreePointsChangedSignature_Parms, NewPoints), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SOTS_SkillTree_SOTS_SkillTreePointsChangedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SOTS_SkillTree_SOTS_SkillTreePointsChangedSignature__DelegateSignature_Statics::NewProp_NewPoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_SkillTree_SOTS_SkillTreePointsChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FSOTS_SkillTreePointsChangedSignature Property Definitions **************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SOTS_SkillTree_SOTS_SkillTreePointsChangedSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SOTS_SkillTree, nullptr, "SOTS_SkillTreePointsChangedSignature__DelegateSignature", 	Z_Construct_UDelegateFunction_SOTS_SkillTree_SOTS_SkillTreePointsChangedSignature__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_SkillTree_SOTS_SkillTreePointsChangedSignature__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SOTS_SkillTree_SOTS_SkillTreePointsChangedSignature__DelegateSignature_Statics::_Script_SOTS_SkillTree_eventSOTS_SkillTreePointsChangedSignature_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_SkillTree_SOTS_SkillTreePointsChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SOTS_SkillTree_SOTS_SkillTreePointsChangedSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SOTS_SkillTree_SOTS_SkillTreePointsChangedSignature__DelegateSignature_Statics::_Script_SOTS_SkillTree_eventSOTS_SkillTreePointsChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SOTS_SkillTree_SOTS_SkillTreePointsChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SOTS_SkillTree_SOTS_SkillTreePointsChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSOTS_SkillTreePointsChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& SOTS_SkillTreePointsChangedSignature, int32 NewPoints)
{
	struct _Script_SOTS_SkillTree_eventSOTS_SkillTreePointsChangedSignature_Parms
	{
		int32 NewPoints;
	};
	_Script_SOTS_SkillTree_eventSOTS_SkillTreePointsChangedSignature_Parms Parms;
	Parms.NewPoints=NewPoints;
	SOTS_SkillTreePointsChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FSOTS_SkillTreePointsChangedSignature ***********************************

// ********** Begin Class USOTS_SkillTreeComponent Function AddSkillPoints *************************
struct Z_Construct_UFunction_USOTS_SkillTreeComponent_AddSkillPoints_Statics
{
	struct SOTS_SkillTreeComponent_eventAddSkillPoints_Parms
	{
		int32 Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SkillTree" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Adds (or removes, if negative) skill points and broadcasts the change.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds (or removes, if negative) skill points and broadcasts the change." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function AddSkillPoints constinit property declarations ************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddSkillPoints constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddSkillPoints Property Definitions ***********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USOTS_SkillTreeComponent_AddSkillPoints_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_SkillTreeComponent_eventAddSkillPoints_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_SkillTreeComponent_AddSkillPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeComponent_AddSkillPoints_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeComponent_AddSkillPoints_Statics::PropPointers) < 2048);
// ********** End Function AddSkillPoints Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_SkillTreeComponent_AddSkillPoints_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_SkillTreeComponent, nullptr, "AddSkillPoints", 	Z_Construct_UFunction_USOTS_SkillTreeComponent_AddSkillPoints_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeComponent_AddSkillPoints_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_SkillTreeComponent_AddSkillPoints_Statics::SOTS_SkillTreeComponent_eventAddSkillPoints_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeComponent_AddSkillPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_SkillTreeComponent_AddSkillPoints_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_SkillTreeComponent_AddSkillPoints_Statics::SOTS_SkillTreeComponent_eventAddSkillPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_SkillTreeComponent_AddSkillPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_SkillTreeComponent_AddSkillPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_SkillTreeComponent::execAddSkillPoints)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddSkillPoints(Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Class USOTS_SkillTreeComponent Function AddSkillPoints ***************************

// ********** Begin Class USOTS_SkillTreeComponent Function CanUnlockNode **************************
struct Z_Construct_UFunction_USOTS_SkillTreeComponent_CanUnlockNode_Statics
{
	struct SOTS_SkillTreeComponent_eventCanUnlockNode_Parms
	{
		FName NodeId;
		FText OutFailureReason;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SkillTree" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Checks whether a node can be unlocked, returning a localized failure reason.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks whether a node can be unlocked, returning a localized failure reason." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function CanUnlockNode constinit property declarations *************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_NodeId;
	static const UECodeGen_Private::FTextPropertyParams NewProp_OutFailureReason;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CanUnlockNode constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CanUnlockNode Property Definitions ************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USOTS_SkillTreeComponent_CanUnlockNode_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_SkillTreeComponent_eventCanUnlockNode_Parms, NodeId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USOTS_SkillTreeComponent_CanUnlockNode_Statics::NewProp_OutFailureReason = { "OutFailureReason", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_SkillTreeComponent_eventCanUnlockNode_Parms, OutFailureReason), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USOTS_SkillTreeComponent_CanUnlockNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_SkillTreeComponent_eventCanUnlockNode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_SkillTreeComponent_CanUnlockNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_SkillTreeComponent_eventCanUnlockNode_Parms), &Z_Construct_UFunction_USOTS_SkillTreeComponent_CanUnlockNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_SkillTreeComponent_CanUnlockNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeComponent_CanUnlockNode_Statics::NewProp_NodeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeComponent_CanUnlockNode_Statics::NewProp_OutFailureReason,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeComponent_CanUnlockNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeComponent_CanUnlockNode_Statics::PropPointers) < 2048);
// ********** End Function CanUnlockNode Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_SkillTreeComponent_CanUnlockNode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_SkillTreeComponent, nullptr, "CanUnlockNode", 	Z_Construct_UFunction_USOTS_SkillTreeComponent_CanUnlockNode_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeComponent_CanUnlockNode_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_SkillTreeComponent_CanUnlockNode_Statics::SOTS_SkillTreeComponent_eventCanUnlockNode_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeComponent_CanUnlockNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_SkillTreeComponent_CanUnlockNode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_SkillTreeComponent_CanUnlockNode_Statics::SOTS_SkillTreeComponent_eventCanUnlockNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_SkillTreeComponent_CanUnlockNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_SkillTreeComponent_CanUnlockNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_SkillTreeComponent::execCanUnlockNode)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_NodeId);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutFailureReason);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanUnlockNode(Z_Param_NodeId,Z_Param_Out_OutFailureReason);
	P_NATIVE_END;
}
// ********** End Class USOTS_SkillTreeComponent Function CanUnlockNode ****************************

// ********** Begin Class USOTS_SkillTreeComponent Function GetNodeStatus **************************
struct Z_Construct_UFunction_USOTS_SkillTreeComponent_GetNodeStatus_Statics
{
	struct SOTS_SkillTreeComponent_eventGetNodeStatus_Parms
	{
		FName NodeId;
		ESOTS_SkillNodeStatus ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SkillTree" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Returns the current status of a node (defaults to Locked if unknown).\n     */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current status of a node (defaults to Locked if unknown)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetNodeStatus constinit property declarations *************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_NodeId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNodeStatus constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNodeStatus Property Definitions ************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USOTS_SkillTreeComponent_GetNodeStatus_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_SkillTreeComponent_eventGetNodeStatus_Parms, NodeId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USOTS_SkillTreeComponent_GetNodeStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USOTS_SkillTreeComponent_GetNodeStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_SkillTreeComponent_eventGetNodeStatus_Parms, ReturnValue), Z_Construct_UEnum_SOTS_SkillTree_ESOTS_SkillNodeStatus, METADATA_PARAMS(0, nullptr) }; // 2160274606
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_SkillTreeComponent_GetNodeStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeComponent_GetNodeStatus_Statics::NewProp_NodeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeComponent_GetNodeStatus_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeComponent_GetNodeStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeComponent_GetNodeStatus_Statics::PropPointers) < 2048);
// ********** End Function GetNodeStatus Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_SkillTreeComponent_GetNodeStatus_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_SkillTreeComponent, nullptr, "GetNodeStatus", 	Z_Construct_UFunction_USOTS_SkillTreeComponent_GetNodeStatus_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeComponent_GetNodeStatus_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_SkillTreeComponent_GetNodeStatus_Statics::SOTS_SkillTreeComponent_eventGetNodeStatus_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeComponent_GetNodeStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_SkillTreeComponent_GetNodeStatus_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_SkillTreeComponent_GetNodeStatus_Statics::SOTS_SkillTreeComponent_eventGetNodeStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_SkillTreeComponent_GetNodeStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_SkillTreeComponent_GetNodeStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_SkillTreeComponent::execGetNodeStatus)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_NodeId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESOTS_SkillNodeStatus*)Z_Param__Result=P_THIS->GetNodeStatus(Z_Param_NodeId);
	P_NATIVE_END;
}
// ********** End Class USOTS_SkillTreeComponent Function GetNodeStatus ****************************

// ********** Begin Class USOTS_SkillTreeComponent Function InitializeSkillTree ********************
struct Z_Construct_UFunction_USOTS_SkillTreeComponent_InitializeSkillTree_Statics
{
	struct SOTS_SkillTreeComponent_eventInitializeSkillTree_Parms
	{
		USOTS_SkillTreeDefinition* InDefinition;
		int32 StartingPoints;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SkillTree" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Initializes the skill tree from a definition and starting point pool.\n     * Safe to call at runtime to reset or swap trees.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initializes the skill tree from a definition and starting point pool.\nSafe to call at runtime to reset or swap trees." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function InitializeSkillTree constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InDefinition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartingPoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitializeSkillTree constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitializeSkillTree Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_SkillTreeComponent_InitializeSkillTree_Statics::NewProp_InDefinition = { "InDefinition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_SkillTreeComponent_eventInitializeSkillTree_Parms, InDefinition), Z_Construct_UClass_USOTS_SkillTreeDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USOTS_SkillTreeComponent_InitializeSkillTree_Statics::NewProp_StartingPoints = { "StartingPoints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_SkillTreeComponent_eventInitializeSkillTree_Parms, StartingPoints), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_SkillTreeComponent_InitializeSkillTree_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeComponent_InitializeSkillTree_Statics::NewProp_InDefinition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeComponent_InitializeSkillTree_Statics::NewProp_StartingPoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeComponent_InitializeSkillTree_Statics::PropPointers) < 2048);
// ********** End Function InitializeSkillTree Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_SkillTreeComponent_InitializeSkillTree_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_SkillTreeComponent, nullptr, "InitializeSkillTree", 	Z_Construct_UFunction_USOTS_SkillTreeComponent_InitializeSkillTree_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeComponent_InitializeSkillTree_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_SkillTreeComponent_InitializeSkillTree_Statics::SOTS_SkillTreeComponent_eventInitializeSkillTree_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeComponent_InitializeSkillTree_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_SkillTreeComponent_InitializeSkillTree_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_SkillTreeComponent_InitializeSkillTree_Statics::SOTS_SkillTreeComponent_eventInitializeSkillTree_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_SkillTreeComponent_InitializeSkillTree()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_SkillTreeComponent_InitializeSkillTree_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_SkillTreeComponent::execInitializeSkillTree)
{
	P_GET_OBJECT(USOTS_SkillTreeDefinition,Z_Param_InDefinition);
	P_GET_PROPERTY(FIntProperty,Z_Param_StartingPoints);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeSkillTree(Z_Param_InDefinition,Z_Param_StartingPoints);
	P_NATIVE_END;
}
// ********** End Class USOTS_SkillTreeComponent Function InitializeSkillTree **********************

// ********** Begin Class USOTS_SkillTreeComponent Function IsNodeUnlocked *************************
struct Z_Construct_UFunction_USOTS_SkillTreeComponent_IsNodeUnlocked_Statics
{
	struct SOTS_SkillTreeComponent_eventIsNodeUnlocked_Parms
	{
		FName NodeId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SkillTree" },
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsNodeUnlocked constinit property declarations ************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_NodeId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsNodeUnlocked constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsNodeUnlocked Property Definitions ***********************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USOTS_SkillTreeComponent_IsNodeUnlocked_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_SkillTreeComponent_eventIsNodeUnlocked_Parms, NodeId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USOTS_SkillTreeComponent_IsNodeUnlocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_SkillTreeComponent_eventIsNodeUnlocked_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_SkillTreeComponent_IsNodeUnlocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_SkillTreeComponent_eventIsNodeUnlocked_Parms), &Z_Construct_UFunction_USOTS_SkillTreeComponent_IsNodeUnlocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_SkillTreeComponent_IsNodeUnlocked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeComponent_IsNodeUnlocked_Statics::NewProp_NodeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeComponent_IsNodeUnlocked_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeComponent_IsNodeUnlocked_Statics::PropPointers) < 2048);
// ********** End Function IsNodeUnlocked Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_SkillTreeComponent_IsNodeUnlocked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_SkillTreeComponent, nullptr, "IsNodeUnlocked", 	Z_Construct_UFunction_USOTS_SkillTreeComponent_IsNodeUnlocked_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeComponent_IsNodeUnlocked_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_SkillTreeComponent_IsNodeUnlocked_Statics::SOTS_SkillTreeComponent_eventIsNodeUnlocked_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeComponent_IsNodeUnlocked_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_SkillTreeComponent_IsNodeUnlocked_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_SkillTreeComponent_IsNodeUnlocked_Statics::SOTS_SkillTreeComponent_eventIsNodeUnlocked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_SkillTreeComponent_IsNodeUnlocked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_SkillTreeComponent_IsNodeUnlocked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_SkillTreeComponent::execIsNodeUnlocked)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_NodeId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsNodeUnlocked(Z_Param_NodeId);
	P_NATIVE_END;
}
// ********** End Class USOTS_SkillTreeComponent Function IsNodeUnlocked ***************************

// ********** Begin Class USOTS_SkillTreeComponent Function UnlockNode *****************************
struct Z_Construct_UFunction_USOTS_SkillTreeComponent_UnlockNode_Statics
{
	struct SOTS_SkillTreeComponent_eventUnlockNode_Parms
	{
		FName NodeId;
		FText OutFailureReason;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SkillTree" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Attempts to unlock a node. On success, points are spent and events are broadcast.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attempts to unlock a node. On success, points are spent and events are broadcast." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function UnlockNode constinit property declarations ****************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_NodeId;
	static const UECodeGen_Private::FTextPropertyParams NewProp_OutFailureReason;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UnlockNode constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UnlockNode Property Definitions ***************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USOTS_SkillTreeComponent_UnlockNode_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_SkillTreeComponent_eventUnlockNode_Parms, NodeId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USOTS_SkillTreeComponent_UnlockNode_Statics::NewProp_OutFailureReason = { "OutFailureReason", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_SkillTreeComponent_eventUnlockNode_Parms, OutFailureReason), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USOTS_SkillTreeComponent_UnlockNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_SkillTreeComponent_eventUnlockNode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_SkillTreeComponent_UnlockNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_SkillTreeComponent_eventUnlockNode_Parms), &Z_Construct_UFunction_USOTS_SkillTreeComponent_UnlockNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_SkillTreeComponent_UnlockNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeComponent_UnlockNode_Statics::NewProp_NodeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeComponent_UnlockNode_Statics::NewProp_OutFailureReason,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeComponent_UnlockNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeComponent_UnlockNode_Statics::PropPointers) < 2048);
// ********** End Function UnlockNode Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_SkillTreeComponent_UnlockNode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_SkillTreeComponent, nullptr, "UnlockNode", 	Z_Construct_UFunction_USOTS_SkillTreeComponent_UnlockNode_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeComponent_UnlockNode_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_SkillTreeComponent_UnlockNode_Statics::SOTS_SkillTreeComponent_eventUnlockNode_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeComponent_UnlockNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_SkillTreeComponent_UnlockNode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_SkillTreeComponent_UnlockNode_Statics::SOTS_SkillTreeComponent_eventUnlockNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_SkillTreeComponent_UnlockNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_SkillTreeComponent_UnlockNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_SkillTreeComponent::execUnlockNode)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_NodeId);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutFailureReason);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->UnlockNode(Z_Param_NodeId,Z_Param_Out_OutFailureReason);
	P_NATIVE_END;
}
// ********** End Class USOTS_SkillTreeComponent Function UnlockNode *******************************

// ********** Begin Class USOTS_SkillTreeComponent *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_SkillTreeComponent;
UClass* USOTS_SkillTreeComponent::GetPrivateStaticClass()
{
	using TClass = USOTS_SkillTreeComponent;
	if (!Z_Registration_Info_UClass_USOTS_SkillTreeComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_SkillTreeComponent"),
			Z_Registration_Info_UClass_USOTS_SkillTreeComponent.InnerSingleton,
			StaticRegisterNativesUSOTS_SkillTreeComponent,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_USOTS_SkillTreeComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_SkillTreeComponent_NoRegister()
{
	return USOTS_SkillTreeComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_SkillTreeComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "SOTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Per-player skill tree component.\n *\n * Holds runtime state (unlocked/locked nodes, available points) and exposes\n * a minimal, data-driven API that SOTS can extend and hook into.\n */" },
#endif
		{ "IncludePath", "SOTS_SkillTreeComponent.h" },
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Per-player skill tree component.\n\nHolds runtime state (unlocked/locked nodes, available points) and exposes\na minimal, data-driven API that SOTS can extend and hook into." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillTreeDefinition_MetaData[] = {
		{ "Category", "SkillTree" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The tree definition that this component instance uses.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The tree definition that this component instance uses." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvailablePoints_MetaData[] = {
		{ "Category", "SkillTree" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current available points for this tree.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current available points for this tree." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeStates_MetaData[] = {
		{ "Category", "SkillTree" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Runtime state for each node (mirrors the definition's Nodes array).\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Runtime state for each node (mirrors the definition's Nodes array)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnNodeStatusChanged_MetaData[] = {
		{ "Category", "SkillTree" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Broadcast whenever a node status changes (e.g., unlocked).\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Broadcast whenever a node status changes (e.g., unlocked)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSkillPointsChanged_MetaData[] = {
		{ "Category", "SkillTree" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Broadcast whenever the available point total changes.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Broadcast whenever the available point total changes." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_SkillTreeComponent constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkillTreeDefinition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AvailablePoints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeStates_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NodeStates;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNodeStatusChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSkillPointsChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USOTS_SkillTreeComponent constinit property declarations *******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddSkillPoints"), .Pointer = &USOTS_SkillTreeComponent::execAddSkillPoints },
		{ .NameUTF8 = UTF8TEXT("CanUnlockNode"), .Pointer = &USOTS_SkillTreeComponent::execCanUnlockNode },
		{ .NameUTF8 = UTF8TEXT("GetNodeStatus"), .Pointer = &USOTS_SkillTreeComponent::execGetNodeStatus },
		{ .NameUTF8 = UTF8TEXT("InitializeSkillTree"), .Pointer = &USOTS_SkillTreeComponent::execInitializeSkillTree },
		{ .NameUTF8 = UTF8TEXT("IsNodeUnlocked"), .Pointer = &USOTS_SkillTreeComponent::execIsNodeUnlocked },
		{ .NameUTF8 = UTF8TEXT("UnlockNode"), .Pointer = &USOTS_SkillTreeComponent::execUnlockNode },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USOTS_SkillTreeComponent_AddSkillPoints, "AddSkillPoints" }, // 4031887967
		{ &Z_Construct_UFunction_USOTS_SkillTreeComponent_CanUnlockNode, "CanUnlockNode" }, // 2897043889
		{ &Z_Construct_UFunction_USOTS_SkillTreeComponent_GetNodeStatus, "GetNodeStatus" }, // 1880398089
		{ &Z_Construct_UFunction_USOTS_SkillTreeComponent_InitializeSkillTree, "InitializeSkillTree" }, // 1171340538
		{ &Z_Construct_UFunction_USOTS_SkillTreeComponent_IsNodeUnlocked, "IsNodeUnlocked" }, // 881412693
		{ &Z_Construct_UFunction_USOTS_SkillTreeComponent_UnlockNode, "UnlockNode" }, // 1706341479
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_SkillTreeComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_SkillTreeComponent_Statics

// ********** Begin Class USOTS_SkillTreeComponent Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USOTS_SkillTreeComponent_Statics::NewProp_SkillTreeDefinition = { "SkillTreeDefinition", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_SkillTreeComponent, SkillTreeDefinition), Z_Construct_UClass_USOTS_SkillTreeDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillTreeDefinition_MetaData), NewProp_SkillTreeDefinition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USOTS_SkillTreeComponent_Statics::NewProp_AvailablePoints = { "AvailablePoints", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_SkillTreeComponent, AvailablePoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvailablePoints_MetaData), NewProp_AvailablePoints_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_SkillTreeComponent_Statics::NewProp_NodeStates_Inner = { "NodeStates", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSOTS_SkillNodeState, METADATA_PARAMS(0, nullptr) }; // 1019549346
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USOTS_SkillTreeComponent_Statics::NewProp_NodeStates = { "NodeStates", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_SkillTreeComponent, NodeStates), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeStates_MetaData), NewProp_NodeStates_MetaData) }; // 1019549346
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USOTS_SkillTreeComponent_Statics::NewProp_OnNodeStatusChanged = { "OnNodeStatusChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_SkillTreeComponent, OnNodeStatusChanged), Z_Construct_UDelegateFunction_SOTS_SkillTree_SOTS_SkillTreeNodeChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnNodeStatusChanged_MetaData), NewProp_OnNodeStatusChanged_MetaData) }; // 3109004644
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USOTS_SkillTreeComponent_Statics::NewProp_OnSkillPointsChanged = { "OnSkillPointsChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_SkillTreeComponent, OnSkillPointsChanged), Z_Construct_UDelegateFunction_SOTS_SkillTree_SOTS_SkillTreePointsChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSkillPointsChanged_MetaData), NewProp_OnSkillPointsChanged_MetaData) }; // 3117440132
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USOTS_SkillTreeComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_SkillTreeComponent_Statics::NewProp_SkillTreeDefinition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_SkillTreeComponent_Statics::NewProp_AvailablePoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_SkillTreeComponent_Statics::NewProp_NodeStates_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_SkillTreeComponent_Statics::NewProp_NodeStates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_SkillTreeComponent_Statics::NewProp_OnNodeStatusChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_SkillTreeComponent_Statics::NewProp_OnSkillPointsChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_SkillTreeComponent_Statics::PropPointers) < 2048);
// ********** End Class USOTS_SkillTreeComponent Property Definitions ******************************
UObject* (*const Z_Construct_UClass_USOTS_SkillTreeComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_SkillTree,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_SkillTreeComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_SkillTreeComponent_Statics::ClassParams = {
	&USOTS_SkillTreeComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USOTS_SkillTreeComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_SkillTreeComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_SkillTreeComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_SkillTreeComponent_Statics::Class_MetaDataParams)
};
void USOTS_SkillTreeComponent::StaticRegisterNativesUSOTS_SkillTreeComponent()
{
	UClass* Class = USOTS_SkillTreeComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USOTS_SkillTreeComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_USOTS_SkillTreeComponent()
{
	if (!Z_Registration_Info_UClass_USOTS_SkillTreeComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_SkillTreeComponent.OuterSingleton, Z_Construct_UClass_USOTS_SkillTreeComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_SkillTreeComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_SkillTreeComponent);
USOTS_SkillTreeComponent::~USOTS_SkillTreeComponent() {}
// ********** End Class USOTS_SkillTreeComponent ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeComponent_h__Script_SOTS_SkillTree_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_SkillTreeComponent, USOTS_SkillTreeComponent::StaticClass, TEXT("USOTS_SkillTreeComponent"), &Z_Registration_Info_UClass_USOTS_SkillTreeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_SkillTreeComponent), 952276122U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeComponent_h__Script_SOTS_SkillTree_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeComponent_h__Script_SOTS_SkillTree_369131907{
	TEXT("/Script/SOTS_SkillTree"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeComponent_h__Script_SOTS_SkillTree_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeComponent_h__Script_SOTS_SkillTree_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
