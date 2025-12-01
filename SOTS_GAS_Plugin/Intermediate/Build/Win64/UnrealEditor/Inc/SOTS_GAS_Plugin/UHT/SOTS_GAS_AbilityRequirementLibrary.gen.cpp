// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTS_GAS_AbilityRequirementLibrary.h"
#include "Data/SOTS_AbilityTypes.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_GAS_AbilityRequirementLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_USOTS_AbilityRequirementLibraryAsset_NoRegister();
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_USOTS_GAS_AbilityRequirementLibrary();
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_USOTS_GAS_AbilityRequirementLibrary_NoRegister();
SOTS_GAS_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_AbilityRequirementCheckResult();
SOTS_GAS_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_AbilityRequirements();
UPackage* Z_Construct_UPackage__Script_SOTS_GAS_Plugin();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FSOTS_AbilityRequirementCheckResult *******************************
struct Z_Construct_UScriptStruct_FSOTS_AbilityRequirementCheckResult_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_AbilityRequirementCheckResult); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_AbilityRequirementCheckResult); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SOTS_GAS_AbilityRequirementLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMeetsAllRequirements_MetaData[] = {
		{ "Category", "SOTS|GAS|Ability" },
		{ "ModuleRelativePath", "Public/SOTS_GAS_AbilityRequirementLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMissingSkillTags_MetaData[] = {
		{ "Category", "SOTS|GAS|Ability" },
		{ "ModuleRelativePath", "Public/SOTS_GAS_AbilityRequirementLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMissingPlayerTags_MetaData[] = {
		{ "Category", "SOTS|GAS|Ability" },
		{ "ModuleRelativePath", "Public/SOTS_GAS_AbilityRequirementLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStealthTierTooLow_MetaData[] = {
		{ "Category", "SOTS|GAS|Ability" },
		{ "ModuleRelativePath", "Public/SOTS_GAS_AbilityRequirementLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStealthTierTooHigh_MetaData[] = {
		{ "Category", "SOTS|GAS|Ability" },
		{ "ModuleRelativePath", "Public/SOTS_GAS_AbilityRequirementLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStealthScoreTooHigh_MetaData[] = {
		{ "Category", "SOTS|GAS|Ability" },
		{ "ModuleRelativePath", "Public/SOTS_GAS_AbilityRequirementLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_AbilityRequirementCheckResult constinit property declarations 
	static void NewProp_bMeetsAllRequirements_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMeetsAllRequirements;
	static void NewProp_bMissingSkillTags_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMissingSkillTags;
	static void NewProp_bMissingPlayerTags_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMissingPlayerTags;
	static void NewProp_bStealthTierTooLow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStealthTierTooLow;
	static void NewProp_bStealthTierTooHigh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStealthTierTooHigh;
	static void NewProp_bStealthScoreTooHigh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStealthScoreTooHigh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_AbilityRequirementCheckResult constinit property declarations *
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_AbilityRequirementCheckResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_AbilityRequirementCheckResult_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_AbilityRequirementCheckResult;
class UScriptStruct* FSOTS_AbilityRequirementCheckResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_AbilityRequirementCheckResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_AbilityRequirementCheckResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_AbilityRequirementCheckResult, (UObject*)Z_Construct_UPackage__Script_SOTS_GAS_Plugin(), TEXT("SOTS_AbilityRequirementCheckResult"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_AbilityRequirementCheckResult.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_AbilityRequirementCheckResult Property Definitions **********
void Z_Construct_UScriptStruct_FSOTS_AbilityRequirementCheckResult_Statics::NewProp_bMeetsAllRequirements_SetBit(void* Obj)
{
	((FSOTS_AbilityRequirementCheckResult*)Obj)->bMeetsAllRequirements = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSOTS_AbilityRequirementCheckResult_Statics::NewProp_bMeetsAllRequirements = { "bMeetsAllRequirements", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSOTS_AbilityRequirementCheckResult), &Z_Construct_UScriptStruct_FSOTS_AbilityRequirementCheckResult_Statics::NewProp_bMeetsAllRequirements_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMeetsAllRequirements_MetaData), NewProp_bMeetsAllRequirements_MetaData) };
void Z_Construct_UScriptStruct_FSOTS_AbilityRequirementCheckResult_Statics::NewProp_bMissingSkillTags_SetBit(void* Obj)
{
	((FSOTS_AbilityRequirementCheckResult*)Obj)->bMissingSkillTags = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSOTS_AbilityRequirementCheckResult_Statics::NewProp_bMissingSkillTags = { "bMissingSkillTags", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSOTS_AbilityRequirementCheckResult), &Z_Construct_UScriptStruct_FSOTS_AbilityRequirementCheckResult_Statics::NewProp_bMissingSkillTags_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMissingSkillTags_MetaData), NewProp_bMissingSkillTags_MetaData) };
void Z_Construct_UScriptStruct_FSOTS_AbilityRequirementCheckResult_Statics::NewProp_bMissingPlayerTags_SetBit(void* Obj)
{
	((FSOTS_AbilityRequirementCheckResult*)Obj)->bMissingPlayerTags = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSOTS_AbilityRequirementCheckResult_Statics::NewProp_bMissingPlayerTags = { "bMissingPlayerTags", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSOTS_AbilityRequirementCheckResult), &Z_Construct_UScriptStruct_FSOTS_AbilityRequirementCheckResult_Statics::NewProp_bMissingPlayerTags_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMissingPlayerTags_MetaData), NewProp_bMissingPlayerTags_MetaData) };
void Z_Construct_UScriptStruct_FSOTS_AbilityRequirementCheckResult_Statics::NewProp_bStealthTierTooLow_SetBit(void* Obj)
{
	((FSOTS_AbilityRequirementCheckResult*)Obj)->bStealthTierTooLow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSOTS_AbilityRequirementCheckResult_Statics::NewProp_bStealthTierTooLow = { "bStealthTierTooLow", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSOTS_AbilityRequirementCheckResult), &Z_Construct_UScriptStruct_FSOTS_AbilityRequirementCheckResult_Statics::NewProp_bStealthTierTooLow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStealthTierTooLow_MetaData), NewProp_bStealthTierTooLow_MetaData) };
