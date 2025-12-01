// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Subsystems/SOTS_AbilitySubsystem.h"
#include "Engine/GameInstance.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_AbilitySubsystem() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_USOTS_AbilitySubsystem();
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_USOTS_AbilitySubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_SOTS_GAS_Plugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USOTS_AbilitySubsystem Function Get **************************************
struct Z_Construct_UFunction_USOTS_AbilitySubsystem_Get_Statics
{
	struct SOTS_AbilitySubsystem_eventGet_Parms
	{
		const UObject* WorldContextObject;
		USOTS_AbilitySubsystem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS Ability|Subsystem" },
		{ "ModuleRelativePath", "Public/Subsystems/SOTS_AbilitySubsystem.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Get constinit property declarations ***********************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Get constinit property declarations *************************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Get Property Definitions **********************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_AbilitySubsystem_Get_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AbilitySubsystem_eventGet_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_AbilitySubsystem_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AbilitySubsystem_eventGet_Parms, ReturnValue), Z_Construct_UClass_USOTS_AbilitySubsystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_AbilitySubsystem_Get_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilitySubsystem_Get_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilitySubsystem_Get_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilitySubsystem_Get_Statics::PropPointers) < 2048);
// ********** End Function Get Property Definitions ************************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_AbilitySubsystem_Get_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_AbilitySubsystem, nullptr, "Get", 	Z_Construct_UFunction_USOTS_AbilitySubsystem_Get_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilitySubsystem_Get_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_AbilitySubsystem_Get_Statics::SOTS_AbilitySubsystem_eventGet_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilitySubsystem_Get_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_AbilitySubsystem_Get_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_AbilitySubsystem_Get_Statics::SOTS_AbilitySubsystem_eventGet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_AbilitySubsystem_Get()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_AbilitySubsystem_Get_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_AbilitySubsystem::execGet)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USOTS_AbilitySubsystem**)Z_Param__Result=USOTS_AbilitySubsystem::Get(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class USOTS_AbilitySubsystem Function Get ****************************************

// ********** Begin Class USOTS_AbilitySubsystem Function GetAbilityCooldownRemaining **************
struct Z_Construct_UFunction_USOTS_AbilitySubsystem_GetAbilityCooldownRemaining_Statics
{
	struct SOTS_AbilitySubsystem_eventGetAbilityCooldownRemaining_Parms
	{
		FGameplayTag AbilityTag;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS Ability|Profile" },
		{ "ModuleRelativePath", "Public/Subsystems/SOTS_AbilitySubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAbilityCooldownRemaining constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAbilityCooldownRemaining constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAbilityCooldownRemaining Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_AbilitySubsystem_GetAbilityCooldownRemaining_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AbilitySubsystem_eventGetAbilityCooldownRemaining_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USOTS_AbilitySubsystem_GetAbilityCooldownRemaining_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AbilitySubsystem_eventGetAbilityCooldownRemaining_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_AbilitySubsystem_GetAbilityCooldownRemaining_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilitySubsystem_GetAbilityCooldownRemaining_Statics::NewProp_AbilityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilitySubsystem_GetAbilityCooldownRemaining_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilitySubsystem_GetAbilityCooldownRemaining_Statics::PropPointers) < 2048);
// ********** End Function GetAbilityCooldownRemaining Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_AbilitySubsystem_GetAbilityCooldownRemaining_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_AbilitySubsystem, nullptr, "GetAbilityCooldownRemaining", 	Z_Construct_UFunction_USOTS_AbilitySubsystem_GetAbilityCooldownRemaining_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilitySubsystem_GetAbilityCooldownRemaining_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_AbilitySubsystem_GetAbilityCooldownRemaining_Statics::SOTS_AbilitySubsystem_eventGetAbilityCooldownRemaining_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilitySubsystem_GetAbilityCooldownRemaining_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_AbilitySubsystem_GetAbilityCooldownRemaining_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_AbilitySubsystem_GetAbilityCooldownRemaining_Statics::SOTS_AbilitySubsystem_eventGetAbilityCooldownRemaining_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_AbilitySubsystem_GetAbilityCooldownRemaining()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_AbilitySubsystem_GetAbilityCooldownRemaining_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_AbilitySubsystem::execGetAbilityCooldownRemaining)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAbilityCooldownRemaining(Z_Param_AbilityTag);
	P_NATIVE_END;
}
// ********** End Class USOTS_AbilitySubsystem Function GetAbilityCooldownRemaining ****************

// ********** Begin Class USOTS_AbilitySubsystem Function GetAbilityProfileSummary *****************
struct Z_Construct_UFunction_USOTS_AbilitySubsystem_GetAbilityProfileSummary_Statics
{
	struct SOTS_AbilitySubsystem_eventGetAbilityProfileSummary_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS Ability|Debug" },
		{ "ModuleRelativePath", "Public/Subsystems/SOTS_AbilitySubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAbilityProfileSummary constinit property declarations **************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAbilityProfileSummary constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAbilityProfileSummary Property Definitions *************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USOTS_AbilitySubsystem_GetAbilityProfileSummary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AbilitySubsystem_eventGetAbilityProfileSummary_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_AbilitySubsystem_GetAbilityProfileSummary_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilitySubsystem_GetAbilityProfileSummary_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilitySubsystem_GetAbilityProfileSummary_Statics::PropPointers) < 2048);
// ********** End Function GetAbilityProfileSummary Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_AbilitySubsystem_GetAbilityProfileSummary_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_AbilitySubsystem, nullptr, "GetAbilityProfileSummary", 	Z_Construct_UFunction_USOTS_AbilitySubsystem_GetAbilityProfileSummary_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilitySubsystem_GetAbilityProfileSummary_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_AbilitySubsystem_GetAbilityProfileSummary_Statics::SOTS_AbilitySubsystem_eventGetAbilityProfileSummary_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilitySubsystem_GetAbilityProfileSummary_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_AbilitySubsystem_GetAbilityProfileSummary_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_AbilitySubsystem_GetAbilityProfileSummary_Statics::SOTS_AbilitySubsystem_eventGetAbilityProfileSummary_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_AbilitySubsystem_GetAbilityProfileSummary()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_AbilitySubsystem_GetAbilityProfileSummary_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_AbilitySubsystem::execGetAbilityProfileSummary)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetAbilityProfileSummary();
	P_NATIVE_END;
}
// ********** End Class USOTS_AbilitySubsystem Function GetAbilityProfileSummary *******************

// ********** Begin Class USOTS_AbilitySubsystem Function GetAbilityRank ***************************
struct Z_Construct_UFunction_USOTS_AbilitySubsystem_GetAbilityRank_Statics
{
	struct SOTS_AbilitySubsystem_eventGetAbilityRank_Parms
	{
		FGameplayTag AbilityTag;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS Ability|Profile" },
		{ "ModuleRelativePath", "Public/Subsystems/SOTS_AbilitySubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAbilityRank constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAbilityRank constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAbilityRank Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_AbilitySubsystem_GetAbilityRank_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AbilitySubsystem_eventGetAbilityRank_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USOTS_AbilitySubsystem_GetAbilityRank_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AbilitySubsystem_eventGetAbilityRank_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_AbilitySubsystem_GetAbilityRank_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilitySubsystem_GetAbilityRank_Statics::NewProp_AbilityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilitySubsystem_GetAbilityRank_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilitySubsystem_GetAbilityRank_Statics::PropPointers) < 2048);
// ********** End Function GetAbilityRank Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_AbilitySubsystem_GetAbilityRank_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_AbilitySubsystem, nullptr, "GetAbilityRank", 	Z_Construct_UFunction_USOTS_AbilitySubsystem_GetAbilityRank_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilitySubsystem_GetAbilityRank_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_AbilitySubsystem_GetAbilityRank_Statics::SOTS_AbilitySubsystem_eventGetAbilityRank_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilitySubsystem_GetAbilityRank_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_AbilitySubsystem_GetAbilityRank_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_AbilitySubsystem_GetAbilityRank_Statics::SOTS_AbilitySubsystem_eventGetAbilityRank_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_AbilitySubsystem_GetAbilityRank()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_AbilitySubsystem_GetAbilityRank_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_AbilitySubsystem::execGetAbilityRank)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetAbilityRank(Z_Param_AbilityTag);
	P_NATIVE_END;
}
// ********** End Class USOTS_AbilitySubsystem Function GetAbilityRank *****************************

// ********** Begin Class USOTS_AbilitySubsystem Function GrantAbility *****************************
struct Z_Construct_UFunction_USOTS_AbilitySubsystem_GrantAbility_Statics
{
	struct SOTS_AbilitySubsystem_eventGrantAbility_Parms
	{
		FGameplayTag AbilityTag;
		int32 Rank;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS Ability|Profile" },
		{ "CPP_Default_Rank", "1" },
		{ "ModuleRelativePath", "Public/Subsystems/SOTS_AbilitySubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GrantAbility constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Rank;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GrantAbility constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GrantAbility Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_AbilitySubsystem_GrantAbility_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AbilitySubsystem_eventGrantAbility_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USOTS_AbilitySubsystem_GrantAbility_Statics::NewProp_Rank = { "Rank", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AbilitySubsystem_eventGrantAbility_Parms, Rank), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_AbilitySubsystem_GrantAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilitySubsystem_GrantAbility_Statics::NewProp_AbilityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilitySubsystem_GrantAbility_Statics::NewProp_Rank,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilitySubsystem_GrantAbility_Statics::PropPointers) < 2048);
// ********** End Function GrantAbility Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_AbilitySubsystem_GrantAbility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_AbilitySubsystem, nullptr, "GrantAbility", 	Z_Construct_UFunction_USOTS_AbilitySubsystem_GrantAbility_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilitySubsystem_GrantAbility_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_AbilitySubsystem_GrantAbility_Statics::SOTS_AbilitySubsystem_eventGrantAbility_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilitySubsystem_GrantAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_AbilitySubsystem_GrantAbility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_AbilitySubsystem_GrantAbility_Statics::SOTS_AbilitySubsystem_eventGrantAbility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_AbilitySubsystem_GrantAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_AbilitySubsystem_GrantAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_AbilitySubsystem::execGrantAbility)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTag);
	P_GET_PROPERTY(FIntProperty,Z_Param_Rank);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GrantAbility(Z_Param_AbilityTag,Z_Param_Rank);
	P_NATIVE_END;
}
// ********** End Class USOTS_AbilitySubsystem Function GrantAbility *******************************

// ********** Begin Class USOTS_AbilitySubsystem Function HasAbility *******************************
struct Z_Construct_UFunction_USOTS_AbilitySubsystem_HasAbility_Statics
{
	struct SOTS_AbilitySubsystem_eventHasAbility_Parms
	{
		FGameplayTag AbilityTag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS Ability|Profile" },
		{ "ModuleRelativePath", "Public/Subsystems/SOTS_AbilitySubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HasAbility constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasAbility constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasAbility Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_AbilitySubsystem_HasAbility_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AbilitySubsystem_eventHasAbility_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
void Z_Construct_UFunction_USOTS_AbilitySubsystem_HasAbility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_AbilitySubsystem_eventHasAbility_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_AbilitySubsystem_HasAbility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_AbilitySubsystem_eventHasAbility_Parms), &Z_Construct_UFunction_USOTS_AbilitySubsystem_HasAbility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_AbilitySubsystem_HasAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilitySubsystem_HasAbility_Statics::NewProp_AbilityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilitySubsystem_HasAbility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilitySubsystem_HasAbility_Statics::PropPointers) < 2048);
// ********** End Function HasAbility Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_AbilitySubsystem_HasAbility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_AbilitySubsystem, nullptr, "HasAbility", 	Z_Construct_UFunction_USOTS_AbilitySubsystem_HasAbility_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilitySubsystem_HasAbility_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_AbilitySubsystem_HasAbility_Statics::SOTS_AbilitySubsystem_eventHasAbility_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilitySubsystem_HasAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_AbilitySubsystem_HasAbility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_AbilitySubsystem_HasAbility_Statics::SOTS_AbilitySubsystem_eventHasAbility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_AbilitySubsystem_HasAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_AbilitySubsystem_HasAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_AbilitySubsystem::execHasAbility)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasAbility(Z_Param_AbilityTag);
	P_NATIVE_END;
}
// ********** End Class USOTS_AbilitySubsystem Function HasAbility *********************************

// ********** Begin Class USOTS_AbilitySubsystem Function RemoveAbility ****************************
struct Z_Construct_UFunction_USOTS_AbilitySubsystem_RemoveAbility_Statics
{
	struct SOTS_AbilitySubsystem_eventRemoveAbility_Parms
	{
		FGameplayTag AbilityTag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS Ability|Profile" },
		{ "ModuleRelativePath", "Public/Subsystems/SOTS_AbilitySubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveAbility constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveAbility constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveAbility Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_AbilitySubsystem_RemoveAbility_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AbilitySubsystem_eventRemoveAbility_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_AbilitySubsystem_RemoveAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilitySubsystem_RemoveAbility_Statics::NewProp_AbilityTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilitySubsystem_RemoveAbility_Statics::PropPointers) < 2048);
// ********** End Function RemoveAbility Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_AbilitySubsystem_RemoveAbility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_AbilitySubsystem, nullptr, "RemoveAbility", 	Z_Construct_UFunction_USOTS_AbilitySubsystem_RemoveAbility_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilitySubsystem_RemoveAbility_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_AbilitySubsystem_RemoveAbility_Statics::SOTS_AbilitySubsystem_eventRemoveAbility_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilitySubsystem_RemoveAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_AbilitySubsystem_RemoveAbility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_AbilitySubsystem_RemoveAbility_Statics::SOTS_AbilitySubsystem_eventRemoveAbility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_AbilitySubsystem_RemoveAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_AbilitySubsystem_RemoveAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_AbilitySubsystem::execRemoveAbility)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveAbility(Z_Param_AbilityTag);
	P_NATIVE_END;
}
// ********** End Class USOTS_AbilitySubsystem Function RemoveAbility ******************************

// ********** Begin Class USOTS_AbilitySubsystem Function SetAbilityCooldownRemaining **************
struct Z_Construct_UFunction_USOTS_AbilitySubsystem_SetAbilityCooldownRemaining_Statics
{
	struct SOTS_AbilitySubsystem_eventSetAbilityCooldownRemaining_Parms
	{
		FGameplayTag AbilityTag;
		float RemainingSeconds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS Ability|Profile" },
		{ "ModuleRelativePath", "Public/Subsystems/SOTS_AbilitySubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetAbilityCooldownRemaining constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RemainingSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetAbilityCooldownRemaining constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetAbilityCooldownRemaining Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_AbilitySubsystem_SetAbilityCooldownRemaining_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AbilitySubsystem_eventSetAbilityCooldownRemaining_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USOTS_AbilitySubsystem_SetAbilityCooldownRemaining_Statics::NewProp_RemainingSeconds = { "RemainingSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AbilitySubsystem_eventSetAbilityCooldownRemaining_Parms, RemainingSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_AbilitySubsystem_SetAbilityCooldownRemaining_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilitySubsystem_SetAbilityCooldownRemaining_Statics::NewProp_AbilityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilitySubsystem_SetAbilityCooldownRemaining_Statics::NewProp_RemainingSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilitySubsystem_SetAbilityCooldownRemaining_Statics::PropPointers) < 2048);
// ********** End Function SetAbilityCooldownRemaining Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_AbilitySubsystem_SetAbilityCooldownRemaining_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_AbilitySubsystem, nullptr, "SetAbilityCooldownRemaining", 	Z_Construct_UFunction_USOTS_AbilitySubsystem_SetAbilityCooldownRemaining_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilitySubsystem_SetAbilityCooldownRemaining_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_AbilitySubsystem_SetAbilityCooldownRemaining_Statics::SOTS_AbilitySubsystem_eventSetAbilityCooldownRemaining_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilitySubsystem_SetAbilityCooldownRemaining_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_AbilitySubsystem_SetAbilityCooldownRemaining_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_AbilitySubsystem_SetAbilityCooldownRemaining_Statics::SOTS_AbilitySubsystem_eventSetAbilityCooldownRemaining_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_AbilitySubsystem_SetAbilityCooldownRemaining()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_AbilitySubsystem_SetAbilityCooldownRemaining_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_AbilitySubsystem::execSetAbilityCooldownRemaining)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTag);
	P_GET_PROPERTY(FFloatProperty,Z_Param_RemainingSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAbilityCooldownRemaining(Z_Param_AbilityTag,Z_Param_RemainingSeconds);
	P_NATIVE_END;
}
// ********** End Class USOTS_AbilitySubsystem Function SetAbilityCooldownRemaining ****************

// ********** Begin Class USOTS_AbilitySubsystem Function SetAbilityRank ***************************
struct Z_Construct_UFunction_USOTS_AbilitySubsystem_SetAbilityRank_Statics
{
	struct SOTS_AbilitySubsystem_eventSetAbilityRank_Parms
	{
		FGameplayTag AbilityTag;
		int32 NewRank;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS Ability|Profile" },
		{ "ModuleRelativePath", "Public/Subsystems/SOTS_AbilitySubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetAbilityRank constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewRank;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetAbilityRank constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetAbilityRank Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_AbilitySubsystem_SetAbilityRank_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AbilitySubsystem_eventSetAbilityRank_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USOTS_AbilitySubsystem_SetAbilityRank_Statics::NewProp_NewRank = { "NewRank", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AbilitySubsystem_eventSetAbilityRank_Parms, NewRank), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_AbilitySubsystem_SetAbilityRank_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilitySubsystem_SetAbilityRank_Statics::NewProp_AbilityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilitySubsystem_SetAbilityRank_Statics::NewProp_NewRank,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilitySubsystem_SetAbilityRank_Statics::PropPointers) < 2048);
// ********** End Function SetAbilityRank Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_AbilitySubsystem_SetAbilityRank_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_AbilitySubsystem, nullptr, "SetAbilityRank", 	Z_Construct_UFunction_USOTS_AbilitySubsystem_SetAbilityRank_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilitySubsystem_SetAbilityRank_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_AbilitySubsystem_SetAbilityRank_Statics::SOTS_AbilitySubsystem_eventSetAbilityRank_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilitySubsystem_SetAbilityRank_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_AbilitySubsystem_SetAbilityRank_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_AbilitySubsystem_SetAbilityRank_Statics::SOTS_AbilitySubsystem_eventSetAbilityRank_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_AbilitySubsystem_SetAbilityRank()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_AbilitySubsystem_SetAbilityRank_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_AbilitySubsystem::execSetAbilityRank)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTag);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewRank);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAbilityRank(Z_Param_AbilityTag,Z_Param_NewRank);
	P_NATIVE_END;
}
// ********** End Class USOTS_AbilitySubsystem Function SetAbilityRank *****************************

// ********** Begin Class USOTS_AbilitySubsystem ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_AbilitySubsystem;
UClass* USOTS_AbilitySubsystem::GetPrivateStaticClass()
{
	using TClass = USOTS_AbilitySubsystem;
	if (!Z_Registration_Info_UClass_USOTS_AbilitySubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_AbilitySubsystem"),
			Z_Registration_Info_UClass_USOTS_AbilitySubsystem.InnerSingleton,
			StaticRegisterNativesUSOTS_AbilitySubsystem,
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
	return Z_Registration_Info_UClass_USOTS_AbilitySubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_AbilitySubsystem_NoRegister()
{
	return USOTS_AbilitySubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_AbilitySubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Subsystems/SOTS_AbilitySubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/SOTS_AbilitySubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrantedAbilityTags_MetaData[] = {
		{ "Category", "SOTS Ability|Profile" },
		{ "ModuleRelativePath", "Public/Subsystems/SOTS_AbilitySubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityRanks_MetaData[] = {
		{ "Category", "SOTS Ability|Profile" },
		{ "ModuleRelativePath", "Public/Subsystems/SOTS_AbilitySubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityCooldownRemaining_MetaData[] = {
		{ "Category", "SOTS Ability|Profile" },
		{ "ModuleRelativePath", "Public/Subsystems/SOTS_AbilitySubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_AbilitySubsystem constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedAbilityTags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedAbilityTags;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AbilityRanks_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityRanks_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AbilityRanks;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AbilityCooldownRemaining_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityCooldownRemaining_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AbilityCooldownRemaining;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USOTS_AbilitySubsystem constinit property declarations *********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("Get"), .Pointer = &USOTS_AbilitySubsystem::execGet },
		{ .NameUTF8 = UTF8TEXT("GetAbilityCooldownRemaining"), .Pointer = &USOTS_AbilitySubsystem::execGetAbilityCooldownRemaining },
		{ .NameUTF8 = UTF8TEXT("GetAbilityProfileSummary"), .Pointer = &USOTS_AbilitySubsystem::execGetAbilityProfileSummary },
		{ .NameUTF8 = UTF8TEXT("GetAbilityRank"), .Pointer = &USOTS_AbilitySubsystem::execGetAbilityRank },
		{ .NameUTF8 = UTF8TEXT("GrantAbility"), .Pointer = &USOTS_AbilitySubsystem::execGrantAbility },
		{ .NameUTF8 = UTF8TEXT("HasAbility"), .Pointer = &USOTS_AbilitySubsystem::execHasAbility },
		{ .NameUTF8 = UTF8TEXT("RemoveAbility"), .Pointer = &USOTS_AbilitySubsystem::execRemoveAbility },
		{ .NameUTF8 = UTF8TEXT("SetAbilityCooldownRemaining"), .Pointer = &USOTS_AbilitySubsystem::execSetAbilityCooldownRemaining },
		{ .NameUTF8 = UTF8TEXT("SetAbilityRank"), .Pointer = &USOTS_AbilitySubsystem::execSetAbilityRank },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USOTS_AbilitySubsystem_Get, "Get" }, // 2174226054
		{ &Z_Construct_UFunction_USOTS_AbilitySubsystem_GetAbilityCooldownRemaining, "GetAbilityCooldownRemaining" }, // 3456806169
		{ &Z_Construct_UFunction_USOTS_AbilitySubsystem_GetAbilityProfileSummary, "GetAbilityProfileSummary" }, // 4212431976
		{ &Z_Construct_UFunction_USOTS_AbilitySubsystem_GetAbilityRank, "GetAbilityRank" }, // 1205514530
		{ &Z_Construct_UFunction_USOTS_AbilitySubsystem_GrantAbility, "GrantAbility" }, // 2747202989
		{ &Z_Construct_UFunction_USOTS_AbilitySubsystem_HasAbility, "HasAbility" }, // 3707104429
		{ &Z_Construct_UFunction_USOTS_AbilitySubsystem_RemoveAbility, "RemoveAbility" }, // 284226131
		{ &Z_Construct_UFunction_USOTS_AbilitySubsystem_SetAbilityCooldownRemaining, "SetAbilityCooldownRemaining" }, // 4160670397
		{ &Z_Construct_UFunction_USOTS_AbilitySubsystem_SetAbilityRank, "SetAbilityRank" }, // 331774744
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_AbilitySubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_AbilitySubsystem_Statics

// ********** Begin Class USOTS_AbilitySubsystem Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_AbilitySubsystem_Statics::NewProp_GrantedAbilityTags_Inner = { "GrantedAbilityTags", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USOTS_AbilitySubsystem_Statics::NewProp_GrantedAbilityTags = { "GrantedAbilityTags", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AbilitySubsystem, GrantedAbilityTags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrantedAbilityTags_MetaData), NewProp_GrantedAbilityTags_MetaData) }; // 517357616
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USOTS_AbilitySubsystem_Statics::NewProp_AbilityRanks_ValueProp = { "AbilityRanks", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_AbilitySubsystem_Statics::NewProp_AbilityRanks_Key_KeyProp = { "AbilityRanks_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USOTS_AbilitySubsystem_Statics::NewProp_AbilityRanks = { "AbilityRanks", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AbilitySubsystem, AbilityRanks), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityRanks_MetaData), NewProp_AbilityRanks_MetaData) }; // 517357616
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USOTS_AbilitySubsystem_Statics::NewProp_AbilityCooldownRemaining_ValueProp = { "AbilityCooldownRemaining", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_AbilitySubsystem_Statics::NewProp_AbilityCooldownRemaining_Key_KeyProp = { "AbilityCooldownRemaining_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USOTS_AbilitySubsystem_Statics::NewProp_AbilityCooldownRemaining = { "AbilityCooldownRemaining", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AbilitySubsystem, AbilityCooldownRemaining), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityCooldownRemaining_MetaData), NewProp_AbilityCooldownRemaining_MetaData) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USOTS_AbilitySubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AbilitySubsystem_Statics::NewProp_GrantedAbilityTags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AbilitySubsystem_Statics::NewProp_GrantedAbilityTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AbilitySubsystem_Statics::NewProp_AbilityRanks_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AbilitySubsystem_Statics::NewProp_AbilityRanks_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AbilitySubsystem_Statics::NewProp_AbilityRanks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AbilitySubsystem_Statics::NewProp_AbilityCooldownRemaining_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AbilitySubsystem_Statics::NewProp_AbilityCooldownRemaining_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AbilitySubsystem_Statics::NewProp_AbilityCooldownRemaining,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AbilitySubsystem_Statics::PropPointers) < 2048);
// ********** End Class USOTS_AbilitySubsystem Property Definitions ********************************
UObject* (*const Z_Construct_UClass_USOTS_AbilitySubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_GAS_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AbilitySubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_AbilitySubsystem_Statics::ClassParams = {
	&USOTS_AbilitySubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USOTS_AbilitySubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AbilitySubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AbilitySubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_AbilitySubsystem_Statics::Class_MetaDataParams)
};
void USOTS_AbilitySubsystem::StaticRegisterNativesUSOTS_AbilitySubsystem()
{
	UClass* Class = USOTS_AbilitySubsystem::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USOTS_AbilitySubsystem_Statics::Funcs));
}
UClass* Z_Construct_UClass_USOTS_AbilitySubsystem()
{
	if (!Z_Registration_Info_UClass_USOTS_AbilitySubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_AbilitySubsystem.OuterSingleton, Z_Construct_UClass_USOTS_AbilitySubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_AbilitySubsystem.OuterSingleton;
}
USOTS_AbilitySubsystem::USOTS_AbilitySubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_AbilitySubsystem);
USOTS_AbilitySubsystem::~USOTS_AbilitySubsystem() {}
// ********** End Class USOTS_AbilitySubsystem *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Subsystems_SOTS_AbilitySubsystem_h__Script_SOTS_GAS_Plugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_AbilitySubsystem, USOTS_AbilitySubsystem::StaticClass, TEXT("USOTS_AbilitySubsystem"), &Z_Registration_Info_UClass_USOTS_AbilitySubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_AbilitySubsystem), 3457600457U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Subsystems_SOTS_AbilitySubsystem_h__Script_SOTS_GAS_Plugin_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Subsystems_SOTS_AbilitySubsystem_h__Script_SOTS_GAS_Plugin_1094947290{
	TEXT("/Script/SOTS_GAS_Plugin"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Subsystems_SOTS_AbilitySubsystem_h__Script_SOTS_GAS_Plugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Subsystems_SOTS_AbilitySubsystem_h__Script_SOTS_GAS_Plugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
