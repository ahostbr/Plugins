// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTS_SkillTreeSubsystem.h"
#include "Engine/GameInstance.h"
#include "GameplayTagContainer.h"
#include "SOTS_SkillTreeTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_SkillTreeSubsystem() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
SOTS_SKILLTREE_API UClass* Z_Construct_UClass_USOTS_SkillTreeDefinition_NoRegister();
SOTS_SKILLTREE_API UClass* Z_Construct_UClass_USOTS_SkillTreeSubsystem();
SOTS_SKILLTREE_API UClass* Z_Construct_UClass_USOTS_SkillTreeSubsystem_NoRegister();
SOTS_SKILLTREE_API UEnum* Z_Construct_UEnum_SOTS_SkillTree_ESOTS_SkillNodeStatus();
SOTS_SKILLTREE_API UFunction* Z_Construct_UDelegateFunction_USOTS_SkillTreeSubsystem_OnSkillTreeStateChanged__DelegateSignature();
SOTS_SKILLTREE_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_SkillTreeNodeView();
SOTS_SKILLTREE_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_SkillTreeProfileState();
SOTS_SKILLTREE_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_SkillTreeRuntimeState();
UPackage* Z_Construct_UPackage__Script_SOTS_SkillTree();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnSkillTreeStateChanged **********************************************
struct Z_Construct_UDelegateFunction_USOTS_SkillTreeSubsystem_OnSkillTreeStateChanged__DelegateSignature_Statics
{
	struct SOTS_SkillTreeSubsystem_eventOnSkillTreeStateChanged_Parms
	{
		FSOTS_SkillTreeRuntimeState NewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnSkillTreeStateChanged constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnSkillTreeStateChanged constinit property declarations ****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnSkillTreeStateChanged Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_USOTS_SkillTreeSubsystem_OnSkillTreeStateChanged__DelegateSignature_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_SkillTreeSubsystem_eventOnSkillTreeStateChanged_Parms, NewState), Z_Construct_UScriptStruct_FSOTS_SkillTreeRuntimeState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewState_MetaData), NewProp_NewState_MetaData) }; // 2780143163
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USOTS_SkillTreeSubsystem_OnSkillTreeStateChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USOTS_SkillTreeSubsystem_OnSkillTreeStateChanged__DelegateSignature_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USOTS_SkillTreeSubsystem_OnSkillTreeStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnSkillTreeStateChanged Property Definitions ***************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_USOTS_SkillTreeSubsystem_OnSkillTreeStateChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_SkillTreeSubsystem, nullptr, "OnSkillTreeStateChanged__DelegateSignature", 	Z_Construct_UDelegateFunction_USOTS_SkillTreeSubsystem_OnSkillTreeStateChanged__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USOTS_SkillTreeSubsystem_OnSkillTreeStateChanged__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_USOTS_SkillTreeSubsystem_OnSkillTreeStateChanged__DelegateSignature_Statics::SOTS_SkillTreeSubsystem_eventOnSkillTreeStateChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USOTS_SkillTreeSubsystem_OnSkillTreeStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_USOTS_SkillTreeSubsystem_OnSkillTreeStateChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_USOTS_SkillTreeSubsystem_OnSkillTreeStateChanged__DelegateSignature_Statics::SOTS_SkillTreeSubsystem_eventOnSkillTreeStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_USOTS_SkillTreeSubsystem_OnSkillTreeStateChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USOTS_SkillTreeSubsystem_OnSkillTreeStateChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void USOTS_SkillTreeSubsystem::FOnSkillTreeStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnSkillTreeStateChanged, FSOTS_SkillTreeRuntimeState const& NewState)
{
	struct SOTS_SkillTreeSubsystem_eventOnSkillTreeStateChanged_Parms
	{
		FSOTS_SkillTreeRuntimeState NewState;
	};
	SOTS_SkillTreeSubsystem_eventOnSkillTreeStateChanged_Parms Parms;
	Parms.NewState=NewState;
	OnSkillTreeStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnSkillTreeStateChanged ************************************************

// ********** Begin Class USOTS_SkillTreeSubsystem Function AddSkillPoints *************************
struct Z_Construct_UFunction_USOTS_SkillTreeSubsystem_AddSkillPoints_Statics
{
	struct SOTS_SkillTreeSubsystem_eventAddSkillPoints_Parms
	{
		FName TreeId;
		int32 Delta;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|SkillTree" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Adjusts the point pool associated with a tree. The subsystem\n// does not enforce cost rules directly; callers may use this for\n// save/load or meta-progression.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adjusts the point pool associated with a tree. The subsystem\ndoes not enforce cost rules directly; callers may use this for\nsave/load or meta-progression." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function AddSkillPoints constinit property declarations ************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_TreeId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Delta;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddSkillPoints constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddSkillPoints Property Definitions ***********************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_AddSkillPoints_Statics::NewProp_TreeId = { "TreeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_SkillTreeSubsystem_eventAddSkillPoints_Parms, TreeId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_AddSkillPoints_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_SkillTreeSubsystem_eventAddSkillPoints_Parms, Delta), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_SkillTreeSubsystem_AddSkillPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeSubsystem_AddSkillPoints_Statics::NewProp_TreeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeSubsystem_AddSkillPoints_Statics::NewProp_Delta,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_AddSkillPoints_Statics::PropPointers) < 2048);
// ********** End Function AddSkillPoints Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_AddSkillPoints_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_SkillTreeSubsystem, nullptr, "AddSkillPoints", 	Z_Construct_UFunction_USOTS_SkillTreeSubsystem_AddSkillPoints_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_AddSkillPoints_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_AddSkillPoints_Statics::SOTS_SkillTreeSubsystem_eventAddSkillPoints_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_AddSkillPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_SkillTreeSubsystem_AddSkillPoints_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_AddSkillPoints_Statics::SOTS_SkillTreeSubsystem_eventAddSkillPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_SkillTreeSubsystem_AddSkillPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_SkillTreeSubsystem_AddSkillPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_SkillTreeSubsystem::execAddSkillPoints)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_TreeId);
	P_GET_PROPERTY(FIntProperty,Z_Param_Delta);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddSkillPoints(Z_Param_TreeId,Z_Param_Delta);
	P_NATIVE_END;
}
// ********** End Class USOTS_SkillTreeSubsystem Function AddSkillPoints ***************************

// ********** Begin Class USOTS_SkillTreeSubsystem Function CanGrantAbility ************************
struct Z_Construct_UFunction_USOTS_SkillTreeSubsystem_CanGrantAbility_Statics
{
	struct SOTS_SkillTreeSubsystem_eventCanGrantAbility_Parms
	{
		FGameplayTag AbilityTag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|SkillTree|Gating" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gating helpers for other subsystems that consume skill tags.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gating helpers for other subsystems that consume skill tags." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function CanGrantAbility constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CanGrantAbility constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CanGrantAbility Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_CanGrantAbility_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_SkillTreeSubsystem_eventCanGrantAbility_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
void Z_Construct_UFunction_USOTS_SkillTreeSubsystem_CanGrantAbility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_SkillTreeSubsystem_eventCanGrantAbility_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_CanGrantAbility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_SkillTreeSubsystem_eventCanGrantAbility_Parms), &Z_Construct_UFunction_USOTS_SkillTreeSubsystem_CanGrantAbility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_SkillTreeSubsystem_CanGrantAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeSubsystem_CanGrantAbility_Statics::NewProp_AbilityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeSubsystem_CanGrantAbility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_CanGrantAbility_Statics::PropPointers) < 2048);
// ********** End Function CanGrantAbility Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_CanGrantAbility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_SkillTreeSubsystem, nullptr, "CanGrantAbility", 	Z_Construct_UFunction_USOTS_SkillTreeSubsystem_CanGrantAbility_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_CanGrantAbility_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_CanGrantAbility_Statics::SOTS_SkillTreeSubsystem_eventCanGrantAbility_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_CanGrantAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_SkillTreeSubsystem_CanGrantAbility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_CanGrantAbility_Statics::SOTS_SkillTreeSubsystem_eventCanGrantAbility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_SkillTreeSubsystem_CanGrantAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_SkillTreeSubsystem_CanGrantAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_SkillTreeSubsystem::execCanGrantAbility)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanGrantAbility(Z_Param_AbilityTag);
	P_NATIVE_END;
}
// ********** End Class USOTS_SkillTreeSubsystem Function CanGrantAbility **************************

// ********** Begin Class USOTS_SkillTreeSubsystem Function CanRaiseStat ***************************
struct Z_Construct_UFunction_USOTS_SkillTreeSubsystem_CanRaiseStat_Statics
{
	struct SOTS_SkillTreeSubsystem_eventCanRaiseStat_Parms
	{
		FGameplayTag StatTag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|SkillTree|Gating" },
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function CanRaiseStat constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_StatTag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CanRaiseStat constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CanRaiseStat Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_CanRaiseStat_Statics::NewProp_StatTag = { "StatTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_SkillTreeSubsystem_eventCanRaiseStat_Parms, StatTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
void Z_Construct_UFunction_USOTS_SkillTreeSubsystem_CanRaiseStat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_SkillTreeSubsystem_eventCanRaiseStat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_CanRaiseStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_SkillTreeSubsystem_eventCanRaiseStat_Parms), &Z_Construct_UFunction_USOTS_SkillTreeSubsystem_CanRaiseStat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_SkillTreeSubsystem_CanRaiseStat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeSubsystem_CanRaiseStat_Statics::NewProp_StatTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeSubsystem_CanRaiseStat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_CanRaiseStat_Statics::PropPointers) < 2048);
// ********** End Function CanRaiseStat Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_CanRaiseStat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_SkillTreeSubsystem, nullptr, "CanRaiseStat", 	Z_Construct_UFunction_USOTS_SkillTreeSubsystem_CanRaiseStat_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_CanRaiseStat_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_CanRaiseStat_Statics::SOTS_SkillTreeSubsystem_eventCanRaiseStat_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_CanRaiseStat_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_SkillTreeSubsystem_CanRaiseStat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_CanRaiseStat_Statics::SOTS_SkillTreeSubsystem_eventCanRaiseStat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_SkillTreeSubsystem_CanRaiseStat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_SkillTreeSubsystem_CanRaiseStat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_SkillTreeSubsystem::execCanRaiseStat)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_StatTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanRaiseStat(Z_Param_StatTag);
	P_NATIVE_END;
}
// ********** End Class USOTS_SkillTreeSubsystem Function CanRaiseStat *****************************

