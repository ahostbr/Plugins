// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Subsystems/SOTS_AbilityRegistrySubsystem.h"
#include "Data/SOTS_AbilityDataAssets.h"
#include "Data/SOTS_AbilityTypes.h"
#include "Engine/GameInstance.h"
#include "GameplayTagContainer.h"
#include "SOTS_GAS_AbilityRequirementLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_AbilityRegistrySubsystem() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_USOTS_AbilityDefinitionDA_NoRegister();
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_USOTS_AbilityDefinitionLibrary_NoRegister();
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_USOTS_AbilityRegistrySubsystem();
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_USOTS_AbilityRegistrySubsystem_NoRegister();
SOTS_GAS_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition();
SOTS_GAS_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_AbilityRequirementCheckResult();
UPackage* Z_Construct_UPackage__Script_SOTS_GAS_Plugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USOTS_AbilityRegistrySubsystem Function CanActivateAbilityByTag **********
struct Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_CanActivateAbilityByTag_Statics
{
	struct SOTS_AbilityRegistrySubsystem_eventCanActivateAbilityByTag_Parms
	{
		const UObject* WorldContextObject;
		FGameplayTag AbilityTag;
		FText OutFailureReason;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS Ability|Registry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Convenience wrapper that returns a bool (meets all requirements) and a\n// localized failure reason suitable for UI.\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/SOTS_AbilityRegistrySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convenience wrapper that returns a bool (meets all requirements) and a\nlocalized failure reason suitable for UI." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function CanActivateAbilityByTag constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static const UECodeGen_Private::FTextPropertyParams NewProp_OutFailureReason;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CanActivateAbilityByTag constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CanActivateAbilityByTag Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_CanActivateAbilityByTag_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AbilityRegistrySubsystem_eventCanActivateAbilityByTag_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_CanActivateAbilityByTag_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AbilityRegistrySubsystem_eventCanActivateAbilityByTag_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_CanActivateAbilityByTag_Statics::NewProp_OutFailureReason = { "OutFailureReason", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AbilityRegistrySubsystem_eventCanActivateAbilityByTag_Parms, OutFailureReason), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_CanActivateAbilityByTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_AbilityRegistrySubsystem_eventCanActivateAbilityByTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_CanActivateAbilityByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_AbilityRegistrySubsystem_eventCanActivateAbilityByTag_Parms), &Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_CanActivateAbilityByTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_CanActivateAbilityByTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_CanActivateAbilityByTag_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_CanActivateAbilityByTag_Statics::NewProp_AbilityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_CanActivateAbilityByTag_Statics::NewProp_OutFailureReason,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_CanActivateAbilityByTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_CanActivateAbilityByTag_Statics::PropPointers) < 2048);
// ********** End Function CanActivateAbilityByTag Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_CanActivateAbilityByTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_AbilityRegistrySubsystem, nullptr, "CanActivateAbilityByTag", 	Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_CanActivateAbilityByTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_CanActivateAbilityByTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_CanActivateAbilityByTag_Statics::SOTS_AbilityRegistrySubsystem_eventCanActivateAbilityByTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_CanActivateAbilityByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_CanActivateAbilityByTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_CanActivateAbilityByTag_Statics::SOTS_AbilityRegistrySubsystem_eventCanActivateAbilityByTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_CanActivateAbilityByTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_CanActivateAbilityByTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_AbilityRegistrySubsystem::execCanActivateAbilityByTag)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTag);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutFailureReason);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanActivateAbilityByTag(Z_Param_WorldContextObject,Z_Param_AbilityTag,Z_Param_Out_OutFailureReason);
	P_NATIVE_END;
}
// ********** End Class USOTS_AbilityRegistrySubsystem Function CanActivateAbilityByTag ************

// ********** Begin Class USOTS_AbilityRegistrySubsystem Function EvaluateAbilityRequirementsForTag 
struct Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_EvaluateAbilityRequirementsForTag_Statics
{
	struct SOTS_AbilityRegistrySubsystem_eventEvaluateAbilityRequirementsForTag_Parms
	{
		const UObject* WorldContextObject;
		FGameplayTag AbilityTag;
		FSOTS_AbilityRequirementCheckResult OutResult;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS Ability|Registry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Evaluate authored requirements for an ability definition by tag. If no\n// definition or no authored requirements are found, the result is treated\n// as \"all requirements met\" but a warning is logged for missing defs.\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/SOTS_AbilityRegistrySubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Evaluate authored requirements for an ability definition by tag. If no\ndefinition or no authored requirements are found, the result is treated\nas \"all requirements met\" but a warning is logged for missing defs." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function EvaluateAbilityRequirementsForTag constinit property declarations *****
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutResult;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EvaluateAbilityRequirementsForTag constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EvaluateAbilityRequirementsForTag Property Definitions ****************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_EvaluateAbilityRequirementsForTag_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AbilityRegistrySubsystem_eventEvaluateAbilityRequirementsForTag_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_EvaluateAbilityRequirementsForTag_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AbilityRegistrySubsystem_eventEvaluateAbilityRequirementsForTag_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_EvaluateAbilityRequirementsForTag_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AbilityRegistrySubsystem_eventEvaluateAbilityRequirementsForTag_Parms, OutResult), Z_Construct_UScriptStruct_FSOTS_AbilityRequirementCheckResult, METADATA_PARAMS(0, nullptr) }; // 660306694
void Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_EvaluateAbilityRequirementsForTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_AbilityRegistrySubsystem_eventEvaluateAbilityRequirementsForTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_EvaluateAbilityRequirementsForTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_AbilityRegistrySubsystem_eventEvaluateAbilityRequirementsForTag_Parms), &Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_EvaluateAbilityRequirementsForTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_EvaluateAbilityRequirementsForTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_EvaluateAbilityRequirementsForTag_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_EvaluateAbilityRequirementsForTag_Statics::NewProp_AbilityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_EvaluateAbilityRequirementsForTag_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_EvaluateAbilityRequirementsForTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_EvaluateAbilityRequirementsForTag_Statics::PropPointers) < 2048);
// ********** End Function EvaluateAbilityRequirementsForTag Property Definitions ******************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_EvaluateAbilityRequirementsForTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_AbilityRegistrySubsystem, nullptr, "EvaluateAbilityRequirementsForTag", 	Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_EvaluateAbilityRequirementsForTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_EvaluateAbilityRequirementsForTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_EvaluateAbilityRequirementsForTag_Statics::SOTS_AbilityRegistrySubsystem_eventEvaluateAbilityRequirementsForTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_EvaluateAbilityRequirementsForTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_EvaluateAbilityRequirementsForTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_EvaluateAbilityRequirementsForTag_Statics::SOTS_AbilityRegistrySubsystem_eventEvaluateAbilityRequirementsForTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_EvaluateAbilityRequirementsForTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_EvaluateAbilityRequirementsForTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_AbilityRegistrySubsystem::execEvaluateAbilityRequirementsForTag)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTag);
	P_GET_STRUCT_REF(FSOTS_AbilityRequirementCheckResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->EvaluateAbilityRequirementsForTag(Z_Param_WorldContextObject,Z_Param_AbilityTag,Z_Param_Out_OutResult);
	P_NATIVE_END;
}
// ********** End Class USOTS_AbilityRegistrySubsystem Function EvaluateAbilityRequirementsForTag **