void Z_Construct_UScriptStruct_FSOTS_AbilityRequirementCheckResult_Statics::NewProp_bStealthTierTooHigh_SetBit(void* Obj)
{
	((FSOTS_AbilityRequirementCheckResult*)Obj)->bStealthTierTooHigh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSOTS_AbilityRequirementCheckResult_Statics::NewProp_bStealthTierTooHigh = { "bStealthTierTooHigh", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSOTS_AbilityRequirementCheckResult), &Z_Construct_UScriptStruct_FSOTS_AbilityRequirementCheckResult_Statics::NewProp_bStealthTierTooHigh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStealthTierTooHigh_MetaData), NewProp_bStealthTierTooHigh_MetaData) };
void Z_Construct_UScriptStruct_FSOTS_AbilityRequirementCheckResult_Statics::NewProp_bStealthScoreTooHigh_SetBit(void* Obj)
{
	((FSOTS_AbilityRequirementCheckResult*)Obj)->bStealthScoreTooHigh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSOTS_AbilityRequirementCheckResult_Statics::NewProp_bStealthScoreTooHigh = { "bStealthScoreTooHigh", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSOTS_AbilityRequirementCheckResult), &Z_Construct_UScriptStruct_FSOTS_AbilityRequirementCheckResult_Statics::NewProp_bStealthScoreTooHigh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStealthScoreTooHigh_MetaData), NewProp_bStealthScoreTooHigh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_AbilityRequirementCheckResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_AbilityRequirementCheckResult_Statics::NewProp_bMeetsAllRequirements,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_AbilityRequirementCheckResult_Statics::NewProp_bMissingSkillTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_AbilityRequirementCheckResult_Statics::NewProp_bMissingPlayerTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_AbilityRequirementCheckResult_Statics::NewProp_bStealthTierTooLow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_AbilityRequirementCheckResult_Statics::NewProp_bStealthTierTooHigh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_AbilityRequirementCheckResult_Statics::NewProp_bStealthScoreTooHigh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_AbilityRequirementCheckResult_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_AbilityRequirementCheckResult Property Definitions ************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_AbilityRequirementCheckResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_GAS_Plugin,
	nullptr,
	&NewStructOps,
	"SOTS_AbilityRequirementCheckResult",
	Z_Construct_UScriptStruct_FSOTS_AbilityRequirementCheckResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_AbilityRequirementCheckResult_Statics::PropPointers),
	sizeof(FSOTS_AbilityRequirementCheckResult),
	alignof(FSOTS_AbilityRequirementCheckResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_AbilityRequirementCheckResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_AbilityRequirementCheckResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_AbilityRequirementCheckResult()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_AbilityRequirementCheckResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_AbilityRequirementCheckResult.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_AbilityRequirementCheckResult_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_AbilityRequirementCheckResult.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_AbilityRequirementCheckResult *********************************

// ********** Begin Class USOTS_GAS_AbilityRequirementLibrary Function CanActivateAbilityWithRequirements 
struct Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_CanActivateAbilityWithRequirements_Statics
{
	struct SOTS_GAS_AbilityRequirementLibrary_eventCanActivateAbilityWithRequirements_Parms
	{
		const UObject* WorldContextObject;
		FSOTS_AbilityRequirements Requirements;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|GAS|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Convenience boolean wrapper.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GAS_AbilityRequirementLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convenience boolean wrapper." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Requirements_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function CanActivateAbilityWithRequirements constinit property declarations ****
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Requirements;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CanActivateAbilityWithRequirements constinit property declarations ******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CanActivateAbilityWithRequirements Property Definitions ***************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_CanActivateAbilityWithRequirements_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_AbilityRequirementLibrary_eventCanActivateAbilityWithRequirements_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_CanActivateAbilityWithRequirements_Statics::NewProp_Requirements = { "Requirements", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_AbilityRequirementLibrary_eventCanActivateAbilityWithRequirements_Parms, Requirements), Z_Construct_UScriptStruct_FSOTS_AbilityRequirements, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Requirements_MetaData), NewProp_Requirements_MetaData) }; // 3678999227
void Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_CanActivateAbilityWithRequirements_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_GAS_AbilityRequirementLibrary_eventCanActivateAbilityWithRequirements_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_CanActivateAbilityWithRequirements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_GAS_AbilityRequirementLibrary_eventCanActivateAbilityWithRequirements_Parms), &Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_CanActivateAbilityWithRequirements_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_CanActivateAbilityWithRequirements_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_CanActivateAbilityWithRequirements_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_CanActivateAbilityWithRequirements_Statics::NewProp_Requirements,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_CanActivateAbilityWithRequirements_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_CanActivateAbilityWithRequirements_Statics::PropPointers) < 2048);
// ********** End Function CanActivateAbilityWithRequirements Property Definitions *****************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_CanActivateAbilityWithRequirements_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GAS_AbilityRequirementLibrary, nullptr, "CanActivateAbilityWithRequirements", 	Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_CanActivateAbilityWithRequirements_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_CanActivateAbilityWithRequirements_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_CanActivateAbilityWithRequirements_Statics::SOTS_GAS_AbilityRequirementLibrary_eventCanActivateAbilityWithRequirements_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_CanActivateAbilityWithRequirements_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_CanActivateAbilityWithRequirements_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_CanActivateAbilityWithRequirements_Statics::SOTS_GAS_AbilityRequirementLibrary_eventCanActivateAbilityWithRequirements_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_CanActivateAbilityWithRequirements()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_CanActivateAbilityWithRequirements_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GAS_AbilityRequirementLibrary::execCanActivateAbilityWithRequirements)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FSOTS_AbilityRequirements,Z_Param_Out_Requirements);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USOTS_GAS_AbilityRequirementLibrary::CanActivateAbilityWithRequirements(Z_Param_WorldContextObject,Z_Param_Out_Requirements);
	P_NATIVE_END;
}
// ********** End Class USOTS_GAS_AbilityRequirementLibrary Function CanActivateAbilityWithRequirements 