// ********** Begin Class USOTS_SkillTreeSubsystem Function CanUnlockNode **************************
struct Z_Construct_UFunction_USOTS_SkillTreeSubsystem_CanUnlockNode_Statics
{
	struct SOTS_SkillTreeSubsystem_eventCanUnlockNode_Parms
	{
		FName TreeId;
		FName NodeId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|SkillTree" },
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function CanUnlockNode constinit property declarations *************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_TreeId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NodeId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CanUnlockNode constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CanUnlockNode Property Definitions ************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_CanUnlockNode_Statics::NewProp_TreeId = { "TreeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_SkillTreeSubsystem_eventCanUnlockNode_Parms, TreeId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_CanUnlockNode_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_SkillTreeSubsystem_eventCanUnlockNode_Parms, NodeId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USOTS_SkillTreeSubsystem_CanUnlockNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_SkillTreeSubsystem_eventCanUnlockNode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_CanUnlockNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_SkillTreeSubsystem_eventCanUnlockNode_Parms), &Z_Construct_UFunction_USOTS_SkillTreeSubsystem_CanUnlockNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_SkillTreeSubsystem_CanUnlockNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeSubsystem_CanUnlockNode_Statics::NewProp_TreeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeSubsystem_CanUnlockNode_Statics::NewProp_NodeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeSubsystem_CanUnlockNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_CanUnlockNode_Statics::PropPointers) < 2048);
// ********** End Function CanUnlockNode Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_CanUnlockNode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_SkillTreeSubsystem, nullptr, "CanUnlockNode", 	Z_Construct_UFunction_USOTS_SkillTreeSubsystem_CanUnlockNode_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_CanUnlockNode_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_CanUnlockNode_Statics::SOTS_SkillTreeSubsystem_eventCanUnlockNode_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_CanUnlockNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_SkillTreeSubsystem_CanUnlockNode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_CanUnlockNode_Statics::SOTS_SkillTreeSubsystem_eventCanUnlockNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_SkillTreeSubsystem_CanUnlockNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_SkillTreeSubsystem_CanUnlockNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_SkillTreeSubsystem::execCanUnlockNode)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_TreeId);
	P_GET_PROPERTY(FNameProperty,Z_Param_NodeId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanUnlockNode(Z_Param_TreeId,Z_Param_NodeId);
	P_NATIVE_END;
}
// ********** End Class USOTS_SkillTreeSubsystem Function CanUnlockNode ****************************

// ********** Begin Class USOTS_SkillTreeSubsystem Function GetAllRuntimeStates ********************
struct Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetAllRuntimeStates_Statics
{
	struct SOTS_SkillTreeSubsystem_eventGetAllRuntimeStates_Parms
	{
		TArray<FSOTS_SkillTreeRuntimeState> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|SkillTree" },
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAllRuntimeStates constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAllRuntimeStates constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAllRuntimeStates Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetAllRuntimeStates_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSOTS_SkillTreeRuntimeState, METADATA_PARAMS(0, nullptr) }; // 2780143163
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetAllRuntimeStates_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_SkillTreeSubsystem_eventGetAllRuntimeStates_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2780143163
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetAllRuntimeStates_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetAllRuntimeStates_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetAllRuntimeStates_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetAllRuntimeStates_Statics::PropPointers) < 2048);
// ********** End Function GetAllRuntimeStates Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetAllRuntimeStates_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_SkillTreeSubsystem, nullptr, "GetAllRuntimeStates", 	Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetAllRuntimeStates_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetAllRuntimeStates_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetAllRuntimeStates_Statics::SOTS_SkillTreeSubsystem_eventGetAllRuntimeStates_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetAllRuntimeStates_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetAllRuntimeStates_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetAllRuntimeStates_Statics::SOTS_SkillTreeSubsystem_eventGetAllRuntimeStates_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetAllRuntimeStates()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetAllRuntimeStates_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_SkillTreeSubsystem::execGetAllRuntimeStates)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FSOTS_SkillTreeRuntimeState>*)Z_Param__Result=P_THIS->GetAllRuntimeStates();
	P_NATIVE_END;
}
// ********** End Class USOTS_SkillTreeSubsystem Function GetAllRuntimeStates **********************

// ********** Begin Class USOTS_SkillTreeSubsystem Function GetAvailableNodes **********************
struct Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetAvailableNodes_Statics
{
	struct SOTS_SkillTreeSubsystem_eventGetAvailableNodes_Parms
	{
		FName TreeId;
		TArray<FName> OutNodeIds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|SkillTree" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the node ids that are currently unlockable for the given tree.\n// This uses basic parent gating and runtime state; more detailed checks\n// (mission/ability requirements) can be performed via TryUnlockNode.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the node ids that are currently unlockable for the given tree.\nThis uses basic parent gating and runtime state; more detailed checks\n(mission/ability requirements) can be performed via TryUnlockNode." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetAvailableNodes constinit property declarations *********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_TreeId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OutNodeIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutNodeIds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAvailableNodes constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAvailableNodes Property Definitions ********************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetAvailableNodes_Statics::NewProp_TreeId = { "TreeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_SkillTreeSubsystem_eventGetAvailableNodes_Parms, TreeId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetAvailableNodes_Statics::NewProp_OutNodeIds_Inner = { "OutNodeIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetAvailableNodes_Statics::NewProp_OutNodeIds = { "OutNodeIds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_SkillTreeSubsystem_eventGetAvailableNodes_Parms, OutNodeIds), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetAvailableNodes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetAvailableNodes_Statics::NewProp_TreeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetAvailableNodes_Statics::NewProp_OutNodeIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetAvailableNodes_Statics::NewProp_OutNodeIds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetAvailableNodes_Statics::PropPointers) < 2048);
// ********** End Function GetAvailableNodes Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetAvailableNodes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_SkillTreeSubsystem, nullptr, "GetAvailableNodes", 	Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetAvailableNodes_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetAvailableNodes_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetAvailableNodes_Statics::SOTS_SkillTreeSubsystem_eventGetAvailableNodes_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetAvailableNodes_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetAvailableNodes_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetAvailableNodes_Statics::SOTS_SkillTreeSubsystem_eventGetAvailableNodes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetAvailableNodes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetAvailableNodes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_SkillTreeSubsystem::execGetAvailableNodes)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_TreeId);
	P_GET_TARRAY_REF(FName,Z_Param_Out_OutNodeIds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAvailableNodes(Z_Param_TreeId,Z_Param_Out_OutNodeIds);
	P_NATIVE_END;
}
// ********** End Class USOTS_SkillTreeSubsystem Function GetAvailableNodes ************************

// ********** Begin Class USOTS_SkillTreeSubsystem Function GetGrantedTagsForTree ******************
struct Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetGrantedTagsForTree_Statics
{
	struct SOTS_SkillTreeSubsystem_eventGetGrantedTagsForTree_Parms
	{
		FName TreeId;
		FGameplayTagContainer ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|SkillTree" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tags granted by all unlocked nodes in this tree.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tags granted by all unlocked nodes in this tree." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetGrantedTagsForTree constinit property declarations *****************
	static const UECodeGen_Private::FNamePropertyParams NewProp_TreeId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetGrantedTagsForTree constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetGrantedTagsForTree Property Definitions ****************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetGrantedTagsForTree_Statics::NewProp_TreeId = { "TreeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_SkillTreeSubsystem_eventGetGrantedTagsForTree_Parms, TreeId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetGrantedTagsForTree_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_SkillTreeSubsystem_eventGetGrantedTagsForTree_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3438578166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetGrantedTagsForTree_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetGrantedTagsForTree_Statics::NewProp_TreeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetGrantedTagsForTree_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetGrantedTagsForTree_Statics::PropPointers) < 2048);
// ********** End Function GetGrantedTagsForTree Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetGrantedTagsForTree_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_SkillTreeSubsystem, nullptr, "GetGrantedTagsForTree", 	Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetGrantedTagsForTree_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetGrantedTagsForTree_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetGrantedTagsForTree_Statics::SOTS_SkillTreeSubsystem_eventGetGrantedTagsForTree_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetGrantedTagsForTree_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetGrantedTagsForTree_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetGrantedTagsForTree_Statics::SOTS_SkillTreeSubsystem_eventGetGrantedTagsForTree_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetGrantedTagsForTree()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetGrantedTagsForTree_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_SkillTreeSubsystem::execGetGrantedTagsForTree)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_TreeId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTagContainer*)Z_Param__Result=P_THIS->GetGrantedTagsForTree(Z_Param_TreeId);
	P_NATIVE_END;
}
// ********** End Class USOTS_SkillTreeSubsystem Function GetGrantedTagsForTree ********************

// ********** Begin Class USOTS_SkillTreeSubsystem Function GetNodeStatus **************************
struct Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetNodeStatus_Statics
{
	struct SOTS_SkillTreeSubsystem_eventGetNodeStatus_Parms
	{
		FName TreeId;
		FName NodeId;
		ESOTS_SkillNodeStatus ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|SkillTree" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the current status for a given node in a tree\n// (Locked / Available / Unlocked).\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current status for a given node in a tree\n(Locked / Available / Unlocked)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetNodeStatus constinit property declarations *************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_TreeId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NodeId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNodeStatus constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNodeStatus Property Definitions ************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetNodeStatus_Statics::NewProp_TreeId = { "TreeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_SkillTreeSubsystem_eventGetNodeStatus_Parms, TreeId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetNodeStatus_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_SkillTreeSubsystem_eventGetNodeStatus_Parms, NodeId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetNodeStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetNodeStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_SkillTreeSubsystem_eventGetNodeStatus_Parms, ReturnValue), Z_Construct_UEnum_SOTS_SkillTree_ESOTS_SkillNodeStatus, METADATA_PARAMS(0, nullptr) }; // 2160274606
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetNodeStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetNodeStatus_Statics::NewProp_TreeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetNodeStatus_Statics::NewProp_NodeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetNodeStatus_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetNodeStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetNodeStatus_Statics::PropPointers) < 2048);
// ********** End Function GetNodeStatus Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetNodeStatus_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_SkillTreeSubsystem, nullptr, "GetNodeStatus", 	Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetNodeStatus_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetNodeStatus_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetNodeStatus_Statics::SOTS_SkillTreeSubsystem_eventGetNodeStatus_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetNodeStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetNodeStatus_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetNodeStatus_Statics::SOTS_SkillTreeSubsystem_eventGetNodeStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetNodeStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetNodeStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_SkillTreeSubsystem::execGetNodeStatus)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_TreeId);
	P_GET_PROPERTY(FNameProperty,Z_Param_NodeId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESOTS_SkillNodeStatus*)Z_Param__Result=P_THIS->GetNodeStatus(Z_Param_TreeId,Z_Param_NodeId);
	P_NATIVE_END;
}
// ********** End Class USOTS_SkillTreeSubsystem Function GetNodeStatus ****************************

// ********** Begin Class USOTS_SkillTreeSubsystem Function GetRegisteredTreeIds *******************
struct Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetRegisteredTreeIds_Statics
{
	struct SOTS_SkillTreeSubsystem_eventGetRegisteredTreeIds_Parms
	{
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|SkillTree" },
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetRegisteredTreeIds constinit property declarations ******************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRegisteredTreeIds constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRegisteredTreeIds Property Definitions *****************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetRegisteredTreeIds_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetRegisteredTreeIds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_SkillTreeSubsystem_eventGetRegisteredTreeIds_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetRegisteredTreeIds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetRegisteredTreeIds_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetRegisteredTreeIds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetRegisteredTreeIds_Statics::PropPointers) < 2048);
// ********** End Function GetRegisteredTreeIds Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetRegisteredTreeIds_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_SkillTreeSubsystem, nullptr, "GetRegisteredTreeIds", 	Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetRegisteredTreeIds_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetRegisteredTreeIds_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetRegisteredTreeIds_Statics::SOTS_SkillTreeSubsystem_eventGetRegisteredTreeIds_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetRegisteredTreeIds_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetRegisteredTreeIds_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetRegisteredTreeIds_Statics::SOTS_SkillTreeSubsystem_eventGetRegisteredTreeIds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetRegisteredTreeIds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetRegisteredTreeIds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_SkillTreeSubsystem::execGetRegisteredTreeIds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=P_THIS->GetRegisteredTreeIds();
	P_NATIVE_END;
}
// ********** End Class USOTS_SkillTreeSubsystem Function GetRegisteredTreeIds *********************

// ********** Begin Class USOTS_SkillTreeSubsystem Function GetRuntimeState ************************
struct Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetRuntimeState_Statics
{
	struct SOTS_SkillTreeSubsystem_eventGetRuntimeState_Parms
	{
		FName TreeId;
		FSOTS_SkillTreeRuntimeState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|SkillTree" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Debug: get runtime state snapshot for a single tree.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Debug: get runtime state snapshot for a single tree." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetRuntimeState constinit property declarations ***********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_TreeId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRuntimeState constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRuntimeState Property Definitions **********************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetRuntimeState_Statics::NewProp_TreeId = { "TreeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_SkillTreeSubsystem_eventGetRuntimeState_Parms, TreeId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetRuntimeState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_SkillTreeSubsystem_eventGetRuntimeState_Parms, ReturnValue), Z_Construct_UScriptStruct_FSOTS_SkillTreeRuntimeState, METADATA_PARAMS(0, nullptr) }; // 2780143163
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetRuntimeState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetRuntimeState_Statics::NewProp_TreeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetRuntimeState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetRuntimeState_Statics::PropPointers) < 2048);
// ********** End Function GetRuntimeState Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetRuntimeState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_SkillTreeSubsystem, nullptr, "GetRuntimeState", 	Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetRuntimeState_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetRuntimeState_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetRuntimeState_Statics::SOTS_SkillTreeSubsystem_eventGetRuntimeState_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetRuntimeState_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetRuntimeState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetRuntimeState_Statics::SOTS_SkillTreeSubsystem_eventGetRuntimeState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetRuntimeState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetRuntimeState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_SkillTreeSubsystem::execGetRuntimeState)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_TreeId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSOTS_SkillTreeRuntimeState*)Z_Param__Result=P_THIS->GetRuntimeState(Z_Param_TreeId);
	P_NATIVE_END;
}
// ********** End Class USOTS_SkillTreeSubsystem Function GetRuntimeState **************************

// ********** Begin Class USOTS_SkillTreeSubsystem Function GetSkillTreeOverview *******************
struct Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetSkillTreeOverview_Statics
{
	struct SOTS_SkillTreeSubsystem_eventGetSkillTreeOverview_Parms
	{
		FName TreeId;
		TArray<FSOTS_SkillTreeNodeView> OutNodes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|SkillTree" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns a per-node overview for the specified tree including\n// definition data, status, and effective cost.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a per-node overview for the specified tree including\ndefinition data, status, and effective cost." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetSkillTreeOverview constinit property declarations ******************
	static const UECodeGen_Private::FNamePropertyParams NewProp_TreeId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutNodes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSkillTreeOverview constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSkillTreeOverview Property Definitions *****************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetSkillTreeOverview_Statics::NewProp_TreeId = { "TreeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_SkillTreeSubsystem_eventGetSkillTreeOverview_Parms, TreeId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetSkillTreeOverview_Statics::NewProp_OutNodes_Inner = { "OutNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSOTS_SkillTreeNodeView, METADATA_PARAMS(0, nullptr) }; // 330864293
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetSkillTreeOverview_Statics::NewProp_OutNodes = { "OutNodes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_SkillTreeSubsystem_eventGetSkillTreeOverview_Parms, OutNodes), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 330864293
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetSkillTreeOverview_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetSkillTreeOverview_Statics::NewProp_TreeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetSkillTreeOverview_Statics::NewProp_OutNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetSkillTreeOverview_Statics::NewProp_OutNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetSkillTreeOverview_Statics::PropPointers) < 2048);
// ********** End Function GetSkillTreeOverview Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetSkillTreeOverview_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_SkillTreeSubsystem, nullptr, "GetSkillTreeOverview", 	Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetSkillTreeOverview_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetSkillTreeOverview_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetSkillTreeOverview_Statics::SOTS_SkillTreeSubsystem_eventGetSkillTreeOverview_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetSkillTreeOverview_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetSkillTreeOverview_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetSkillTreeOverview_Statics::SOTS_SkillTreeSubsystem_eventGetSkillTreeOverview_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetSkillTreeOverview()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetSkillTreeOverview_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_SkillTreeSubsystem::execGetSkillTreeOverview)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_TreeId);
	P_GET_TARRAY_REF(FSOTS_SkillTreeNodeView,Z_Param_Out_OutNodes);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetSkillTreeOverview(Z_Param_TreeId,Z_Param_Out_OutNodes);
	P_NATIVE_END;
}
// ********** End Class USOTS_SkillTreeSubsystem Function GetSkillTreeOverview *********************

// ********** Begin Class USOTS_SkillTreeSubsystem Function HasSkillTag ****************************
struct Z_Construct_UFunction_USOTS_SkillTreeSubsystem_HasSkillTag_Statics
{
	struct SOTS_SkillTreeSubsystem_eventHasSkillTag_Parms
	{
		FGameplayTag SkillTag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|SkillTree" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Convenience helper for code that only cares about the presence of a\n// single skill tag. By default this simply queries the global tag state.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convenience helper for code that only cares about the presence of a\nsingle skill tag. By default this simply queries the global tag state." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function HasSkillTag constinit property declarations ***************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SkillTag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasSkillTag constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasSkillTag Property Definitions **************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_HasSkillTag_Statics::NewProp_SkillTag = { "SkillTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_SkillTreeSubsystem_eventHasSkillTag_Parms, SkillTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
void Z_Construct_UFunction_USOTS_SkillTreeSubsystem_HasSkillTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_SkillTreeSubsystem_eventHasSkillTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_HasSkillTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_SkillTreeSubsystem_eventHasSkillTag_Parms), &Z_Construct_UFunction_USOTS_SkillTreeSubsystem_HasSkillTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_SkillTreeSubsystem_HasSkillTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeSubsystem_HasSkillTag_Statics::NewProp_SkillTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeSubsystem_HasSkillTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_HasSkillTag_Statics::PropPointers) < 2048);
// ********** End Function HasSkillTag Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_HasSkillTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_SkillTreeSubsystem, nullptr, "HasSkillTag", 	Z_Construct_UFunction_USOTS_SkillTreeSubsystem_HasSkillTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_HasSkillTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_HasSkillTag_Statics::SOTS_SkillTreeSubsystem_eventHasSkillTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_HasSkillTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_SkillTreeSubsystem_HasSkillTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_HasSkillTag_Statics::SOTS_SkillTreeSubsystem_eventHasSkillTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_SkillTreeSubsystem_HasSkillTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_SkillTreeSubsystem_HasSkillTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_SkillTreeSubsystem::execHasSkillTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_SkillTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasSkillTag(Z_Param_SkillTag);
	P_NATIVE_END;
}
// ********** End Class USOTS_SkillTreeSubsystem Function HasSkillTag ******************************

// ********** Begin Class USOTS_SkillTreeSubsystem Function IsNodeUnlocked *************************
struct Z_Construct_UFunction_USOTS_SkillTreeSubsystem_IsNodeUnlocked_Statics
{
	struct SOTS_SkillTreeSubsystem_eventIsNodeUnlocked_Parms
	{
		FName TreeId;
		FName NodeId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|SkillTree" },
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsNodeUnlocked constinit property declarations ************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_TreeId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NodeId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsNodeUnlocked constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsNodeUnlocked Property Definitions ***********************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_IsNodeUnlocked_Statics::NewProp_TreeId = { "TreeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_SkillTreeSubsystem_eventIsNodeUnlocked_Parms, TreeId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_IsNodeUnlocked_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_SkillTreeSubsystem_eventIsNodeUnlocked_Parms, NodeId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USOTS_SkillTreeSubsystem_IsNodeUnlocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_SkillTreeSubsystem_eventIsNodeUnlocked_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_IsNodeUnlocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_SkillTreeSubsystem_eventIsNodeUnlocked_Parms), &Z_Construct_UFunction_USOTS_SkillTreeSubsystem_IsNodeUnlocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_SkillTreeSubsystem_IsNodeUnlocked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeSubsystem_IsNodeUnlocked_Statics::NewProp_TreeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeSubsystem_IsNodeUnlocked_Statics::NewProp_NodeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeSubsystem_IsNodeUnlocked_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_IsNodeUnlocked_Statics::PropPointers) < 2048);
// ********** End Function IsNodeUnlocked Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_IsNodeUnlocked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_SkillTreeSubsystem, nullptr, "IsNodeUnlocked", 	Z_Construct_UFunction_USOTS_SkillTreeSubsystem_IsNodeUnlocked_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_IsNodeUnlocked_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_IsNodeUnlocked_Statics::SOTS_SkillTreeSubsystem_eventIsNodeUnlocked_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_IsNodeUnlocked_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_SkillTreeSubsystem_IsNodeUnlocked_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_IsNodeUnlocked_Statics::SOTS_SkillTreeSubsystem_eventIsNodeUnlocked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_SkillTreeSubsystem_IsNodeUnlocked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_SkillTreeSubsystem_IsNodeUnlocked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_SkillTreeSubsystem::execIsNodeUnlocked)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_TreeId);
	P_GET_PROPERTY(FNameProperty,Z_Param_NodeId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsNodeUnlocked(Z_Param_TreeId,Z_Param_NodeId);
	P_NATIVE_END;
}
// ********** End Class USOTS_SkillTreeSubsystem Function IsNodeUnlocked ***************************

// ********** Begin Class USOTS_SkillTreeSubsystem Function LoadSkillTreeState *********************
struct Z_Construct_UFunction_USOTS_SkillTreeSubsystem_LoadSkillTreeState_Statics
{
	struct SOTS_SkillTreeSubsystem_eventLoadSkillTreeState_Parms
	{
		FSOTS_SkillTreeProfileState InState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|SkillTree" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Restores previously saved tree runtime states. This function does not\n// mutate the global tag state; callers can optionally re-apply tags or\n// call RestoreRuntimeStates directly if needed.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Restores previously saved tree runtime states. This function does not\nmutate the global tag state; callers can optionally re-apply tags or\ncall RestoreRuntimeStates directly if needed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function LoadSkillTreeState constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LoadSkillTreeState constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LoadSkillTreeState Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_LoadSkillTreeState_Statics::NewProp_InState = { "InState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_SkillTreeSubsystem_eventLoadSkillTreeState_Parms, InState), Z_Construct_UScriptStruct_FSOTS_SkillTreeProfileState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InState_MetaData), NewProp_InState_MetaData) }; // 816689775
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_SkillTreeSubsystem_LoadSkillTreeState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeSubsystem_LoadSkillTreeState_Statics::NewProp_InState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_LoadSkillTreeState_Statics::PropPointers) < 2048);
// ********** End Function LoadSkillTreeState Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_LoadSkillTreeState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_SkillTreeSubsystem, nullptr, "LoadSkillTreeState", 	Z_Construct_UFunction_USOTS_SkillTreeSubsystem_LoadSkillTreeState_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_LoadSkillTreeState_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_LoadSkillTreeState_Statics::SOTS_SkillTreeSubsystem_eventLoadSkillTreeState_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_LoadSkillTreeState_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_SkillTreeSubsystem_LoadSkillTreeState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_LoadSkillTreeState_Statics::SOTS_SkillTreeSubsystem_eventLoadSkillTreeState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_SkillTreeSubsystem_LoadSkillTreeState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_SkillTreeSubsystem_LoadSkillTreeState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_SkillTreeSubsystem::execLoadSkillTreeState)
{
	P_GET_STRUCT_REF(FSOTS_SkillTreeProfileState,Z_Param_Out_InState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadSkillTreeState(Z_Param_Out_InState);
	P_NATIVE_END;
}
// ********** End Class USOTS_SkillTreeSubsystem Function LoadSkillTreeState ***********************

// ********** Begin Class USOTS_SkillTreeSubsystem Function RefundSkillNode ************************
struct Z_Construct_UFunction_USOTS_SkillTreeSubsystem_RefundSkillNode_Statics
{
	struct SOTS_SkillTreeSubsystem_eventRefundSkillNode_Parms
	{
		FName TreeId;
		FName NodeId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|SkillTree" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Attempts to refund a previously unlocked node. This will remove its\n// granted tags from the global tag state and mark it as locked again.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attempts to refund a previously unlocked node. This will remove its\ngranted tags from the global tag state and mark it as locked again." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RefundSkillNode constinit property declarations ***********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_TreeId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NodeId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RefundSkillNode constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RefundSkillNode Property Definitions **********************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_RefundSkillNode_Statics::NewProp_TreeId = { "TreeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_SkillTreeSubsystem_eventRefundSkillNode_Parms, TreeId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_RefundSkillNode_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_SkillTreeSubsystem_eventRefundSkillNode_Parms, NodeId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USOTS_SkillTreeSubsystem_RefundSkillNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_SkillTreeSubsystem_eventRefundSkillNode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_RefundSkillNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_SkillTreeSubsystem_eventRefundSkillNode_Parms), &Z_Construct_UFunction_USOTS_SkillTreeSubsystem_RefundSkillNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_SkillTreeSubsystem_RefundSkillNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeSubsystem_RefundSkillNode_Statics::NewProp_TreeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeSubsystem_RefundSkillNode_Statics::NewProp_NodeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeSubsystem_RefundSkillNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_RefundSkillNode_Statics::PropPointers) < 2048);
// ********** End Function RefundSkillNode Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_RefundSkillNode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_SkillTreeSubsystem, nullptr, "RefundSkillNode", 	Z_Construct_UFunction_USOTS_SkillTreeSubsystem_RefundSkillNode_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_RefundSkillNode_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_RefundSkillNode_Statics::SOTS_SkillTreeSubsystem_eventRefundSkillNode_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_RefundSkillNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_SkillTreeSubsystem_RefundSkillNode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_RefundSkillNode_Statics::SOTS_SkillTreeSubsystem_eventRefundSkillNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_SkillTreeSubsystem_RefundSkillNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_SkillTreeSubsystem_RefundSkillNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_SkillTreeSubsystem::execRefundSkillNode)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_TreeId);
	P_GET_PROPERTY(FNameProperty,Z_Param_NodeId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RefundSkillNode(Z_Param_TreeId,Z_Param_NodeId);
	P_NATIVE_END;
}
// ********** End Class USOTS_SkillTreeSubsystem Function RefundSkillNode **************************

// ********** Begin Class USOTS_SkillTreeSubsystem Function RegisterSkillTree **********************
struct Z_Construct_UFunction_USOTS_SkillTreeSubsystem_RegisterSkillTree_Statics
{
	struct SOTS_SkillTreeSubsystem_eventRegisterSkillTree_Parms
	{
		USOTS_SkillTreeDefinition* TreeDef;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|SkillTree" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Registers a tree definition for runtime use.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Registers a tree definition for runtime use." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RegisterSkillTree constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TreeDef;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RegisterSkillTree constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RegisterSkillTree Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_RegisterSkillTree_Statics::NewProp_TreeDef = { "TreeDef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_SkillTreeSubsystem_eventRegisterSkillTree_Parms, TreeDef), Z_Construct_UClass_USOTS_SkillTreeDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_SkillTreeSubsystem_RegisterSkillTree_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeSubsystem_RegisterSkillTree_Statics::NewProp_TreeDef,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_RegisterSkillTree_Statics::PropPointers) < 2048);
// ********** End Function RegisterSkillTree Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_RegisterSkillTree_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_SkillTreeSubsystem, nullptr, "RegisterSkillTree", 	Z_Construct_UFunction_USOTS_SkillTreeSubsystem_RegisterSkillTree_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_RegisterSkillTree_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_RegisterSkillTree_Statics::SOTS_SkillTreeSubsystem_eventRegisterSkillTree_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_RegisterSkillTree_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_SkillTreeSubsystem_RegisterSkillTree_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_RegisterSkillTree_Statics::SOTS_SkillTreeSubsystem_eventRegisterSkillTree_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_SkillTreeSubsystem_RegisterSkillTree()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_SkillTreeSubsystem_RegisterSkillTree_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_SkillTreeSubsystem::execRegisterSkillTree)
{
	P_GET_OBJECT(USOTS_SkillTreeDefinition,Z_Param_TreeDef);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterSkillTree(Z_Param_TreeDef);
	P_NATIVE_END;
}
// ********** End Class USOTS_SkillTreeSubsystem Function RegisterSkillTree ************************

// ********** Begin Class USOTS_SkillTreeSubsystem Function ResetAllSkillTrees *********************
struct Z_Construct_UFunction_USOTS_SkillTreeSubsystem_ResetAllSkillTrees_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|SkillTree" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Clear all runtime unlock state for all trees.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clear all runtime unlock state for all trees." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ResetAllSkillTrees constinit property declarations ********************
// ********** End Function ResetAllSkillTrees constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_ResetAllSkillTrees_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_SkillTreeSubsystem, nullptr, "ResetAllSkillTrees", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_ResetAllSkillTrees_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_SkillTreeSubsystem_ResetAllSkillTrees_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USOTS_SkillTreeSubsystem_ResetAllSkillTrees()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_SkillTreeSubsystem_ResetAllSkillTrees_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_SkillTreeSubsystem::execResetAllSkillTrees)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetAllSkillTrees();
	P_NATIVE_END;
}
// ********** End Class USOTS_SkillTreeSubsystem Function ResetAllSkillTrees ***********************

// ********** Begin Class USOTS_SkillTreeSubsystem Function RestoreRuntimeStates *******************
struct Z_Construct_UFunction_USOTS_SkillTreeSubsystem_RestoreRuntimeStates_Statics
{
	struct SOTS_SkillTreeSubsystem_eventRestoreRuntimeStates_Parms
	{
		TArray<FSOTS_SkillTreeRuntimeState> InStates;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|SkillTree" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Allows an external save system to restore the entire runtime state.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allows an external save system to restore the entire runtime state." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InStates_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RestoreRuntimeStates constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InStates_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InStates;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RestoreRuntimeStates constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RestoreRuntimeStates Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_RestoreRuntimeStates_Statics::NewProp_InStates_Inner = { "InStates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSOTS_SkillTreeRuntimeState, METADATA_PARAMS(0, nullptr) }; // 2780143163
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_RestoreRuntimeStates_Statics::NewProp_InStates = { "InStates", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_SkillTreeSubsystem_eventRestoreRuntimeStates_Parms, InStates), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InStates_MetaData), NewProp_InStates_MetaData) }; // 2780143163
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_SkillTreeSubsystem_RestoreRuntimeStates_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeSubsystem_RestoreRuntimeStates_Statics::NewProp_InStates_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeSubsystem_RestoreRuntimeStates_Statics::NewProp_InStates,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_RestoreRuntimeStates_Statics::PropPointers) < 2048);
// ********** End Function RestoreRuntimeStates Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_RestoreRuntimeStates_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_SkillTreeSubsystem, nullptr, "RestoreRuntimeStates", 	Z_Construct_UFunction_USOTS_SkillTreeSubsystem_RestoreRuntimeStates_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_RestoreRuntimeStates_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_RestoreRuntimeStates_Statics::SOTS_SkillTreeSubsystem_eventRestoreRuntimeStates_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_RestoreRuntimeStates_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_SkillTreeSubsystem_RestoreRuntimeStates_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_RestoreRuntimeStates_Statics::SOTS_SkillTreeSubsystem_eventRestoreRuntimeStates_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_SkillTreeSubsystem_RestoreRuntimeStates()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_SkillTreeSubsystem_RestoreRuntimeStates_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_SkillTreeSubsystem::execRestoreRuntimeStates)
{
	P_GET_TARRAY_REF(FSOTS_SkillTreeRuntimeState,Z_Param_Out_InStates);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RestoreRuntimeStates(Z_Param_Out_InStates);
	P_NATIVE_END;
}
// ********** End Class USOTS_SkillTreeSubsystem Function RestoreRuntimeStates *********************

// ********** Begin Class USOTS_SkillTreeSubsystem Function SaveSkillTreeState *********************
struct Z_Construct_UFunction_USOTS_SkillTreeSubsystem_SaveSkillTreeState_Statics
{
	struct SOTS_SkillTreeSubsystem_eventSaveSkillTreeState_Parms
	{
		FSOTS_SkillTreeProfileState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|SkillTree" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Serializes all tree runtime states into a profile-level container.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Serializes all tree runtime states into a profile-level container." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SaveSkillTreeState constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SaveSkillTreeState constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SaveSkillTreeState Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_SaveSkillTreeState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_SkillTreeSubsystem_eventSaveSkillTreeState_Parms, ReturnValue), Z_Construct_UScriptStruct_FSOTS_SkillTreeProfileState, METADATA_PARAMS(0, nullptr) }; // 816689775
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_SkillTreeSubsystem_SaveSkillTreeState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeSubsystem_SaveSkillTreeState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_SaveSkillTreeState_Statics::PropPointers) < 2048);
// ********** End Function SaveSkillTreeState Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_SaveSkillTreeState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_SkillTreeSubsystem, nullptr, "SaveSkillTreeState", 	Z_Construct_UFunction_USOTS_SkillTreeSubsystem_SaveSkillTreeState_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_SaveSkillTreeState_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_SaveSkillTreeState_Statics::SOTS_SkillTreeSubsystem_eventSaveSkillTreeState_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_SaveSkillTreeState_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_SkillTreeSubsystem_SaveSkillTreeState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_SaveSkillTreeState_Statics::SOTS_SkillTreeSubsystem_eventSaveSkillTreeState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_SkillTreeSubsystem_SaveSkillTreeState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_SkillTreeSubsystem_SaveSkillTreeState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_SkillTreeSubsystem::execSaveSkillTreeState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSOTS_SkillTreeProfileState*)Z_Param__Result=P_THIS->SaveSkillTreeState();
	P_NATIVE_END;
}
// ********** End Class USOTS_SkillTreeSubsystem Function SaveSkillTreeState ***********************

// ********** Begin Class USOTS_SkillTreeSubsystem Function TryUnlockNode **************************
struct Z_Construct_UFunction_USOTS_SkillTreeSubsystem_TryUnlockNode_Statics
{
	struct SOTS_SkillTreeSubsystem_eventTryUnlockNode_Parms
	{
		const UObject* WorldContextObject;
		FName TreeId;
		FName NodeId;
		FText OutFailureReason;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|SkillTree" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// High-level unlock helper that evaluates prerequisites, requirements,\n// and available points, returning a localized failure reason on error.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "High-level unlock helper that evaluates prerequisites, requirements,\nand available points, returning a localized failure reason on error." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function TryUnlockNode constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TreeId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NodeId;
	static const UECodeGen_Private::FTextPropertyParams NewProp_OutFailureReason;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function TryUnlockNode constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function TryUnlockNode Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_TryUnlockNode_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_SkillTreeSubsystem_eventTryUnlockNode_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_TryUnlockNode_Statics::NewProp_TreeId = { "TreeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_SkillTreeSubsystem_eventTryUnlockNode_Parms, TreeId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_TryUnlockNode_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_SkillTreeSubsystem_eventTryUnlockNode_Parms, NodeId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_TryUnlockNode_Statics::NewProp_OutFailureReason = { "OutFailureReason", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_SkillTreeSubsystem_eventTryUnlockNode_Parms, OutFailureReason), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USOTS_SkillTreeSubsystem_TryUnlockNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_SkillTreeSubsystem_eventTryUnlockNode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_TryUnlockNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_SkillTreeSubsystem_eventTryUnlockNode_Parms), &Z_Construct_UFunction_USOTS_SkillTreeSubsystem_TryUnlockNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_SkillTreeSubsystem_TryUnlockNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeSubsystem_TryUnlockNode_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeSubsystem_TryUnlockNode_Statics::NewProp_TreeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeSubsystem_TryUnlockNode_Statics::NewProp_NodeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeSubsystem_TryUnlockNode_Statics::NewProp_OutFailureReason,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeSubsystem_TryUnlockNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_TryUnlockNode_Statics::PropPointers) < 2048);
// ********** End Function TryUnlockNode Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_TryUnlockNode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_SkillTreeSubsystem, nullptr, "TryUnlockNode", 	Z_Construct_UFunction_USOTS_SkillTreeSubsystem_TryUnlockNode_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_TryUnlockNode_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_TryUnlockNode_Statics::SOTS_SkillTreeSubsystem_eventTryUnlockNode_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_TryUnlockNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_SkillTreeSubsystem_TryUnlockNode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_TryUnlockNode_Statics::SOTS_SkillTreeSubsystem_eventTryUnlockNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_SkillTreeSubsystem_TryUnlockNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_SkillTreeSubsystem_TryUnlockNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_SkillTreeSubsystem::execTryUnlockNode)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_TreeId);
	P_GET_PROPERTY(FNameProperty,Z_Param_NodeId);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutFailureReason);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryUnlockNode(Z_Param_WorldContextObject,Z_Param_TreeId,Z_Param_NodeId,Z_Param_Out_OutFailureReason);
	P_NATIVE_END;
}
// ********** End Class USOTS_SkillTreeSubsystem Function TryUnlockNode ****************************

// ********** Begin Class USOTS_SkillTreeSubsystem Function UnlockNode *****************************
struct Z_Construct_UFunction_USOTS_SkillTreeSubsystem_UnlockNode_Statics
{
	struct SOTS_SkillTreeSubsystem_eventUnlockNode_Parms
	{
		FName TreeId;
		FName NodeId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|SkillTree" },
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function UnlockNode constinit property declarations ****************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_TreeId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NodeId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UnlockNode constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UnlockNode Property Definitions ***************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_UnlockNode_Statics::NewProp_TreeId = { "TreeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_SkillTreeSubsystem_eventUnlockNode_Parms, TreeId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_UnlockNode_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_SkillTreeSubsystem_eventUnlockNode_Parms, NodeId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USOTS_SkillTreeSubsystem_UnlockNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_SkillTreeSubsystem_eventUnlockNode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_UnlockNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_SkillTreeSubsystem_eventUnlockNode_Parms), &Z_Construct_UFunction_USOTS_SkillTreeSubsystem_UnlockNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_SkillTreeSubsystem_UnlockNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeSubsystem_UnlockNode_Statics::NewProp_TreeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeSubsystem_UnlockNode_Statics::NewProp_NodeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeSubsystem_UnlockNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_UnlockNode_Statics::PropPointers) < 2048);
// ********** End Function UnlockNode Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_UnlockNode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_SkillTreeSubsystem, nullptr, "UnlockNode", 	Z_Construct_UFunction_USOTS_SkillTreeSubsystem_UnlockNode_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_UnlockNode_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_UnlockNode_Statics::SOTS_SkillTreeSubsystem_eventUnlockNode_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_UnlockNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_SkillTreeSubsystem_UnlockNode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_UnlockNode_Statics::SOTS_SkillTreeSubsystem_eventUnlockNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_SkillTreeSubsystem_UnlockNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_SkillTreeSubsystem_UnlockNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_SkillTreeSubsystem::execUnlockNode)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_TreeId);
	P_GET_PROPERTY(FNameProperty,Z_Param_NodeId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->UnlockNode(Z_Param_TreeId,Z_Param_NodeId);
	P_NATIVE_END;
}
// ********** End Class USOTS_SkillTreeSubsystem Function UnlockNode *******************************

// ********** Begin Class USOTS_SkillTreeSubsystem Function UnlockSkillNode ************************
struct Z_Construct_UFunction_USOTS_SkillTreeSubsystem_UnlockSkillNode_Statics
{
	struct SOTS_SkillTreeSubsystem_eventUnlockSkillNode_Parms
	{
		FName TreeId;
		FName NodeId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|SkillTree" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Convenience wrapper matching the naming used in higher-level\n// systems (UnlockSkillNode -> UnlockNode).\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convenience wrapper matching the naming used in higher-level\nsystems (UnlockSkillNode -> UnlockNode)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function UnlockSkillNode constinit property declarations ***********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_TreeId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NodeId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UnlockSkillNode constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UnlockSkillNode Property Definitions **********************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_UnlockSkillNode_Statics::NewProp_TreeId = { "TreeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_SkillTreeSubsystem_eventUnlockSkillNode_Parms, TreeId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_UnlockSkillNode_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_SkillTreeSubsystem_eventUnlockSkillNode_Parms, NodeId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USOTS_SkillTreeSubsystem_UnlockSkillNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_SkillTreeSubsystem_eventUnlockSkillNode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_UnlockSkillNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_SkillTreeSubsystem_eventUnlockSkillNode_Parms), &Z_Construct_UFunction_USOTS_SkillTreeSubsystem_UnlockSkillNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_SkillTreeSubsystem_UnlockSkillNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeSubsystem_UnlockSkillNode_Statics::NewProp_TreeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeSubsystem_UnlockSkillNode_Statics::NewProp_NodeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeSubsystem_UnlockSkillNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_UnlockSkillNode_Statics::PropPointers) < 2048);
// ********** End Function UnlockSkillNode Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_SkillTreeSubsystem_UnlockSkillNode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_SkillTreeSubsystem, nullptr, "UnlockSkillNode", 	Z_Construct_UFunction_USOTS_SkillTreeSubsystem_UnlockSkillNode_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_UnlockSkillNode_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_UnlockSkillNode_Statics::SOTS_SkillTreeSubsystem_eventUnlockSkillNode_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_UnlockSkillNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_SkillTreeSubsystem_UnlockSkillNode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_SkillTreeSubsystem_UnlockSkillNode_Statics::SOTS_SkillTreeSubsystem_eventUnlockSkillNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_SkillTreeSubsystem_UnlockSkillNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_SkillTreeSubsystem_UnlockSkillNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_SkillTreeSubsystem::execUnlockSkillNode)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_TreeId);
	P_GET_PROPERTY(FNameProperty,Z_Param_NodeId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->UnlockSkillNode(Z_Param_TreeId,Z_Param_NodeId);
	P_NATIVE_END;
}
// ********** End Class USOTS_SkillTreeSubsystem Function UnlockSkillNode **************************

// ********** Begin Class USOTS_SkillTreeSubsystem *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_SkillTreeSubsystem;
UClass* USOTS_SkillTreeSubsystem::GetPrivateStaticClass()
{
	using TClass = USOTS_SkillTreeSubsystem;
	if (!Z_Registration_Info_UClass_USOTS_SkillTreeSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_SkillTreeSubsystem"),
			Z_Registration_Info_UClass_USOTS_SkillTreeSubsystem.InnerSingleton,
			StaticRegisterNativesUSOTS_SkillTreeSubsystem,
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
	return Z_Registration_Info_UClass_USOTS_SkillTreeSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_SkillTreeSubsystem_NoRegister()
{
	return USOTS_SkillTreeSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_SkillTreeSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Global, backend-only skill tree manager for SOTS.\n *\n * Current structure (v1.0 pattern):\n * - Data: USOTS_SkillTreeDefinition holds a TreeId and an array of\n *   FSOTS_SkillNodeDefinition records (id, text, layout, requirements,\n *   effects). Trees are authored as content-only DataAssets.\n * - Runtime: USOTS_SkillTreeSubsystem owns FSOTS_SkillTreeRuntimeState per\n *   TreeId (unlocked nodes + available points) and mirrors granted tags into\n *   the global tag state so other systems (GAS, MissionDirector, GSM) can\n *   reason about skills via tags.\n * - Frontend: optional USOTS_SkillTreeComponent instances live on actors and\n *   forward unlocks into this subsystem; UI and other systems are expected\n *   to call the subsystem directly for queries and save/load.\n */" },
#endif
		{ "IncludePath", "SOTS_SkillTreeSubsystem.h" },
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Global, backend-only skill tree manager for SOTS.\n\nCurrent structure (v1.0 pattern):\n- Data: USOTS_SkillTreeDefinition holds a TreeId and an array of\n  FSOTS_SkillNodeDefinition records (id, text, layout, requirements,\n  effects). Trees are authored as content-only DataAssets.\n- Runtime: USOTS_SkillTreeSubsystem owns FSOTS_SkillTreeRuntimeState per\n  TreeId (unlocked nodes + available points) and mirrors granted tags into\n  the global tag state so other systems (GAS, MissionDirector, GSM) can\n  reason about skills via tags.\n- Frontend: optional USOTS_SkillTreeComponent instances live on actors and\n  forward unlocks into this subsystem; UI and other systems are expected\n  to call the subsystem directly for queries and save/load." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSkillTreeStateChanged_MetaData[] = {
		{ "Category", "SOTS|SkillTree" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Broadcast whenever a tree's runtime state changes.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Broadcast whenever a tree's runtime state changes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredTrees_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Registered tree definitions by ID.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Registered tree definitions by ID." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeStates_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Runtime unlocked states per tree ID.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Runtime unlocked states per tree ID." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_SkillTreeSubsystem constinit property declarations *****************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSkillTreeStateChanged;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RegisteredTrees_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RegisteredTrees_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_RegisteredTrees;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RuntimeStates_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RuntimeStates_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_RuntimeStates;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USOTS_SkillTreeSubsystem constinit property declarations *******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddSkillPoints"), .Pointer = &USOTS_SkillTreeSubsystem::execAddSkillPoints },
		{ .NameUTF8 = UTF8TEXT("CanGrantAbility"), .Pointer = &USOTS_SkillTreeSubsystem::execCanGrantAbility },
		{ .NameUTF8 = UTF8TEXT("CanRaiseStat"), .Pointer = &USOTS_SkillTreeSubsystem::execCanRaiseStat },
		{ .NameUTF8 = UTF8TEXT("CanUnlockNode"), .Pointer = &USOTS_SkillTreeSubsystem::execCanUnlockNode },
		{ .NameUTF8 = UTF8TEXT("GetAllRuntimeStates"), .Pointer = &USOTS_SkillTreeSubsystem::execGetAllRuntimeStates },
		{ .NameUTF8 = UTF8TEXT("GetAvailableNodes"), .Pointer = &USOTS_SkillTreeSubsystem::execGetAvailableNodes },
		{ .NameUTF8 = UTF8TEXT("GetGrantedTagsForTree"), .Pointer = &USOTS_SkillTreeSubsystem::execGetGrantedTagsForTree },
		{ .NameUTF8 = UTF8TEXT("GetNodeStatus"), .Pointer = &USOTS_SkillTreeSubsystem::execGetNodeStatus },
		{ .NameUTF8 = UTF8TEXT("GetRegisteredTreeIds"), .Pointer = &USOTS_SkillTreeSubsystem::execGetRegisteredTreeIds },
		{ .NameUTF8 = UTF8TEXT("GetRuntimeState"), .Pointer = &USOTS_SkillTreeSubsystem::execGetRuntimeState },
		{ .NameUTF8 = UTF8TEXT("GetSkillTreeOverview"), .Pointer = &USOTS_SkillTreeSubsystem::execGetSkillTreeOverview },
		{ .NameUTF8 = UTF8TEXT("HasSkillTag"), .Pointer = &USOTS_SkillTreeSubsystem::execHasSkillTag },
		{ .NameUTF8 = UTF8TEXT("IsNodeUnlocked"), .Pointer = &USOTS_SkillTreeSubsystem::execIsNodeUnlocked },
		{ .NameUTF8 = UTF8TEXT("LoadSkillTreeState"), .Pointer = &USOTS_SkillTreeSubsystem::execLoadSkillTreeState },
		{ .NameUTF8 = UTF8TEXT("RefundSkillNode"), .Pointer = &USOTS_SkillTreeSubsystem::execRefundSkillNode },
		{ .NameUTF8 = UTF8TEXT("RegisterSkillTree"), .Pointer = &USOTS_SkillTreeSubsystem::execRegisterSkillTree },
		{ .NameUTF8 = UTF8TEXT("ResetAllSkillTrees"), .Pointer = &USOTS_SkillTreeSubsystem::execResetAllSkillTrees },
		{ .NameUTF8 = UTF8TEXT("RestoreRuntimeStates"), .Pointer = &USOTS_SkillTreeSubsystem::execRestoreRuntimeStates },
		{ .NameUTF8 = UTF8TEXT("SaveSkillTreeState"), .Pointer = &USOTS_SkillTreeSubsystem::execSaveSkillTreeState },
		{ .NameUTF8 = UTF8TEXT("TryUnlockNode"), .Pointer = &USOTS_SkillTreeSubsystem::execTryUnlockNode },
		{ .NameUTF8 = UTF8TEXT("UnlockNode"), .Pointer = &USOTS_SkillTreeSubsystem::execUnlockNode },
		{ .NameUTF8 = UTF8TEXT("UnlockSkillNode"), .Pointer = &USOTS_SkillTreeSubsystem::execUnlockSkillNode },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USOTS_SkillTreeSubsystem_AddSkillPoints, "AddSkillPoints" }, // 3590658613
		{ &Z_Construct_UFunction_USOTS_SkillTreeSubsystem_CanGrantAbility, "CanGrantAbility" }, // 3406409950
		{ &Z_Construct_UFunction_USOTS_SkillTreeSubsystem_CanRaiseStat, "CanRaiseStat" }, // 1931432296
		{ &Z_Construct_UFunction_USOTS_SkillTreeSubsystem_CanUnlockNode, "CanUnlockNode" }, // 3830999729
		{ &Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetAllRuntimeStates, "GetAllRuntimeStates" }, // 1712481462
		{ &Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetAvailableNodes, "GetAvailableNodes" }, // 1566309730
		{ &Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetGrantedTagsForTree, "GetGrantedTagsForTree" }, // 2998629096
		{ &Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetNodeStatus, "GetNodeStatus" }, // 1098744527
		{ &Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetRegisteredTreeIds, "GetRegisteredTreeIds" }, // 4018735629
		{ &Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetRuntimeState, "GetRuntimeState" }, // 268952175
		{ &Z_Construct_UFunction_USOTS_SkillTreeSubsystem_GetSkillTreeOverview, "GetSkillTreeOverview" }, // 267808525
		{ &Z_Construct_UFunction_USOTS_SkillTreeSubsystem_HasSkillTag, "HasSkillTag" }, // 4191194272
		{ &Z_Construct_UFunction_USOTS_SkillTreeSubsystem_IsNodeUnlocked, "IsNodeUnlocked" }, // 3236330868
		{ &Z_Construct_UFunction_USOTS_SkillTreeSubsystem_LoadSkillTreeState, "LoadSkillTreeState" }, // 2415311002
		{ &Z_Construct_UDelegateFunction_USOTS_SkillTreeSubsystem_OnSkillTreeStateChanged__DelegateSignature, "OnSkillTreeStateChanged__DelegateSignature" }, // 2331249123
		{ &Z_Construct_UFunction_USOTS_SkillTreeSubsystem_RefundSkillNode, "RefundSkillNode" }, // 743553621
		{ &Z_Construct_UFunction_USOTS_SkillTreeSubsystem_RegisterSkillTree, "RegisterSkillTree" }, // 1897364291
		{ &Z_Construct_UFunction_USOTS_SkillTreeSubsystem_ResetAllSkillTrees, "ResetAllSkillTrees" }, // 565213280
		{ &Z_Construct_UFunction_USOTS_SkillTreeSubsystem_RestoreRuntimeStates, "RestoreRuntimeStates" }, // 2633595302
		{ &Z_Construct_UFunction_USOTS_SkillTreeSubsystem_SaveSkillTreeState, "SaveSkillTreeState" }, // 3134003213
		{ &Z_Construct_UFunction_USOTS_SkillTreeSubsystem_TryUnlockNode, "TryUnlockNode" }, // 3363703926
		{ &Z_Construct_UFunction_USOTS_SkillTreeSubsystem_UnlockNode, "UnlockNode" }, // 3013829284
		{ &Z_Construct_UFunction_USOTS_SkillTreeSubsystem_UnlockSkillNode, "UnlockSkillNode" }, // 1890796948
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_SkillTreeSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_SkillTreeSubsystem_Statics

// ********** Begin Class USOTS_SkillTreeSubsystem Property Definitions ****************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USOTS_SkillTreeSubsystem_Statics::NewProp_OnSkillTreeStateChanged = { "OnSkillTreeStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_SkillTreeSubsystem, OnSkillTreeStateChanged), Z_Construct_UDelegateFunction_USOTS_SkillTreeSubsystem_OnSkillTreeStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSkillTreeStateChanged_MetaData), NewProp_OnSkillTreeStateChanged_MetaData) }; // 2331249123
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USOTS_SkillTreeSubsystem_Statics::NewProp_RegisteredTrees_ValueProp = { "RegisteredTrees", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USOTS_SkillTreeDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USOTS_SkillTreeSubsystem_Statics::NewProp_RegisteredTrees_Key_KeyProp = { "RegisteredTrees_Key", nullptr, (EPropertyFlags)0x0100000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USOTS_SkillTreeSubsystem_Statics::NewProp_RegisteredTrees = { "RegisteredTrees", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_SkillTreeSubsystem, RegisteredTrees), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegisteredTrees_MetaData), NewProp_RegisteredTrees_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_SkillTreeSubsystem_Statics::NewProp_RuntimeStates_ValueProp = { "RuntimeStates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSOTS_SkillTreeRuntimeState, METADATA_PARAMS(0, nullptr) }; // 2780143163
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USOTS_SkillTreeSubsystem_Statics::NewProp_RuntimeStates_Key_KeyProp = { "RuntimeStates_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USOTS_SkillTreeSubsystem_Statics::NewProp_RuntimeStates = { "RuntimeStates", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_SkillTreeSubsystem, RuntimeStates), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuntimeStates_MetaData), NewProp_RuntimeStates_MetaData) }; // 2780143163
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USOTS_SkillTreeSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_SkillTreeSubsystem_Statics::NewProp_OnSkillTreeStateChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_SkillTreeSubsystem_Statics::NewProp_RegisteredTrees_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_SkillTreeSubsystem_Statics::NewProp_RegisteredTrees_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_SkillTreeSubsystem_Statics::NewProp_RegisteredTrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_SkillTreeSubsystem_Statics::NewProp_RuntimeStates_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_SkillTreeSubsystem_Statics::NewProp_RuntimeStates_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_SkillTreeSubsystem_Statics::NewProp_RuntimeStates,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_SkillTreeSubsystem_Statics::PropPointers) < 2048);
// ********** End Class USOTS_SkillTreeSubsystem Property Definitions ******************************
UObject* (*const Z_Construct_UClass_USOTS_SkillTreeSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_SkillTree,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_SkillTreeSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_SkillTreeSubsystem_Statics::ClassParams = {
	&USOTS_SkillTreeSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USOTS_SkillTreeSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_SkillTreeSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_SkillTreeSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_SkillTreeSubsystem_Statics::Class_MetaDataParams)
};
void USOTS_SkillTreeSubsystem::StaticRegisterNativesUSOTS_SkillTreeSubsystem()
{
	UClass* Class = USOTS_SkillTreeSubsystem::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USOTS_SkillTreeSubsystem_Statics::Funcs));
}
UClass* Z_Construct_UClass_USOTS_SkillTreeSubsystem()
{
	if (!Z_Registration_Info_UClass_USOTS_SkillTreeSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_SkillTreeSubsystem.OuterSingleton, Z_Construct_UClass_USOTS_SkillTreeSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_SkillTreeSubsystem.OuterSingleton;
}
USOTS_SkillTreeSubsystem::USOTS_SkillTreeSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_SkillTreeSubsystem);
USOTS_SkillTreeSubsystem::~USOTS_SkillTreeSubsystem() {}
// ********** End Class USOTS_SkillTreeSubsystem ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeSubsystem_h__Script_SOTS_SkillTree_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_SkillTreeSubsystem, USOTS_SkillTreeSubsystem::StaticClass, TEXT("USOTS_SkillTreeSubsystem"), &Z_Registration_Info_UClass_USOTS_SkillTreeSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_SkillTreeSubsystem), 3488655537U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeSubsystem_h__Script_SOTS_SkillTree_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeSubsystem_h__Script_SOTS_SkillTree_52119745{
	TEXT("/Script/SOTS_SkillTree"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeSubsystem_h__Script_SOTS_SkillTree_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeSubsystem_h__Script_SOTS_SkillTree_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
