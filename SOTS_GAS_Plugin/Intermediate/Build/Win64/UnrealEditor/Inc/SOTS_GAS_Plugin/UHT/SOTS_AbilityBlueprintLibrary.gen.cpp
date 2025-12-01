// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blueprint/SOTS_AbilityBlueprintLibrary.h"
#include "Data/SOTS_AbilityTypes.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_AbilityBlueprintLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_UAC_SOTS_Abilitys_NoRegister();
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_USOTS_AbilityBlueprintLibrary();
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_USOTS_AbilityBlueprintLibrary_NoRegister();
SOTS_GAS_PLUGIN_API UEnum* Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilityActivationResult();
SOTS_GAS_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_F_SOTS_AbilityActivationContext();
SOTS_GAS_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_F_SOTS_AbilityGrantOptions();
SOTS_GAS_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_F_SOTS_AbilityHandle();
UPackage* Z_Construct_UPackage__Script_SOTS_GAS_Plugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USOTS_AbilityBlueprintLibrary Function GetAbilityComponentFromActor ******
struct Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_GetAbilityComponentFromActor_Statics
{
	struct SOTS_AbilityBlueprintLibrary_eventGetAbilityComponentFromActor_Parms
	{
		AActor* TargetActor;
		bool bOutFound;
		UAC_SOTS_Abilitys* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS Ability" },
		{ "DefaultToSelf", "TargetActor" },
		{ "ModuleRelativePath", "Public/Blueprint/SOTS_AbilityBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAbilityComponentFromActor constinit property declarations **********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static void NewProp_bOutFound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutFound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAbilityComponentFromActor constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAbilityComponentFromActor Property Definitions *********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_GetAbilityComponentFromActor_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AbilityBlueprintLibrary_eventGetAbilityComponentFromActor_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_GetAbilityComponentFromActor_Statics::NewProp_bOutFound_SetBit(void* Obj)
{
	((SOTS_AbilityBlueprintLibrary_eventGetAbilityComponentFromActor_Parms*)Obj)->bOutFound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_GetAbilityComponentFromActor_Statics::NewProp_bOutFound = { "bOutFound", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_AbilityBlueprintLibrary_eventGetAbilityComponentFromActor_Parms), &Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_GetAbilityComponentFromActor_Statics::NewProp_bOutFound_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_GetAbilityComponentFromActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AbilityBlueprintLibrary_eventGetAbilityComponentFromActor_Parms, ReturnValue), Z_Construct_UClass_UAC_SOTS_Abilitys_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_GetAbilityComponentFromActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_GetAbilityComponentFromActor_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_GetAbilityComponentFromActor_Statics::NewProp_bOutFound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_GetAbilityComponentFromActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_GetAbilityComponentFromActor_Statics::PropPointers) < 2048);
// ********** End Function GetAbilityComponentFromActor Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_GetAbilityComponentFromActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_AbilityBlueprintLibrary, nullptr, "GetAbilityComponentFromActor", 	Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_GetAbilityComponentFromActor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_GetAbilityComponentFromActor_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_GetAbilityComponentFromActor_Statics::SOTS_AbilityBlueprintLibrary_eventGetAbilityComponentFromActor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_GetAbilityComponentFromActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_GetAbilityComponentFromActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_GetAbilityComponentFromActor_Statics::SOTS_AbilityBlueprintLibrary_eventGetAbilityComponentFromActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_GetAbilityComponentFromActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_GetAbilityComponentFromActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_AbilityBlueprintLibrary::execGetAbilityComponentFromActor)
{
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_GET_UBOOL_REF(Z_Param_Out_bOutFound);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAC_SOTS_Abilitys**)Z_Param__Result=USOTS_AbilityBlueprintLibrary::GetAbilityComponentFromActor(Z_Param_TargetActor,Z_Param_Out_bOutFound);
	P_NATIVE_END;
}
// ********** End Class USOTS_AbilityBlueprintLibrary Function GetAbilityComponentFromActor ********