// ********** Begin Class USOTS_GAS_AbilityRequirementLibrary Function DescribeAbilityRequirementCheckResult 
struct Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_DescribeAbilityRequirementCheckResult_Statics
{
	struct SOTS_GAS_AbilityRequirementLibrary_eventDescribeAbilityRequirementCheckResult_Parms
	{
		FSOTS_AbilityRequirementCheckResult Result;
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|GAS|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Human-readable explanation of a requirement check result, suitable for UI/debug.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GAS_AbilityRequirementLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Human-readable explanation of a requirement check result, suitable for UI/debug." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DescribeAbilityRequirementCheckResult constinit property declarations *
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DescribeAbilityRequirementCheckResult constinit property declarations ***
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DescribeAbilityRequirementCheckResult Property Definitions ************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_DescribeAbilityRequirementCheckResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_AbilityRequirementLibrary_eventDescribeAbilityRequirementCheckResult_Parms, Result), Z_Construct_UScriptStruct_FSOTS_AbilityRequirementCheckResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 660306694
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_DescribeAbilityRequirementCheckResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_AbilityRequirementLibrary_eventDescribeAbilityRequirementCheckResult_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_DescribeAbilityRequirementCheckResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_DescribeAbilityRequirementCheckResult_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_DescribeAbilityRequirementCheckResult_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_DescribeAbilityRequirementCheckResult_Statics::PropPointers) < 2048);
// ********** End Function DescribeAbilityRequirementCheckResult Property Definitions **************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_DescribeAbilityRequirementCheckResult_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GAS_AbilityRequirementLibrary, nullptr, "DescribeAbilityRequirementCheckResult", 	Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_DescribeAbilityRequirementCheckResult_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_DescribeAbilityRequirementCheckResult_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_DescribeAbilityRequirementCheckResult_Statics::SOTS_GAS_AbilityRequirementLibrary_eventDescribeAbilityRequirementCheckResult_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_DescribeAbilityRequirementCheckResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_DescribeAbilityRequirementCheckResult_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_DescribeAbilityRequirementCheckResult_Statics::SOTS_GAS_AbilityRequirementLibrary_eventDescribeAbilityRequirementCheckResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_DescribeAbilityRequirementCheckResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_DescribeAbilityRequirementCheckResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GAS_AbilityRequirementLibrary::execDescribeAbilityRequirementCheckResult)
{
	P_GET_STRUCT_REF(FSOTS_AbilityRequirementCheckResult,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=USOTS_GAS_AbilityRequirementLibrary::DescribeAbilityRequirementCheckResult(Z_Param_Out_Result);
	P_NATIVE_END;
}
// ********** End Class USOTS_GAS_AbilityRequirementLibrary Function DescribeAbilityRequirementCheckResult 

// ********** Begin Class USOTS_GAS_AbilityRequirementLibrary Function EvaluateAbilityFromLibraryWithReason 
struct Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityFromLibraryWithReason_Statics
{
	struct SOTS_GAS_AbilityRequirementLibrary_eventEvaluateAbilityFromLibraryWithReason_Parms
	{
		const UObject* WorldContextObject;
		USOTS_AbilityRequirementLibraryAsset* LibraryAsset;
		FGameplayTag AbilityTag;
		FSOTS_AbilityRequirementCheckResult OutResult;
		FText OutDebugDescription;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|GAS|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// High-level convenience wrapper that resolves requirements from a library,\n// evaluates them, and returns both the structured result and a debug string.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GAS_AbilityRequirementLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "High-level convenience wrapper that resolves requirements from a library,\nevaluates them, and returns both the structured result and a debug string." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function EvaluateAbilityFromLibraryWithReason constinit property declarations **
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LibraryAsset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FTextPropertyParams NewProp_OutDebugDescription;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EvaluateAbilityFromLibraryWithReason constinit property declarations ****
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EvaluateAbilityFromLibraryWithReason Property Definitions *************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityFromLibraryWithReason_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_AbilityRequirementLibrary_eventEvaluateAbilityFromLibraryWithReason_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityFromLibraryWithReason_Statics::NewProp_LibraryAsset = { "LibraryAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_AbilityRequirementLibrary_eventEvaluateAbilityFromLibraryWithReason_Parms, LibraryAsset), Z_Construct_UClass_USOTS_AbilityRequirementLibraryAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityFromLibraryWithReason_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_AbilityRequirementLibrary_eventEvaluateAbilityFromLibraryWithReason_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityFromLibraryWithReason_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_AbilityRequirementLibrary_eventEvaluateAbilityFromLibraryWithReason_Parms, OutResult), Z_Construct_UScriptStruct_FSOTS_AbilityRequirementCheckResult, METADATA_PARAMS(0, nullptr) }; // 660306694
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityFromLibraryWithReason_Statics::NewProp_OutDebugDescription = { "OutDebugDescription", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_AbilityRequirementLibrary_eventEvaluateAbilityFromLibraryWithReason_Parms, OutDebugDescription), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityFromLibraryWithReason_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_GAS_AbilityRequirementLibrary_eventEvaluateAbilityFromLibraryWithReason_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityFromLibraryWithReason_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_GAS_AbilityRequirementLibrary_eventEvaluateAbilityFromLibraryWithReason_Parms), &Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityFromLibraryWithReason_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityFromLibraryWithReason_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityFromLibraryWithReason_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityFromLibraryWithReason_Statics::NewProp_LibraryAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityFromLibraryWithReason_Statics::NewProp_AbilityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityFromLibraryWithReason_Statics::NewProp_OutResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityFromLibraryWithReason_Statics::NewProp_OutDebugDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityFromLibraryWithReason_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityFromLibraryWithReason_Statics::PropPointers) < 2048);
// ********** End Function EvaluateAbilityFromLibraryWithReason Property Definitions ***************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityFromLibraryWithReason_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GAS_AbilityRequirementLibrary, nullptr, "EvaluateAbilityFromLibraryWithReason", 	Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityFromLibraryWithReason_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityFromLibraryWithReason_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityFromLibraryWithReason_Statics::SOTS_GAS_AbilityRequirementLibrary_eventEvaluateAbilityFromLibraryWithReason_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityFromLibraryWithReason_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityFromLibraryWithReason_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityFromLibraryWithReason_Statics::SOTS_GAS_AbilityRequirementLibrary_eventEvaluateAbilityFromLibraryWithReason_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityFromLibraryWithReason()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityFromLibraryWithReason_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GAS_AbilityRequirementLibrary::execEvaluateAbilityFromLibraryWithReason)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(USOTS_AbilityRequirementLibraryAsset,Z_Param_LibraryAsset);
	P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTag);
	P_GET_STRUCT_REF(FSOTS_AbilityRequirementCheckResult,Z_Param_Out_OutResult);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutDebugDescription);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USOTS_GAS_AbilityRequirementLibrary::EvaluateAbilityFromLibraryWithReason(Z_Param_WorldContextObject,Z_Param_LibraryAsset,Z_Param_AbilityTag,Z_Param_Out_OutResult,Z_Param_Out_OutDebugDescription);
	P_NATIVE_END;
}
// ********** End Class USOTS_GAS_AbilityRequirementLibrary Function EvaluateAbilityFromLibraryWithReason 

