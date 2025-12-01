// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTS_GAS_AbilityGatingLibrary.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_GAS_AbilityGatingLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_USOTS_GAS_AbilityGatingLibrary();
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_USOTS_GAS_AbilityGatingLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_SOTS_GAS_Plugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USOTS_GAS_AbilityGatingLibrary Function IsStealthTierAtOrBelow ***********
struct Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_IsStealthTierAtOrBelow_Statics
{
	struct SOTS_GAS_AbilityGatingLibrary_eventIsStealthTierAtOrBelow_Parms
	{
		const UObject* WorldContextObject;
		int32 MaxTierInclusive;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|GAS|Ability|Gating" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns true if the current stealth tier (from GSM via the GAS stealth bridge)\n// is less than or equal to MaxTierInclusive.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GAS_AbilityGatingLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if the current stealth tier (from GSM via the GAS stealth bridge)\nis less than or equal to MaxTierInclusive." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsStealthTierAtOrBelow constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTierInclusive;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsStealthTierAtOrBelow constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsStealthTierAtOrBelow Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_IsStealthTierAtOrBelow_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_AbilityGatingLibrary_eventIsStealthTierAtOrBelow_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_IsStealthTierAtOrBelow_Statics::NewProp_MaxTierInclusive = { "MaxTierInclusive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_AbilityGatingLibrary_eventIsStealthTierAtOrBelow_Parms, MaxTierInclusive), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_IsStealthTierAtOrBelow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_GAS_AbilityGatingLibrary_eventIsStealthTierAtOrBelow_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_IsStealthTierAtOrBelow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_GAS_AbilityGatingLibrary_eventIsStealthTierAtOrBelow_Parms), &Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_IsStealthTierAtOrBelow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_IsStealthTierAtOrBelow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_IsStealthTierAtOrBelow_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_IsStealthTierAtOrBelow_Statics::NewProp_MaxTierInclusive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_IsStealthTierAtOrBelow_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_IsStealthTierAtOrBelow_Statics::PropPointers) < 2048);
// ********** End Function IsStealthTierAtOrBelow Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_IsStealthTierAtOrBelow_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GAS_AbilityGatingLibrary, nullptr, "IsStealthTierAtOrBelow", 	Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_IsStealthTierAtOrBelow_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_IsStealthTierAtOrBelow_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_IsStealthTierAtOrBelow_Statics::SOTS_GAS_AbilityGatingLibrary_eventIsStealthTierAtOrBelow_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_IsStealthTierAtOrBelow_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_IsStealthTierAtOrBelow_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_IsStealthTierAtOrBelow_Statics::SOTS_GAS_AbilityGatingLibrary_eventIsStealthTierAtOrBelow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_IsStealthTierAtOrBelow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_IsStealthTierAtOrBelow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GAS_AbilityGatingLibrary::execIsStealthTierAtOrBelow)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxTierInclusive);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USOTS_GAS_AbilityGatingLibrary::IsStealthTierAtOrBelow(Z_Param_WorldContextObject,Z_Param_MaxTierInclusive);
	P_NATIVE_END;
}
// ********** End Class USOTS_GAS_AbilityGatingLibrary Function IsStealthTierAtOrBelow *************

// ********** Begin Class USOTS_GAS_AbilityGatingLibrary Function IsStealthTierWithinRange *********
struct Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_IsStealthTierWithinRange_Statics
{
	struct SOTS_GAS_AbilityGatingLibrary_eventIsStealthTierWithinRange_Parms
	{
		const UObject* WorldContextObject;
		int32 MinTierInclusive;
		int32 MaxTierInclusive;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|GAS|Ability|Gating" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns true if the current stealth tier lies within [MinTierInclusive, MaxTierInclusive].\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GAS_AbilityGatingLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if the current stealth tier lies within [MinTierInclusive, MaxTierInclusive]." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsStealthTierWithinRange constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinTierInclusive;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTierInclusive;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsStealthTierWithinRange constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsStealthTierWithinRange Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_IsStealthTierWithinRange_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_AbilityGatingLibrary_eventIsStealthTierWithinRange_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_IsStealthTierWithinRange_Statics::NewProp_MinTierInclusive = { "MinTierInclusive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_AbilityGatingLibrary_eventIsStealthTierWithinRange_Parms, MinTierInclusive), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_IsStealthTierWithinRange_Statics::NewProp_MaxTierInclusive = { "MaxTierInclusive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_AbilityGatingLibrary_eventIsStealthTierWithinRange_Parms, MaxTierInclusive), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_IsStealthTierWithinRange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_GAS_AbilityGatingLibrary_eventIsStealthTierWithinRange_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_IsStealthTierWithinRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_GAS_AbilityGatingLibrary_eventIsStealthTierWithinRange_Parms), &Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_IsStealthTierWithinRange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_IsStealthTierWithinRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_IsStealthTierWithinRange_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_IsStealthTierWithinRange_Statics::NewProp_MinTierInclusive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_IsStealthTierWithinRange_Statics::NewProp_MaxTierInclusive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_IsStealthTierWithinRange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_IsStealthTierWithinRange_Statics::PropPointers) < 2048);
// ********** End Function IsStealthTierWithinRange Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_IsStealthTierWithinRange_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GAS_AbilityGatingLibrary, nullptr, "IsStealthTierWithinRange", 	Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_IsStealthTierWithinRange_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_IsStealthTierWithinRange_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_IsStealthTierWithinRange_Statics::SOTS_GAS_AbilityGatingLibrary_eventIsStealthTierWithinRange_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_IsStealthTierWithinRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_IsStealthTierWithinRange_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_IsStealthTierWithinRange_Statics::SOTS_GAS_AbilityGatingLibrary_eventIsStealthTierWithinRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_IsStealthTierWithinRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_IsStealthTierWithinRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GAS_AbilityGatingLibrary::execIsStealthTierWithinRange)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_MinTierInclusive);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxTierInclusive);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USOTS_GAS_AbilityGatingLibrary::IsStealthTierWithinRange(Z_Param_WorldContextObject,Z_Param_MinTierInclusive,Z_Param_MaxTierInclusive);
	P_NATIVE_END;
}
// ********** End Class USOTS_GAS_AbilityGatingLibrary Function IsStealthTierWithinRange ***********

