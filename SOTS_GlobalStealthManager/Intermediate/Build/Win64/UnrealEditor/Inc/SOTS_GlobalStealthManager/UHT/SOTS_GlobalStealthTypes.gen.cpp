// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTS_GlobalStealthTypes.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_GlobalStealthTypes() {}

// ********** Begin Cross Module References ********************************************************
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
SOTS_GLOBALSTEALTHMANAGER_API UEnum* Z_Construct_UEnum_SOTS_GlobalStealthManager_ESOTS_StealthTier();
SOTS_GLOBALSTEALTHMANAGER_API UEnum* Z_Construct_UEnum_SOTS_GlobalStealthManager_ESOTSStealthLevel();
SOTS_GLOBALSTEALTHMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_PlayerStealthState();
SOTS_GLOBALSTEALTHMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_StealthModifier();
SOTS_GLOBALSTEALTHMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_StealthSample();
SOTS_GLOBALSTEALTHMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_StealthScoreBreakdown();
SOTS_GLOBALSTEALTHMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_StealthScoringConfig();
UPackage* Z_Construct_UPackage__Script_SOTS_GlobalStealthManager();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ESOTSStealthLevel *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESOTSStealthLevel;
static UEnum* ESOTSStealthLevel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESOTSStealthLevel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESOTSStealthLevel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SOTS_GlobalStealthManager_ESOTSStealthLevel, (UObject*)Z_Construct_UPackage__Script_SOTS_GlobalStealthManager(), TEXT("ESOTSStealthLevel"));
	}
	return Z_Registration_Info_UEnum_ESOTSStealthLevel.OuterSingleton;
}
template<> SOTS_GLOBALSTEALTHMANAGER_NON_ATTRIBUTED_API UEnum* StaticEnum<ESOTSStealthLevel>()
{
	return ESOTSStealthLevel_StaticEnum();
}
struct Z_Construct_UEnum_SOTS_GlobalStealthManager_ESOTSStealthLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FullyDetected.DisplayName", "Fully Detected" },
		{ "FullyDetected.Name", "ESOTSStealthLevel::FullyDetected" },
		{ "HighRisk.DisplayName", "High Risk" },
		{ "HighRisk.Name", "ESOTSStealthLevel::HighRisk" },
		{ "LowRisk.DisplayName", "Low Risk" },
		{ "LowRisk.Name", "ESOTSStealthLevel::LowRisk" },
		{ "MediumRisk.DisplayName", "Medium Risk" },
		{ "MediumRisk.Name", "ESOTSStealthLevel::MediumRisk" },
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthTypes.h" },
		{ "Undetected.DisplayName", "Undetected" },
		{ "Undetected.Name", "ESOTSStealthLevel::Undetected" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESOTSStealthLevel::Undetected", (int64)ESOTSStealthLevel::Undetected },
		{ "ESOTSStealthLevel::LowRisk", (int64)ESOTSStealthLevel::LowRisk },
		{ "ESOTSStealthLevel::MediumRisk", (int64)ESOTSStealthLevel::MediumRisk },
		{ "ESOTSStealthLevel::HighRisk", (int64)ESOTSStealthLevel::HighRisk },
		{ "ESOTSStealthLevel::FullyDetected", (int64)ESOTSStealthLevel::FullyDetected },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SOTS_GlobalStealthManager_ESOTSStealthLevel_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SOTS_GlobalStealthManager_ESOTSStealthLevel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SOTS_GlobalStealthManager,
	nullptr,
	"ESOTSStealthLevel",
	"ESOTSStealthLevel",
	Z_Construct_UEnum_SOTS_GlobalStealthManager_ESOTSStealthLevel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SOTS_GlobalStealthManager_ESOTSStealthLevel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SOTS_GlobalStealthManager_ESOTSStealthLevel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SOTS_GlobalStealthManager_ESOTSStealthLevel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SOTS_GlobalStealthManager_ESOTSStealthLevel()
{
	if (!Z_Registration_Info_UEnum_ESOTSStealthLevel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESOTSStealthLevel.InnerSingleton, Z_Construct_UEnum_SOTS_GlobalStealthManager_ESOTSStealthLevel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESOTSStealthLevel.InnerSingleton;
}
// ********** End Enum ESOTSStealthLevel ***********************************************************

// ********** Begin Enum ESOTS_StealthTier *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESOTS_StealthTier;
static UEnum* ESOTS_StealthTier_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESOTS_StealthTier.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESOTS_StealthTier.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SOTS_GlobalStealthManager_ESOTS_StealthTier, (UObject*)Z_Construct_UPackage__Script_SOTS_GlobalStealthManager(), TEXT("ESOTS_StealthTier"));
	}
	return Z_Registration_Info_UEnum_ESOTS_StealthTier.OuterSingleton;
}
template<> SOTS_GLOBALSTEALTHMANAGER_NON_ATTRIBUTED_API UEnum* StaticEnum<ESOTS_StealthTier>()
{
	return ESOTS_StealthTier_StaticEnum();
}
struct Z_Construct_UEnum_SOTS_GlobalStealthManager_ESOTS_StealthTier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cautious.DisplayName", "Cautious" },
		{ "Cautious.Name", "ESOTS_StealthTier::Cautious" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// High-level, player-facing stealth tier used for UI / KEM / FX.\n" },
#endif
		{ "Compromised.DisplayName", "Compromised" },
		{ "Compromised.Name", "ESOTS_StealthTier::Compromised" },
		{ "Danger.DisplayName", "Danger" },
		{ "Danger.Name", "ESOTS_StealthTier::Danger" },
		{ "Hidden.DisplayName", "Hidden" },
		{ "Hidden.Name", "ESOTS_StealthTier::Hidden" },
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "High-level, player-facing stealth tier used for UI / KEM / FX." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESOTS_StealthTier::Hidden", (int64)ESOTS_StealthTier::Hidden },
		{ "ESOTS_StealthTier::Cautious", (int64)ESOTS_StealthTier::Cautious },
		{ "ESOTS_StealthTier::Danger", (int64)ESOTS_StealthTier::Danger },
		{ "ESOTS_StealthTier::Compromised", (int64)ESOTS_StealthTier::Compromised },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SOTS_GlobalStealthManager_ESOTS_StealthTier_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SOTS_GlobalStealthManager_ESOTS_StealthTier_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SOTS_GlobalStealthManager,
	nullptr,
	"ESOTS_StealthTier",
	"ESOTS_StealthTier",
	Z_Construct_UEnum_SOTS_GlobalStealthManager_ESOTS_StealthTier_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SOTS_GlobalStealthManager_ESOTS_StealthTier_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SOTS_GlobalStealthManager_ESOTS_StealthTier_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SOTS_GlobalStealthManager_ESOTS_StealthTier_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SOTS_GlobalStealthManager_ESOTS_StealthTier()
{
	if (!Z_Registration_Info_UEnum_ESOTS_StealthTier.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESOTS_StealthTier.InnerSingleton, Z_Construct_UEnum_SOTS_GlobalStealthManager_ESOTS_StealthTier_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESOTS_StealthTier.InnerSingleton;
}
// ********** End Enum ESOTS_StealthTier ***********************************************************

// ********** Begin ScriptStruct FSOTS_PlayerStealthState ******************************************
struct Z_Construct_UScriptStruct_FSOTS_PlayerStealthState_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_PlayerStealthState); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_PlayerStealthState); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightLevel01_MetaData[] = {
		{ "Category", "Stealth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// From LightProbe (0 = dark, 1 = bright).\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "From LightProbe (0 = dark, 1 = bright)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadowLevel01_MetaData[] = {
		{ "Category", "Stealth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// 1 - LightLevel01.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "1 - LightLevel01." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoverExposure01_MetaData[] = {
		{ "Category", "Stealth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// 0 = fully covered, 1 = fully exposed.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "0 = fully covered, 1 = fully exposed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementNoise01_MetaData[] = {
		{ "Category", "Stealth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// From movement / parkour / footsteps.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "From movement / parkour / footsteps." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalVisibility01_MetaData[] = {
		{ "Category", "Stealth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Blended local result from player-side inputs.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blended local result from player-side inputs." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AISuspicion01_MetaData[] = {
		{ "Category", "Stealth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Aggregated from AI side.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Aggregated from AI side." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalStealthScore01_MetaData[] = {
		{ "Category", "Stealth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Final global score for the game.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Final global score for the game." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StealthTier_MetaData[] = {
		{ "Category", "Stealth" },
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_PlayerStealthState constinit property declarations **********
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LightLevel01;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShadowLevel01;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CoverExposure01;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementNoise01;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LocalVisibility01;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AISuspicion01;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GlobalStealthScore01;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StealthTier_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StealthTier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_PlayerStealthState constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_PlayerStealthState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_PlayerStealthState_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_PlayerStealthState;
class UScriptStruct* FSOTS_PlayerStealthState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_PlayerStealthState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_PlayerStealthState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_PlayerStealthState, (UObject*)Z_Construct_UPackage__Script_SOTS_GlobalStealthManager(), TEXT("SOTS_PlayerStealthState"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_PlayerStealthState.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_PlayerStealthState Property Definitions *********************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_PlayerStealthState_Statics::NewProp_LightLevel01 = { "LightLevel01", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_PlayerStealthState, LightLevel01), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightLevel01_MetaData), NewProp_LightLevel01_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_PlayerStealthState_Statics::NewProp_ShadowLevel01 = { "ShadowLevel01", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_PlayerStealthState, ShadowLevel01), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadowLevel01_MetaData), NewProp_ShadowLevel01_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_PlayerStealthState_Statics::NewProp_CoverExposure01 = { "CoverExposure01", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_PlayerStealthState, CoverExposure01), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoverExposure01_MetaData), NewProp_CoverExposure01_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_PlayerStealthState_Statics::NewProp_MovementNoise01 = { "MovementNoise01", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_PlayerStealthState, MovementNoise01), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementNoise01_MetaData), NewProp_MovementNoise01_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_PlayerStealthState_Statics::NewProp_LocalVisibility01 = { "LocalVisibility01", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_PlayerStealthState, LocalVisibility01), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalVisibility01_MetaData), NewProp_LocalVisibility01_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_PlayerStealthState_Statics::NewProp_AISuspicion01 = { "AISuspicion01", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_PlayerStealthState, AISuspicion01), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AISuspicion01_MetaData), NewProp_AISuspicion01_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_PlayerStealthState_Statics::NewProp_GlobalStealthScore01 = { "GlobalStealthScore01", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_PlayerStealthState, GlobalStealthScore01), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalStealthScore01_MetaData), NewProp_GlobalStealthScore01_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSOTS_PlayerStealthState_Statics::NewProp_StealthTier_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSOTS_PlayerStealthState_Statics::NewProp_StealthTier = { "StealthTier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_PlayerStealthState, StealthTier), Z_Construct_UEnum_SOTS_GlobalStealthManager_ESOTS_StealthTier, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StealthTier_MetaData), NewProp_StealthTier_MetaData) }; // 3407880652
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_PlayerStealthState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_PlayerStealthState_Statics::NewProp_LightLevel01,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_PlayerStealthState_Statics::NewProp_ShadowLevel01,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_PlayerStealthState_Statics::NewProp_CoverExposure01,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_PlayerStealthState_Statics::NewProp_MovementNoise01,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_PlayerStealthState_Statics::NewProp_LocalVisibility01,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_PlayerStealthState_Statics::NewProp_AISuspicion01,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_PlayerStealthState_Statics::NewProp_GlobalStealthScore01,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_PlayerStealthState_Statics::NewProp_StealthTier_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_PlayerStealthState_Statics::NewProp_StealthTier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_PlayerStealthState_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_PlayerStealthState Property Definitions ***********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_PlayerStealthState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_GlobalStealthManager,
	nullptr,
	&NewStructOps,
	"SOTS_PlayerStealthState",
	Z_Construct_UScriptStruct_FSOTS_PlayerStealthState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_PlayerStealthState_Statics::PropPointers),
	sizeof(FSOTS_PlayerStealthState),
	alignof(FSOTS_PlayerStealthState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_PlayerStealthState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_PlayerStealthState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_PlayerStealthState()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_PlayerStealthState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_PlayerStealthState.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_PlayerStealthState_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_PlayerStealthState.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_PlayerStealthState ********************************************

// ********** Begin ScriptStruct FSOTS_StealthScoringConfig ****************************************
struct Z_Construct_UScriptStruct_FSOTS_StealthScoringConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_StealthScoringConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_StealthScoringConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tunable scoring configuration for the global stealth manager.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tunable scoring configuration for the global stealth manager." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightWeight_MetaData[] = {
		{ "Category", "Stealth|Sample Weights" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Per-sample scoring (ReportStealthSample) ---\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Per-sample scoring (ReportStealthSample) ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LOSWeight_MetaData[] = {
		{ "Category", "Stealth|Sample Weights" },
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceWeight_MetaData[] = {
		{ "Category", "Stealth|Sample Weights" },
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseWeight_MetaData[] = {
		{ "Category", "Stealth|Sample Weights" },
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceClamp_MetaData[] = {
		{ "Category", "Stealth|Sample Weights" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalVisibilityWeight_MetaData[] = {
		{ "Category", "Stealth|Global Blend" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Global blend (RecomputeGlobalScore) ---\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Global blend (RecomputeGlobalScore) ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AISuspicionWeight_MetaData[] = {
		{ "Category", "Stealth|Global Blend" },
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UndetectedMax_MetaData[] = {
		{ "Category", "Stealth|Levels" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Stealth level thresholds (multi-level enum) ---\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Stealth level thresholds (multi-level enum) ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowRiskMax_MetaData[] = {
		{ "Category", "Stealth|Levels" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediumRiskMax_MetaData[] = {
		{ "Category", "Stealth|Levels" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighRiskMax_MetaData[] = {
		{ "Category", "Stealth|Levels" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CautiousMin_MetaData[] = {
		{ "Category", "Stealth|Tiers" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Stealth tier thresholds (Hidden/Cautious/Danger/Compromised) ---\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Stealth tier thresholds (Hidden/Cautious/Danger/Compromised) ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DangerMin_MetaData[] = {
		{ "Category", "Stealth|Tiers" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompromisedMin_MetaData[] = {
		{ "Category", "Stealth|Tiers" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_StealthScoringConfig constinit property declarations ********
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LightWeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LOSWeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceWeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseWeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceClamp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LocalVisibilityWeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AISuspicionWeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UndetectedMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LowRiskMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MediumRiskMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HighRiskMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CautiousMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DangerMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CompromisedMin;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_StealthScoringConfig constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_StealthScoringConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_StealthScoringConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_StealthScoringConfig;
class UScriptStruct* FSOTS_StealthScoringConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_StealthScoringConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_StealthScoringConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_StealthScoringConfig, (UObject*)Z_Construct_UPackage__Script_SOTS_GlobalStealthManager(), TEXT("SOTS_StealthScoringConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_StealthScoringConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_StealthScoringConfig Property Definitions *******************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_StealthScoringConfig_Statics::NewProp_LightWeight = { "LightWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_StealthScoringConfig, LightWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightWeight_MetaData), NewProp_LightWeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_StealthScoringConfig_Statics::NewProp_LOSWeight = { "LOSWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_StealthScoringConfig, LOSWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LOSWeight_MetaData), NewProp_LOSWeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_StealthScoringConfig_Statics::NewProp_DistanceWeight = { "DistanceWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_StealthScoringConfig, DistanceWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceWeight_MetaData), NewProp_DistanceWeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_StealthScoringConfig_Statics::NewProp_NoiseWeight = { "NoiseWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_StealthScoringConfig, NoiseWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseWeight_MetaData), NewProp_NoiseWeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_StealthScoringConfig_Statics::NewProp_DistanceClamp = { "DistanceClamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_StealthScoringConfig, DistanceClamp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceClamp_MetaData), NewProp_DistanceClamp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_StealthScoringConfig_Statics::NewProp_LocalVisibilityWeight = { "LocalVisibilityWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_StealthScoringConfig, LocalVisibilityWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalVisibilityWeight_MetaData), NewProp_LocalVisibilityWeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_StealthScoringConfig_Statics::NewProp_AISuspicionWeight = { "AISuspicionWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_StealthScoringConfig, AISuspicionWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AISuspicionWeight_MetaData), NewProp_AISuspicionWeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_StealthScoringConfig_Statics::NewProp_UndetectedMax = { "UndetectedMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_StealthScoringConfig, UndetectedMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UndetectedMax_MetaData), NewProp_UndetectedMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_StealthScoringConfig_Statics::NewProp_LowRiskMax = { "LowRiskMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_StealthScoringConfig, LowRiskMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowRiskMax_MetaData), NewProp_LowRiskMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_StealthScoringConfig_Statics::NewProp_MediumRiskMax = { "MediumRiskMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_StealthScoringConfig, MediumRiskMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediumRiskMax_MetaData), NewProp_MediumRiskMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_StealthScoringConfig_Statics::NewProp_HighRiskMax = { "HighRiskMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_StealthScoringConfig, HighRiskMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighRiskMax_MetaData), NewProp_HighRiskMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_StealthScoringConfig_Statics::NewProp_CautiousMin = { "CautiousMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_StealthScoringConfig, CautiousMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CautiousMin_MetaData), NewProp_CautiousMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_StealthScoringConfig_Statics::NewProp_DangerMin = { "DangerMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_StealthScoringConfig, DangerMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DangerMin_MetaData), NewProp_DangerMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_StealthScoringConfig_Statics::NewProp_CompromisedMin = { "CompromisedMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_StealthScoringConfig, CompromisedMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompromisedMin_MetaData), NewProp_CompromisedMin_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_StealthScoringConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_StealthScoringConfig_Statics::NewProp_LightWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_StealthScoringConfig_Statics::NewProp_LOSWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_StealthScoringConfig_Statics::NewProp_DistanceWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_StealthScoringConfig_Statics::NewProp_NoiseWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_StealthScoringConfig_Statics::NewProp_DistanceClamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_StealthScoringConfig_Statics::NewProp_LocalVisibilityWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_StealthScoringConfig_Statics::NewProp_AISuspicionWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_StealthScoringConfig_Statics::NewProp_UndetectedMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_StealthScoringConfig_Statics::NewProp_LowRiskMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_StealthScoringConfig_Statics::NewProp_MediumRiskMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_StealthScoringConfig_Statics::NewProp_HighRiskMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_StealthScoringConfig_Statics::NewProp_CautiousMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_StealthScoringConfig_Statics::NewProp_DangerMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_StealthScoringConfig_Statics::NewProp_CompromisedMin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_StealthScoringConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_StealthScoringConfig Property Definitions *********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_StealthScoringConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_GlobalStealthManager,
	nullptr,
	&NewStructOps,
	"SOTS_StealthScoringConfig",
	Z_Construct_UScriptStruct_FSOTS_StealthScoringConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_StealthScoringConfig_Statics::PropPointers),
	sizeof(FSOTS_StealthScoringConfig),
	alignof(FSOTS_StealthScoringConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_StealthScoringConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_StealthScoringConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_StealthScoringConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_StealthScoringConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_StealthScoringConfig.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_StealthScoringConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_StealthScoringConfig.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_StealthScoringConfig ******************************************

// ********** Begin ScriptStruct FSOTS_StealthModifier *********************************************
struct Z_Construct_UScriptStruct_FSOTS_StealthModifier_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_StealthModifier); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_StealthModifier); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Simple, additive stealth modifier applied on top of the raw state.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple, additive stealth modifier applied on top of the raw state." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceId_MetaData[] = {
		{ "Category", "Stealth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Unique source ID (e.g., ability or effect name).\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unique source ID (e.g., ability or effect name)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightMultiplier_MetaData[] = {
		{ "Category", "Stealth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Multipliers.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Multipliers." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisibilityMultiplier_MetaData[] = {
		{ "Category", "Stealth" },
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightOffset01_MetaData[] = {
		{ "Category", "Stealth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Additive offsets (applied before clamp).\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additive offsets (applied before clamp)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalScoreOffset01_MetaData[] = {
		{ "Category", "Stealth" },
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_StealthModifier constinit property declarations *************
	static const UECodeGen_Private::FNamePropertyParams NewProp_SourceId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LightMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VisibilityMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LightOffset01;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GlobalScoreOffset01;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_StealthModifier constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_StealthModifier>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_StealthModifier_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_StealthModifier;
class UScriptStruct* FSOTS_StealthModifier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_StealthModifier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_StealthModifier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_StealthModifier, (UObject*)Z_Construct_UPackage__Script_SOTS_GlobalStealthManager(), TEXT("SOTS_StealthModifier"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_StealthModifier.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_StealthModifier Property Definitions ************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSOTS_StealthModifier_Statics::NewProp_SourceId = { "SourceId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_StealthModifier, SourceId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceId_MetaData), NewProp_SourceId_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_StealthModifier_Statics::NewProp_LightMultiplier = { "LightMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_StealthModifier, LightMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightMultiplier_MetaData), NewProp_LightMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_StealthModifier_Statics::NewProp_VisibilityMultiplier = { "VisibilityMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_StealthModifier, VisibilityMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisibilityMultiplier_MetaData), NewProp_VisibilityMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_StealthModifier_Statics::NewProp_LightOffset01 = { "LightOffset01", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_StealthModifier, LightOffset01), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightOffset01_MetaData), NewProp_LightOffset01_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_StealthModifier_Statics::NewProp_GlobalScoreOffset01 = { "GlobalScoreOffset01", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_StealthModifier, GlobalScoreOffset01), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalScoreOffset01_MetaData), NewProp_GlobalScoreOffset01_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_StealthModifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_StealthModifier_Statics::NewProp_SourceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_StealthModifier_Statics::NewProp_LightMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_StealthModifier_Statics::NewProp_VisibilityMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_StealthModifier_Statics::NewProp_LightOffset01,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_StealthModifier_Statics::NewProp_GlobalScoreOffset01,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_StealthModifier_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_StealthModifier Property Definitions **************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_StealthModifier_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_GlobalStealthManager,
	nullptr,
	&NewStructOps,
	"SOTS_StealthModifier",
	Z_Construct_UScriptStruct_FSOTS_StealthModifier_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_StealthModifier_Statics::PropPointers),
	sizeof(FSOTS_StealthModifier),
	alignof(FSOTS_StealthModifier),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_StealthModifier_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_StealthModifier_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_StealthModifier()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_StealthModifier.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_StealthModifier.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_StealthModifier_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_StealthModifier.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_StealthModifier ***********************************************

// ********** Begin ScriptStruct FSOTS_StealthScoreBreakdown ***************************************
struct Z_Construct_UScriptStruct_FSOTS_StealthScoreBreakdown_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_StealthScoreBreakdown); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_StealthScoreBreakdown); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Lightweight breakdown of how the current stealth score was composed.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lightweight breakdown of how the current stealth score was composed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Light01_MetaData[] = {
		{ "Category", "SOTS|Stealth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Raw light value [0,1] before any tier mapping.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Raw light value [0,1] before any tier mapping." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shadow01_MetaData[] = {
		{ "Category", "SOTS|Stealth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Raw shadow value [0,1] (usually 1 - Light01).\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Raw shadow value [0,1] (usually 1 - Light01)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Visibility01_MetaData[] = {
		{ "Category", "SOTS|Stealth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Player-local visibility [0,1] after blending light / cover / motion.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Player-local visibility [0,1] after blending light / cover / motion." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AISuspicion01_MetaData[] = {
		{ "Category", "SOTS|Stealth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Aggregated AI suspicion term [0,1].\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Aggregated AI suspicion term [0,1]." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombinedScore01_MetaData[] = {
		{ "Category", "SOTS|Stealth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Final combined score [0,1] after weighting and modifiers.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Final combined score [0,1] after weighting and modifiers." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StealthTier_MetaData[] = {
		{ "Category", "SOTS|Stealth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current stealth tier as an integer (cast from ESOTS_StealthTier).\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current stealth tier as an integer (cast from ESOTS_StealthTier)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModifierMultiplier_MetaData[] = {
		{ "Category", "SOTS|Stealth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Effective multiplier applied by modifiers (EffectiveGlobal / RawScore).\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Effective multiplier applied by modifiers (EffectiveGlobal / RawScore)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_StealthScoreBreakdown constinit property declarations *******
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Light01;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Shadow01;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Visibility01;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AISuspicion01;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CombinedScore01;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StealthTier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ModifierMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_StealthScoreBreakdown constinit property declarations *********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_StealthScoreBreakdown>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_StealthScoreBreakdown_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_StealthScoreBreakdown;
class UScriptStruct* FSOTS_StealthScoreBreakdown::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_StealthScoreBreakdown.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_StealthScoreBreakdown.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_StealthScoreBreakdown, (UObject*)Z_Construct_UPackage__Script_SOTS_GlobalStealthManager(), TEXT("SOTS_StealthScoreBreakdown"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_StealthScoreBreakdown.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_StealthScoreBreakdown Property Definitions ******************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_StealthScoreBreakdown_Statics::NewProp_Light01 = { "Light01", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_StealthScoreBreakdown, Light01), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Light01_MetaData), NewProp_Light01_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_StealthScoreBreakdown_Statics::NewProp_Shadow01 = { "Shadow01", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_StealthScoreBreakdown, Shadow01), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shadow01_MetaData), NewProp_Shadow01_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_StealthScoreBreakdown_Statics::NewProp_Visibility01 = { "Visibility01", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_StealthScoreBreakdown, Visibility01), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Visibility01_MetaData), NewProp_Visibility01_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_StealthScoreBreakdown_Statics::NewProp_AISuspicion01 = { "AISuspicion01", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_StealthScoreBreakdown, AISuspicion01), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AISuspicion01_MetaData), NewProp_AISuspicion01_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_StealthScoreBreakdown_Statics::NewProp_CombinedScore01 = { "CombinedScore01", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_StealthScoreBreakdown, CombinedScore01), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombinedScore01_MetaData), NewProp_CombinedScore01_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSOTS_StealthScoreBreakdown_Statics::NewProp_StealthTier = { "StealthTier", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_StealthScoreBreakdown, StealthTier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StealthTier_MetaData), NewProp_StealthTier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_StealthScoreBreakdown_Statics::NewProp_ModifierMultiplier = { "ModifierMultiplier", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_StealthScoreBreakdown, ModifierMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModifierMultiplier_MetaData), NewProp_ModifierMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_StealthScoreBreakdown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_StealthScoreBreakdown_Statics::NewProp_Light01,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_StealthScoreBreakdown_Statics::NewProp_Shadow01,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_StealthScoreBreakdown_Statics::NewProp_Visibility01,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_StealthScoreBreakdown_Statics::NewProp_AISuspicion01,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_StealthScoreBreakdown_Statics::NewProp_CombinedScore01,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_StealthScoreBreakdown_Statics::NewProp_StealthTier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_StealthScoreBreakdown_Statics::NewProp_ModifierMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_StealthScoreBreakdown_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_StealthScoreBreakdown Property Definitions ********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_StealthScoreBreakdown_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_GlobalStealthManager,
	nullptr,
	&NewStructOps,
	"SOTS_StealthScoreBreakdown",
	Z_Construct_UScriptStruct_FSOTS_StealthScoreBreakdown_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_StealthScoreBreakdown_Statics::PropPointers),
	sizeof(FSOTS_StealthScoreBreakdown),
	alignof(FSOTS_StealthScoreBreakdown),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_StealthScoreBreakdown_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_StealthScoreBreakdown_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_StealthScoreBreakdown()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_StealthScoreBreakdown.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_StealthScoreBreakdown.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_StealthScoreBreakdown_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_StealthScoreBreakdown.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_StealthScoreBreakdown *****************************************

// ********** Begin ScriptStruct FSOTS_StealthSample ***********************************************
struct Z_Construct_UScriptStruct_FSOTS_StealthSample_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_StealthSample); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_StealthSample); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A single stealth sample reported by the player, dragon, or other systems.\n * This is intentionally simple and numeric so SOTS can tune scoring later.\n */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A single stealth sample reported by the player, dragon, or other systems.\nThis is intentionally simple and numeric so SOTS can tune scoring later." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeSeconds_MetaData[] = {
		{ "Category", "Stealth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Absolute time of the sample (Game Time Seconds from UWorld)\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Absolute time of the sample (Game Time Seconds from UWorld)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightExposure_MetaData[] = {
		{ "Category", "Stealth" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// 0 = total darkness, 1 = fully lit. You can feed in your own line trace / UDS data.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "0 = total darkness, 1 = fully lit. You can feed in your own line trace / UDS data." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceToNearestEnemy_MetaData[] = {
		{ "Category", "Stealth" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Distance in cm to the nearest relevant enemy (0 if overlapping).\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance in cm to the nearest relevant enemy (0 if overlapping)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInEnemyLineOfSight_MetaData[] = {
		{ "Category", "Stealth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// True if at least one enemy currently has a clear line of sight to the player.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True if at least one enemy currently has a clear line of sight to the player." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseLevel_MetaData[] = {
		{ "Category", "Stealth" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Aggregate noise value around the player. 0 = silent, 1 = extremely loud.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Aggregate noise value around the player. 0 = silent, 1 = extremely loud." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInCover_MetaData[] = {
		{ "Category", "Stealth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// True if currently in a valid cover state (from your cover component).\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True if currently in a valid cover state (from your cover component)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextTags_MetaData[] = {
		{ "Category", "Stealth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional context tags (e.g., Player.States.Crouched, Environment.Foggy, Dragon.Ability.Active)\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional context tags (e.g., Player.States.Crouched, Environment.Foggy, Dragon.Ability.Active)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_StealthSample constinit property declarations ***************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LightExposure;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceToNearestEnemy;
	static void NewProp_bInEnemyLineOfSight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEnemyLineOfSight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseLevel;
	static void NewProp_bInCover_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInCover;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContextTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_StealthSample constinit property declarations *****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_StealthSample>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_StealthSample_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_StealthSample;
class UScriptStruct* FSOTS_StealthSample::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_StealthSample.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_StealthSample.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_StealthSample, (UObject*)Z_Construct_UPackage__Script_SOTS_GlobalStealthManager(), TEXT("SOTS_StealthSample"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_StealthSample.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_StealthSample Property Definitions **************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_StealthSample_Statics::NewProp_TimeSeconds = { "TimeSeconds", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_StealthSample, TimeSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeSeconds_MetaData), NewProp_TimeSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_StealthSample_Statics::NewProp_LightExposure = { "LightExposure", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_StealthSample, LightExposure), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightExposure_MetaData), NewProp_LightExposure_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_StealthSample_Statics::NewProp_DistanceToNearestEnemy = { "DistanceToNearestEnemy", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_StealthSample, DistanceToNearestEnemy), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceToNearestEnemy_MetaData), NewProp_DistanceToNearestEnemy_MetaData) };
void Z_Construct_UScriptStruct_FSOTS_StealthSample_Statics::NewProp_bInEnemyLineOfSight_SetBit(void* Obj)
{
	((FSOTS_StealthSample*)Obj)->bInEnemyLineOfSight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSOTS_StealthSample_Statics::NewProp_bInEnemyLineOfSight = { "bInEnemyLineOfSight", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSOTS_StealthSample), &Z_Construct_UScriptStruct_FSOTS_StealthSample_Statics::NewProp_bInEnemyLineOfSight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInEnemyLineOfSight_MetaData), NewProp_bInEnemyLineOfSight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_StealthSample_Statics::NewProp_NoiseLevel = { "NoiseLevel", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_StealthSample, NoiseLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseLevel_MetaData), NewProp_NoiseLevel_MetaData) };
void Z_Construct_UScriptStruct_FSOTS_StealthSample_Statics::NewProp_bInCover_SetBit(void* Obj)
{
	((FSOTS_StealthSample*)Obj)->bInCover = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSOTS_StealthSample_Statics::NewProp_bInCover = { "bInCover", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSOTS_StealthSample), &Z_Construct_UScriptStruct_FSOTS_StealthSample_Statics::NewProp_bInCover_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInCover_MetaData), NewProp_bInCover_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_StealthSample_Statics::NewProp_ContextTags = { "ContextTags", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_StealthSample, ContextTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextTags_MetaData), NewProp_ContextTags_MetaData) }; // 3438578166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_StealthSample_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_StealthSample_Statics::NewProp_TimeSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_StealthSample_Statics::NewProp_LightExposure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_StealthSample_Statics::NewProp_DistanceToNearestEnemy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_StealthSample_Statics::NewProp_bInEnemyLineOfSight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_StealthSample_Statics::NewProp_NoiseLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_StealthSample_Statics::NewProp_bInCover,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_StealthSample_Statics::NewProp_ContextTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_StealthSample_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_StealthSample Property Definitions ****************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_StealthSample_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_GlobalStealthManager,
	nullptr,
	&NewStructOps,
	"SOTS_StealthSample",
	Z_Construct_UScriptStruct_FSOTS_StealthSample_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_StealthSample_Statics::PropPointers),
	sizeof(FSOTS_StealthSample),
	alignof(FSOTS_StealthSample),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_StealthSample_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_StealthSample_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_StealthSample()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_StealthSample.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_StealthSample.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_StealthSample_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_StealthSample.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_StealthSample *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_GlobalStealthTypes_h__Script_SOTS_GlobalStealthManager_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESOTSStealthLevel_StaticEnum, TEXT("ESOTSStealthLevel"), &Z_Registration_Info_UEnum_ESOTSStealthLevel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3112324723U) },
		{ ESOTS_StealthTier_StaticEnum, TEXT("ESOTS_StealthTier"), &Z_Registration_Info_UEnum_ESOTS_StealthTier, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3407880652U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSOTS_PlayerStealthState::StaticStruct, Z_Construct_UScriptStruct_FSOTS_PlayerStealthState_Statics::NewStructOps, TEXT("SOTS_PlayerStealthState"),&Z_Registration_Info_UScriptStruct_FSOTS_PlayerStealthState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_PlayerStealthState), 2815183295U) },
		{ FSOTS_StealthScoringConfig::StaticStruct, Z_Construct_UScriptStruct_FSOTS_StealthScoringConfig_Statics::NewStructOps, TEXT("SOTS_StealthScoringConfig"),&Z_Registration_Info_UScriptStruct_FSOTS_StealthScoringConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_StealthScoringConfig), 1323327223U) },
		{ FSOTS_StealthModifier::StaticStruct, Z_Construct_UScriptStruct_FSOTS_StealthModifier_Statics::NewStructOps, TEXT("SOTS_StealthModifier"),&Z_Registration_Info_UScriptStruct_FSOTS_StealthModifier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_StealthModifier), 3619836574U) },
		{ FSOTS_StealthScoreBreakdown::StaticStruct, Z_Construct_UScriptStruct_FSOTS_StealthScoreBreakdown_Statics::NewStructOps, TEXT("SOTS_StealthScoreBreakdown"),&Z_Registration_Info_UScriptStruct_FSOTS_StealthScoreBreakdown, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_StealthScoreBreakdown), 587956614U) },
		{ FSOTS_StealthSample::StaticStruct, Z_Construct_UScriptStruct_FSOTS_StealthSample_Statics::NewStructOps, TEXT("SOTS_StealthSample"),&Z_Registration_Info_UScriptStruct_FSOTS_StealthSample, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_StealthSample), 834369755U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_GlobalStealthTypes_h__Script_SOTS_GlobalStealthManager_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_GlobalStealthTypes_h__Script_SOTS_GlobalStealthManager_1591017241{
	TEXT("/Script/SOTS_GlobalStealthManager"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_GlobalStealthTypes_h__Script_SOTS_GlobalStealthManager_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_GlobalStealthTypes_h__Script_SOTS_GlobalStealthManager_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_GlobalStealthTypes_h__Script_SOTS_GlobalStealthManager_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_GlobalStealthTypes_h__Script_SOTS_GlobalStealthManager_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