// ********** Begin Class USOTS_GAS_AbilityRequirementLibrary Function EvaluateAbilityRequirements *
struct Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirements_Statics
{
	struct SOTS_GAS_AbilityRequirementLibrary_eventEvaluateAbilityRequirements_Parms
	{
		const UObject* WorldContextObject;
		FSOTS_AbilityRequirements Requirements;
		FSOTS_AbilityRequirementCheckResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|GAS|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Evaluate the requirements struct directly (no DataAsset).\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GAS_AbilityRequirementLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Evaluate the requirements struct directly (no DataAsset)." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Requirements_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function EvaluateAbilityRequirements constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Requirements;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EvaluateAbilityRequirements constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EvaluateAbilityRequirements Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirements_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_AbilityRequirementLibrary_eventEvaluateAbilityRequirements_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirements_Statics::NewProp_Requirements = { "Requirements", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_AbilityRequirementLibrary_eventEvaluateAbilityRequirements_Parms, Requirements), Z_Construct_UScriptStruct_FSOTS_AbilityRequirements, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Requirements_MetaData), NewProp_Requirements_MetaData) }; // 3678999227
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_AbilityRequirementLibrary_eventEvaluateAbilityRequirements_Parms, ReturnValue), Z_Construct_UScriptStruct_FSOTS_AbilityRequirementCheckResult, METADATA_PARAMS(0, nullptr) }; // 660306694
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirements_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirements_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirements_Statics::NewProp_Requirements,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirements_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirements_Statics::PropPointers) < 2048);
// ********** End Function EvaluateAbilityRequirements Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirements_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GAS_AbilityRequirementLibrary, nullptr, "EvaluateAbilityRequirements", 	Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirements_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirements_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirements_Statics::SOTS_GAS_AbilityRequirementLibrary_eventEvaluateAbilityRequirements_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirements_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirements_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirements_Statics::SOTS_GAS_AbilityRequirementLibrary_eventEvaluateAbilityRequirements_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirements()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirements_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GAS_AbilityRequirementLibrary::execEvaluateAbilityRequirements)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FSOTS_AbilityRequirements,Z_Param_Out_Requirements);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSOTS_AbilityRequirementCheckResult*)Z_Param__Result=USOTS_GAS_AbilityRequirementLibrary::EvaluateAbilityRequirements(Z_Param_WorldContextObject,Z_Param_Out_Requirements);
	P_NATIVE_END;
}
// ********** End Class USOTS_GAS_AbilityRequirementLibrary Function EvaluateAbilityRequirements ***

