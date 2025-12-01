// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTS_AIPerceptionTypes.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_AIPerceptionTypes() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
SOTS_AIPERCEPTION_API UEnum* Z_Construct_UEnum_SOTS_AIPerception_ESOTS_PerceptionState();
SOTS_AIPERCEPTION_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_AIGuardPerceptionConfig();
SOTS_AIPERCEPTION_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_AIPerceptionBlackboardConfig();
SOTS_AIPERCEPTION_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_PerceivedTargetState();
UPackage* Z_Construct_UPackage__Script_SOTS_AIPerception();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ESOTS_PerceptionState *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESOTS_PerceptionState;
static UEnum* ESOTS_PerceptionState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESOTS_PerceptionState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESOTS_PerceptionState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SOTS_AIPerception_ESOTS_PerceptionState, (UObject*)Z_Construct_UPackage__Script_SOTS_AIPerception(), TEXT("ESOTS_PerceptionState"));
	}
	return Z_Registration_Info_UEnum_ESOTS_PerceptionState.OuterSingleton;
}
template<> SOTS_AIPERCEPTION_NON_ATTRIBUTED_API UEnum* StaticEnum<ESOTS_PerceptionState>()
{
	return ESOTS_PerceptionState_StaticEnum();
}
struct Z_Construct_UEnum_SOTS_AIPerception_ESOTS_PerceptionState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Alerted.DisplayName", "Alerted" },
		{ "Alerted.Name", "ESOTS_PerceptionState::Alerted" },
		{ "BlueprintType", "true" },
		{ "HardSuspicious.DisplayName", "Hard Suspicious" },
		{ "HardSuspicious.Name", "ESOTS_PerceptionState::HardSuspicious" },
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionTypes.h" },
		{ "SoftSuspicious.DisplayName", "Soft Suspicious" },
		{ "SoftSuspicious.Name", "ESOTS_PerceptionState::SoftSuspicious" },
		{ "Unaware.DisplayName", "Unaware" },
		{ "Unaware.Name", "ESOTS_PerceptionState::Unaware" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESOTS_PerceptionState::Unaware", (int64)ESOTS_PerceptionState::Unaware },
		{ "ESOTS_PerceptionState::SoftSuspicious", (int64)ESOTS_PerceptionState::SoftSuspicious },
		{ "ESOTS_PerceptionState::HardSuspicious", (int64)ESOTS_PerceptionState::HardSuspicious },
		{ "ESOTS_PerceptionState::Alerted", (int64)ESOTS_PerceptionState::Alerted },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SOTS_AIPerception_ESOTS_PerceptionState_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SOTS_AIPerception_ESOTS_PerceptionState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SOTS_AIPerception,
	nullptr,
	"ESOTS_PerceptionState",
	"ESOTS_PerceptionState",
	Z_Construct_UEnum_SOTS_AIPerception_ESOTS_PerceptionState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SOTS_AIPerception_ESOTS_PerceptionState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SOTS_AIPerception_ESOTS_PerceptionState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SOTS_AIPerception_ESOTS_PerceptionState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SOTS_AIPerception_ESOTS_PerceptionState()
{
	if (!Z_Registration_Info_UEnum_ESOTS_PerceptionState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESOTS_PerceptionState.InnerSingleton, Z_Construct_UEnum_SOTS_AIPerception_ESOTS_PerceptionState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESOTS_PerceptionState.InnerSingleton;
}
// ********** End Enum ESOTS_PerceptionState *******************************************************

// ********** Begin ScriptStruct FSOTS_PerceivedTargetState ****************************************
struct Z_Construct_UScriptStruct_FSOTS_PerceivedTargetState_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_PerceivedTargetState); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_PerceivedTargetState); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "Category", "Perception" },
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SightScore_MetaData[] = {
		{ "Category", "Perception" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Internal scoring for LOS; 0 = none, >0 = has LOS / strength.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Internal scoring for LOS; 0 = none, >0 = has LOS / strength." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HearingScore_MetaData[] = {
		{ "Category", "Perception" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Internal scoring for hearing; decays over time.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Internal scoring for hearing; decays over time." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Awareness_MetaData[] = {
		{ "Category", "Perception" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Final awareness [0..1] after integrating sight/hearing/stealth.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Final awareness [0..1] after integrating sight/hearing/stealth." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[] = {
		{ "Category", "Perception" },
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastKnownLocation_MetaData[] = {
		{ "Category", "Perception" },
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeSinceLastSeen_MetaData[] = {
		{ "Category", "Perception" },
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_PerceivedTargetState constinit property declarations ********
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SightScore;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HearingScore;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Awareness;
	static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastKnownLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeSinceLastSeen;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_PerceivedTargetState constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_PerceivedTargetState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_PerceivedTargetState_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_PerceivedTargetState;
class UScriptStruct* FSOTS_PerceivedTargetState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_PerceivedTargetState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_PerceivedTargetState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_PerceivedTargetState, (UObject*)Z_Construct_UPackage__Script_SOTS_AIPerception(), TEXT("SOTS_PerceivedTargetState"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_PerceivedTargetState.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_PerceivedTargetState Property Definitions *******************
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FSOTS_PerceivedTargetState_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_PerceivedTargetState, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_PerceivedTargetState_Statics::NewProp_SightScore = { "SightScore", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_PerceivedTargetState, SightScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SightScore_MetaData), NewProp_SightScore_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_PerceivedTargetState_Statics::NewProp_HearingScore = { "HearingScore", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_PerceivedTargetState, HearingScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HearingScore_MetaData), NewProp_HearingScore_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_PerceivedTargetState_Statics::NewProp_Awareness = { "Awareness", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_PerceivedTargetState, Awareness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Awareness_MetaData), NewProp_Awareness_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSOTS_PerceivedTargetState_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSOTS_PerceivedTargetState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_PerceivedTargetState, State), Z_Construct_UEnum_SOTS_AIPerception_ESOTS_PerceptionState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_State_MetaData), NewProp_State_MetaData) }; // 238031394
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_PerceivedTargetState_Statics::NewProp_LastKnownLocation = { "LastKnownLocation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_PerceivedTargetState, LastKnownLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastKnownLocation_MetaData), NewProp_LastKnownLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_PerceivedTargetState_Statics::NewProp_TimeSinceLastSeen = { "TimeSinceLastSeen", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_PerceivedTargetState, TimeSinceLastSeen), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeSinceLastSeen_MetaData), NewProp_TimeSinceLastSeen_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_PerceivedTargetState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_PerceivedTargetState_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_PerceivedTargetState_Statics::NewProp_SightScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_PerceivedTargetState_Statics::NewProp_HearingScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_PerceivedTargetState_Statics::NewProp_Awareness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_PerceivedTargetState_Statics::NewProp_State_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_PerceivedTargetState_Statics::NewProp_State,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_PerceivedTargetState_Statics::NewProp_LastKnownLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_PerceivedTargetState_Statics::NewProp_TimeSinceLastSeen,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_PerceivedTargetState_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_PerceivedTargetState Property Definitions *********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_PerceivedTargetState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_AIPerception,
	nullptr,
	&NewStructOps,
	"SOTS_PerceivedTargetState",
	Z_Construct_UScriptStruct_FSOTS_PerceivedTargetState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_PerceivedTargetState_Statics::PropPointers),
	sizeof(FSOTS_PerceivedTargetState),
	alignof(FSOTS_PerceivedTargetState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_PerceivedTargetState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_PerceivedTargetState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_PerceivedTargetState()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_PerceivedTargetState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_PerceivedTargetState.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_PerceivedTargetState_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_PerceivedTargetState.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_PerceivedTargetState ******************************************

// ********** Begin ScriptStruct FSOTS_AIGuardPerceptionConfig *************************************
struct Z_Construct_UScriptStruct_FSOTS_AIGuardPerceptionConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_AIGuardPerceptionConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_AIGuardPerceptionConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SightSuspicionPerSecond_MetaData[] = {
		{ "Category", "SOTS|AI" },
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HearingSuspicionPerEvent_MetaData[] = {
		{ "Category", "SOTS|AI" },
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSuspicion_MetaData[] = {
		{ "Category", "SOTS|AI" },
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SuspicionDecayPerSecond_MetaData[] = {
		{ "Category", "SOTS|AI" },
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_OnFullyAlerted_MetaData[] = {
		{ "Category", "SOTS|AI|Tags" },
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_OnLostSight_MetaData[] = {
		{ "Category", "SOTS|AI|Tags" },
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FXTag_OnSoftSuspicious_MetaData[] = {
		{ "Category", "SOTS|AI|Perception|FX" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional FX tags fired on key perception transitions. These are\n// looked up via the central FX manager and are fully data-driven.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional FX tags fired on key perception transitions. These are\nlooked up via the central FX manager and are fully data-driven." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FXTag_OnHardSuspicious_MetaData[] = {
		{ "Category", "SOTS|AI|Perception|FX" },
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FXTag_OnAlerted_MetaData[] = {
		{ "Category", "SOTS|AI|Perception|FX" },
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FXTag_OnLostSight_MetaData[] = {
		{ "Category", "SOTS|AI|Perception|FX" },
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_AIGuardPerceptionConfig constinit property declarations *****
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SightSuspicionPerSecond;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HearingSuspicionPerEvent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSuspicion;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SuspicionDecayPerSecond;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag_OnFullyAlerted;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag_OnLostSight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FXTag_OnSoftSuspicious;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FXTag_OnHardSuspicious;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FXTag_OnAlerted;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FXTag_OnLostSight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_AIGuardPerceptionConfig constinit property declarations *******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_AIGuardPerceptionConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_AIGuardPerceptionConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_AIGuardPerceptionConfig;
class UScriptStruct* FSOTS_AIGuardPerceptionConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_AIGuardPerceptionConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_AIGuardPerceptionConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_AIGuardPerceptionConfig, (UObject*)Z_Construct_UPackage__Script_SOTS_AIPerception(), TEXT("SOTS_AIGuardPerceptionConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_AIGuardPerceptionConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_AIGuardPerceptionConfig Property Definitions ****************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_AIGuardPerceptionConfig_Statics::NewProp_SightSuspicionPerSecond = { "SightSuspicionPerSecond", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_AIGuardPerceptionConfig, SightSuspicionPerSecond), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SightSuspicionPerSecond_MetaData), NewProp_SightSuspicionPerSecond_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_AIGuardPerceptionConfig_Statics::NewProp_HearingSuspicionPerEvent = { "HearingSuspicionPerEvent", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_AIGuardPerceptionConfig, HearingSuspicionPerEvent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HearingSuspicionPerEvent_MetaData), NewProp_HearingSuspicionPerEvent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_AIGuardPerceptionConfig_Statics::NewProp_MaxSuspicion = { "MaxSuspicion", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_AIGuardPerceptionConfig, MaxSuspicion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSuspicion_MetaData), NewProp_MaxSuspicion_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_AIGuardPerceptionConfig_Statics::NewProp_SuspicionDecayPerSecond = { "SuspicionDecayPerSecond", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_AIGuardPerceptionConfig, SuspicionDecayPerSecond), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SuspicionDecayPerSecond_MetaData), NewProp_SuspicionDecayPerSecond_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_AIGuardPerceptionConfig_Statics::NewProp_Tag_OnFullyAlerted = { "Tag_OnFullyAlerted", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_AIGuardPerceptionConfig, Tag_OnFullyAlerted), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_OnFullyAlerted_MetaData), NewProp_Tag_OnFullyAlerted_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_AIGuardPerceptionConfig_Statics::NewProp_Tag_OnLostSight = { "Tag_OnLostSight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_AIGuardPerceptionConfig, Tag_OnLostSight), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_OnLostSight_MetaData), NewProp_Tag_OnLostSight_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_AIGuardPerceptionConfig_Statics::NewProp_FXTag_OnSoftSuspicious = { "FXTag_OnSoftSuspicious", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_AIGuardPerceptionConfig, FXTag_OnSoftSuspicious), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FXTag_OnSoftSuspicious_MetaData), NewProp_FXTag_OnSoftSuspicious_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_AIGuardPerceptionConfig_Statics::NewProp_FXTag_OnHardSuspicious = { "FXTag_OnHardSuspicious", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_AIGuardPerceptionConfig, FXTag_OnHardSuspicious), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FXTag_OnHardSuspicious_MetaData), NewProp_FXTag_OnHardSuspicious_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_AIGuardPerceptionConfig_Statics::NewProp_FXTag_OnAlerted = { "FXTag_OnAlerted", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_AIGuardPerceptionConfig, FXTag_OnAlerted), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FXTag_OnAlerted_MetaData), NewProp_FXTag_OnAlerted_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_AIGuardPerceptionConfig_Statics::NewProp_FXTag_OnLostSight = { "FXTag_OnLostSight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_AIGuardPerceptionConfig, FXTag_OnLostSight), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FXTag_OnLostSight_MetaData), NewProp_FXTag_OnLostSight_MetaData) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_AIGuardPerceptionConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_AIGuardPerceptionConfig_Statics::NewProp_SightSuspicionPerSecond,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_AIGuardPerceptionConfig_Statics::NewProp_HearingSuspicionPerEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_AIGuardPerceptionConfig_Statics::NewProp_MaxSuspicion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_AIGuardPerceptionConfig_Statics::NewProp_SuspicionDecayPerSecond,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_AIGuardPerceptionConfig_Statics::NewProp_Tag_OnFullyAlerted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_AIGuardPerceptionConfig_Statics::NewProp_Tag_OnLostSight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_AIGuardPerceptionConfig_Statics::NewProp_FXTag_OnSoftSuspicious,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_AIGuardPerceptionConfig_Statics::NewProp_FXTag_OnHardSuspicious,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_AIGuardPerceptionConfig_Statics::NewProp_FXTag_OnAlerted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_AIGuardPerceptionConfig_Statics::NewProp_FXTag_OnLostSight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_AIGuardPerceptionConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_AIGuardPerceptionConfig Property Definitions ******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_AIGuardPerceptionConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_AIPerception,
	nullptr,
	&NewStructOps,
	"SOTS_AIGuardPerceptionConfig",
	Z_Construct_UScriptStruct_FSOTS_AIGuardPerceptionConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_AIGuardPerceptionConfig_Statics::PropPointers),
	sizeof(FSOTS_AIGuardPerceptionConfig),
	alignof(FSOTS_AIGuardPerceptionConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_AIGuardPerceptionConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_AIGuardPerceptionConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_AIGuardPerceptionConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_AIGuardPerceptionConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_AIGuardPerceptionConfig.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_AIGuardPerceptionConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_AIGuardPerceptionConfig.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_AIGuardPerceptionConfig ***************************************

// ********** Begin ScriptStruct FSOTS_AIPerceptionBlackboardConfig ********************************
struct Z_Construct_UScriptStruct_FSOTS_AIPerceptionBlackboardConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_AIPerceptionBlackboardConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_AIPerceptionBlackboardConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Blackboard key configuration so each AI archetype can decide which\n * blackboard entries should mirror perception/suspicion state.\n */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blackboard key configuration so each AI archetype can decide which\nblackboard entries should mirror perception/suspicion state." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SuspicionKey_MetaData[] = {
		{ "Category", "SOTS|AI|Blackboard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Float: current normalized suspicion [0,1].\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Float: current normalized suspicion [0,1]." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateKey_MetaData[] = {
		{ "Category", "SOTS|AI|Blackboard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Int/Enum: high-level perception state as ESOTS_PerceptionState index.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Int/Enum: high-level perception state as ESOTS_PerceptionState index." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasLOSKey_MetaData[] = {
		{ "Category", "SOTS|AI|Blackboard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Bool: whether this AI currently has line of sight to the primary target.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bool: whether this AI currently has line of sight to the primary target." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_AIPerceptionBlackboardConfig constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_SuspicionKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StateKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HasLOSKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_AIPerceptionBlackboardConfig constinit property declarations **
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_AIPerceptionBlackboardConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_AIPerceptionBlackboardConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_AIPerceptionBlackboardConfig;
class UScriptStruct* FSOTS_AIPerceptionBlackboardConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_AIPerceptionBlackboardConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_AIPerceptionBlackboardConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_AIPerceptionBlackboardConfig, (UObject*)Z_Construct_UPackage__Script_SOTS_AIPerception(), TEXT("SOTS_AIPerceptionBlackboardConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_AIPerceptionBlackboardConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_AIPerceptionBlackboardConfig Property Definitions ***********
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_AIPerceptionBlackboardConfig_Statics::NewProp_SuspicionKey = { "SuspicionKey", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_AIPerceptionBlackboardConfig, SuspicionKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SuspicionKey_MetaData), NewProp_SuspicionKey_MetaData) }; // 3145079323
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_AIPerceptionBlackboardConfig_Statics::NewProp_StateKey = { "StateKey", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_AIPerceptionBlackboardConfig, StateKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateKey_MetaData), NewProp_StateKey_MetaData) }; // 3145079323
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_AIPerceptionBlackboardConfig_Statics::NewProp_HasLOSKey = { "HasLOSKey", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_AIPerceptionBlackboardConfig, HasLOSKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasLOSKey_MetaData), NewProp_HasLOSKey_MetaData) }; // 3145079323
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_AIPerceptionBlackboardConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_AIPerceptionBlackboardConfig_Statics::NewProp_SuspicionKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_AIPerceptionBlackboardConfig_Statics::NewProp_StateKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_AIPerceptionBlackboardConfig_Statics::NewProp_HasLOSKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_AIPerceptionBlackboardConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_AIPerceptionBlackboardConfig Property Definitions *************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_AIPerceptionBlackboardConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_AIPerception,
	nullptr,
	&NewStructOps,
	"SOTS_AIPerceptionBlackboardConfig",
	Z_Construct_UScriptStruct_FSOTS_AIPerceptionBlackboardConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_AIPerceptionBlackboardConfig_Statics::PropPointers),
	sizeof(FSOTS_AIPerceptionBlackboardConfig),
	alignof(FSOTS_AIPerceptionBlackboardConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_AIPerceptionBlackboardConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_AIPerceptionBlackboardConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_AIPerceptionBlackboardConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_AIPerceptionBlackboardConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_AIPerceptionBlackboardConfig.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_AIPerceptionBlackboardConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_AIPerceptionBlackboardConfig.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_AIPerceptionBlackboardConfig **********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_AIPerception_Source_SOTS_AIPerception_Public_SOTS_AIPerceptionTypes_h__Script_SOTS_AIPerception_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESOTS_PerceptionState_StaticEnum, TEXT("ESOTS_PerceptionState"), &Z_Registration_Info_UEnum_ESOTS_PerceptionState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 238031394U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSOTS_PerceivedTargetState::StaticStruct, Z_Construct_UScriptStruct_FSOTS_PerceivedTargetState_Statics::NewStructOps, TEXT("SOTS_PerceivedTargetState"),&Z_Registration_Info_UScriptStruct_FSOTS_PerceivedTargetState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_PerceivedTargetState), 3791564001U) },
		{ FSOTS_AIGuardPerceptionConfig::StaticStruct, Z_Construct_UScriptStruct_FSOTS_AIGuardPerceptionConfig_Statics::NewStructOps, TEXT("SOTS_AIGuardPerceptionConfig"),&Z_Registration_Info_UScriptStruct_FSOTS_AIGuardPerceptionConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_AIGuardPerceptionConfig), 4249128913U) },
		{ FSOTS_AIPerceptionBlackboardConfig::StaticStruct, Z_Construct_UScriptStruct_FSOTS_AIPerceptionBlackboardConfig_Statics::NewStructOps, TEXT("SOTS_AIPerceptionBlackboardConfig"),&Z_Registration_Info_UScriptStruct_FSOTS_AIPerceptionBlackboardConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_AIPerceptionBlackboardConfig), 795269417U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_AIPerception_Source_SOTS_AIPerception_Public_SOTS_AIPerceptionTypes_h__Script_SOTS_AIPerception_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_AIPerception_Source_SOTS_AIPerception_Public_SOTS_AIPerceptionTypes_h__Script_SOTS_AIPerception_2559328308{
	TEXT("/Script/SOTS_AIPerception"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_AIPerception_Source_SOTS_AIPerception_Public_SOTS_AIPerceptionTypes_h__Script_SOTS_AIPerception_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_AIPerception_Source_SOTS_AIPerception_Public_SOTS_AIPerceptionTypes_h__Script_SOTS_AIPerception_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_AIPerception_Source_SOTS_AIPerception_Public_SOTS_AIPerceptionTypes_h__Script_SOTS_AIPerception_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_AIPerception_Source_SOTS_AIPerception_Public_SOTS_AIPerceptionTypes_h__Script_SOTS_AIPerception_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