// ********** Begin Class USOTS_AbilityBlueprintLibrary Function SOTS_CancelAllAbilities ***********
struct Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_CancelAllAbilities_Statics
{
	struct SOTS_AbilityBlueprintLibrary_eventSOTS_CancelAllAbilities_Parms
	{
		AActor* TargetActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS Ability" },
		{ "DefaultToSelf", "TargetActor" },
		{ "ModuleRelativePath", "Public/Blueprint/SOTS_AbilityBlueprintLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SOTS_CancelAllAbilities constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SOTS_CancelAllAbilities constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SOTS_CancelAllAbilities Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_CancelAllAbilities_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AbilityBlueprintLibrary_eventSOTS_CancelAllAbilities_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_CancelAllAbilities_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_CancelAllAbilities_Statics::NewProp_TargetActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_CancelAllAbilities_Statics::PropPointers) < 2048);
// ********** End Function SOTS_CancelAllAbilities Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_CancelAllAbilities_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_AbilityBlueprintLibrary, nullptr, "SOTS_CancelAllAbilities", 	Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_CancelAllAbilities_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_CancelAllAbilities_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_CancelAllAbilities_Statics::SOTS_AbilityBlueprintLibrary_eventSOTS_CancelAllAbilities_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_CancelAllAbilities_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_CancelAllAbilities_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_CancelAllAbilities_Statics::SOTS_AbilityBlueprintLibrary_eventSOTS_CancelAllAbilities_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_CancelAllAbilities()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_CancelAllAbilities_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_AbilityBlueprintLibrary::execSOTS_CancelAllAbilities)
{
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	USOTS_AbilityBlueprintLibrary::SOTS_CancelAllAbilities(Z_Param_TargetActor);
	P_NATIVE_END;
}
// ********** End Class USOTS_AbilityBlueprintLibrary Function SOTS_CancelAllAbilities *************

// ********** Begin Class USOTS_AbilityBlueprintLibrary Function SOTS_GrantAbility *****************
struct Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_GrantAbility_Statics
{
	struct SOTS_AbilityBlueprintLibrary_eventSOTS_GrantAbility_Parms
	{
		AActor* TargetActor;
		FGameplayTag AbilityTag;
		F_SOTS_AbilityGrantOptions Options;
		F_SOTS_AbilityHandle OutHandle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS Ability" },
		{ "DefaultToSelf", "TargetActor" },
		{ "ModuleRelativePath", "Public/Blueprint/SOTS_AbilityBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SOTS_GrantAbility constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutHandle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SOTS_GrantAbility constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SOTS_GrantAbility Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_GrantAbility_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AbilityBlueprintLibrary_eventSOTS_GrantAbility_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_GrantAbility_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AbilityBlueprintLibrary_eventSOTS_GrantAbility_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_GrantAbility_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AbilityBlueprintLibrary_eventSOTS_GrantAbility_Parms, Options), Z_Construct_UScriptStruct_F_SOTS_AbilityGrantOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Options_MetaData), NewProp_Options_MetaData) }; // 1070780000
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_GrantAbility_Statics::NewProp_OutHandle = { "OutHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AbilityBlueprintLibrary_eventSOTS_GrantAbility_Parms, OutHandle), Z_Construct_UScriptStruct_F_SOTS_AbilityHandle, METADATA_PARAMS(0, nullptr) }; // 3514428892
void Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_GrantAbility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_AbilityBlueprintLibrary_eventSOTS_GrantAbility_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_GrantAbility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_AbilityBlueprintLibrary_eventSOTS_GrantAbility_Parms), &Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_GrantAbility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_GrantAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_GrantAbility_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_GrantAbility_Statics::NewProp_AbilityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_GrantAbility_Statics::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_GrantAbility_Statics::NewProp_OutHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_GrantAbility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_GrantAbility_Statics::PropPointers) < 2048);
// ********** End Function SOTS_GrantAbility Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_GrantAbility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_AbilityBlueprintLibrary, nullptr, "SOTS_GrantAbility", 	Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_GrantAbility_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_GrantAbility_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_GrantAbility_Statics::SOTS_AbilityBlueprintLibrary_eventSOTS_GrantAbility_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_GrantAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_GrantAbility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_GrantAbility_Statics::SOTS_AbilityBlueprintLibrary_eventSOTS_GrantAbility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_GrantAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_GrantAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_AbilityBlueprintLibrary::execSOTS_GrantAbility)
{
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTag);
	P_GET_STRUCT_REF(F_SOTS_AbilityGrantOptions,Z_Param_Out_Options);
	P_GET_STRUCT_REF(F_SOTS_AbilityHandle,Z_Param_Out_OutHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USOTS_AbilityBlueprintLibrary::SOTS_GrantAbility(Z_Param_TargetActor,Z_Param_AbilityTag,Z_Param_Out_Options,Z_Param_Out_OutHandle);
	P_NATIVE_END;
}
// ********** End Class USOTS_AbilityBlueprintLibrary Function SOTS_GrantAbility *******************

// ********** Begin Class USOTS_AbilityBlueprintLibrary Function SOTS_TryActivateAbility ***********
struct Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_TryActivateAbility_Statics
{
	struct SOTS_AbilityBlueprintLibrary_eventSOTS_TryActivateAbility_Parms
	{
		AActor* TargetActor;
		FGameplayTag AbilityTag;
		F_SOTS_AbilityActivationContext Context;
		E_SOTS_AbilityActivationResult OutResult;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS Ability" },
		{ "DefaultToSelf", "TargetActor" },
		{ "ModuleRelativePath", "Public/Blueprint/SOTS_AbilityBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SOTS_TryActivateAbility constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SOTS_TryActivateAbility constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SOTS_TryActivateAbility Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_TryActivateAbility_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AbilityBlueprintLibrary_eventSOTS_TryActivateAbility_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_TryActivateAbility_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AbilityBlueprintLibrary_eventSOTS_TryActivateAbility_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_TryActivateAbility_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AbilityBlueprintLibrary_eventSOTS_TryActivateAbility_Parms, Context), Z_Construct_UScriptStruct_F_SOTS_AbilityActivationContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) }; // 2980214493
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_TryActivateAbility_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_TryActivateAbility_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AbilityBlueprintLibrary_eventSOTS_TryActivateAbility_Parms, OutResult), Z_Construct_UEnum_SOTS_GAS_Plugin_E_SOTS_AbilityActivationResult, METADATA_PARAMS(0, nullptr) }; // 527710619
void Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_TryActivateAbility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_AbilityBlueprintLibrary_eventSOTS_TryActivateAbility_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_TryActivateAbility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_AbilityBlueprintLibrary_eventSOTS_TryActivateAbility_Parms), &Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_TryActivateAbility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_TryActivateAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_TryActivateAbility_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_TryActivateAbility_Statics::NewProp_AbilityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_TryActivateAbility_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_TryActivateAbility_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_TryActivateAbility_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_TryActivateAbility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_TryActivateAbility_Statics::PropPointers) < 2048);
// ********** End Function SOTS_TryActivateAbility Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_TryActivateAbility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_AbilityBlueprintLibrary, nullptr, "SOTS_TryActivateAbility", 	Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_TryActivateAbility_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_TryActivateAbility_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_TryActivateAbility_Statics::SOTS_AbilityBlueprintLibrary_eventSOTS_TryActivateAbility_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_TryActivateAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_TryActivateAbility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_TryActivateAbility_Statics::SOTS_AbilityBlueprintLibrary_eventSOTS_TryActivateAbility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_TryActivateAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_TryActivateAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_AbilityBlueprintLibrary::execSOTS_TryActivateAbility)
{
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTag);
	P_GET_STRUCT_REF(F_SOTS_AbilityActivationContext,Z_Param_Out_Context);
	P_GET_ENUM_REF(E_SOTS_AbilityActivationResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USOTS_AbilityBlueprintLibrary::SOTS_TryActivateAbility(Z_Param_TargetActor,Z_Param_AbilityTag,Z_Param_Out_Context,(E_SOTS_AbilityActivationResult&)(Z_Param_Out_OutResult));
	P_NATIVE_END;
}
// ********** End Class USOTS_AbilityBlueprintLibrary Function SOTS_TryActivateAbility *************

// ********** Begin Class USOTS_AbilityBlueprintLibrary ********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_AbilityBlueprintLibrary;
UClass* USOTS_AbilityBlueprintLibrary::GetPrivateStaticClass()
{
	using TClass = USOTS_AbilityBlueprintLibrary;
	if (!Z_Registration_Info_UClass_USOTS_AbilityBlueprintLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_AbilityBlueprintLibrary"),
			Z_Registration_Info_UClass_USOTS_AbilityBlueprintLibrary.InnerSingleton,
			StaticRegisterNativesUSOTS_AbilityBlueprintLibrary,
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
	return Z_Registration_Info_UClass_USOTS_AbilityBlueprintLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_AbilityBlueprintLibrary_NoRegister()
{
	return USOTS_AbilityBlueprintLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_AbilityBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Blueprint/SOTS_AbilityBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/Blueprint/SOTS_AbilityBlueprintLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_AbilityBlueprintLibrary constinit property declarations ************
// ********** End Class USOTS_AbilityBlueprintLibrary constinit property declarations **************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetAbilityComponentFromActor"), .Pointer = &USOTS_AbilityBlueprintLibrary::execGetAbilityComponentFromActor },
		{ .NameUTF8 = UTF8TEXT("SOTS_CancelAllAbilities"), .Pointer = &USOTS_AbilityBlueprintLibrary::execSOTS_CancelAllAbilities },
		{ .NameUTF8 = UTF8TEXT("SOTS_GrantAbility"), .Pointer = &USOTS_AbilityBlueprintLibrary::execSOTS_GrantAbility },
		{ .NameUTF8 = UTF8TEXT("SOTS_TryActivateAbility"), .Pointer = &USOTS_AbilityBlueprintLibrary::execSOTS_TryActivateAbility },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_GetAbilityComponentFromActor, "GetAbilityComponentFromActor" }, // 2852520411
		{ &Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_CancelAllAbilities, "SOTS_CancelAllAbilities" }, // 2204840048
		{ &Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_GrantAbility, "SOTS_GrantAbility" }, // 1540365727
		{ &Z_Construct_UFunction_USOTS_AbilityBlueprintLibrary_SOTS_TryActivateAbility, "SOTS_TryActivateAbility" }, // 3292468688
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_AbilityBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_AbilityBlueprintLibrary_Statics
UObject* (*const Z_Construct_UClass_USOTS_AbilityBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_GAS_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AbilityBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_AbilityBlueprintLibrary_Statics::ClassParams = {
	&USOTS_AbilityBlueprintLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AbilityBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_AbilityBlueprintLibrary_Statics::Class_MetaDataParams)
};
void USOTS_AbilityBlueprintLibrary::StaticRegisterNativesUSOTS_AbilityBlueprintLibrary()
{
	UClass* Class = USOTS_AbilityBlueprintLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USOTS_AbilityBlueprintLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_USOTS_AbilityBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_USOTS_AbilityBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_AbilityBlueprintLibrary.OuterSingleton, Z_Construct_UClass_USOTS_AbilityBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_AbilityBlueprintLibrary.OuterSingleton;
}
USOTS_AbilityBlueprintLibrary::USOTS_AbilityBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_AbilityBlueprintLibrary);
USOTS_AbilityBlueprintLibrary::~USOTS_AbilityBlueprintLibrary() {}
// ********** End Class USOTS_AbilityBlueprintLibrary **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Blueprint_SOTS_AbilityBlueprintLibrary_h__Script_SOTS_GAS_Plugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_AbilityBlueprintLibrary, USOTS_AbilityBlueprintLibrary::StaticClass, TEXT("USOTS_AbilityBlueprintLibrary"), &Z_Registration_Info_UClass_USOTS_AbilityBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_AbilityBlueprintLibrary), 991590359U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Blueprint_SOTS_AbilityBlueprintLibrary_h__Script_SOTS_GAS_Plugin_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Blueprint_SOTS_AbilityBlueprintLibrary_h__Script_SOTS_GAS_Plugin_662963596{
	TEXT("/Script/SOTS_GAS_Plugin"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Blueprint_SOTS_AbilityBlueprintLibrary_h__Script_SOTS_GAS_Plugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Blueprint_SOTS_AbilityBlueprintLibrary_h__Script_SOTS_GAS_Plugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