// ********** Begin Class USOTS_GAS_AbilityRequirementLibrary Function EvaluateAbilityRequirementsFromLibrary 
struct Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirementsFromLibrary_Statics
{
	struct SOTS_GAS_AbilityRequirementLibrary_eventEvaluateAbilityRequirementsFromLibrary_Parms
	{
		const UObject* WorldContextObject;
		USOTS_AbilityRequirementLibraryAsset* LibraryAsset;
		FGameplayTag AbilityTag;
		FSOTS_AbilityRequirementCheckResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|GAS|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Resolve requirements by tag from a DataAsset and evaluate them.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GAS_AbilityRequirementLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resolve requirements by tag from a DataAsset and evaluate them." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function EvaluateAbilityRequirementsFromLibrary constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LibraryAsset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EvaluateAbilityRequirementsFromLibrary constinit property declarations **
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EvaluateAbilityRequirementsFromLibrary Property Definitions ***********
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirementsFromLibrary_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_AbilityRequirementLibrary_eventEvaluateAbilityRequirementsFromLibrary_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirementsFromLibrary_Statics::NewProp_LibraryAsset = { "LibraryAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_AbilityRequirementLibrary_eventEvaluateAbilityRequirementsFromLibrary_Parms, LibraryAsset), Z_Construct_UClass_USOTS_AbilityRequirementLibraryAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirementsFromLibrary_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_AbilityRequirementLibrary_eventEvaluateAbilityRequirementsFromLibrary_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirementsFromLibrary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_AbilityRequirementLibrary_eventEvaluateAbilityRequirementsFromLibrary_Parms, ReturnValue), Z_Construct_UScriptStruct_FSOTS_AbilityRequirementCheckResult, METADATA_PARAMS(0, nullptr) }; // 660306694
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirementsFromLibrary_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirementsFromLibrary_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirementsFromLibrary_Statics::NewProp_LibraryAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirementsFromLibrary_Statics::NewProp_AbilityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirementsFromLibrary_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirementsFromLibrary_Statics::PropPointers) < 2048);
// ********** End Function EvaluateAbilityRequirementsFromLibrary Property Definitions *************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirementsFromLibrary_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GAS_AbilityRequirementLibrary, nullptr, "EvaluateAbilityRequirementsFromLibrary", 	Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirementsFromLibrary_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirementsFromLibrary_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirementsFromLibrary_Statics::SOTS_GAS_AbilityRequirementLibrary_eventEvaluateAbilityRequirementsFromLibrary_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirementsFromLibrary_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirementsFromLibrary_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirementsFromLibrary_Statics::SOTS_GAS_AbilityRequirementLibrary_eventEvaluateAbilityRequirementsFromLibrary_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirementsFromLibrary()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirementsFromLibrary_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GAS_AbilityRequirementLibrary::execEvaluateAbilityRequirementsFromLibrary)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(USOTS_AbilityRequirementLibraryAsset,Z_Param_LibraryAsset);
	P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSOTS_AbilityRequirementCheckResult*)Z_Param__Result=USOTS_GAS_AbilityRequirementLibrary::EvaluateAbilityRequirementsFromLibrary(Z_Param_WorldContextObject,Z_Param_LibraryAsset,Z_Param_AbilityTag);
	P_NATIVE_END;
}
// ********** End Class USOTS_GAS_AbilityRequirementLibrary Function EvaluateAbilityRequirementsFromLibrary 