// ********** Begin Class USOTS_GAS_AbilityGatingLibrary Function PlayerHasAllSkillTags ************
struct Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasAllSkillTags_Statics
{
	struct SOTS_GAS_AbilityGatingLibrary_eventPlayerHasAllSkillTags_Parms
	{
		const UObject* WorldContextObject;
		FGameplayTagContainer Tags;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|GAS|Ability|Gating" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns true if the player currently has all of the specified skill tags\n// granted by the skill tree subsystem. Empty Tags is treated as trivially true.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GAS_AbilityGatingLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if the player currently has all of the specified skill tags\ngranted by the skill tree subsystem. Empty Tags is treated as trivially true." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function PlayerHasAllSkillTags constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tags;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PlayerHasAllSkillTags constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PlayerHasAllSkillTags Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasAllSkillTags_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_AbilityGatingLibrary_eventPlayerHasAllSkillTags_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasAllSkillTags_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_AbilityGatingLibrary_eventPlayerHasAllSkillTags_Parms, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) }; // 3438578166
void Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasAllSkillTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_GAS_AbilityGatingLibrary_eventPlayerHasAllSkillTags_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasAllSkillTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_GAS_AbilityGatingLibrary_eventPlayerHasAllSkillTags_Parms), &Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasAllSkillTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasAllSkillTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasAllSkillTags_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasAllSkillTags_Statics::NewProp_Tags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasAllSkillTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasAllSkillTags_Statics::PropPointers) < 2048);
// ********** End Function PlayerHasAllSkillTags Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasAllSkillTags_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GAS_AbilityGatingLibrary, nullptr, "PlayerHasAllSkillTags", 	Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasAllSkillTags_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasAllSkillTags_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasAllSkillTags_Statics::SOTS_GAS_AbilityGatingLibrary_eventPlayerHasAllSkillTags_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasAllSkillTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasAllSkillTags_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasAllSkillTags_Statics::SOTS_GAS_AbilityGatingLibrary_eventPlayerHasAllSkillTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasAllSkillTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasAllSkillTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GAS_AbilityGatingLibrary::execPlayerHasAllSkillTags)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_Tags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USOTS_GAS_AbilityGatingLibrary::PlayerHasAllSkillTags(Z_Param_WorldContextObject,Z_Param_Out_Tags);
	P_NATIVE_END;
}
// ********** End Class USOTS_GAS_AbilityGatingLibrary Function PlayerHasAllSkillTags **************