// ********** Begin Class USOTS_AbilityRegistrySubsystem Function GetAbilityDefinitionByTag ********
struct Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_GetAbilityDefinitionByTag_Statics
{
	struct SOTS_AbilityRegistrySubsystem_eventGetAbilityDefinitionByTag_Parms
	{
		FGameplayTag AbilityTag;
		F_SOTS_AbilityDefinition OutDefinition;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS Ability|Registry" },
		{ "ModuleRelativePath", "Public/Subsystems/SOTS_AbilityRegistrySubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAbilityDefinitionByTag constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutDefinition;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAbilityDefinitionByTag constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAbilityDefinitionByTag Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_GetAbilityDefinitionByTag_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AbilityRegistrySubsystem_eventGetAbilityDefinitionByTag_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_GetAbilityDefinitionByTag_Statics::NewProp_OutDefinition = { "OutDefinition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AbilityRegistrySubsystem_eventGetAbilityDefinitionByTag_Parms, OutDefinition), Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition, METADATA_PARAMS(0, nullptr) }; // 2812081814
void Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_GetAbilityDefinitionByTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_AbilityRegistrySubsystem_eventGetAbilityDefinitionByTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_GetAbilityDefinitionByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_AbilityRegistrySubsystem_eventGetAbilityDefinitionByTag_Parms), &Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_GetAbilityDefinitionByTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_GetAbilityDefinitionByTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_GetAbilityDefinitionByTag_Statics::NewProp_AbilityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_GetAbilityDefinitionByTag_Statics::NewProp_OutDefinition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_GetAbilityDefinitionByTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_GetAbilityDefinitionByTag_Statics::PropPointers) < 2048);
// ********** End Function GetAbilityDefinitionByTag Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_GetAbilityDefinitionByTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_AbilityRegistrySubsystem, nullptr, "GetAbilityDefinitionByTag", 	Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_GetAbilityDefinitionByTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_GetAbilityDefinitionByTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_GetAbilityDefinitionByTag_Statics::SOTS_AbilityRegistrySubsystem_eventGetAbilityDefinitionByTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_GetAbilityDefinitionByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_GetAbilityDefinitionByTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_GetAbilityDefinitionByTag_Statics::SOTS_AbilityRegistrySubsystem_eventGetAbilityDefinitionByTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_GetAbilityDefinitionByTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_GetAbilityDefinitionByTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_AbilityRegistrySubsystem::execGetAbilityDefinitionByTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTag);
	P_GET_STRUCT_REF(F_SOTS_AbilityDefinition,Z_Param_Out_OutDefinition);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetAbilityDefinitionByTag(Z_Param_AbilityTag,Z_Param_Out_OutDefinition);
	P_NATIVE_END;
}
// ********** End Class USOTS_AbilityRegistrySubsystem Function GetAbilityDefinitionByTag **********