// ********** Begin Class USOTS_GAS_AbilityRequirementLibrary Function EvaluateAbilityRequirementsWithReason 
struct Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirementsWithReason_Statics
{
	struct SOTS_GAS_AbilityRequirementLibrary_eventEvaluateAbilityRequirementsWithReason_Parms
	{
		const UObject* WorldContextObject;
		FSOTS_AbilityRequirements Requirements;
		FText OutFailureReason;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|GAS|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Convenience wrapper that returns a bool and optional failure reason.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GAS_AbilityRequirementLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convenience wrapper that returns a bool and optional failure reason." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Requirements_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function EvaluateAbilityRequirementsWithReason constinit property declarations *
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Requirements;
	static const UECodeGen_Private::FTextPropertyParams NewProp_OutFailureReason;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EvaluateAbilityRequirementsWithReason constinit property declarations ***
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EvaluateAbilityRequirementsWithReason Property Definitions ************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirementsWithReason_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_AbilityRequirementLibrary_eventEvaluateAbilityRequirementsWithReason_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirementsWithReason_Statics::NewProp_Requirements = { "Requirements", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_AbilityRequirementLibrary_eventEvaluateAbilityRequirementsWithReason_Parms, Requirements), Z_Construct_UScriptStruct_FSOTS_AbilityRequirements, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Requirements_MetaData), NewProp_Requirements_MetaData) }; // 3678999227
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirementsWithReason_Statics::NewProp_OutFailureReason = { "OutFailureReason", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_AbilityRequirementLibrary_eventEvaluateAbilityRequirementsWithReason_Parms, OutFailureReason), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirementsWithReason_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_GAS_AbilityRequirementLibrary_eventEvaluateAbilityRequirementsWithReason_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirementsWithReason_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_GAS_AbilityRequirementLibrary_eventEvaluateAbilityRequirementsWithReason_Parms), &Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirementsWithReason_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirementsWithReason_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirementsWithReason_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirementsWithReason_Statics::NewProp_Requirements,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirementsWithReason_Statics::NewProp_OutFailureReason,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirementsWithReason_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirementsWithReason_Statics::PropPointers) < 2048);
// ********** End Function EvaluateAbilityRequirementsWithReason Property Definitions **************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirementsWithReason_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GAS_AbilityRequirementLibrary, nullptr, "EvaluateAbilityRequirementsWithReason", 	Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirementsWithReason_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirementsWithReason_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirementsWithReason_Statics::SOTS_GAS_AbilityRequirementLibrary_eventEvaluateAbilityRequirementsWithReason_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirementsWithReason_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirementsWithReason_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirementsWithReason_Statics::SOTS_GAS_AbilityRequirementLibrary_eventEvaluateAbilityRequirementsWithReason_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirementsWithReason()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirementsWithReason_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GAS_AbilityRequirementLibrary::execEvaluateAbilityRequirementsWithReason)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FSOTS_AbilityRequirements,Z_Param_Out_Requirements);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutFailureReason);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USOTS_GAS_AbilityRequirementLibrary::EvaluateAbilityRequirementsWithReason(Z_Param_WorldContextObject,Z_Param_Out_Requirements,Z_Param_Out_OutFailureReason);
	P_NATIVE_END;
}
// ********** End Class USOTS_GAS_AbilityRequirementLibrary Function EvaluateAbilityRequirementsWithReason 