// ********** Begin Class USOTS_GAS_AbilityGatingLibrary Function PlayerHasAnySkillTag *************
struct Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasAnySkillTag_Statics
{
	struct SOTS_GAS_AbilityGatingLibrary_eventPlayerHasAnySkillTag_Parms
	{
		const UObject* WorldContextObject;
		FGameplayTagContainer Tags;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|GAS|Ability|Gating" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns true if the player currently has at least one of the specified\n// skill tags. Empty Tags returns false.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GAS_AbilityGatingLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if the player currently has at least one of the specified\nskill tags. Empty Tags returns false." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function PlayerHasAnySkillTag constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tags;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PlayerHasAnySkillTag constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PlayerHasAnySkillTag Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasAnySkillTag_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_AbilityGatingLibrary_eventPlayerHasAnySkillTag_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasAnySkillTag_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_AbilityGatingLibrary_eventPlayerHasAnySkillTag_Parms, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) }; // 3438578166
void Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasAnySkillTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_GAS_AbilityGatingLibrary_eventPlayerHasAnySkillTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasAnySkillTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_GAS_AbilityGatingLibrary_eventPlayerHasAnySkillTag_Parms), &Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasAnySkillTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasAnySkillTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasAnySkillTag_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasAnySkillTag_Statics::NewProp_Tags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasAnySkillTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasAnySkillTag_Statics::PropPointers) < 2048);
// ********** End Function PlayerHasAnySkillTag Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasAnySkillTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GAS_AbilityGatingLibrary, nullptr, "PlayerHasAnySkillTag", 	Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasAnySkillTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasAnySkillTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasAnySkillTag_Statics::SOTS_GAS_AbilityGatingLibrary_eventPlayerHasAnySkillTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasAnySkillTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasAnySkillTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasAnySkillTag_Statics::SOTS_GAS_AbilityGatingLibrary_eventPlayerHasAnySkillTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasAnySkillTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasAnySkillTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GAS_AbilityGatingLibrary::execPlayerHasAnySkillTag)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_Tags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USOTS_GAS_AbilityGatingLibrary::PlayerHasAnySkillTag(Z_Param_WorldContextObject,Z_Param_Out_Tags);
	P_NATIVE_END;
}
// ********** End Class USOTS_GAS_AbilityGatingLibrary Function PlayerHasAnySkillTag ***************

// ********** Begin Class USOTS_GAS_AbilityGatingLibrary Function PlayerHasGlobalTag ***************
struct Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasGlobalTag_Statics
{
	struct SOTS_GAS_AbilityGatingLibrary_eventPlayerHasGlobalTag_Parms
	{
		const UObject* WorldContextObject;
		FGameplayTag Tag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|GAS|Ability|Gating" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns true if the global player tag state contains the given tag.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GAS_AbilityGatingLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if the global player tag state contains the given tag." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function PlayerHasGlobalTag constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PlayerHasGlobalTag constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PlayerHasGlobalTag Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasGlobalTag_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_AbilityGatingLibrary_eventPlayerHasGlobalTag_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasGlobalTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_AbilityGatingLibrary_eventPlayerHasGlobalTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
void Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasGlobalTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_GAS_AbilityGatingLibrary_eventPlayerHasGlobalTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasGlobalTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_GAS_AbilityGatingLibrary_eventPlayerHasGlobalTag_Parms), &Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasGlobalTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasGlobalTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasGlobalTag_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasGlobalTag_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasGlobalTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasGlobalTag_Statics::PropPointers) < 2048);
// ********** End Function PlayerHasGlobalTag Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasGlobalTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GAS_AbilityGatingLibrary, nullptr, "PlayerHasGlobalTag", 	Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasGlobalTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasGlobalTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasGlobalTag_Statics::SOTS_GAS_AbilityGatingLibrary_eventPlayerHasGlobalTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasGlobalTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasGlobalTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasGlobalTag_Statics::SOTS_GAS_AbilityGatingLibrary_eventPlayerHasGlobalTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasGlobalTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasGlobalTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GAS_AbilityGatingLibrary::execPlayerHasGlobalTag)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USOTS_GAS_AbilityGatingLibrary::PlayerHasGlobalTag(Z_Param_WorldContextObject,Z_Param_Tag);
	P_NATIVE_END;
}
// ********** End Class USOTS_GAS_AbilityGatingLibrary Function PlayerHasGlobalTag *****************

