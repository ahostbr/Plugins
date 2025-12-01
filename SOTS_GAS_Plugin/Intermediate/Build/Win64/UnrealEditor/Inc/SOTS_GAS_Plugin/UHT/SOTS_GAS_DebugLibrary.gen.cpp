// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTS_GAS_DebugLibrary.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_GAS_DebugLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_USOTS_AbilityRequirementLibraryAsset_NoRegister();
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_USOTS_GAS_DebugLibrary();
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_USOTS_GAS_DebugLibrary_NoRegister();
SOTS_GAS_PLUGIN_API UEnum* Z_Construct_UEnum_SOTS_GAS_Plugin_ESOTSStealthDebugMode();
UPackage* Z_Construct_UPackage__Script_SOTS_GAS_Plugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ESOTSStealthDebugMode *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESOTSStealthDebugMode;
static UEnum* ESOTSStealthDebugMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESOTSStealthDebugMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESOTSStealthDebugMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SOTS_GAS_Plugin_ESOTSStealthDebugMode, (UObject*)Z_Construct_UPackage__Script_SOTS_GAS_Plugin(), TEXT("ESOTSStealthDebugMode"));
	}
	return Z_Registration_Info_UEnum_ESOTSStealthDebugMode.OuterSingleton;
}
template<> SOTS_GAS_PLUGIN_NON_ATTRIBUTED_API UEnum* StaticEnum<ESOTSStealthDebugMode>()
{
	return ESOTSStealthDebugMode_StaticEnum();
}
struct Z_Construct_UEnum_SOTS_GAS_Plugin_ESOTSStealthDebugMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Advanced.DisplayName", "Advanced" },
		{ "Advanced.Name", "ESOTSStealthDebugMode::Advanced" },
		{ "Basic.DisplayName", "Basic" },
		{ "Basic.Name", "ESOTSStealthDebugMode::Basic" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Global stealth/perception debug mode.\n * Off      = no debug widgets or HUD.\n * Basic    = compact world-space widgets + minimal HUD.\n * Advanced = expanded information everywhere.\n */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GAS_DebugLibrary.h" },
		{ "Off.DisplayName", "Off" },
		{ "Off.Name", "ESOTSStealthDebugMode::Off" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Global stealth/perception debug mode.\nOff      = no debug widgets or HUD.\nBasic    = compact world-space widgets + minimal HUD.\nAdvanced = expanded information everywhere." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESOTSStealthDebugMode::Off", (int64)ESOTSStealthDebugMode::Off },
		{ "ESOTSStealthDebugMode::Basic", (int64)ESOTSStealthDebugMode::Basic },
		{ "ESOTSStealthDebugMode::Advanced", (int64)ESOTSStealthDebugMode::Advanced },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SOTS_GAS_Plugin_ESOTSStealthDebugMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SOTS_GAS_Plugin_ESOTSStealthDebugMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SOTS_GAS_Plugin,
	nullptr,
	"ESOTSStealthDebugMode",
	"ESOTSStealthDebugMode",
	Z_Construct_UEnum_SOTS_GAS_Plugin_ESOTSStealthDebugMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SOTS_GAS_Plugin_ESOTSStealthDebugMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SOTS_GAS_Plugin_ESOTSStealthDebugMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SOTS_GAS_Plugin_ESOTSStealthDebugMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SOTS_GAS_Plugin_ESOTSStealthDebugMode()
{
	if (!Z_Registration_Info_UEnum_ESOTSStealthDebugMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESOTSStealthDebugMode.InnerSingleton, Z_Construct_UEnum_SOTS_GAS_Plugin_ESOTSStealthDebugMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESOTSStealthDebugMode.InnerSingleton;
}
// ********** End Enum ESOTSStealthDebugMode *******************************************************

// ********** Begin Class USOTS_GAS_DebugLibrary Function GetStealthDebugMode **********************
struct Z_Construct_UFunction_USOTS_GAS_DebugLibrary_GetStealthDebugMode_Statics
{
	struct SOTS_GAS_DebugLibrary_eventGetStealthDebugMode_Parms
	{
		ESOTSStealthDebugMode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|GAS|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Global debug mode accessors, backed by a console variable\n// `sots.StealthDebugMode` (0=Off,1=Basic,2=Advanced). In\n// shipping builds this always returns Off and Set is a no-op.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GAS_DebugLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Global debug mode accessors, backed by a console variable\n`sots.StealthDebugMode` (0=Off,1=Basic,2=Advanced). In\nshipping builds this always returns Off and Set is a no-op." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetStealthDebugMode constinit property declarations *******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetStealthDebugMode constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetStealthDebugMode Property Definitions ******************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USOTS_GAS_DebugLibrary_GetStealthDebugMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USOTS_GAS_DebugLibrary_GetStealthDebugMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_DebugLibrary_eventGetStealthDebugMode_Parms, ReturnValue), Z_Construct_UEnum_SOTS_GAS_Plugin_ESOTSStealthDebugMode, METADATA_PARAMS(0, nullptr) }; // 4255647318
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GAS_DebugLibrary_GetStealthDebugMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_DebugLibrary_GetStealthDebugMode_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_DebugLibrary_GetStealthDebugMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_DebugLibrary_GetStealthDebugMode_Statics::PropPointers) < 2048);
// ********** End Function GetStealthDebugMode Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GAS_DebugLibrary_GetStealthDebugMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GAS_DebugLibrary, nullptr, "GetStealthDebugMode", 	Z_Construct_UFunction_USOTS_GAS_DebugLibrary_GetStealthDebugMode_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_DebugLibrary_GetStealthDebugMode_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GAS_DebugLibrary_GetStealthDebugMode_Statics::SOTS_GAS_DebugLibrary_eventGetStealthDebugMode_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_DebugLibrary_GetStealthDebugMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GAS_DebugLibrary_GetStealthDebugMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GAS_DebugLibrary_GetStealthDebugMode_Statics::SOTS_GAS_DebugLibrary_eventGetStealthDebugMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GAS_DebugLibrary_GetStealthDebugMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GAS_DebugLibrary_GetStealthDebugMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GAS_DebugLibrary::execGetStealthDebugMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESOTSStealthDebugMode*)Z_Param__Result=USOTS_GAS_DebugLibrary::GetStealthDebugMode();
	P_NATIVE_END;
}
// ********** End Class USOTS_GAS_DebugLibrary Function GetStealthDebugMode ************************

// ********** Begin Class USOTS_GAS_DebugLibrary Function LogAbilityRequirementsFromLibrary ********
struct Z_Construct_UFunction_USOTS_GAS_DebugLibrary_LogAbilityRequirementsFromLibrary_Statics
{
	struct SOTS_GAS_DebugLibrary_eventLogAbilityRequirementsFromLibrary_Parms
	{
		const UObject* WorldContextObject;
		USOTS_AbilityRequirementLibraryAsset* LibraryAsset;
		FGameplayTag AbilityTag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|GAS|Debug" },
		{ "ModuleRelativePath", "Public/SOTS_GAS_DebugLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function LogAbilityRequirementsFromLibrary constinit property declarations *****
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LibraryAsset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LogAbilityRequirementsFromLibrary constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LogAbilityRequirementsFromLibrary Property Definitions ****************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_GAS_DebugLibrary_LogAbilityRequirementsFromLibrary_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_DebugLibrary_eventLogAbilityRequirementsFromLibrary_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_GAS_DebugLibrary_LogAbilityRequirementsFromLibrary_Statics::NewProp_LibraryAsset = { "LibraryAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_DebugLibrary_eventLogAbilityRequirementsFromLibrary_Parms, LibraryAsset), Z_Construct_UClass_USOTS_AbilityRequirementLibraryAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_GAS_DebugLibrary_LogAbilityRequirementsFromLibrary_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_DebugLibrary_eventLogAbilityRequirementsFromLibrary_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GAS_DebugLibrary_LogAbilityRequirementsFromLibrary_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_DebugLibrary_LogAbilityRequirementsFromLibrary_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_DebugLibrary_LogAbilityRequirementsFromLibrary_Statics::NewProp_LibraryAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_DebugLibrary_LogAbilityRequirementsFromLibrary_Statics::NewProp_AbilityTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_DebugLibrary_LogAbilityRequirementsFromLibrary_Statics::PropPointers) < 2048);
// ********** End Function LogAbilityRequirementsFromLibrary Property Definitions ******************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GAS_DebugLibrary_LogAbilityRequirementsFromLibrary_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GAS_DebugLibrary, nullptr, "LogAbilityRequirementsFromLibrary", 	Z_Construct_UFunction_USOTS_GAS_DebugLibrary_LogAbilityRequirementsFromLibrary_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_DebugLibrary_LogAbilityRequirementsFromLibrary_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GAS_DebugLibrary_LogAbilityRequirementsFromLibrary_Statics::SOTS_GAS_DebugLibrary_eventLogAbilityRequirementsFromLibrary_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_DebugLibrary_LogAbilityRequirementsFromLibrary_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GAS_DebugLibrary_LogAbilityRequirementsFromLibrary_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GAS_DebugLibrary_LogAbilityRequirementsFromLibrary_Statics::SOTS_GAS_DebugLibrary_eventLogAbilityRequirementsFromLibrary_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GAS_DebugLibrary_LogAbilityRequirementsFromLibrary()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GAS_DebugLibrary_LogAbilityRequirementsFromLibrary_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GAS_DebugLibrary::execLogAbilityRequirementsFromLibrary)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(USOTS_AbilityRequirementLibraryAsset,Z_Param_LibraryAsset);
	P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	USOTS_GAS_DebugLibrary::LogAbilityRequirementsFromLibrary(Z_Param_WorldContextObject,Z_Param_LibraryAsset,Z_Param_AbilityTag);
	P_NATIVE_END;
}
// ********** End Class USOTS_GAS_DebugLibrary Function LogAbilityRequirementsFromLibrary **********

// ********** Begin Class USOTS_GAS_DebugLibrary Function LogCurrentSkillAndPlayerTags *************
struct Z_Construct_UFunction_USOTS_GAS_DebugLibrary_LogCurrentSkillAndPlayerTags_Statics
{
	struct SOTS_GAS_DebugLibrary_eventLogCurrentSkillAndPlayerTags_Parms
	{
		const UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|GAS|Debug" },
		{ "ModuleRelativePath", "Public/SOTS_GAS_DebugLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function LogCurrentSkillAndPlayerTags constinit property declarations **********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LogCurrentSkillAndPlayerTags constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LogCurrentSkillAndPlayerTags Property Definitions *********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_GAS_DebugLibrary_LogCurrentSkillAndPlayerTags_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_DebugLibrary_eventLogCurrentSkillAndPlayerTags_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GAS_DebugLibrary_LogCurrentSkillAndPlayerTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_DebugLibrary_LogCurrentSkillAndPlayerTags_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_DebugLibrary_LogCurrentSkillAndPlayerTags_Statics::PropPointers) < 2048);
// ********** End Function LogCurrentSkillAndPlayerTags Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GAS_DebugLibrary_LogCurrentSkillAndPlayerTags_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GAS_DebugLibrary, nullptr, "LogCurrentSkillAndPlayerTags", 	Z_Construct_UFunction_USOTS_GAS_DebugLibrary_LogCurrentSkillAndPlayerTags_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_DebugLibrary_LogCurrentSkillAndPlayerTags_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GAS_DebugLibrary_LogCurrentSkillAndPlayerTags_Statics::SOTS_GAS_DebugLibrary_eventLogCurrentSkillAndPlayerTags_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_DebugLibrary_LogCurrentSkillAndPlayerTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GAS_DebugLibrary_LogCurrentSkillAndPlayerTags_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GAS_DebugLibrary_LogCurrentSkillAndPlayerTags_Statics::SOTS_GAS_DebugLibrary_eventLogCurrentSkillAndPlayerTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GAS_DebugLibrary_LogCurrentSkillAndPlayerTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GAS_DebugLibrary_LogCurrentSkillAndPlayerTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GAS_DebugLibrary::execLogCurrentSkillAndPlayerTags)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	USOTS_GAS_DebugLibrary::LogCurrentSkillAndPlayerTags(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class USOTS_GAS_DebugLibrary Function LogCurrentSkillAndPlayerTags ***************

// ********** Begin Class USOTS_GAS_DebugLibrary Function LogCurrentStealthState *******************
struct Z_Construct_UFunction_USOTS_GAS_DebugLibrary_LogCurrentStealthState_Statics
{
	struct SOTS_GAS_DebugLibrary_eventLogCurrentStealthState_Parms
	{
		const UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|GAS|Debug" },
		{ "ModuleRelativePath", "Public/SOTS_GAS_DebugLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function LogCurrentStealthState constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LogCurrentStealthState constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LogCurrentStealthState Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_GAS_DebugLibrary_LogCurrentStealthState_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_DebugLibrary_eventLogCurrentStealthState_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GAS_DebugLibrary_LogCurrentStealthState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_DebugLibrary_LogCurrentStealthState_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_DebugLibrary_LogCurrentStealthState_Statics::PropPointers) < 2048);
// ********** End Function LogCurrentStealthState Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GAS_DebugLibrary_LogCurrentStealthState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GAS_DebugLibrary, nullptr, "LogCurrentStealthState", 	Z_Construct_UFunction_USOTS_GAS_DebugLibrary_LogCurrentStealthState_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_DebugLibrary_LogCurrentStealthState_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GAS_DebugLibrary_LogCurrentStealthState_Statics::SOTS_GAS_DebugLibrary_eventLogCurrentStealthState_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_DebugLibrary_LogCurrentStealthState_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GAS_DebugLibrary_LogCurrentStealthState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GAS_DebugLibrary_LogCurrentStealthState_Statics::SOTS_GAS_DebugLibrary_eventLogCurrentStealthState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GAS_DebugLibrary_LogCurrentStealthState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GAS_DebugLibrary_LogCurrentStealthState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GAS_DebugLibrary::execLogCurrentStealthState)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	USOTS_GAS_DebugLibrary::LogCurrentStealthState(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class USOTS_GAS_DebugLibrary Function LogCurrentStealthState *********************

// ********** Begin Class USOTS_GAS_DebugLibrary Function SetStealthDebugMode **********************
struct Z_Construct_UFunction_USOTS_GAS_DebugLibrary_SetStealthDebugMode_Statics
{
	struct SOTS_GAS_DebugLibrary_eventSetStealthDebugMode_Parms
	{
		ESOTSStealthDebugMode NewMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|GAS|Debug" },
		{ "ModuleRelativePath", "Public/SOTS_GAS_DebugLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetStealthDebugMode constinit property declarations *******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetStealthDebugMode constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetStealthDebugMode Property Definitions ******************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USOTS_GAS_DebugLibrary_SetStealthDebugMode_Statics::NewProp_NewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USOTS_GAS_DebugLibrary_SetStealthDebugMode_Statics::NewProp_NewMode = { "NewMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_DebugLibrary_eventSetStealthDebugMode_Parms, NewMode), Z_Construct_UEnum_SOTS_GAS_Plugin_ESOTSStealthDebugMode, METADATA_PARAMS(0, nullptr) }; // 4255647318
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GAS_DebugLibrary_SetStealthDebugMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_DebugLibrary_SetStealthDebugMode_Statics::NewProp_NewMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_DebugLibrary_SetStealthDebugMode_Statics::NewProp_NewMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_DebugLibrary_SetStealthDebugMode_Statics::PropPointers) < 2048);
// ********** End Function SetStealthDebugMode Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GAS_DebugLibrary_SetStealthDebugMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GAS_DebugLibrary, nullptr, "SetStealthDebugMode", 	Z_Construct_UFunction_USOTS_GAS_DebugLibrary_SetStealthDebugMode_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_DebugLibrary_SetStealthDebugMode_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GAS_DebugLibrary_SetStealthDebugMode_Statics::SOTS_GAS_DebugLibrary_eventSetStealthDebugMode_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_DebugLibrary_SetStealthDebugMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GAS_DebugLibrary_SetStealthDebugMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GAS_DebugLibrary_SetStealthDebugMode_Statics::SOTS_GAS_DebugLibrary_eventSetStealthDebugMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GAS_DebugLibrary_SetStealthDebugMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GAS_DebugLibrary_SetStealthDebugMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GAS_DebugLibrary::execSetStealthDebugMode)
{
	P_GET_ENUM(ESOTSStealthDebugMode,Z_Param_NewMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	USOTS_GAS_DebugLibrary::SetStealthDebugMode(ESOTSStealthDebugMode(Z_Param_NewMode));
	P_NATIVE_END;
}
// ********** End Class USOTS_GAS_DebugLibrary Function SetStealthDebugMode ************************

// ********** Begin Class USOTS_GAS_DebugLibrary ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_GAS_DebugLibrary;
UClass* USOTS_GAS_DebugLibrary::GetPrivateStaticClass()
{
	using TClass = USOTS_GAS_DebugLibrary;
	if (!Z_Registration_Info_UClass_USOTS_GAS_DebugLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_GAS_DebugLibrary"),
			Z_Registration_Info_UClass_USOTS_GAS_DebugLibrary.InnerSingleton,
			StaticRegisterNativesUSOTS_GAS_DebugLibrary,
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
	return Z_Registration_Info_UClass_USOTS_GAS_DebugLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_GAS_DebugLibrary_NoRegister()
{
	return USOTS_GAS_DebugLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_GAS_DebugLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Debug-only helpers for logging current stealth, tags, and\n * ability requirement evaluations. These functions do not\n * change gameplay state; they only write to the log or expose\n * the current debug mode used by UMG widgets.\n */" },
#endif
		{ "IncludePath", "SOTS_GAS_DebugLibrary.h" },
		{ "ModuleRelativePath", "Public/SOTS_GAS_DebugLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Debug-only helpers for logging current stealth, tags, and\nability requirement evaluations. These functions do not\nchange gameplay state; they only write to the log or expose\nthe current debug mode used by UMG widgets." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_GAS_DebugLibrary constinit property declarations *******************
// ********** End Class USOTS_GAS_DebugLibrary constinit property declarations *********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetStealthDebugMode"), .Pointer = &USOTS_GAS_DebugLibrary::execGetStealthDebugMode },
		{ .NameUTF8 = UTF8TEXT("LogAbilityRequirementsFromLibrary"), .Pointer = &USOTS_GAS_DebugLibrary::execLogAbilityRequirementsFromLibrary },
		{ .NameUTF8 = UTF8TEXT("LogCurrentSkillAndPlayerTags"), .Pointer = &USOTS_GAS_DebugLibrary::execLogCurrentSkillAndPlayerTags },
		{ .NameUTF8 = UTF8TEXT("LogCurrentStealthState"), .Pointer = &USOTS_GAS_DebugLibrary::execLogCurrentStealthState },
		{ .NameUTF8 = UTF8TEXT("SetStealthDebugMode"), .Pointer = &USOTS_GAS_DebugLibrary::execSetStealthDebugMode },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USOTS_GAS_DebugLibrary_GetStealthDebugMode, "GetStealthDebugMode" }, // 2829322926
		{ &Z_Construct_UFunction_USOTS_GAS_DebugLibrary_LogAbilityRequirementsFromLibrary, "LogAbilityRequirementsFromLibrary" }, // 305464006
		{ &Z_Construct_UFunction_USOTS_GAS_DebugLibrary_LogCurrentSkillAndPlayerTags, "LogCurrentSkillAndPlayerTags" }, // 848505673
		{ &Z_Construct_UFunction_USOTS_GAS_DebugLibrary_LogCurrentStealthState, "LogCurrentStealthState" }, // 360783046
		{ &Z_Construct_UFunction_USOTS_GAS_DebugLibrary_SetStealthDebugMode, "SetStealthDebugMode" }, // 3728581255
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_GAS_DebugLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_GAS_DebugLibrary_Statics
UObject* (*const Z_Construct_UClass_USOTS_GAS_DebugLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_GAS_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_GAS_DebugLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_GAS_DebugLibrary_Statics::ClassParams = {
	&USOTS_GAS_DebugLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_GAS_DebugLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_GAS_DebugLibrary_Statics::Class_MetaDataParams)
};
void USOTS_GAS_DebugLibrary::StaticRegisterNativesUSOTS_GAS_DebugLibrary()
{
	UClass* Class = USOTS_GAS_DebugLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USOTS_GAS_DebugLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_USOTS_GAS_DebugLibrary()
{
	if (!Z_Registration_Info_UClass_USOTS_GAS_DebugLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_GAS_DebugLibrary.OuterSingleton, Z_Construct_UClass_USOTS_GAS_DebugLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_GAS_DebugLibrary.OuterSingleton;
}
USOTS_GAS_DebugLibrary::USOTS_GAS_DebugLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_GAS_DebugLibrary);
USOTS_GAS_DebugLibrary::~USOTS_GAS_DebugLibrary() {}
// ********** End Class USOTS_GAS_DebugLibrary *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_DebugLibrary_h__Script_SOTS_GAS_Plugin_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESOTSStealthDebugMode_StaticEnum, TEXT("ESOTSStealthDebugMode"), &Z_Registration_Info_UEnum_ESOTSStealthDebugMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4255647318U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_GAS_DebugLibrary, USOTS_GAS_DebugLibrary::StaticClass, TEXT("USOTS_GAS_DebugLibrary"), &Z_Registration_Info_UClass_USOTS_GAS_DebugLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_GAS_DebugLibrary), 775819098U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_DebugLibrary_h__Script_SOTS_GAS_Plugin_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_DebugLibrary_h__Script_SOTS_GAS_Plugin_811637095{
	TEXT("/Script/SOTS_GAS_Plugin"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_DebugLibrary_h__Script_SOTS_GAS_Plugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_DebugLibrary_h__Script_SOTS_GAS_Plugin_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_DebugLibrary_h__Script_SOTS_GAS_Plugin_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_DebugLibrary_h__Script_SOTS_GAS_Plugin_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