// ********** Begin Class USOTS_GAS_AbilityRequirementLibrary Function SOTS_CanActivateAbilityByTag 
struct Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_SOTS_CanActivateAbilityByTag_Statics
{
	struct SOTS_GAS_AbilityRequirementLibrary_eventSOTS_CanActivateAbilityByTag_Parms
	{
		const UObject* WorldContextObject;
		USOTS_AbilityRequirementLibraryAsset* LibraryAsset;
		FGameplayTag AbilityTag;
		FText OutFailureReason;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|GAS|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// High-level helper that looks up requirements by ability tag and reports\n// a localized failure reason. This is intended for ability UI and gating.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GAS_AbilityRequirementLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "High-level helper that looks up requirements by ability tag and reports\na localized failure reason. This is intended for ability UI and gating." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SOTS_CanActivateAbilityByTag constinit property declarations **********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LibraryAsset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static const UECodeGen_Private::FTextPropertyParams NewProp_OutFailureReason;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SOTS_CanActivateAbilityByTag constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SOTS_CanActivateAbilityByTag Property Definitions *********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_SOTS_CanActivateAbilityByTag_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_AbilityRequirementLibrary_eventSOTS_CanActivateAbilityByTag_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_SOTS_CanActivateAbilityByTag_Statics::NewProp_LibraryAsset = { "LibraryAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_AbilityRequirementLibrary_eventSOTS_CanActivateAbilityByTag_Parms, LibraryAsset), Z_Construct_UClass_USOTS_AbilityRequirementLibraryAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_SOTS_CanActivateAbilityByTag_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_AbilityRequirementLibrary_eventSOTS_CanActivateAbilityByTag_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_SOTS_CanActivateAbilityByTag_Statics::NewProp_OutFailureReason = { "OutFailureReason", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_AbilityRequirementLibrary_eventSOTS_CanActivateAbilityByTag_Parms, OutFailureReason), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_SOTS_CanActivateAbilityByTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_GAS_AbilityRequirementLibrary_eventSOTS_CanActivateAbilityByTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_SOTS_CanActivateAbilityByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_GAS_AbilityRequirementLibrary_eventSOTS_CanActivateAbilityByTag_Parms), &Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_SOTS_CanActivateAbilityByTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_SOTS_CanActivateAbilityByTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_SOTS_CanActivateAbilityByTag_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_SOTS_CanActivateAbilityByTag_Statics::NewProp_LibraryAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_SOTS_CanActivateAbilityByTag_Statics::NewProp_AbilityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_SOTS_CanActivateAbilityByTag_Statics::NewProp_OutFailureReason,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_SOTS_CanActivateAbilityByTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_SOTS_CanActivateAbilityByTag_Statics::PropPointers) < 2048);
// ********** End Function SOTS_CanActivateAbilityByTag Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_SOTS_CanActivateAbilityByTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GAS_AbilityRequirementLibrary, nullptr, "SOTS_CanActivateAbilityByTag", 	Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_SOTS_CanActivateAbilityByTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_SOTS_CanActivateAbilityByTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_SOTS_CanActivateAbilityByTag_Statics::SOTS_GAS_AbilityRequirementLibrary_eventSOTS_CanActivateAbilityByTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_SOTS_CanActivateAbilityByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_SOTS_CanActivateAbilityByTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_SOTS_CanActivateAbilityByTag_Statics::SOTS_GAS_AbilityRequirementLibrary_eventSOTS_CanActivateAbilityByTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_SOTS_CanActivateAbilityByTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_SOTS_CanActivateAbilityByTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GAS_AbilityRequirementLibrary::execSOTS_CanActivateAbilityByTag)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(USOTS_AbilityRequirementLibraryAsset,Z_Param_LibraryAsset);
	P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTag);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutFailureReason);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USOTS_GAS_AbilityRequirementLibrary::SOTS_CanActivateAbilityByTag(Z_Param_WorldContextObject,Z_Param_LibraryAsset,Z_Param_AbilityTag,Z_Param_Out_OutFailureReason);
	P_NATIVE_END;
}
// ********** End Class USOTS_GAS_AbilityRequirementLibrary Function SOTS_CanActivateAbilityByTag **