// ********** Begin Class USOTS_GAS_AbilityGatingLibrary *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_GAS_AbilityGatingLibrary;
UClass* USOTS_GAS_AbilityGatingLibrary::GetPrivateStaticClass()
{
	using TClass = USOTS_GAS_AbilityGatingLibrary;
	if (!Z_Registration_Info_UClass_USOTS_GAS_AbilityGatingLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_GAS_AbilityGatingLibrary"),
			Z_Registration_Info_UClass_USOTS_GAS_AbilityGatingLibrary.InnerSingleton,
			StaticRegisterNativesUSOTS_GAS_AbilityGatingLibrary,
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
	return Z_Registration_Info_UClass_USOTS_GAS_AbilityGatingLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_GAS_AbilityGatingLibrary_NoRegister()
{
	return USOTS_GAS_AbilityGatingLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_GAS_AbilityGatingLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Lightweight, read-only helpers for gating abilities based on\n * skill tags, global player tags, and current stealth tier.\n */" },
#endif
		{ "IncludePath", "SOTS_GAS_AbilityGatingLibrary.h" },
		{ "ModuleRelativePath", "Public/SOTS_GAS_AbilityGatingLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lightweight, read-only helpers for gating abilities based on\nskill tags, global player tags, and current stealth tier." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_GAS_AbilityGatingLibrary constinit property declarations ***********
// ********** End Class USOTS_GAS_AbilityGatingLibrary constinit property declarations *************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("IsStealthTierAtOrBelow"), .Pointer = &USOTS_GAS_AbilityGatingLibrary::execIsStealthTierAtOrBelow },
		{ .NameUTF8 = UTF8TEXT("IsStealthTierWithinRange"), .Pointer = &USOTS_GAS_AbilityGatingLibrary::execIsStealthTierWithinRange },
		{ .NameUTF8 = UTF8TEXT("PlayerHasAllSkillTags"), .Pointer = &USOTS_GAS_AbilityGatingLibrary::execPlayerHasAllSkillTags },
		{ .NameUTF8 = UTF8TEXT("PlayerHasAnySkillTag"), .Pointer = &USOTS_GAS_AbilityGatingLibrary::execPlayerHasAnySkillTag },
		{ .NameUTF8 = UTF8TEXT("PlayerHasGlobalTag"), .Pointer = &USOTS_GAS_AbilityGatingLibrary::execPlayerHasGlobalTag },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_IsStealthTierAtOrBelow, "IsStealthTierAtOrBelow" }, // 3532321328
		{ &Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_IsStealthTierWithinRange, "IsStealthTierWithinRange" }, // 2226835151
		{ &Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasAllSkillTags, "PlayerHasAllSkillTags" }, // 1647116667
		{ &Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasAnySkillTag, "PlayerHasAnySkillTag" }, // 2113337176
		{ &Z_Construct_UFunction_USOTS_GAS_AbilityGatingLibrary_PlayerHasGlobalTag, "PlayerHasGlobalTag" }, // 171398546
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_GAS_AbilityGatingLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_GAS_AbilityGatingLibrary_Statics
UObject* (*const Z_Construct_UClass_USOTS_GAS_AbilityGatingLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_GAS_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_GAS_AbilityGatingLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_GAS_AbilityGatingLibrary_Statics::ClassParams = {
	&USOTS_GAS_AbilityGatingLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_GAS_AbilityGatingLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_GAS_AbilityGatingLibrary_Statics::Class_MetaDataParams)
};
void USOTS_GAS_AbilityGatingLibrary::StaticRegisterNativesUSOTS_GAS_AbilityGatingLibrary()
{
	UClass* Class = USOTS_GAS_AbilityGatingLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USOTS_GAS_AbilityGatingLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_USOTS_GAS_AbilityGatingLibrary()
{
	if (!Z_Registration_Info_UClass_USOTS_GAS_AbilityGatingLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_GAS_AbilityGatingLibrary.OuterSingleton, Z_Construct_UClass_USOTS_GAS_AbilityGatingLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_GAS_AbilityGatingLibrary.OuterSingleton;
}
USOTS_GAS_AbilityGatingLibrary::USOTS_GAS_AbilityGatingLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_GAS_AbilityGatingLibrary);
USOTS_GAS_AbilityGatingLibrary::~USOTS_GAS_AbilityGatingLibrary() {}
// ********** End Class USOTS_GAS_AbilityGatingLibrary *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_AbilityGatingLibrary_h__Script_SOTS_GAS_Plugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_GAS_AbilityGatingLibrary, USOTS_GAS_AbilityGatingLibrary::StaticClass, TEXT("USOTS_GAS_AbilityGatingLibrary"), &Z_Registration_Info_UClass_USOTS_GAS_AbilityGatingLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_GAS_AbilityGatingLibrary), 2073593059U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_AbilityGatingLibrary_h__Script_SOTS_GAS_Plugin_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_AbilityGatingLibrary_h__Script_SOTS_GAS_Plugin_4120638090{
	TEXT("/Script/SOTS_GAS_Plugin"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_AbilityGatingLibrary_h__Script_SOTS_GAS_Plugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_AbilityGatingLibrary_h__Script_SOTS_GAS_Plugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