// ********** Begin Class USOTS_AbilityRegistrySubsystem Function GetAbilityDefinitionDAByTag ******
struct Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_GetAbilityDefinitionDAByTag_Statics
{
	struct SOTS_AbilityRegistrySubsystem_eventGetAbilityDefinitionDAByTag_Parms
	{
		FGameplayTag AbilityTag;
		USOTS_AbilityDefinitionDA* OutDefinitionDA;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS Ability|Registry" },
		{ "ModuleRelativePath", "Public/Subsystems/SOTS_AbilityRegistrySubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAbilityDefinitionDAByTag constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutDefinitionDA;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAbilityDefinitionDAByTag constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAbilityDefinitionDAByTag Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_GetAbilityDefinitionDAByTag_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AbilityRegistrySubsystem_eventGetAbilityDefinitionDAByTag_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_GetAbilityDefinitionDAByTag_Statics::NewProp_OutDefinitionDA = { "OutDefinitionDA", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AbilityRegistrySubsystem_eventGetAbilityDefinitionDAByTag_Parms, OutDefinitionDA), Z_Construct_UClass_USOTS_AbilityDefinitionDA_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_GetAbilityDefinitionDAByTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_AbilityRegistrySubsystem_eventGetAbilityDefinitionDAByTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_GetAbilityDefinitionDAByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_AbilityRegistrySubsystem_eventGetAbilityDefinitionDAByTag_Parms), &Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_GetAbilityDefinitionDAByTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_GetAbilityDefinitionDAByTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_GetAbilityDefinitionDAByTag_Statics::NewProp_AbilityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_GetAbilityDefinitionDAByTag_Statics::NewProp_OutDefinitionDA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_GetAbilityDefinitionDAByTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_GetAbilityDefinitionDAByTag_Statics::PropPointers) < 2048);
// ********** End Function GetAbilityDefinitionDAByTag Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_GetAbilityDefinitionDAByTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_AbilityRegistrySubsystem, nullptr, "GetAbilityDefinitionDAByTag", 	Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_GetAbilityDefinitionDAByTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_GetAbilityDefinitionDAByTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_GetAbilityDefinitionDAByTag_Statics::SOTS_AbilityRegistrySubsystem_eventGetAbilityDefinitionDAByTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_GetAbilityDefinitionDAByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_GetAbilityDefinitionDAByTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_GetAbilityDefinitionDAByTag_Statics::SOTS_AbilityRegistrySubsystem_eventGetAbilityDefinitionDAByTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_GetAbilityDefinitionDAByTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_GetAbilityDefinitionDAByTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_AbilityRegistrySubsystem::execGetAbilityDefinitionDAByTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTag);
	P_GET_OBJECT_REF(USOTS_AbilityDefinitionDA,Z_Param_Out_OutDefinitionDA);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetAbilityDefinitionDAByTag(Z_Param_AbilityTag,P_ARG_GC_BARRIER(Z_Param_Out_OutDefinitionDA));
	P_NATIVE_END;
}
// ********** End Class USOTS_AbilityRegistrySubsystem Function GetAbilityDefinitionDAByTag ********

// ********** Begin Class USOTS_AbilityRegistrySubsystem Function GetAllAbilityDefinitions *********
struct Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_GetAllAbilityDefinitions_Statics
{
	struct SOTS_AbilityRegistrySubsystem_eventGetAllAbilityDefinitions_Parms
	{
		TArray<F_SOTS_AbilityDefinition> OutDefinitions;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS Ability|Registry" },
		{ "ModuleRelativePath", "Public/Subsystems/SOTS_AbilityRegistrySubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAllAbilityDefinitions constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutDefinitions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutDefinitions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAllAbilityDefinitions constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAllAbilityDefinitions Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_GetAllAbilityDefinitions_Statics::NewProp_OutDefinitions_Inner = { "OutDefinitions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition, METADATA_PARAMS(0, nullptr) }; // 2812081814
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_GetAllAbilityDefinitions_Statics::NewProp_OutDefinitions = { "OutDefinitions", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AbilityRegistrySubsystem_eventGetAllAbilityDefinitions_Parms, OutDefinitions), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2812081814
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_GetAllAbilityDefinitions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_GetAllAbilityDefinitions_Statics::NewProp_OutDefinitions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_GetAllAbilityDefinitions_Statics::NewProp_OutDefinitions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_GetAllAbilityDefinitions_Statics::PropPointers) < 2048);
// ********** End Function GetAllAbilityDefinitions Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_GetAllAbilityDefinitions_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_AbilityRegistrySubsystem, nullptr, "GetAllAbilityDefinitions", 	Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_GetAllAbilityDefinitions_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_GetAllAbilityDefinitions_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_GetAllAbilityDefinitions_Statics::SOTS_AbilityRegistrySubsystem_eventGetAllAbilityDefinitions_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_GetAllAbilityDefinitions_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_GetAllAbilityDefinitions_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_GetAllAbilityDefinitions_Statics::SOTS_AbilityRegistrySubsystem_eventGetAllAbilityDefinitions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_GetAllAbilityDefinitions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_GetAllAbilityDefinitions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_AbilityRegistrySubsystem::execGetAllAbilityDefinitions)
{
	P_GET_TARRAY_REF(F_SOTS_AbilityDefinition,Z_Param_Out_OutDefinitions);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAllAbilityDefinitions(Z_Param_Out_OutDefinitions);
	P_NATIVE_END;
}
// ********** End Class USOTS_AbilityRegistrySubsystem Function GetAllAbilityDefinitions ***********

// ********** Begin Class USOTS_AbilityRegistrySubsystem Function RegisterAbilityDefinition ********
struct Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinition_Statics
{
	struct SOTS_AbilityRegistrySubsystem_eventRegisterAbilityDefinition_Parms
	{
		F_SOTS_AbilityDefinition Definition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS Ability|Registry" },
		{ "ModuleRelativePath", "Public/Subsystems/SOTS_AbilityRegistrySubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Definition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RegisterAbilityDefinition constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Definition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RegisterAbilityDefinition constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RegisterAbilityDefinition Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinition_Statics::NewProp_Definition = { "Definition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AbilityRegistrySubsystem_eventRegisterAbilityDefinition_Parms, Definition), Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Definition_MetaData), NewProp_Definition_MetaData) }; // 2812081814
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinition_Statics::NewProp_Definition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinition_Statics::PropPointers) < 2048);
// ********** End Function RegisterAbilityDefinition Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_AbilityRegistrySubsystem, nullptr, "RegisterAbilityDefinition", 	Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinition_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinition_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinition_Statics::SOTS_AbilityRegistrySubsystem_eventRegisterAbilityDefinition_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinition_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinition_Statics::SOTS_AbilityRegistrySubsystem_eventRegisterAbilityDefinition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_AbilityRegistrySubsystem::execRegisterAbilityDefinition)
{
	P_GET_STRUCT_REF(F_SOTS_AbilityDefinition,Z_Param_Out_Definition);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterAbilityDefinition(Z_Param_Out_Definition);
	P_NATIVE_END;
}
// ********** End Class USOTS_AbilityRegistrySubsystem Function RegisterAbilityDefinition **********