// ********** Begin Class USOTS_GAS_AbilityRequirementLibrary **************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_GAS_AbilityRequirementLibrary;
UClass* USOTS_GAS_AbilityRequirementLibrary::GetPrivateStaticClass()
{
	using TClass = USOTS_GAS_AbilityRequirementLibrary;
	if (!Z_Registration_Info_UClass_USOTS_GAS_AbilityRequirementLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_GAS_AbilityRequirementLibrary"),
			Z_Registration_Info_UClass_USOTS_GAS_AbilityRequirementLibrary.InnerSingleton,
			StaticRegisterNativesUSOTS_GAS_AbilityRequirementLibrary,
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
	return Z_Registration_Info_UClass_USOTS_GAS_AbilityRequirementLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_GAS_AbilityRequirementLibrary_NoRegister()
{
	return USOTS_GAS_AbilityRequirementLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_GAS_AbilityRequirementLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SOTS_GAS_AbilityRequirementLibrary.h" },
		{ "ModuleRelativePath", "Public/SOTS_GAS_AbilityRequirementLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_GAS_AbilityRequirementLibrary constinit property declarations ******
// ********** End Class USOTS_GAS_AbilityRequirementLibrary constinit property declarations ********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CanActivateAbilityWithRequirements"), .Pointer = &USOTS_GAS_AbilityRequirementLibrary::execCanActivateAbilityWithRequirements },
		{ .NameUTF8 = UTF8TEXT("DescribeAbilityRequirementCheckResult"), .Pointer = &USOTS_GAS_AbilityRequirementLibrary::execDescribeAbilityRequirementCheckResult },
		{ .NameUTF8 = UTF8TEXT("EvaluateAbilityFromLibraryWithReason"), .Pointer = &USOTS_GAS_AbilityRequirementLibrary::execEvaluateAbilityFromLibraryWithReason },
		{ .NameUTF8 = UTF8TEXT("EvaluateAbilityRequirements"), .Pointer = &USOTS_GAS_AbilityRequirementLibrary::execEvaluateAbilityRequirements },
		{ .NameUTF8 = UTF8TEXT("EvaluateAbilityRequirementsFromLibrary"), .Pointer = &USOTS_GAS_AbilityRequirementLibrary::execEvaluateAbilityRequirementsFromLibrary },
		{ .NameUTF8 = UTF8TEXT("EvaluateAbilityRequirementsWithReason"), .Pointer = &USOTS_GAS_AbilityRequirementLibrary::execEvaluateAbilityRequirementsWithReason },
		{ .NameUTF8 = UTF8TEXT("SOTS_CanActivateAbilityByTag"), .Pointer = &USOTS_GAS_AbilityRequirementLibrary::execSOTS_CanActivateAbilityByTag },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_CanActivateAbilityWithRequirements, "CanActivateAbilityWithRequirements" }, // 3397887363
		{ &Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_DescribeAbilityRequirementCheckResult, "DescribeAbilityRequirementCheckResult" }, // 264183523
		{ &Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityFromLibraryWithReason, "EvaluateAbilityFromLibraryWithReason" }, // 2426164540
		{ &Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirements, "EvaluateAbilityRequirements" }, // 3743060356
		{ &Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirementsFromLibrary, "EvaluateAbilityRequirementsFromLibrary" }, // 2235678595
		{ &Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_EvaluateAbilityRequirementsWithReason, "EvaluateAbilityRequirementsWithReason" }, // 2437389388
		{ &Z_Construct_UFunction_USOTS_GAS_AbilityRequirementLibrary_SOTS_CanActivateAbilityByTag, "SOTS_CanActivateAbilityByTag" }, // 577951966
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_GAS_AbilityRequirementLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_GAS_AbilityRequirementLibrary_Statics
UObject* (*const Z_Construct_UClass_USOTS_GAS_AbilityRequirementLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_GAS_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_GAS_AbilityRequirementLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_GAS_AbilityRequirementLibrary_Statics::ClassParams = {
	&USOTS_GAS_AbilityRequirementLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_GAS_AbilityRequirementLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_GAS_AbilityRequirementLibrary_Statics::Class_MetaDataParams)
};
void USOTS_GAS_AbilityRequirementLibrary::StaticRegisterNativesUSOTS_GAS_AbilityRequirementLibrary()
{
	UClass* Class = USOTS_GAS_AbilityRequirementLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USOTS_GAS_AbilityRequirementLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_USOTS_GAS_AbilityRequirementLibrary()
{
	if (!Z_Registration_Info_UClass_USOTS_GAS_AbilityRequirementLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_GAS_AbilityRequirementLibrary.OuterSingleton, Z_Construct_UClass_USOTS_GAS_AbilityRequirementLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_GAS_AbilityRequirementLibrary.OuterSingleton;
}
USOTS_GAS_AbilityRequirementLibrary::USOTS_GAS_AbilityRequirementLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_GAS_AbilityRequirementLibrary);
USOTS_GAS_AbilityRequirementLibrary::~USOTS_GAS_AbilityRequirementLibrary() {}
// ********** End Class USOTS_GAS_AbilityRequirementLibrary ****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_AbilityRequirementLibrary_h__Script_SOTS_GAS_Plugin_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSOTS_AbilityRequirementCheckResult::StaticStruct, Z_Construct_UScriptStruct_FSOTS_AbilityRequirementCheckResult_Statics::NewStructOps, TEXT("SOTS_AbilityRequirementCheckResult"),&Z_Registration_Info_UScriptStruct_FSOTS_AbilityRequirementCheckResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_AbilityRequirementCheckResult), 660306694U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_GAS_AbilityRequirementLibrary, USOTS_GAS_AbilityRequirementLibrary::StaticClass, TEXT("USOTS_GAS_AbilityRequirementLibrary"), &Z_Registration_Info_UClass_USOTS_GAS_AbilityRequirementLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_GAS_AbilityRequirementLibrary), 3485029649U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_AbilityRequirementLibrary_h__Script_SOTS_GAS_Plugin_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_AbilityRequirementLibrary_h__Script_SOTS_GAS_Plugin_2501618434{
	TEXT("/Script/SOTS_GAS_Plugin"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_AbilityRequirementLibrary_h__Script_SOTS_GAS_Plugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_AbilityRequirementLibrary_h__Script_SOTS_GAS_Plugin_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_AbilityRequirementLibrary_h__Script_SOTS_GAS_Plugin_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_AbilityRequirementLibrary_h__Script_SOTS_GAS_Plugin_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
