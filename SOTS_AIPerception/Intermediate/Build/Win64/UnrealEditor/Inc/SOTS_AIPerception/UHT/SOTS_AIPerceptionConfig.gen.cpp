// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTS_AIPerceptionConfig.h"
#include "GameplayTagContainer.h"
#include "SOTS_AIPerceptionTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_AIPerceptionConfig() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
SOTS_AIPERCEPTION_API UClass* Z_Construct_UClass_USOTS_AIPerceptionConfig();
SOTS_AIPERCEPTION_API UClass* Z_Construct_UClass_USOTS_AIPerceptionConfig_NoRegister();
SOTS_AIPERCEPTION_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_AIPerceptionBlackboardConfig();
UPackage* Z_Construct_UPackage__Script_SOTS_AIPerception();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USOTS_AIPerceptionConfig *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_AIPerceptionConfig;
UClass* USOTS_AIPerceptionConfig::GetPrivateStaticClass()
{
	using TClass = USOTS_AIPerceptionConfig;
	if (!Z_Registration_Info_UClass_USOTS_AIPerceptionConfig.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_AIPerceptionConfig"),
			Z_Registration_Info_UClass_USOTS_AIPerceptionConfig.InnerSingleton,
			StaticRegisterNativesUSOTS_AIPerceptionConfig,
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
	return Z_Registration_Info_UClass_USOTS_AIPerceptionConfig.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_AIPerceptionConfig_NoRegister()
{
	return USOTS_AIPerceptionConfig::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_AIPerceptionConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Per-archetype perception tuning for a single AI type.\n */" },
#endif
		{ "IncludePath", "SOTS_AIPerceptionConfig.h" },
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Per-archetype perception tuning for a single AI type." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSightDistance_MetaData[] = {
		{ "Category", "Sight" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Sight ---\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Sight ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PeripheralSightDistance_MetaData[] = {
		{ "Category", "Sight" },
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoreFOVDegrees_MetaData[] = {
		{ "Category", "Sight" },
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PeripheralFOVDegrees_MetaData[] = {
		{ "Category", "Sight" },
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetectionSpeed_Core_MetaData[] = {
		{ "Category", "Detection" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Detection Speeds ---\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Detection Speeds ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetectionSpeed_Peripheral_MetaData[] = {
		{ "Category", "Detection" },
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetectionDecayPerSecond_MetaData[] = {
		{ "Category", "Detection" },
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StealthScoreToDetectionMultiplier_MetaData[] = {
		{ "Category", "Detection" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// StealthScore (0\xe2\x80\x93""1) \xe2\x86\x92 detection multiplier.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "StealthScore (0\xe2\x80\x93""1) \xe2\x86\x92 detection multiplier." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Threshold_SoftSuspicious_MetaData[] = {
		{ "Category", "States" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- State thresholds (0\xe2\x80\x93""1) ---\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- State thresholds (0\xe2\x80\x93""1) ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Threshold_HardSuspicious_MetaData[] = {
		{ "Category", "States" },
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Threshold_Alerted_MetaData[] = {
		{ "Category", "States" },
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HearingRadius_Quiet_MetaData[] = {
		{ "Category", "Hearing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Hearing ---\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Hearing ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HearingRadius_Loud_MetaData[] = {
		{ "Category", "Hearing" },
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_State_Unaware_MetaData[] = {
		{ "Category", "Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Tag mapping (applied on the AI itself) ---\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Tag mapping (applied on the AI itself) ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_State_SoftSuspicious_MetaData[] = {
		{ "Category", "Tags" },
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_State_HardSuspicious_MetaData[] = {
		{ "Category", "Tags" },
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_State_Alerted_MetaData[] = {
		{ "Category", "Tags" },
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_OnHasLOS_Player_MetaData[] = {
		{ "Category", "SOTS|AI|Tags" },
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_OnLostLOS_Player_MetaData[] = {
		{ "Category", "SOTS|AI|Tags" },
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlackboardConfig_MetaData[] = {
		{ "Category", "SOTS|AI|Blackboard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Blackboard keys this AI archetype should drive.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blackboard keys this AI archetype should drive." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_AIPerceptionConfig constinit property declarations *****************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSightDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PeripheralSightDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CoreFOVDegrees;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PeripheralFOVDegrees;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DetectionSpeed_Core;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DetectionSpeed_Peripheral;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DetectionDecayPerSecond;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_StealthScoreToDetectionMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Threshold_SoftSuspicious;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Threshold_HardSuspicious;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Threshold_Alerted;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HearingRadius_Quiet;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HearingRadius_Loud;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag_State_Unaware;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag_State_SoftSuspicious;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag_State_HardSuspicious;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag_State_Alerted;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag_OnHasLOS_Player;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag_OnLostLOS_Player;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlackboardConfig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USOTS_AIPerceptionConfig constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_AIPerceptionConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_AIPerceptionConfig_Statics

// ********** Begin Class USOTS_AIPerceptionConfig Property Definitions ****************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USOTS_AIPerceptionConfig_Statics::NewProp_MaxSightDistance = { "MaxSightDistance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AIPerceptionConfig, MaxSightDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSightDistance_MetaData), NewProp_MaxSightDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USOTS_AIPerceptionConfig_Statics::NewProp_PeripheralSightDistance = { "PeripheralSightDistance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AIPerceptionConfig, PeripheralSightDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PeripheralSightDistance_MetaData), NewProp_PeripheralSightDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USOTS_AIPerceptionConfig_Statics::NewProp_CoreFOVDegrees = { "CoreFOVDegrees", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AIPerceptionConfig, CoreFOVDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoreFOVDegrees_MetaData), NewProp_CoreFOVDegrees_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USOTS_AIPerceptionConfig_Statics::NewProp_PeripheralFOVDegrees = { "PeripheralFOVDegrees", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AIPerceptionConfig, PeripheralFOVDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PeripheralFOVDegrees_MetaData), NewProp_PeripheralFOVDegrees_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USOTS_AIPerceptionConfig_Statics::NewProp_DetectionSpeed_Core = { "DetectionSpeed_Core", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AIPerceptionConfig, DetectionSpeed_Core), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetectionSpeed_Core_MetaData), NewProp_DetectionSpeed_Core_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USOTS_AIPerceptionConfig_Statics::NewProp_DetectionSpeed_Peripheral = { "DetectionSpeed_Peripheral", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AIPerceptionConfig, DetectionSpeed_Peripheral), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetectionSpeed_Peripheral_MetaData), NewProp_DetectionSpeed_Peripheral_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USOTS_AIPerceptionConfig_Statics::NewProp_DetectionDecayPerSecond = { "DetectionDecayPerSecond", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AIPerceptionConfig, DetectionDecayPerSecond), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetectionDecayPerSecond_MetaData), NewProp_DetectionDecayPerSecond_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USOTS_AIPerceptionConfig_Statics::NewProp_StealthScoreToDetectionMultiplier = { "StealthScoreToDetectionMultiplier", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AIPerceptionConfig, StealthScoreToDetectionMultiplier), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StealthScoreToDetectionMultiplier_MetaData), NewProp_StealthScoreToDetectionMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USOTS_AIPerceptionConfig_Statics::NewProp_Threshold_SoftSuspicious = { "Threshold_SoftSuspicious", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AIPerceptionConfig, Threshold_SoftSuspicious), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Threshold_SoftSuspicious_MetaData), NewProp_Threshold_SoftSuspicious_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USOTS_AIPerceptionConfig_Statics::NewProp_Threshold_HardSuspicious = { "Threshold_HardSuspicious", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AIPerceptionConfig, Threshold_HardSuspicious), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Threshold_HardSuspicious_MetaData), NewProp_Threshold_HardSuspicious_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USOTS_AIPerceptionConfig_Statics::NewProp_Threshold_Alerted = { "Threshold_Alerted", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AIPerceptionConfig, Threshold_Alerted), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Threshold_Alerted_MetaData), NewProp_Threshold_Alerted_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USOTS_AIPerceptionConfig_Statics::NewProp_HearingRadius_Quiet = { "HearingRadius_Quiet", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AIPerceptionConfig, HearingRadius_Quiet), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HearingRadius_Quiet_MetaData), NewProp_HearingRadius_Quiet_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USOTS_AIPerceptionConfig_Statics::NewProp_HearingRadius_Loud = { "HearingRadius_Loud", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AIPerceptionConfig, HearingRadius_Loud), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HearingRadius_Loud_MetaData), NewProp_HearingRadius_Loud_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_AIPerceptionConfig_Statics::NewProp_Tag_State_Unaware = { "Tag_State_Unaware", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AIPerceptionConfig, Tag_State_Unaware), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_State_Unaware_MetaData), NewProp_Tag_State_Unaware_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_AIPerceptionConfig_Statics::NewProp_Tag_State_SoftSuspicious = { "Tag_State_SoftSuspicious", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AIPerceptionConfig, Tag_State_SoftSuspicious), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_State_SoftSuspicious_MetaData), NewProp_Tag_State_SoftSuspicious_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_AIPerceptionConfig_Statics::NewProp_Tag_State_HardSuspicious = { "Tag_State_HardSuspicious", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AIPerceptionConfig, Tag_State_HardSuspicious), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_State_HardSuspicious_MetaData), NewProp_Tag_State_HardSuspicious_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_AIPerceptionConfig_Statics::NewProp_Tag_State_Alerted = { "Tag_State_Alerted", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AIPerceptionConfig, Tag_State_Alerted), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_State_Alerted_MetaData), NewProp_Tag_State_Alerted_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_AIPerceptionConfig_Statics::NewProp_Tag_OnHasLOS_Player = { "Tag_OnHasLOS_Player", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AIPerceptionConfig, Tag_OnHasLOS_Player), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_OnHasLOS_Player_MetaData), NewProp_Tag_OnHasLOS_Player_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_AIPerceptionConfig_Statics::NewProp_Tag_OnLostLOS_Player = { "Tag_OnLostLOS_Player", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AIPerceptionConfig, Tag_OnLostLOS_Player), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_OnLostLOS_Player_MetaData), NewProp_Tag_OnLostLOS_Player_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_AIPerceptionConfig_Statics::NewProp_BlackboardConfig = { "BlackboardConfig", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AIPerceptionConfig, BlackboardConfig), Z_Construct_UScriptStruct_FSOTS_AIPerceptionBlackboardConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlackboardConfig_MetaData), NewProp_BlackboardConfig_MetaData) }; // 795269417
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USOTS_AIPerceptionConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AIPerceptionConfig_Statics::NewProp_MaxSightDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AIPerceptionConfig_Statics::NewProp_PeripheralSightDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AIPerceptionConfig_Statics::NewProp_CoreFOVDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AIPerceptionConfig_Statics::NewProp_PeripheralFOVDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AIPerceptionConfig_Statics::NewProp_DetectionSpeed_Core,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AIPerceptionConfig_Statics::NewProp_DetectionSpeed_Peripheral,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AIPerceptionConfig_Statics::NewProp_DetectionDecayPerSecond,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AIPerceptionConfig_Statics::NewProp_StealthScoreToDetectionMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AIPerceptionConfig_Statics::NewProp_Threshold_SoftSuspicious,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AIPerceptionConfig_Statics::NewProp_Threshold_HardSuspicious,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AIPerceptionConfig_Statics::NewProp_Threshold_Alerted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AIPerceptionConfig_Statics::NewProp_HearingRadius_Quiet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AIPerceptionConfig_Statics::NewProp_HearingRadius_Loud,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AIPerceptionConfig_Statics::NewProp_Tag_State_Unaware,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AIPerceptionConfig_Statics::NewProp_Tag_State_SoftSuspicious,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AIPerceptionConfig_Statics::NewProp_Tag_State_HardSuspicious,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AIPerceptionConfig_Statics::NewProp_Tag_State_Alerted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AIPerceptionConfig_Statics::NewProp_Tag_OnHasLOS_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AIPerceptionConfig_Statics::NewProp_Tag_OnLostLOS_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AIPerceptionConfig_Statics::NewProp_BlackboardConfig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AIPerceptionConfig_Statics::PropPointers) < 2048);
// ********** End Class USOTS_AIPerceptionConfig Property Definitions ******************************
UObject* (*const Z_Construct_UClass_USOTS_AIPerceptionConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_AIPerception,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AIPerceptionConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_AIPerceptionConfig_Statics::ClassParams = {
	&USOTS_AIPerceptionConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USOTS_AIPerceptionConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AIPerceptionConfig_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AIPerceptionConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_AIPerceptionConfig_Statics::Class_MetaDataParams)
};
void USOTS_AIPerceptionConfig::StaticRegisterNativesUSOTS_AIPerceptionConfig()
{
}
UClass* Z_Construct_UClass_USOTS_AIPerceptionConfig()
{
	if (!Z_Registration_Info_UClass_USOTS_AIPerceptionConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_AIPerceptionConfig.OuterSingleton, Z_Construct_UClass_USOTS_AIPerceptionConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_AIPerceptionConfig.OuterSingleton;
}
USOTS_AIPerceptionConfig::USOTS_AIPerceptionConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_AIPerceptionConfig);
USOTS_AIPerceptionConfig::~USOTS_AIPerceptionConfig() {}
// ********** End Class USOTS_AIPerceptionConfig ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_AIPerception_Source_SOTS_AIPerception_Public_SOTS_AIPerceptionConfig_h__Script_SOTS_AIPerception_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_AIPerceptionConfig, USOTS_AIPerceptionConfig::StaticClass, TEXT("USOTS_AIPerceptionConfig"), &Z_Registration_Info_UClass_USOTS_AIPerceptionConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_AIPerceptionConfig), 2369467766U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_AIPerception_Source_SOTS_AIPerception_Public_SOTS_AIPerceptionConfig_h__Script_SOTS_AIPerception_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_AIPerception_Source_SOTS_AIPerception_Public_SOTS_AIPerceptionConfig_h__Script_SOTS_AIPerception_3737613211{
	TEXT("/Script/SOTS_AIPerception"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_AIPerception_Source_SOTS_AIPerception_Public_SOTS_AIPerceptionConfig_h__Script_SOTS_AIPerception_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_AIPerception_Source_SOTS_AIPerception_Public_SOTS_AIPerceptionConfig_h__Script_SOTS_AIPerception_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