// ********** Begin Class USOTS_AbilityRegistrySubsystem Function RegisterAbilityDefinitionDA ******
struct Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinitionDA_Statics
{
	struct SOTS_AbilityRegistrySubsystem_eventRegisterAbilityDefinitionDA_Parms
	{
		USOTS_AbilityDefinitionDA* DefinitionDA;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS Ability|Registry" },
		{ "ModuleRelativePath", "Public/Subsystems/SOTS_AbilityRegistrySubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RegisterAbilityDefinitionDA constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefinitionDA;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RegisterAbilityDefinitionDA constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RegisterAbilityDefinitionDA Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinitionDA_Statics::NewProp_DefinitionDA = { "DefinitionDA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AbilityRegistrySubsystem_eventRegisterAbilityDefinitionDA_Parms, DefinitionDA), Z_Construct_UClass_USOTS_AbilityDefinitionDA_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinitionDA_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinitionDA_Statics::NewProp_DefinitionDA,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinitionDA_Statics::PropPointers) < 2048);
// ********** End Function RegisterAbilityDefinitionDA Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinitionDA_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_AbilityRegistrySubsystem, nullptr, "RegisterAbilityDefinitionDA", 	Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinitionDA_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinitionDA_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinitionDA_Statics::SOTS_AbilityRegistrySubsystem_eventRegisterAbilityDefinitionDA_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinitionDA_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinitionDA_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinitionDA_Statics::SOTS_AbilityRegistrySubsystem_eventRegisterAbilityDefinitionDA_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinitionDA()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinitionDA_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_AbilityRegistrySubsystem::execRegisterAbilityDefinitionDA)
{
	P_GET_OBJECT(USOTS_AbilityDefinitionDA,Z_Param_DefinitionDA);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterAbilityDefinitionDA(Z_Param_DefinitionDA);
	P_NATIVE_END;
}
// ********** End Class USOTS_AbilityRegistrySubsystem Function RegisterAbilityDefinitionDA ********

// ********** Begin Class USOTS_AbilityRegistrySubsystem Function RegisterAbilityDefinitionsFromArray 
struct Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinitionsFromArray_Statics
{
	struct SOTS_AbilityRegistrySubsystem_eventRegisterAbilityDefinitionsFromArray_Parms
	{
		TArray<USOTS_AbilityDefinitionDA*> Definitions;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS Ability|Registry" },
		{ "ModuleRelativePath", "Public/Subsystems/SOTS_AbilityRegistrySubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Definitions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RegisterAbilityDefinitionsFromArray constinit property declarations ***
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Definitions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Definitions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RegisterAbilityDefinitionsFromArray constinit property declarations *****
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RegisterAbilityDefinitionsFromArray Property Definitions **************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinitionsFromArray_Statics::NewProp_Definitions_Inner = { "Definitions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USOTS_AbilityDefinitionDA_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinitionsFromArray_Statics::NewProp_Definitions = { "Definitions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AbilityRegistrySubsystem_eventRegisterAbilityDefinitionsFromArray_Parms, Definitions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Definitions_MetaData), NewProp_Definitions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinitionsFromArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinitionsFromArray_Statics::NewProp_Definitions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinitionsFromArray_Statics::NewProp_Definitions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinitionsFromArray_Statics::PropPointers) < 2048);
// ********** End Function RegisterAbilityDefinitionsFromArray Property Definitions ****************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinitionsFromArray_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_AbilityRegistrySubsystem, nullptr, "RegisterAbilityDefinitionsFromArray", 	Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinitionsFromArray_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinitionsFromArray_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinitionsFromArray_Statics::SOTS_AbilityRegistrySubsystem_eventRegisterAbilityDefinitionsFromArray_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinitionsFromArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinitionsFromArray_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinitionsFromArray_Statics::SOTS_AbilityRegistrySubsystem_eventRegisterAbilityDefinitionsFromArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinitionsFromArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinitionsFromArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_AbilityRegistrySubsystem::execRegisterAbilityDefinitionsFromArray)
{
	P_GET_TARRAY_REF(USOTS_AbilityDefinitionDA*,Z_Param_Out_Definitions);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterAbilityDefinitionsFromArray(Z_Param_Out_Definitions);
	P_NATIVE_END;
}
// ********** End Class USOTS_AbilityRegistrySubsystem Function RegisterAbilityDefinitionsFromArray 

// ********** Begin Class USOTS_AbilityRegistrySubsystem Function RegisterAbilityDefinitionsFromDataAsset 
struct Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinitionsFromDataAsset_Statics
{
	struct SOTS_AbilityRegistrySubsystem_eventRegisterAbilityDefinitionsFromDataAsset_Parms
	{
		USOTS_AbilityDefinitionLibrary* Library;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS Ability|Registry" },
		{ "ModuleRelativePath", "Public/Subsystems/SOTS_AbilityRegistrySubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RegisterAbilityDefinitionsFromDataAsset constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Library;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RegisterAbilityDefinitionsFromDataAsset constinit property declarations *
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RegisterAbilityDefinitionsFromDataAsset Property Definitions **********
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinitionsFromDataAsset_Statics::NewProp_Library = { "Library", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AbilityRegistrySubsystem_eventRegisterAbilityDefinitionsFromDataAsset_Parms, Library), Z_Construct_UClass_USOTS_AbilityDefinitionLibrary_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinitionsFromDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinitionsFromDataAsset_Statics::NewProp_Library,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinitionsFromDataAsset_Statics::PropPointers) < 2048);
// ********** End Function RegisterAbilityDefinitionsFromDataAsset Property Definitions ************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinitionsFromDataAsset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_AbilityRegistrySubsystem, nullptr, "RegisterAbilityDefinitionsFromDataAsset", 	Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinitionsFromDataAsset_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinitionsFromDataAsset_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinitionsFromDataAsset_Statics::SOTS_AbilityRegistrySubsystem_eventRegisterAbilityDefinitionsFromDataAsset_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinitionsFromDataAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinitionsFromDataAsset_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinitionsFromDataAsset_Statics::SOTS_AbilityRegistrySubsystem_eventRegisterAbilityDefinitionsFromDataAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinitionsFromDataAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinitionsFromDataAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_AbilityRegistrySubsystem::execRegisterAbilityDefinitionsFromDataAsset)
{
	P_GET_OBJECT(USOTS_AbilityDefinitionLibrary,Z_Param_Library);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterAbilityDefinitionsFromDataAsset(Z_Param_Library);
	P_NATIVE_END;
}
// ********** End Class USOTS_AbilityRegistrySubsystem Function RegisterAbilityDefinitionsFromDataAsset 

// ********** Begin Class USOTS_AbilityRegistrySubsystem *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_AbilityRegistrySubsystem;
UClass* USOTS_AbilityRegistrySubsystem::GetPrivateStaticClass()
{
	using TClass = USOTS_AbilityRegistrySubsystem;
	if (!Z_Registration_Info_UClass_USOTS_AbilityRegistrySubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_AbilityRegistrySubsystem"),
			Z_Registration_Info_UClass_USOTS_AbilityRegistrySubsystem.InnerSingleton,
			StaticRegisterNativesUSOTS_AbilityRegistrySubsystem,
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
	return Z_Registration_Info_UClass_USOTS_AbilityRegistrySubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_AbilityRegistrySubsystem_NoRegister()
{
	return USOTS_AbilityRegistrySubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_AbilityRegistrySubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Subsystems/SOTS_AbilityRegistrySubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/SOTS_AbilityRegistrySubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityDefinitions_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsystems/SOTS_AbilityRegistrySubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityDefinitionAssets_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsystems/SOTS_AbilityRegistrySubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_AbilityRegistrySubsystem constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityDefinitions_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityDefinitions_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AbilityDefinitions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityDefinitionAssets_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityDefinitionAssets_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AbilityDefinitionAssets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USOTS_AbilityRegistrySubsystem constinit property declarations *************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CanActivateAbilityByTag"), .Pointer = &USOTS_AbilityRegistrySubsystem::execCanActivateAbilityByTag },
		{ .NameUTF8 = UTF8TEXT("EvaluateAbilityRequirementsForTag"), .Pointer = &USOTS_AbilityRegistrySubsystem::execEvaluateAbilityRequirementsForTag },
		{ .NameUTF8 = UTF8TEXT("GetAbilityDefinitionByTag"), .Pointer = &USOTS_AbilityRegistrySubsystem::execGetAbilityDefinitionByTag },
		{ .NameUTF8 = UTF8TEXT("GetAbilityDefinitionDAByTag"), .Pointer = &USOTS_AbilityRegistrySubsystem::execGetAbilityDefinitionDAByTag },
		{ .NameUTF8 = UTF8TEXT("GetAllAbilityDefinitions"), .Pointer = &USOTS_AbilityRegistrySubsystem::execGetAllAbilityDefinitions },
		{ .NameUTF8 = UTF8TEXT("RegisterAbilityDefinition"), .Pointer = &USOTS_AbilityRegistrySubsystem::execRegisterAbilityDefinition },
		{ .NameUTF8 = UTF8TEXT("RegisterAbilityDefinitionDA"), .Pointer = &USOTS_AbilityRegistrySubsystem::execRegisterAbilityDefinitionDA },
		{ .NameUTF8 = UTF8TEXT("RegisterAbilityDefinitionsFromArray"), .Pointer = &USOTS_AbilityRegistrySubsystem::execRegisterAbilityDefinitionsFromArray },
		{ .NameUTF8 = UTF8TEXT("RegisterAbilityDefinitionsFromDataAsset"), .Pointer = &USOTS_AbilityRegistrySubsystem::execRegisterAbilityDefinitionsFromDataAsset },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_CanActivateAbilityByTag, "CanActivateAbilityByTag" }, // 4269747565
		{ &Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_EvaluateAbilityRequirementsForTag, "EvaluateAbilityRequirementsForTag" }, // 752464780
		{ &Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_GetAbilityDefinitionByTag, "GetAbilityDefinitionByTag" }, // 2493868928
		{ &Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_GetAbilityDefinitionDAByTag, "GetAbilityDefinitionDAByTag" }, // 115507638
		{ &Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_GetAllAbilityDefinitions, "GetAllAbilityDefinitions" }, // 2556345426
		{ &Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinition, "RegisterAbilityDefinition" }, // 2823973421
		{ &Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinitionDA, "RegisterAbilityDefinitionDA" }, // 1511485872
		{ &Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinitionsFromArray, "RegisterAbilityDefinitionsFromArray" }, // 2343545234
		{ &Z_Construct_UFunction_USOTS_AbilityRegistrySubsystem_RegisterAbilityDefinitionsFromDataAsset, "RegisterAbilityDefinitionsFromDataAsset" }, // 1986530317
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_AbilityRegistrySubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_AbilityRegistrySubsystem_Statics

// ********** Begin Class USOTS_AbilityRegistrySubsystem Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_AbilityRegistrySubsystem_Statics::NewProp_AbilityDefinitions_ValueProp = { "AbilityDefinitions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition, METADATA_PARAMS(0, nullptr) }; // 2812081814
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_AbilityRegistrySubsystem_Statics::NewProp_AbilityDefinitions_Key_KeyProp = { "AbilityDefinitions_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USOTS_AbilityRegistrySubsystem_Statics::NewProp_AbilityDefinitions = { "AbilityDefinitions", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AbilityRegistrySubsystem, AbilityDefinitions), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityDefinitions_MetaData), NewProp_AbilityDefinitions_MetaData) }; // 517357616 2812081814
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USOTS_AbilityRegistrySubsystem_Statics::NewProp_AbilityDefinitionAssets_ValueProp = { "AbilityDefinitionAssets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USOTS_AbilityDefinitionDA_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_AbilityRegistrySubsystem_Statics::NewProp_AbilityDefinitionAssets_Key_KeyProp = { "AbilityDefinitionAssets_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USOTS_AbilityRegistrySubsystem_Statics::NewProp_AbilityDefinitionAssets = { "AbilityDefinitionAssets", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AbilityRegistrySubsystem, AbilityDefinitionAssets), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityDefinitionAssets_MetaData), NewProp_AbilityDefinitionAssets_MetaData) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USOTS_AbilityRegistrySubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AbilityRegistrySubsystem_Statics::NewProp_AbilityDefinitions_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AbilityRegistrySubsystem_Statics::NewProp_AbilityDefinitions_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AbilityRegistrySubsystem_Statics::NewProp_AbilityDefinitions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AbilityRegistrySubsystem_Statics::NewProp_AbilityDefinitionAssets_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AbilityRegistrySubsystem_Statics::NewProp_AbilityDefinitionAssets_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AbilityRegistrySubsystem_Statics::NewProp_AbilityDefinitionAssets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AbilityRegistrySubsystem_Statics::PropPointers) < 2048);
// ********** End Class USOTS_AbilityRegistrySubsystem Property Definitions ************************
UObject* (*const Z_Construct_UClass_USOTS_AbilityRegistrySubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_GAS_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AbilityRegistrySubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_AbilityRegistrySubsystem_Statics::ClassParams = {
	&USOTS_AbilityRegistrySubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USOTS_AbilityRegistrySubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AbilityRegistrySubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AbilityRegistrySubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_AbilityRegistrySubsystem_Statics::Class_MetaDataParams)
};
void USOTS_AbilityRegistrySubsystem::StaticRegisterNativesUSOTS_AbilityRegistrySubsystem()
{
	UClass* Class = USOTS_AbilityRegistrySubsystem::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USOTS_AbilityRegistrySubsystem_Statics::Funcs));
}
UClass* Z_Construct_UClass_USOTS_AbilityRegistrySubsystem()
{
	if (!Z_Registration_Info_UClass_USOTS_AbilityRegistrySubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_AbilityRegistrySubsystem.OuterSingleton, Z_Construct_UClass_USOTS_AbilityRegistrySubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_AbilityRegistrySubsystem.OuterSingleton;
}
USOTS_AbilityRegistrySubsystem::USOTS_AbilityRegistrySubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_AbilityRegistrySubsystem);
USOTS_AbilityRegistrySubsystem::~USOTS_AbilityRegistrySubsystem() {}
// ********** End Class USOTS_AbilityRegistrySubsystem *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Subsystems_SOTS_AbilityRegistrySubsystem_h__Script_SOTS_GAS_Plugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_AbilityRegistrySubsystem, USOTS_AbilityRegistrySubsystem::StaticClass, TEXT("USOTS_AbilityRegistrySubsystem"), &Z_Registration_Info_UClass_USOTS_AbilityRegistrySubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_AbilityRegistrySubsystem), 954845946U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Subsystems_SOTS_AbilityRegistrySubsystem_h__Script_SOTS_GAS_Plugin_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Subsystems_SOTS_AbilityRegistrySubsystem_h__Script_SOTS_GAS_Plugin_1089201037{
	TEXT("/Script/SOTS_GAS_Plugin"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Subsystems_SOTS_AbilityRegistrySubsystem_h__Script_SOTS_GAS_Plugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Subsystems_SOTS_AbilityRegistrySubsystem_h__Script_SOTS_GAS_Plugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
