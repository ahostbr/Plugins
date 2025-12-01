// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTS_MissionDirectorTypes.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_MissionDirectorTypes() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
SOTS_GLOBALSTEALTHMANAGER_API UClass* Z_Construct_UClass_USOTS_StealthConfigDataAsset_NoRegister();
SOTS_MISSIONDIRECTOR_API UClass* Z_Construct_UClass_USOTS_MissionDefinition();
SOTS_MISSIONDIRECTOR_API UClass* Z_Construct_UClass_USOTS_MissionDefinition_NoRegister();
SOTS_MISSIONDIRECTOR_API UEnum* Z_Construct_UEnum_SOTS_MissionDirector_ESOTS_MissionCompletionState();
SOTS_MISSIONDIRECTOR_API UEnum* Z_Construct_UEnum_SOTS_MissionDirector_ESOTS_MissionState();
SOTS_MISSIONDIRECTOR_API UEnum* Z_Construct_UEnum_SOTS_MissionDirector_ESOTS_ObjectiveType();
SOTS_MISSIONDIRECTOR_API UEnum* Z_Construct_UEnum_SOTS_MissionDirector_ESOTSMissionEventCategory();
SOTS_MISSIONDIRECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_MissionEventLogEntry();
SOTS_MISSIONDIRECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_MissionFailureConditions();
SOTS_MISSIONDIRECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_MissionObjective();
SOTS_MISSIONDIRECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_MissionObjectiveRuntimeState();
SOTS_MISSIONDIRECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_MissionRewards();
SOTS_MISSIONDIRECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_MissionRunSummary();
SOTS_MISSIONDIRECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_MissionRuntimeState();
UPackage* Z_Construct_UPackage__Script_SOTS_MissionDirector();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ESOTSMissionEventCategory *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESOTSMissionEventCategory;
static UEnum* ESOTSMissionEventCategory_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESOTSMissionEventCategory.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESOTSMissionEventCategory.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SOTS_MissionDirector_ESOTSMissionEventCategory, (UObject*)Z_Construct_UPackage__Script_SOTS_MissionDirector(), TEXT("ESOTSMissionEventCategory"));
	}
	return Z_Registration_Info_UEnum_ESOTSMissionEventCategory.OuterSingleton;
}
template<> SOTS_MISSIONDIRECTOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ESOTSMissionEventCategory>()
{
	return ESOTSMissionEventCategory_StaticEnum();
}
struct Z_Construct_UEnum_SOTS_MissionDirector_ESOTSMissionEventCategory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Combat.DisplayName", "Combat" },
		{ "Combat.Name", "ESOTSMissionEventCategory::Combat" },
		{ "Custom.DisplayName", "Custom" },
		{ "Custom.Name", "ESOTSMissionEventCategory::Custom" },
		{ "Exploration.DisplayName", "Exploration" },
		{ "Exploration.Name", "ESOTSMissionEventCategory::Exploration" },
		{ "Loot.DisplayName", "Loot" },
		{ "Loot.Name", "ESOTSMissionEventCategory::Loot" },
		{ "Misc.DisplayName", "Misc" },
		{ "Misc.Name", "ESOTSMissionEventCategory::Misc" },
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
		{ "Objective.DisplayName", "Objective" },
		{ "Objective.Name", "ESOTSMissionEventCategory::Objective" },
		{ "Stealth.DisplayName", "Stealth" },
		{ "Stealth.Name", "ESOTSMissionEventCategory::Stealth" },
		{ "Time.DisplayName", "Time" },
		{ "Time.Name", "ESOTSMissionEventCategory::Time" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESOTSMissionEventCategory::Objective", (int64)ESOTSMissionEventCategory::Objective },
		{ "ESOTSMissionEventCategory::Stealth", (int64)ESOTSMissionEventCategory::Stealth },
		{ "ESOTSMissionEventCategory::Combat", (int64)ESOTSMissionEventCategory::Combat },
		{ "ESOTSMissionEventCategory::Time", (int64)ESOTSMissionEventCategory::Time },
		{ "ESOTSMissionEventCategory::Loot", (int64)ESOTSMissionEventCategory::Loot },
		{ "ESOTSMissionEventCategory::Exploration", (int64)ESOTSMissionEventCategory::Exploration },
		{ "ESOTSMissionEventCategory::Misc", (int64)ESOTSMissionEventCategory::Misc },
		{ "ESOTSMissionEventCategory::Custom", (int64)ESOTSMissionEventCategory::Custom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SOTS_MissionDirector_ESOTSMissionEventCategory_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SOTS_MissionDirector_ESOTSMissionEventCategory_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SOTS_MissionDirector,
	nullptr,
	"ESOTSMissionEventCategory",
	"ESOTSMissionEventCategory",
	Z_Construct_UEnum_SOTS_MissionDirector_ESOTSMissionEventCategory_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SOTS_MissionDirector_ESOTSMissionEventCategory_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SOTS_MissionDirector_ESOTSMissionEventCategory_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SOTS_MissionDirector_ESOTSMissionEventCategory_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SOTS_MissionDirector_ESOTSMissionEventCategory()
{
	if (!Z_Registration_Info_UEnum_ESOTSMissionEventCategory.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESOTSMissionEventCategory.InnerSingleton, Z_Construct_UEnum_SOTS_MissionDirector_ESOTSMissionEventCategory_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESOTSMissionEventCategory.InnerSingleton;
}
// ********** End Enum ESOTSMissionEventCategory ***************************************************

// ********** Begin Enum ESOTS_MissionState ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESOTS_MissionState;
static UEnum* ESOTS_MissionState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESOTS_MissionState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESOTS_MissionState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SOTS_MissionDirector_ESOTS_MissionState, (UObject*)Z_Construct_UPackage__Script_SOTS_MissionDirector(), TEXT("ESOTS_MissionState"));
	}
	return Z_Registration_Info_UEnum_ESOTS_MissionState.OuterSingleton;
}
template<> SOTS_MISSIONDIRECTOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ESOTS_MissionState>()
{
	return ESOTS_MissionState_StaticEnum();
}
struct Z_Construct_UEnum_SOTS_MissionDirector_ESOTS_MissionState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// High-level mission lifecycle state used by the mission director.\n" },
#endif
		{ "Completed.DisplayName", "Completed" },
		{ "Completed.Name", "ESOTS_MissionState::Completed" },
		{ "Failed.DisplayName", "Failed" },
		{ "Failed.Name", "ESOTS_MissionState::Failed" },
		{ "Inactive.DisplayName", "Inactive" },
		{ "Inactive.Name", "ESOTS_MissionState::Inactive" },
		{ "InProgress.DisplayName", "In Progress" },
		{ "InProgress.Name", "ESOTS_MissionState::InProgress" },
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "ESOTS_MissionState::None" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "High-level mission lifecycle state used by the mission director." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESOTS_MissionState::None", (int64)ESOTS_MissionState::None },
		{ "ESOTS_MissionState::Inactive", (int64)ESOTS_MissionState::Inactive },
		{ "ESOTS_MissionState::InProgress", (int64)ESOTS_MissionState::InProgress },
		{ "ESOTS_MissionState::Completed", (int64)ESOTS_MissionState::Completed },
		{ "ESOTS_MissionState::Failed", (int64)ESOTS_MissionState::Failed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SOTS_MissionDirector_ESOTS_MissionState_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SOTS_MissionDirector_ESOTS_MissionState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SOTS_MissionDirector,
	nullptr,
	"ESOTS_MissionState",
	"ESOTS_MissionState",
	Z_Construct_UEnum_SOTS_MissionDirector_ESOTS_MissionState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SOTS_MissionDirector_ESOTS_MissionState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SOTS_MissionDirector_ESOTS_MissionState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SOTS_MissionDirector_ESOTS_MissionState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SOTS_MissionDirector_ESOTS_MissionState()
{
	if (!Z_Registration_Info_UEnum_ESOTS_MissionState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESOTS_MissionState.InnerSingleton, Z_Construct_UEnum_SOTS_MissionDirector_ESOTS_MissionState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESOTS_MissionState.InnerSingleton;
}
// ********** End Enum ESOTS_MissionState **********************************************************

// ********** Begin Enum ESOTS_ObjectiveType *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESOTS_ObjectiveType;
static UEnum* ESOTS_ObjectiveType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESOTS_ObjectiveType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESOTS_ObjectiveType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SOTS_MissionDirector_ESOTS_ObjectiveType, (UObject*)Z_Construct_UPackage__Script_SOTS_MissionDirector(), TEXT("ESOTS_ObjectiveType"));
	}
	return Z_Registration_Info_UEnum_ESOTS_ObjectiveType.OuterSingleton;
}
template<> SOTS_MISSIONDIRECTOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ESOTS_ObjectiveType>()
{
	return ESOTS_ObjectiveType_StaticEnum();
}
struct Z_Construct_UEnum_SOTS_MissionDirector_ESOTS_ObjectiveType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Simple type flag so designers can mark which objectives are mandatory.\n" },
#endif
		{ "Mandatory.DisplayName", "Mandatory" },
		{ "Mandatory.Name", "ESOTS_ObjectiveType::Mandatory" },
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
		{ "Optional.DisplayName", "Optional" },
		{ "Optional.Name", "ESOTS_ObjectiveType::Optional" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple type flag so designers can mark which objectives are mandatory." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESOTS_ObjectiveType::Mandatory", (int64)ESOTS_ObjectiveType::Mandatory },
		{ "ESOTS_ObjectiveType::Optional", (int64)ESOTS_ObjectiveType::Optional },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SOTS_MissionDirector_ESOTS_ObjectiveType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SOTS_MissionDirector_ESOTS_ObjectiveType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SOTS_MissionDirector,
	nullptr,
	"ESOTS_ObjectiveType",
	"ESOTS_ObjectiveType",
	Z_Construct_UEnum_SOTS_MissionDirector_ESOTS_ObjectiveType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SOTS_MissionDirector_ESOTS_ObjectiveType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SOTS_MissionDirector_ESOTS_ObjectiveType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SOTS_MissionDirector_ESOTS_ObjectiveType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SOTS_MissionDirector_ESOTS_ObjectiveType()
{
	if (!Z_Registration_Info_UEnum_ESOTS_ObjectiveType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESOTS_ObjectiveType.InnerSingleton, Z_Construct_UEnum_SOTS_MissionDirector_ESOTS_ObjectiveType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESOTS_ObjectiveType.InnerSingleton;
}
// ********** End Enum ESOTS_ObjectiveType *********************************************************

// ********** Begin Enum ESOTS_MissionCompletionState **********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESOTS_MissionCompletionState;
static UEnum* ESOTS_MissionCompletionState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESOTS_MissionCompletionState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESOTS_MissionCompletionState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SOTS_MissionDirector_ESOTS_MissionCompletionState, (UObject*)Z_Construct_UPackage__Script_SOTS_MissionDirector(), TEXT("ESOTS_MissionCompletionState"));
	}
	return Z_Registration_Info_UEnum_ESOTS_MissionCompletionState.OuterSingleton;
}
template<> SOTS_MISSIONDIRECTOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ESOTS_MissionCompletionState>()
{
	return ESOTS_MissionCompletionState_StaticEnum();
}
struct Z_Construct_UEnum_SOTS_MissionDirector_ESOTS_MissionCompletionState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// High-level mission completion state used for save/profile systems.\n" },
#endif
		{ "Completed.DisplayName", "Completed" },
		{ "Completed.Name", "ESOTS_MissionCompletionState::Completed" },
		{ "Failed.DisplayName", "Failed" },
		{ "Failed.Name", "ESOTS_MissionCompletionState::Failed" },
		{ "InProgress.DisplayName", "In Progress" },
		{ "InProgress.Name", "ESOTS_MissionCompletionState::InProgress" },
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
		{ "NotStarted.DisplayName", "Not Started" },
		{ "NotStarted.Name", "ESOTS_MissionCompletionState::NotStarted" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "High-level mission completion state used for save/profile systems." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESOTS_MissionCompletionState::NotStarted", (int64)ESOTS_MissionCompletionState::NotStarted },
		{ "ESOTS_MissionCompletionState::InProgress", (int64)ESOTS_MissionCompletionState::InProgress },
		{ "ESOTS_MissionCompletionState::Completed", (int64)ESOTS_MissionCompletionState::Completed },
		{ "ESOTS_MissionCompletionState::Failed", (int64)ESOTS_MissionCompletionState::Failed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SOTS_MissionDirector_ESOTS_MissionCompletionState_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SOTS_MissionDirector_ESOTS_MissionCompletionState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SOTS_MissionDirector,
	nullptr,
	"ESOTS_MissionCompletionState",
	"ESOTS_MissionCompletionState",
	Z_Construct_UEnum_SOTS_MissionDirector_ESOTS_MissionCompletionState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SOTS_MissionDirector_ESOTS_MissionCompletionState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SOTS_MissionDirector_ESOTS_MissionCompletionState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SOTS_MissionDirector_ESOTS_MissionCompletionState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SOTS_MissionDirector_ESOTS_MissionCompletionState()
{
	if (!Z_Registration_Info_UEnum_ESOTS_MissionCompletionState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESOTS_MissionCompletionState.InnerSingleton, Z_Construct_UEnum_SOTS_MissionDirector_ESOTS_MissionCompletionState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESOTS_MissionCompletionState.InnerSingleton;
}
// ********** End Enum ESOTS_MissionCompletionState ************************************************

// ********** Begin ScriptStruct FSOTS_MissionEventLogEntry ****************************************
struct Z_Construct_UScriptStruct_FSOTS_MissionEventLogEntry_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_MissionEventLogEntry); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_MissionEventLogEntry); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Single line item in the mission run log.\n * This is what you will show to the player at mission end.\n */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Single line item in the mission run log.\nThis is what you will show to the player at mission end." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeSinceStart_MetaData[] = {
		{ "Category", "Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Seconds since the mission started when this event occurred.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Seconds since the mission started when this event occurred." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[] = {
		{ "Category", "Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Category for grouping/filtering in UI.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Category for grouping/filtering in UI." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[] = {
		{ "Category", "Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Short, UI-friendly title (e.g. \"Primary Objective Completed\").\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Short, UI-friendly title (e.g. \"Primary Objective Completed\")." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional longer description for tooltips/details.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional longer description for tooltips/details." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScoreDelta_MetaData[] = {
		{ "Category", "Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Positive or negative score delta applied by this event.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Positive or negative score delta applied by this event." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CumulativeScore_MetaData[] = {
		{ "Category", "Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Score after applying this delta (for running total display).\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Score after applying this delta (for running total display)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPenalty_MetaData[] = {
		{ "Category", "Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// True if this was a penalty event (for red text in UI).\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True if this was a penalty event (for red text in UI)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextTags_MetaData[] = {
		{ "Category", "Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional tags so other systems can filter or post-process (e.g. Mission.Modifier.NoKills).\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional tags so other systems can filter or post-process (e.g. Mission.Modifier.NoKills)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_MissionEventLogEntry constinit property declarations ********
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeSinceStart;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Category_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Category;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Title;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScoreDelta;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CumulativeScore;
	static void NewProp_bIsPenalty_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPenalty;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContextTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_MissionEventLogEntry constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_MissionEventLogEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_MissionEventLogEntry_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_MissionEventLogEntry;
class UScriptStruct* FSOTS_MissionEventLogEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_MissionEventLogEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_MissionEventLogEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_MissionEventLogEntry, (UObject*)Z_Construct_UPackage__Script_SOTS_MissionDirector(), TEXT("SOTS_MissionEventLogEntry"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_MissionEventLogEntry.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_MissionEventLogEntry Property Definitions *******************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_MissionEventLogEntry_Statics::NewProp_TimeSinceStart = { "TimeSinceStart", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_MissionEventLogEntry, TimeSinceStart), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeSinceStart_MetaData), NewProp_TimeSinceStart_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSOTS_MissionEventLogEntry_Statics::NewProp_Category_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSOTS_MissionEventLogEntry_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_MissionEventLogEntry, Category), Z_Construct_UEnum_SOTS_MissionDirector_ESOTSMissionEventCategory, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Category_MetaData), NewProp_Category_MetaData) }; // 2204436384
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSOTS_MissionEventLogEntry_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_MissionEventLogEntry, Title), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Title_MetaData), NewProp_Title_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSOTS_MissionEventLogEntry_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_MissionEventLogEntry, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_MissionEventLogEntry_Statics::NewProp_ScoreDelta = { "ScoreDelta", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_MissionEventLogEntry, ScoreDelta), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScoreDelta_MetaData), NewProp_ScoreDelta_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_MissionEventLogEntry_Statics::NewProp_CumulativeScore = { "CumulativeScore", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_MissionEventLogEntry, CumulativeScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CumulativeScore_MetaData), NewProp_CumulativeScore_MetaData) };
void Z_Construct_UScriptStruct_FSOTS_MissionEventLogEntry_Statics::NewProp_bIsPenalty_SetBit(void* Obj)
{
	((FSOTS_MissionEventLogEntry*)Obj)->bIsPenalty = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSOTS_MissionEventLogEntry_Statics::NewProp_bIsPenalty = { "bIsPenalty", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSOTS_MissionEventLogEntry), &Z_Construct_UScriptStruct_FSOTS_MissionEventLogEntry_Statics::NewProp_bIsPenalty_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPenalty_MetaData), NewProp_bIsPenalty_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_MissionEventLogEntry_Statics::NewProp_ContextTags = { "ContextTags", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_MissionEventLogEntry, ContextTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextTags_MetaData), NewProp_ContextTags_MetaData) }; // 3438578166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_MissionEventLogEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionEventLogEntry_Statics::NewProp_TimeSinceStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionEventLogEntry_Statics::NewProp_Category_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionEventLogEntry_Statics::NewProp_Category,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionEventLogEntry_Statics::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionEventLogEntry_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionEventLogEntry_Statics::NewProp_ScoreDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionEventLogEntry_Statics::NewProp_CumulativeScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionEventLogEntry_Statics::NewProp_bIsPenalty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionEventLogEntry_Statics::NewProp_ContextTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_MissionEventLogEntry_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_MissionEventLogEntry Property Definitions *********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_MissionEventLogEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_MissionDirector,
	nullptr,
	&NewStructOps,
	"SOTS_MissionEventLogEntry",
	Z_Construct_UScriptStruct_FSOTS_MissionEventLogEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_MissionEventLogEntry_Statics::PropPointers),
	sizeof(FSOTS_MissionEventLogEntry),
	alignof(FSOTS_MissionEventLogEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_MissionEventLogEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_MissionEventLogEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_MissionEventLogEntry()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_MissionEventLogEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_MissionEventLogEntry.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_MissionEventLogEntry_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_MissionEventLogEntry.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_MissionEventLogEntry ******************************************

// ********** Begin ScriptStruct FSOTS_MissionRunSummary *******************************************
struct Z_Construct_UScriptStruct_FSOTS_MissionRunSummary_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_MissionRunSummary); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_MissionRunSummary); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Final snapshot of a mission run. This is what you save or pass to your\n * mission debrief UI.\n */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Final snapshot of a mission run. This is what you save or pass to your\nmission debrief UI." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MissionId_MetaData[] = {
		{ "Category", "Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mission identifier (e.g. \"M01_CastleInfiltration\").\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mission identifier (e.g. \"M01_CastleInfiltration\")." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DifficultyTag_MetaData[] = {
		{ "Category", "Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Difficulty tag used for this run (e.g. Difficulty.Medium).\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Difficulty tag used for this run (e.g. Difficulty.Medium)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DurationSeconds_MetaData[] = {
		{ "Category", "Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How long the mission took in seconds.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How long the mission took in seconds." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinalScore_MetaData[] = {
		{ "Category", "Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Final accumulated score after all modifiers.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Final accumulated score after all modifiers." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinalRank_MetaData[] = {
		{ "Category", "Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Rank name (e.g. \"S\", \"A\", \"B\", etc.). You can map this to localized text in UI.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rank name (e.g. \"S\", \"A\", \"B\", etc.). You can map this to localized text in UI." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[] = {
		{ "Category", "Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// True if mission was completed successfully.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "True if mission was completed successfully." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryObjectivesCompleted_MetaData[] = {
		{ "Category", "Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Number of primary objectives completed.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of primary objectives completed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionalObjectivesCompleted_MetaData[] = {
		{ "Category", "Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Number of optional objectives completed.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of optional objectives completed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventLog_MetaData[] = {
		{ "Category", "Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Full chronological event log for this run.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Full chronological event log for this run." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_MissionRunSummary constinit property declarations ***********
	static const UECodeGen_Private::FNamePropertyParams NewProp_MissionId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DifficultyTag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DurationSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FinalScore;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FinalRank;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PrimaryObjectivesCompleted;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OptionalObjectivesCompleted;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventLog_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EventLog;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_MissionRunSummary constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_MissionRunSummary>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_MissionRunSummary_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_MissionRunSummary;
class UScriptStruct* FSOTS_MissionRunSummary::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_MissionRunSummary.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_MissionRunSummary.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_MissionRunSummary, (UObject*)Z_Construct_UPackage__Script_SOTS_MissionDirector(), TEXT("SOTS_MissionRunSummary"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_MissionRunSummary.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_MissionRunSummary Property Definitions **********************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSOTS_MissionRunSummary_Statics::NewProp_MissionId = { "MissionId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_MissionRunSummary, MissionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MissionId_MetaData), NewProp_MissionId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_MissionRunSummary_Statics::NewProp_DifficultyTag = { "DifficultyTag", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_MissionRunSummary, DifficultyTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DifficultyTag_MetaData), NewProp_DifficultyTag_MetaData) }; // 517357616
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_MissionRunSummary_Statics::NewProp_DurationSeconds = { "DurationSeconds", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_MissionRunSummary, DurationSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DurationSeconds_MetaData), NewProp_DurationSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_MissionRunSummary_Statics::NewProp_FinalScore = { "FinalScore", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_MissionRunSummary, FinalScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinalScore_MetaData), NewProp_FinalScore_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSOTS_MissionRunSummary_Statics::NewProp_FinalRank = { "FinalRank", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_MissionRunSummary, FinalRank), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinalRank_MetaData), NewProp_FinalRank_MetaData) };
void Z_Construct_UScriptStruct_FSOTS_MissionRunSummary_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((FSOTS_MissionRunSummary*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSOTS_MissionRunSummary_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSOTS_MissionRunSummary), &Z_Construct_UScriptStruct_FSOTS_MissionRunSummary_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSuccess_MetaData), NewProp_bSuccess_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSOTS_MissionRunSummary_Statics::NewProp_PrimaryObjectivesCompleted = { "PrimaryObjectivesCompleted", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_MissionRunSummary, PrimaryObjectivesCompleted), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryObjectivesCompleted_MetaData), NewProp_PrimaryObjectivesCompleted_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSOTS_MissionRunSummary_Statics::NewProp_OptionalObjectivesCompleted = { "OptionalObjectivesCompleted", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_MissionRunSummary, OptionalObjectivesCompleted), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionalObjectivesCompleted_MetaData), NewProp_OptionalObjectivesCompleted_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_MissionRunSummary_Statics::NewProp_EventLog_Inner = { "EventLog", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSOTS_MissionEventLogEntry, METADATA_PARAMS(0, nullptr) }; // 2540198091
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSOTS_MissionRunSummary_Statics::NewProp_EventLog = { "EventLog", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_MissionRunSummary, EventLog), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventLog_MetaData), NewProp_EventLog_MetaData) }; // 2540198091
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_MissionRunSummary_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionRunSummary_Statics::NewProp_MissionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionRunSummary_Statics::NewProp_DifficultyTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionRunSummary_Statics::NewProp_DurationSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionRunSummary_Statics::NewProp_FinalScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionRunSummary_Statics::NewProp_FinalRank,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionRunSummary_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionRunSummary_Statics::NewProp_PrimaryObjectivesCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionRunSummary_Statics::NewProp_OptionalObjectivesCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionRunSummary_Statics::NewProp_EventLog_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionRunSummary_Statics::NewProp_EventLog,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_MissionRunSummary_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_MissionRunSummary Property Definitions ************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_MissionRunSummary_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_MissionDirector,
	nullptr,
	&NewStructOps,
	"SOTS_MissionRunSummary",
	Z_Construct_UScriptStruct_FSOTS_MissionRunSummary_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_MissionRunSummary_Statics::PropPointers),
	sizeof(FSOTS_MissionRunSummary),
	alignof(FSOTS_MissionRunSummary),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_MissionRunSummary_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_MissionRunSummary_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_MissionRunSummary()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_MissionRunSummary.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_MissionRunSummary.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_MissionRunSummary_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_MissionRunSummary.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_MissionRunSummary *********************************************

// ********** Begin ScriptStruct FSOTS_MissionObjective ********************************************
struct Z_Construct_UScriptStruct_FSOTS_MissionObjective_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_MissionObjective); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_MissionObjective); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Design-time description of a single mission objective.\n */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Design-time description of a single mission objective." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectiveId_MetaData[] = {
		{ "Category", "SOTS|Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Local identifier for this objective within the mission.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Local identifier for this objective within the mission." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "SOTS|Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether this objective must be completed to finish the mission.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether this objective must be completed to finish the mission." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompletionTag_MetaData[] = {
		{ "Category", "SOTS|Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Legacy single completion tag (kept for backwards-compatibility).\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Legacy single completion tag (kept for backwards-compatibility)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompletionTags_MetaData[] = {
		{ "Category", "SOTS|Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tags/flags used by MissionDirector to detect completion (e.g. Mission.Objective.CollectedIntel).\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tags/flags used by MissionDirector to detect completion (e.g. Mission.Objective.CollectedIntel)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrerequisiteObjectiveIds_MetaData[] = {
		{ "Category", "SOTS|Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional objectives that must be completed before this one activates.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional objectives that must be completed before this one activates." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "SOTS|Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional descriptive text for UI.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional descriptive text for UI." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOptional_MetaData[] = {
		{ "Category", "SOTS|Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether this objective is optional from the player's perspective.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether this objective is optional from the player's perspective." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMissionCritical_MetaData[] = {
		{ "Category", "SOTS|Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true and this objective fails, the mission fails immediately.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true and this objective fails, the mission fails immediately." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredExecutionTag_MetaData[] = {
		{ "Category", "SOTS|Mission|KEM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional required execution tag (from KEM) for objectives such as\n// \"Assassinate target X with execution Y\". When set, the mission director\n// will listen for matching KEM execution events and mark this objective\n// complete when a successful execution with this tag occurs.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional required execution tag (from KEM) for objectives such as\n\"Assassinate target X with execution Y\". When set, the mission director\nwill listen for matching KEM execution events and mark this objective\ncomplete when a successful execution with this tag occurs." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredTargetTag_MetaData[] = {
		{ "Category", "SOTS|Mission|KEM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional tag that must be present on the KEM target actor for this\n// objective to be considered satisfied (e.g. Target.Assassination.Boss).\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional tag that must be present on the KEM target actor for this\nobjective to be considered satisfied (e.g. Target.Assassination.Boss)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_MissionObjective constinit property declarations ************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ObjectiveId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CompletionTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CompletionTags;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PrerequisiteObjectiveIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PrerequisiteObjectiveIds;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static void NewProp_bOptional_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOptional;
	static void NewProp_bMissionCritical_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMissionCritical;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredExecutionTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredTargetTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_MissionObjective constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_MissionObjective>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_MissionObjective_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_MissionObjective;
class UScriptStruct* FSOTS_MissionObjective::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_MissionObjective.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_MissionObjective.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_MissionObjective, (UObject*)Z_Construct_UPackage__Script_SOTS_MissionDirector(), TEXT("SOTS_MissionObjective"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_MissionObjective.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_MissionObjective Property Definitions ***********************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSOTS_MissionObjective_Statics::NewProp_ObjectiveId = { "ObjectiveId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_MissionObjective, ObjectiveId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectiveId_MetaData), NewProp_ObjectiveId_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSOTS_MissionObjective_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSOTS_MissionObjective_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_MissionObjective, Type), Z_Construct_UEnum_SOTS_MissionDirector_ESOTS_ObjectiveType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 775043013
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_MissionObjective_Statics::NewProp_CompletionTag = { "CompletionTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_MissionObjective, CompletionTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompletionTag_MetaData), NewProp_CompletionTag_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_MissionObjective_Statics::NewProp_CompletionTags = { "CompletionTags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_MissionObjective, CompletionTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompletionTags_MetaData), NewProp_CompletionTags_MetaData) }; // 3438578166
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSOTS_MissionObjective_Statics::NewProp_PrerequisiteObjectiveIds_Inner = { "PrerequisiteObjectiveIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSOTS_MissionObjective_Statics::NewProp_PrerequisiteObjectiveIds = { "PrerequisiteObjectiveIds", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_MissionObjective, PrerequisiteObjectiveIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrerequisiteObjectiveIds_MetaData), NewProp_PrerequisiteObjectiveIds_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSOTS_MissionObjective_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_MissionObjective, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
void Z_Construct_UScriptStruct_FSOTS_MissionObjective_Statics::NewProp_bOptional_SetBit(void* Obj)
{
	((FSOTS_MissionObjective*)Obj)->bOptional = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSOTS_MissionObjective_Statics::NewProp_bOptional = { "bOptional", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSOTS_MissionObjective), &Z_Construct_UScriptStruct_FSOTS_MissionObjective_Statics::NewProp_bOptional_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOptional_MetaData), NewProp_bOptional_MetaData) };
void Z_Construct_UScriptStruct_FSOTS_MissionObjective_Statics::NewProp_bMissionCritical_SetBit(void* Obj)
{
	((FSOTS_MissionObjective*)Obj)->bMissionCritical = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSOTS_MissionObjective_Statics::NewProp_bMissionCritical = { "bMissionCritical", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSOTS_MissionObjective), &Z_Construct_UScriptStruct_FSOTS_MissionObjective_Statics::NewProp_bMissionCritical_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMissionCritical_MetaData), NewProp_bMissionCritical_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_MissionObjective_Statics::NewProp_RequiredExecutionTag = { "RequiredExecutionTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_MissionObjective, RequiredExecutionTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredExecutionTag_MetaData), NewProp_RequiredExecutionTag_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_MissionObjective_Statics::NewProp_RequiredTargetTag = { "RequiredTargetTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_MissionObjective, RequiredTargetTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredTargetTag_MetaData), NewProp_RequiredTargetTag_MetaData) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_MissionObjective_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionObjective_Statics::NewProp_ObjectiveId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionObjective_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionObjective_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionObjective_Statics::NewProp_CompletionTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionObjective_Statics::NewProp_CompletionTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionObjective_Statics::NewProp_PrerequisiteObjectiveIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionObjective_Statics::NewProp_PrerequisiteObjectiveIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionObjective_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionObjective_Statics::NewProp_bOptional,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionObjective_Statics::NewProp_bMissionCritical,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionObjective_Statics::NewProp_RequiredExecutionTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionObjective_Statics::NewProp_RequiredTargetTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_MissionObjective_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_MissionObjective Property Definitions *************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_MissionObjective_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_MissionDirector,
	nullptr,
	&NewStructOps,
	"SOTS_MissionObjective",
	Z_Construct_UScriptStruct_FSOTS_MissionObjective_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_MissionObjective_Statics::PropPointers),
	sizeof(FSOTS_MissionObjective),
	alignof(FSOTS_MissionObjective),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_MissionObjective_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_MissionObjective_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_MissionObjective()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_MissionObjective.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_MissionObjective.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_MissionObjective_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_MissionObjective.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_MissionObjective **********************************************

// ********** Begin ScriptStruct FSOTS_MissionObjectiveRuntimeState ********************************
struct Z_Construct_UScriptStruct_FSOTS_MissionObjectiveRuntimeState_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_MissionObjectiveRuntimeState); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_MissionObjectiveRuntimeState); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Lightweight runtime view of a mission objective for UI/query code.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lightweight runtime view of a mission objective for UI/query code." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectiveId_MetaData[] = {
		{ "Category", "SOTS|Mission" },
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "SOTS|Mission" },
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "SOTS|Mission" },
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCompleted_MetaData[] = {
		{ "Category", "SOTS|Mission" },
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFailed_MetaData[] = {
		{ "Category", "SOTS|Mission" },
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bActive_MetaData[] = {
		{ "Category", "SOTS|Mission" },
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOptional_MetaData[] = {
		{ "Category", "SOTS|Mission" },
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_MissionObjectiveRuntimeState constinit property declarations 
	static const UECodeGen_Private::FNamePropertyParams NewProp_ObjectiveId;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static void NewProp_bCompleted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompleted;
	static void NewProp_bFailed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFailed;
	static void NewProp_bActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bActive;
	static void NewProp_bOptional_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOptional;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_MissionObjectiveRuntimeState constinit property declarations **
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_MissionObjectiveRuntimeState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_MissionObjectiveRuntimeState_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_MissionObjectiveRuntimeState;
class UScriptStruct* FSOTS_MissionObjectiveRuntimeState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_MissionObjectiveRuntimeState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_MissionObjectiveRuntimeState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_MissionObjectiveRuntimeState, (UObject*)Z_Construct_UPackage__Script_SOTS_MissionDirector(), TEXT("SOTS_MissionObjectiveRuntimeState"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_MissionObjectiveRuntimeState.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_MissionObjectiveRuntimeState Property Definitions ***********
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSOTS_MissionObjectiveRuntimeState_Statics::NewProp_ObjectiveId = { "ObjectiveId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_MissionObjectiveRuntimeState, ObjectiveId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectiveId_MetaData), NewProp_ObjectiveId_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSOTS_MissionObjectiveRuntimeState_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_MissionObjectiveRuntimeState, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSOTS_MissionObjectiveRuntimeState_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSOTS_MissionObjectiveRuntimeState_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_MissionObjectiveRuntimeState, Type), Z_Construct_UEnum_SOTS_MissionDirector_ESOTS_ObjectiveType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 775043013
void Z_Construct_UScriptStruct_FSOTS_MissionObjectiveRuntimeState_Statics::NewProp_bCompleted_SetBit(void* Obj)
{
	((FSOTS_MissionObjectiveRuntimeState*)Obj)->bCompleted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSOTS_MissionObjectiveRuntimeState_Statics::NewProp_bCompleted = { "bCompleted", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSOTS_MissionObjectiveRuntimeState), &Z_Construct_UScriptStruct_FSOTS_MissionObjectiveRuntimeState_Statics::NewProp_bCompleted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCompleted_MetaData), NewProp_bCompleted_MetaData) };
void Z_Construct_UScriptStruct_FSOTS_MissionObjectiveRuntimeState_Statics::NewProp_bFailed_SetBit(void* Obj)
{
	((FSOTS_MissionObjectiveRuntimeState*)Obj)->bFailed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSOTS_MissionObjectiveRuntimeState_Statics::NewProp_bFailed = { "bFailed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSOTS_MissionObjectiveRuntimeState), &Z_Construct_UScriptStruct_FSOTS_MissionObjectiveRuntimeState_Statics::NewProp_bFailed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFailed_MetaData), NewProp_bFailed_MetaData) };
void Z_Construct_UScriptStruct_FSOTS_MissionObjectiveRuntimeState_Statics::NewProp_bActive_SetBit(void* Obj)
{
	((FSOTS_MissionObjectiveRuntimeState*)Obj)->bActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSOTS_MissionObjectiveRuntimeState_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSOTS_MissionObjectiveRuntimeState), &Z_Construct_UScriptStruct_FSOTS_MissionObjectiveRuntimeState_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bActive_MetaData), NewProp_bActive_MetaData) };
void Z_Construct_UScriptStruct_FSOTS_MissionObjectiveRuntimeState_Statics::NewProp_bOptional_SetBit(void* Obj)
{
	((FSOTS_MissionObjectiveRuntimeState*)Obj)->bOptional = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSOTS_MissionObjectiveRuntimeState_Statics::NewProp_bOptional = { "bOptional", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSOTS_MissionObjectiveRuntimeState), &Z_Construct_UScriptStruct_FSOTS_MissionObjectiveRuntimeState_Statics::NewProp_bOptional_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOptional_MetaData), NewProp_bOptional_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_MissionObjectiveRuntimeState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionObjectiveRuntimeState_Statics::NewProp_ObjectiveId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionObjectiveRuntimeState_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionObjectiveRuntimeState_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionObjectiveRuntimeState_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionObjectiveRuntimeState_Statics::NewProp_bCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionObjectiveRuntimeState_Statics::NewProp_bFailed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionObjectiveRuntimeState_Statics::NewProp_bActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionObjectiveRuntimeState_Statics::NewProp_bOptional,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_MissionObjectiveRuntimeState_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_MissionObjectiveRuntimeState Property Definitions *************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_MissionObjectiveRuntimeState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_MissionDirector,
	nullptr,
	&NewStructOps,
	"SOTS_MissionObjectiveRuntimeState",
	Z_Construct_UScriptStruct_FSOTS_MissionObjectiveRuntimeState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_MissionObjectiveRuntimeState_Statics::PropPointers),
	sizeof(FSOTS_MissionObjectiveRuntimeState),
	alignof(FSOTS_MissionObjectiveRuntimeState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_MissionObjectiveRuntimeState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_MissionObjectiveRuntimeState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_MissionObjectiveRuntimeState()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_MissionObjectiveRuntimeState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_MissionObjectiveRuntimeState.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_MissionObjectiveRuntimeState_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_MissionObjectiveRuntimeState.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_MissionObjectiveRuntimeState **********************************

// ********** Begin ScriptStruct FSOTS_MissionRuntimeState *****************************************
struct Z_Construct_UScriptStruct_FSOTS_MissionRuntimeState_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_MissionRuntimeState); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_MissionRuntimeState); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// High-level snapshot of the current mission runtime state.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "High-level snapshot of the current mission runtime state." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MissionId_MetaData[] = {
		{ "Category", "SOTS|Mission" },
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Objectives_MetaData[] = {
		{ "Category", "SOTS|Mission" },
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMissionCompleted_MetaData[] = {
		{ "Category", "SOTS|Mission" },
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMissionFailed_MetaData[] = {
		{ "Category", "SOTS|Mission" },
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutcomeTag_MetaData[] = {
		{ "Category", "SOTS|Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Outcome tag used for branching (e.g. MissionOutcome.Perfect / Failed).\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Outcome tag used for branching (e.g. MissionOutcome.Perfect / Failed)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StealthScore_MetaData[] = {
		{ "Category", "SOTS|Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Simple aggregate metrics for analytics / UI.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple aggregate metrics for analytics / UI." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionalObjectivesCompleted_MetaData[] = {
		{ "Category", "SOTS|Mission" },
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlertsTriggered_MetaData[] = {
		{ "Category", "SOTS|Mission" },
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_MissionRuntimeState constinit property declarations *********
	static const UECodeGen_Private::FNamePropertyParams NewProp_MissionId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Objectives_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Objectives;
	static void NewProp_bMissionCompleted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMissionCompleted;
	static void NewProp_bMissionFailed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMissionFailed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutcomeTag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StealthScore;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OptionalObjectivesCompleted;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AlertsTriggered;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_MissionRuntimeState constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_MissionRuntimeState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_MissionRuntimeState_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_MissionRuntimeState;
class UScriptStruct* FSOTS_MissionRuntimeState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_MissionRuntimeState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_MissionRuntimeState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_MissionRuntimeState, (UObject*)Z_Construct_UPackage__Script_SOTS_MissionDirector(), TEXT("SOTS_MissionRuntimeState"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_MissionRuntimeState.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_MissionRuntimeState Property Definitions ********************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSOTS_MissionRuntimeState_Statics::NewProp_MissionId = { "MissionId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_MissionRuntimeState, MissionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MissionId_MetaData), NewProp_MissionId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_MissionRuntimeState_Statics::NewProp_Objectives_Inner = { "Objectives", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSOTS_MissionObjectiveRuntimeState, METADATA_PARAMS(0, nullptr) }; // 3836113134
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSOTS_MissionRuntimeState_Statics::NewProp_Objectives = { "Objectives", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_MissionRuntimeState, Objectives), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Objectives_MetaData), NewProp_Objectives_MetaData) }; // 3836113134
void Z_Construct_UScriptStruct_FSOTS_MissionRuntimeState_Statics::NewProp_bMissionCompleted_SetBit(void* Obj)
{
	((FSOTS_MissionRuntimeState*)Obj)->bMissionCompleted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSOTS_MissionRuntimeState_Statics::NewProp_bMissionCompleted = { "bMissionCompleted", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSOTS_MissionRuntimeState), &Z_Construct_UScriptStruct_FSOTS_MissionRuntimeState_Statics::NewProp_bMissionCompleted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMissionCompleted_MetaData), NewProp_bMissionCompleted_MetaData) };
void Z_Construct_UScriptStruct_FSOTS_MissionRuntimeState_Statics::NewProp_bMissionFailed_SetBit(void* Obj)
{
	((FSOTS_MissionRuntimeState*)Obj)->bMissionFailed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSOTS_MissionRuntimeState_Statics::NewProp_bMissionFailed = { "bMissionFailed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSOTS_MissionRuntimeState), &Z_Construct_UScriptStruct_FSOTS_MissionRuntimeState_Statics::NewProp_bMissionFailed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMissionFailed_MetaData), NewProp_bMissionFailed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_MissionRuntimeState_Statics::NewProp_OutcomeTag = { "OutcomeTag", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_MissionRuntimeState, OutcomeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutcomeTag_MetaData), NewProp_OutcomeTag_MetaData) }; // 517357616
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSOTS_MissionRuntimeState_Statics::NewProp_StealthScore = { "StealthScore", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_MissionRuntimeState, StealthScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StealthScore_MetaData), NewProp_StealthScore_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSOTS_MissionRuntimeState_Statics::NewProp_OptionalObjectivesCompleted = { "OptionalObjectivesCompleted", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_MissionRuntimeState, OptionalObjectivesCompleted), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionalObjectivesCompleted_MetaData), NewProp_OptionalObjectivesCompleted_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSOTS_MissionRuntimeState_Statics::NewProp_AlertsTriggered = { "AlertsTriggered", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_MissionRuntimeState, AlertsTriggered), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlertsTriggered_MetaData), NewProp_AlertsTriggered_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_MissionRuntimeState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionRuntimeState_Statics::NewProp_MissionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionRuntimeState_Statics::NewProp_Objectives_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionRuntimeState_Statics::NewProp_Objectives,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionRuntimeState_Statics::NewProp_bMissionCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionRuntimeState_Statics::NewProp_bMissionFailed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionRuntimeState_Statics::NewProp_OutcomeTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionRuntimeState_Statics::NewProp_StealthScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionRuntimeState_Statics::NewProp_OptionalObjectivesCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionRuntimeState_Statics::NewProp_AlertsTriggered,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_MissionRuntimeState_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_MissionRuntimeState Property Definitions **********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_MissionRuntimeState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_MissionDirector,
	nullptr,
	&NewStructOps,
	"SOTS_MissionRuntimeState",
	Z_Construct_UScriptStruct_FSOTS_MissionRuntimeState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_MissionRuntimeState_Statics::PropPointers),
	sizeof(FSOTS_MissionRuntimeState),
	alignof(FSOTS_MissionRuntimeState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_MissionRuntimeState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_MissionRuntimeState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_MissionRuntimeState()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_MissionRuntimeState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_MissionRuntimeState.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_MissionRuntimeState_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_MissionRuntimeState.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_MissionRuntimeState *******************************************

// ********** Begin ScriptStruct FSOTS_MissionFailureConditions ************************************
struct Z_Construct_UScriptStruct_FSOTS_MissionFailureConditions_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_MissionFailureConditions); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_MissionFailureConditions); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Optional per-mission failure condition overrides beyond the basic\n * stealth tier checks.\n */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional per-mission failure condition overrides beyond the basic\nstealth tier checks." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAllowedAlerts_MetaData[] = {
		{ "Category", "SOTS|Mission|Failure" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If > 0, the mission fails once AlertsTriggered exceeds this value.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If > 0, the mission fails once AlertsTriggered exceeds this value." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFailOnCivilianKilled_MetaData[] = {
		{ "Category", "SOTS|Mission|Failure" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, any civilian death (surfaced as a mission event with a matching\n// tag) should be treated as an immediate failure. MissionDirector itself\n// only sees tags; actual kill classification is done by KEM/AI systems.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, any civilian death (surfaced as a mission event with a matching\ntag) should be treated as an immediate failure. MissionDirector itself\nonly sees tags; actual kill classification is done by KEM/AI systems." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFailOnLoudExecution_MetaData[] = {
		{ "Category", "SOTS|Mission|Failure" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, any non-quiet execution (tagged by KEM) will fail the mission\n// when the associated event reaches the director.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, any non-quiet execution (tagged by KEM) will fail the mission\nwhen the associated event reaches the director." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailOnEventTags_MetaData[] = {
		{ "Category", "SOTS|Mission|Failure" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tags that, when present in a mission event's ContextTags, should cause\n// the mission to fail (e.g. Mission.Fail.NoKillRunBroken).\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tags that, when present in a mission event's ContextTags, should cause\nthe mission to fail (e.g. Mission.Fail.NoKillRunBroken)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_MissionFailureConditions constinit property declarations ****
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAllowedAlerts;
	static void NewProp_bFailOnCivilianKilled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFailOnCivilianKilled;
	static void NewProp_bFailOnLoudExecution_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFailOnLoudExecution;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FailOnEventTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_MissionFailureConditions constinit property declarations ******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_MissionFailureConditions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_MissionFailureConditions_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_MissionFailureConditions;
class UScriptStruct* FSOTS_MissionFailureConditions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_MissionFailureConditions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_MissionFailureConditions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_MissionFailureConditions, (UObject*)Z_Construct_UPackage__Script_SOTS_MissionDirector(), TEXT("SOTS_MissionFailureConditions"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_MissionFailureConditions.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_MissionFailureConditions Property Definitions ***************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSOTS_MissionFailureConditions_Statics::NewProp_MaxAllowedAlerts = { "MaxAllowedAlerts", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_MissionFailureConditions, MaxAllowedAlerts), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAllowedAlerts_MetaData), NewProp_MaxAllowedAlerts_MetaData) };
void Z_Construct_UScriptStruct_FSOTS_MissionFailureConditions_Statics::NewProp_bFailOnCivilianKilled_SetBit(void* Obj)
{
	((FSOTS_MissionFailureConditions*)Obj)->bFailOnCivilianKilled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSOTS_MissionFailureConditions_Statics::NewProp_bFailOnCivilianKilled = { "bFailOnCivilianKilled", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSOTS_MissionFailureConditions), &Z_Construct_UScriptStruct_FSOTS_MissionFailureConditions_Statics::NewProp_bFailOnCivilianKilled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFailOnCivilianKilled_MetaData), NewProp_bFailOnCivilianKilled_MetaData) };
void Z_Construct_UScriptStruct_FSOTS_MissionFailureConditions_Statics::NewProp_bFailOnLoudExecution_SetBit(void* Obj)
{
	((FSOTS_MissionFailureConditions*)Obj)->bFailOnLoudExecution = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSOTS_MissionFailureConditions_Statics::NewProp_bFailOnLoudExecution = { "bFailOnLoudExecution", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSOTS_MissionFailureConditions), &Z_Construct_UScriptStruct_FSOTS_MissionFailureConditions_Statics::NewProp_bFailOnLoudExecution_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFailOnLoudExecution_MetaData), NewProp_bFailOnLoudExecution_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_MissionFailureConditions_Statics::NewProp_FailOnEventTags = { "FailOnEventTags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_MissionFailureConditions, FailOnEventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailOnEventTags_MetaData), NewProp_FailOnEventTags_MetaData) }; // 3438578166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_MissionFailureConditions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionFailureConditions_Statics::NewProp_MaxAllowedAlerts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionFailureConditions_Statics::NewProp_bFailOnCivilianKilled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionFailureConditions_Statics::NewProp_bFailOnLoudExecution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionFailureConditions_Statics::NewProp_FailOnEventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_MissionFailureConditions_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_MissionFailureConditions Property Definitions *****************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_MissionFailureConditions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_MissionDirector,
	nullptr,
	&NewStructOps,
	"SOTS_MissionFailureConditions",
	Z_Construct_UScriptStruct_FSOTS_MissionFailureConditions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_MissionFailureConditions_Statics::PropPointers),
	sizeof(FSOTS_MissionFailureConditions),
	alignof(FSOTS_MissionFailureConditions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_MissionFailureConditions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_MissionFailureConditions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_MissionFailureConditions()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_MissionFailureConditions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_MissionFailureConditions.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_MissionFailureConditions_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_MissionFailureConditions.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_MissionFailureConditions **************************************

// ********** Begin ScriptStruct FSOTS_MissionRewards **********************************************
struct Z_Construct_UScriptStruct_FSOTS_MissionRewards_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_MissionRewards); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_MissionRewards); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Optional mission rewards applied when the mission completes successfully.\n * These are data-only; MissionDirector coordinates with other subsystems\n * (Tag manager, SkillTree, Ability system, FX) to interpret them.\n */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional mission rewards applied when the mission completes successfully.\nThese are data-only; MissionDirector coordinates with other subsystems\n(Tag manager, SkillTree, Ability system, FX) to interpret them." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrantedTags_MetaData[] = {
		{ "Category", "SOTS|Mission|Rewards" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Global tags to grant on successful completion (e.g. Mission.M01.Completed,\n// meta progression flags, modifiers for later runs).\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Global tags to grant on successful completion (e.g. Mission.M01.Completed,\nmeta progression flags, modifiers for later runs)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrantedSkillTags_MetaData[] = {
		{ "Category", "SOTS|Mission|Rewards" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Skill tags to apply via the skill tree/tag systems. These typically map\n// to FSOTS_SkillNodeEffects.GrantedTags or ability prerequisites.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Skill tags to apply via the skill tree/tag systems. These typically map\nto FSOTS_SkillNodeEffects.GrantedTags or ability prerequisites." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrantedAbilityTags_MetaData[] = {
		{ "Category", "SOTS|Mission|Rewards" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ability tags to grant via the ability system. The MissionDirector does\n// not know about concrete ability classes; it only passes these tags on\n// to higher-level game logic that can talk to UAC_SOTS_Abilitys.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ability tags to grant via the ability system. The MissionDirector does\nnot know about concrete ability classes; it only passes these tags on\nto higher-level game logic that can talk to UAC_SOTS_Abilitys." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RewardSkillTreeIds_MetaData[] = {
		{ "Category", "SOTS|Mission|Rewards" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional skill tree nodes to unlock as rewards. These are authored as\n// (TreeId, NodeId) pairs so the skill tree subsystem can process them.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional skill tree nodes to unlock as rewards. These are authored as\n(TreeId, NodeId) pairs so the skill tree subsystem can process them." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FXTag_OnRewardsGranted_MetaData[] = {
		{ "Category", "SOTS|Mission|Rewards" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional FX tag that can be used for reward-specific FX (distinct from\n// the mission completed FX tag). Mapped via the FX manager.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional FX tag that can be used for reward-specific FX (distinct from\nthe mission completed FX tag). Mapped via the FX manager." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_MissionRewards constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedSkillTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedAbilityTags;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RewardSkillTreeIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RewardSkillTreeIds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FXTag_OnRewardsGranted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_MissionRewards constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_MissionRewards>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_MissionRewards_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_MissionRewards;
class UScriptStruct* FSOTS_MissionRewards::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_MissionRewards.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_MissionRewards.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_MissionRewards, (UObject*)Z_Construct_UPackage__Script_SOTS_MissionDirector(), TEXT("SOTS_MissionRewards"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_MissionRewards.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_MissionRewards Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_MissionRewards_Statics::NewProp_GrantedTags = { "GrantedTags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_MissionRewards, GrantedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrantedTags_MetaData), NewProp_GrantedTags_MetaData) }; // 3438578166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_MissionRewards_Statics::NewProp_GrantedSkillTags = { "GrantedSkillTags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_MissionRewards, GrantedSkillTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrantedSkillTags_MetaData), NewProp_GrantedSkillTags_MetaData) }; // 3438578166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_MissionRewards_Statics::NewProp_GrantedAbilityTags = { "GrantedAbilityTags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_MissionRewards, GrantedAbilityTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrantedAbilityTags_MetaData), NewProp_GrantedAbilityTags_MetaData) }; // 3438578166
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSOTS_MissionRewards_Statics::NewProp_RewardSkillTreeIds_Inner = { "RewardSkillTreeIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSOTS_MissionRewards_Statics::NewProp_RewardSkillTreeIds = { "RewardSkillTreeIds", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_MissionRewards, RewardSkillTreeIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RewardSkillTreeIds_MetaData), NewProp_RewardSkillTreeIds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_MissionRewards_Statics::NewProp_FXTag_OnRewardsGranted = { "FXTag_OnRewardsGranted", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_MissionRewards, FXTag_OnRewardsGranted), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FXTag_OnRewardsGranted_MetaData), NewProp_FXTag_OnRewardsGranted_MetaData) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_MissionRewards_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionRewards_Statics::NewProp_GrantedTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionRewards_Statics::NewProp_GrantedSkillTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionRewards_Statics::NewProp_GrantedAbilityTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionRewards_Statics::NewProp_RewardSkillTreeIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionRewards_Statics::NewProp_RewardSkillTreeIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionRewards_Statics::NewProp_FXTag_OnRewardsGranted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_MissionRewards_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_MissionRewards Property Definitions ***************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_MissionRewards_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_MissionDirector,
	nullptr,
	&NewStructOps,
	"SOTS_MissionRewards",
	Z_Construct_UScriptStruct_FSOTS_MissionRewards_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_MissionRewards_Statics::PropPointers),
	sizeof(FSOTS_MissionRewards),
	alignof(FSOTS_MissionRewards),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_MissionRewards_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_MissionRewards_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_MissionRewards()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_MissionRewards.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_MissionRewards.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_MissionRewards_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_MissionRewards.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_MissionRewards ************************************************

// ********** Begin Class USOTS_MissionDefinition **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_MissionDefinition;
UClass* USOTS_MissionDefinition::GetPrivateStaticClass()
{
	using TClass = USOTS_MissionDefinition;
	if (!Z_Registration_Info_UClass_USOTS_MissionDefinition.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_MissionDefinition"),
			Z_Registration_Info_UClass_USOTS_MissionDefinition.InnerSingleton,
			StaticRegisterNativesUSOTS_MissionDefinition,
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
	return Z_Registration_Info_UClass_USOTS_MissionDefinition.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_MissionDefinition_NoRegister()
{
	return USOTS_MissionDefinition::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_MissionDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * DataAsset describing mission-level rules, objectives, and stealth constraints.\n */" },
#endif
		{ "IncludePath", "SOTS_MissionDirectorTypes.h" },
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DataAsset describing mission-level rules, objectives, and stealth constraints." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MissionId_MetaData[] = {
		{ "Category", "SOTS|Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Identifier for this mission (e.g. \"M01_CastleInfiltration\").\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Identifier for this mission (e.g. \"M01_CastleInfiltration\")." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MissionName_MetaData[] = {
		{ "Category", "SOTS|Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Display name used in UI.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Display name used in UI." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MissionDescription_MetaData[] = {
		{ "Category", "SOTS|Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional long description for briefing / UI.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional long description for briefing / UI." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MissionMap_MetaData[] = {
		{ "Category", "SOTS|Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Soft reference to the primary map/level associated with this mission.\n// This is data-only; the mission director does not perform level loading.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Soft reference to the primary map/level associated with this mission.\nThis is data-only; the mission director does not perform level loading." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Objectives_MetaData[] = {
		{ "Category", "SOTS|Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ordered list of authored objectives.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ordered list of authored objectives." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAllowedStealthTier_MetaData[] = {
		{ "Category", "SOTS|Mission|Stealth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max allowed global stealth tier (inclusive). If >= 0 and the GSM tier exceeds this, the mission fails.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max allowed global stealth tier (inclusive). If >= 0 and the GSM tier exceeds this, the mission fails." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFailOnMaxTier_MetaData[] = {
		{ "Category", "SOTS|Mission|Stealth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, entering the highest stealth level (FullyDetected) fails the mission immediately.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, entering the highest stealth level (FullyDetected) fails the mission immediately." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequireAllMandatoryObjectives_MetaData[] = {
		{ "Category", "SOTS|Mission|Stealth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, all mandatory objectives must be completed to finish the mission.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, all mandatory objectives must be completed to finish the mission." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideStealthConfig_MetaData[] = {
		{ "Category", "SOTS|Mission|Stealth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional override for the global stealth scoring config while this mission is active.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional override for the global stealth scoring config while this mission is active." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FXTag_OnMissionStart_MetaData[] = {
		{ "Category", "SOTS|Mission|FX" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional FX tags to fire when mission state changes. These are purely\n// descriptive; the FX manager maps them to concrete systems via data.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional FX tags to fire when mission state changes. These are purely\ndescriptive; the FX manager maps them to concrete systems via data." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FXTag_OnMissionCompleted_MetaData[] = {
		{ "Category", "SOTS|Mission|FX" },
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FXTag_OnMissionFailed_MetaData[] = {
		{ "Category", "SOTS|Mission|FX" },
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextMissionByOutcome_MetaData[] = {
		{ "Category", "SOTS|Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional branching configuration: which missions can follow this one,\n// keyed by an outcome tag (e.g. MissionOutcome.Perfect, MissionOutcome.Failed).\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional branching configuration: which missions can follow this one,\nkeyed by an outcome tag (e.g. MissionOutcome.Perfect, MissionOutcome.Failed)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailureConditions_MetaData[] = {
		{ "Category", "SOTS|Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional, data-only failure conditions in addition to the basic stealth\n// tier checks. These are evaluated by the mission director when relevant\n// events are reported.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional, data-only failure conditions in addition to the basic stealth\ntier checks. These are evaluated by the mission director when relevant\nevents are reported." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rewards_MetaData[] = {
		{ "Category", "SOTS|Mission" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional rewards applied when the mission completes successfully.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MissionDirectorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional rewards applied when the mission completes successfully." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_MissionDefinition constinit property declarations ******************
	static const UECodeGen_Private::FNamePropertyParams NewProp_MissionId;
	static const UECodeGen_Private::FTextPropertyParams NewProp_MissionName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_MissionDescription;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_MissionMap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Objectives_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Objectives;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAllowedStealthTier;
	static void NewProp_bFailOnMaxTier_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFailOnMaxTier;
	static void NewProp_bRequireAllMandatoryObjectives_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireAllMandatoryObjectives;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverrideStealthConfig;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FXTag_OnMissionStart;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FXTag_OnMissionCompleted;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FXTag_OnMissionFailed;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NextMissionByOutcome_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NextMissionByOutcome_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_NextMissionByOutcome;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FailureConditions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rewards;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USOTS_MissionDefinition constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_MissionDefinition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_MissionDefinition_Statics

// ********** Begin Class USOTS_MissionDefinition Property Definitions *****************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USOTS_MissionDefinition_Statics::NewProp_MissionId = { "MissionId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_MissionDefinition, MissionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MissionId_MetaData), NewProp_MissionId_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_USOTS_MissionDefinition_Statics::NewProp_MissionName = { "MissionName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_MissionDefinition, MissionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MissionName_MetaData), NewProp_MissionName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_USOTS_MissionDefinition_Statics::NewProp_MissionDescription = { "MissionDescription", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_MissionDefinition, MissionDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MissionDescription_MetaData), NewProp_MissionDescription_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USOTS_MissionDefinition_Statics::NewProp_MissionMap = { "MissionMap", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_MissionDefinition, MissionMap), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MissionMap_MetaData), NewProp_MissionMap_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_MissionDefinition_Statics::NewProp_Objectives_Inner = { "Objectives", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSOTS_MissionObjective, METADATA_PARAMS(0, nullptr) }; // 1847202796
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USOTS_MissionDefinition_Statics::NewProp_Objectives = { "Objectives", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_MissionDefinition, Objectives), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Objectives_MetaData), NewProp_Objectives_MetaData) }; // 1847202796
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USOTS_MissionDefinition_Statics::NewProp_MaxAllowedStealthTier = { "MaxAllowedStealthTier", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_MissionDefinition, MaxAllowedStealthTier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAllowedStealthTier_MetaData), NewProp_MaxAllowedStealthTier_MetaData) };
void Z_Construct_UClass_USOTS_MissionDefinition_Statics::NewProp_bFailOnMaxTier_SetBit(void* Obj)
{
	((USOTS_MissionDefinition*)Obj)->bFailOnMaxTier = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USOTS_MissionDefinition_Statics::NewProp_bFailOnMaxTier = { "bFailOnMaxTier", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USOTS_MissionDefinition), &Z_Construct_UClass_USOTS_MissionDefinition_Statics::NewProp_bFailOnMaxTier_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFailOnMaxTier_MetaData), NewProp_bFailOnMaxTier_MetaData) };
void Z_Construct_UClass_USOTS_MissionDefinition_Statics::NewProp_bRequireAllMandatoryObjectives_SetBit(void* Obj)
{
	((USOTS_MissionDefinition*)Obj)->bRequireAllMandatoryObjectives = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USOTS_MissionDefinition_Statics::NewProp_bRequireAllMandatoryObjectives = { "bRequireAllMandatoryObjectives", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USOTS_MissionDefinition), &Z_Construct_UClass_USOTS_MissionDefinition_Statics::NewProp_bRequireAllMandatoryObjectives_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequireAllMandatoryObjectives_MetaData), NewProp_bRequireAllMandatoryObjectives_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USOTS_MissionDefinition_Statics::NewProp_OverrideStealthConfig = { "OverrideStealthConfig", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_MissionDefinition, OverrideStealthConfig), Z_Construct_UClass_USOTS_StealthConfigDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideStealthConfig_MetaData), NewProp_OverrideStealthConfig_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_MissionDefinition_Statics::NewProp_FXTag_OnMissionStart = { "FXTag_OnMissionStart", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_MissionDefinition, FXTag_OnMissionStart), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FXTag_OnMissionStart_MetaData), NewProp_FXTag_OnMissionStart_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_MissionDefinition_Statics::NewProp_FXTag_OnMissionCompleted = { "FXTag_OnMissionCompleted", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_MissionDefinition, FXTag_OnMissionCompleted), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FXTag_OnMissionCompleted_MetaData), NewProp_FXTag_OnMissionCompleted_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_MissionDefinition_Statics::NewProp_FXTag_OnMissionFailed = { "FXTag_OnMissionFailed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_MissionDefinition, FXTag_OnMissionFailed), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FXTag_OnMissionFailed_MetaData), NewProp_FXTag_OnMissionFailed_MetaData) }; // 517357616
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USOTS_MissionDefinition_Statics::NewProp_NextMissionByOutcome_ValueProp = { "NextMissionByOutcome", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_MissionDefinition_Statics::NewProp_NextMissionByOutcome_Key_KeyProp = { "NextMissionByOutcome_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USOTS_MissionDefinition_Statics::NewProp_NextMissionByOutcome = { "NextMissionByOutcome", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_MissionDefinition, NextMissionByOutcome), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextMissionByOutcome_MetaData), NewProp_NextMissionByOutcome_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_MissionDefinition_Statics::NewProp_FailureConditions = { "FailureConditions", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_MissionDefinition, FailureConditions), Z_Construct_UScriptStruct_FSOTS_MissionFailureConditions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailureConditions_MetaData), NewProp_FailureConditions_MetaData) }; // 1390874769
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_MissionDefinition_Statics::NewProp_Rewards = { "Rewards", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_MissionDefinition, Rewards), Z_Construct_UScriptStruct_FSOTS_MissionRewards, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rewards_MetaData), NewProp_Rewards_MetaData) }; // 769063712
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USOTS_MissionDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionDefinition_Statics::NewProp_MissionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionDefinition_Statics::NewProp_MissionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionDefinition_Statics::NewProp_MissionDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionDefinition_Statics::NewProp_MissionMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionDefinition_Statics::NewProp_Objectives_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionDefinition_Statics::NewProp_Objectives,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionDefinition_Statics::NewProp_MaxAllowedStealthTier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionDefinition_Statics::NewProp_bFailOnMaxTier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionDefinition_Statics::NewProp_bRequireAllMandatoryObjectives,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionDefinition_Statics::NewProp_OverrideStealthConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionDefinition_Statics::NewProp_FXTag_OnMissionStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionDefinition_Statics::NewProp_FXTag_OnMissionCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionDefinition_Statics::NewProp_FXTag_OnMissionFailed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionDefinition_Statics::NewProp_NextMissionByOutcome_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionDefinition_Statics::NewProp_NextMissionByOutcome_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionDefinition_Statics::NewProp_NextMissionByOutcome,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionDefinition_Statics::NewProp_FailureConditions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_MissionDefinition_Statics::NewProp_Rewards,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_MissionDefinition_Statics::PropPointers) < 2048);
// ********** End Class USOTS_MissionDefinition Property Definitions *******************************
UObject* (*const Z_Construct_UClass_USOTS_MissionDefinition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_MissionDirector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_MissionDefinition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_MissionDefinition_Statics::ClassParams = {
	&USOTS_MissionDefinition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USOTS_MissionDefinition_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_MissionDefinition_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_MissionDefinition_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_MissionDefinition_Statics::Class_MetaDataParams)
};
void USOTS_MissionDefinition::StaticRegisterNativesUSOTS_MissionDefinition()
{
}
UClass* Z_Construct_UClass_USOTS_MissionDefinition()
{
	if (!Z_Registration_Info_UClass_USOTS_MissionDefinition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_MissionDefinition.OuterSingleton, Z_Construct_UClass_USOTS_MissionDefinition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_MissionDefinition.OuterSingleton;
}
USOTS_MissionDefinition::USOTS_MissionDefinition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_MissionDefinition);
USOTS_MissionDefinition::~USOTS_MissionDefinition() {}
// ********** End Class USOTS_MissionDefinition ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MissionDirector_Source_SOTS_MissionDirector_Public_SOTS_MissionDirectorTypes_h__Script_SOTS_MissionDirector_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESOTSMissionEventCategory_StaticEnum, TEXT("ESOTSMissionEventCategory"), &Z_Registration_Info_UEnum_ESOTSMissionEventCategory, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2204436384U) },
		{ ESOTS_MissionState_StaticEnum, TEXT("ESOTS_MissionState"), &Z_Registration_Info_UEnum_ESOTS_MissionState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3018231392U) },
		{ ESOTS_ObjectiveType_StaticEnum, TEXT("ESOTS_ObjectiveType"), &Z_Registration_Info_UEnum_ESOTS_ObjectiveType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 775043013U) },
		{ ESOTS_MissionCompletionState_StaticEnum, TEXT("ESOTS_MissionCompletionState"), &Z_Registration_Info_UEnum_ESOTS_MissionCompletionState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2409946189U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSOTS_MissionEventLogEntry::StaticStruct, Z_Construct_UScriptStruct_FSOTS_MissionEventLogEntry_Statics::NewStructOps, TEXT("SOTS_MissionEventLogEntry"),&Z_Registration_Info_UScriptStruct_FSOTS_MissionEventLogEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_MissionEventLogEntry), 2540198091U) },
		{ FSOTS_MissionRunSummary::StaticStruct, Z_Construct_UScriptStruct_FSOTS_MissionRunSummary_Statics::NewStructOps, TEXT("SOTS_MissionRunSummary"),&Z_Registration_Info_UScriptStruct_FSOTS_MissionRunSummary, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_MissionRunSummary), 3169672268U) },
		{ FSOTS_MissionObjective::StaticStruct, Z_Construct_UScriptStruct_FSOTS_MissionObjective_Statics::NewStructOps, TEXT("SOTS_MissionObjective"),&Z_Registration_Info_UScriptStruct_FSOTS_MissionObjective, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_MissionObjective), 1847202796U) },
		{ FSOTS_MissionObjectiveRuntimeState::StaticStruct, Z_Construct_UScriptStruct_FSOTS_MissionObjectiveRuntimeState_Statics::NewStructOps, TEXT("SOTS_MissionObjectiveRuntimeState"),&Z_Registration_Info_UScriptStruct_FSOTS_MissionObjectiveRuntimeState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_MissionObjectiveRuntimeState), 3836113134U) },
		{ FSOTS_MissionRuntimeState::StaticStruct, Z_Construct_UScriptStruct_FSOTS_MissionRuntimeState_Statics::NewStructOps, TEXT("SOTS_MissionRuntimeState"),&Z_Registration_Info_UScriptStruct_FSOTS_MissionRuntimeState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_MissionRuntimeState), 934224171U) },
		{ FSOTS_MissionFailureConditions::StaticStruct, Z_Construct_UScriptStruct_FSOTS_MissionFailureConditions_Statics::NewStructOps, TEXT("SOTS_MissionFailureConditions"),&Z_Registration_Info_UScriptStruct_FSOTS_MissionFailureConditions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_MissionFailureConditions), 1390874769U) },
		{ FSOTS_MissionRewards::StaticStruct, Z_Construct_UScriptStruct_FSOTS_MissionRewards_Statics::NewStructOps, TEXT("SOTS_MissionRewards"),&Z_Registration_Info_UScriptStruct_FSOTS_MissionRewards, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_MissionRewards), 769063712U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_MissionDefinition, USOTS_MissionDefinition::StaticClass, TEXT("USOTS_MissionDefinition"), &Z_Registration_Info_UClass_USOTS_MissionDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_MissionDefinition), 2440201941U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MissionDirector_Source_SOTS_MissionDirector_Public_SOTS_MissionDirectorTypes_h__Script_SOTS_MissionDirector_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MissionDirector_Source_SOTS_MissionDirector_Public_SOTS_MissionDirectorTypes_h__Script_SOTS_MissionDirector_3423170639{
	TEXT("/Script/SOTS_MissionDirector"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MissionDirector_Source_SOTS_MissionDirector_Public_SOTS_MissionDirectorTypes_h__Script_SOTS_MissionDirector_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MissionDirector_Source_SOTS_MissionDirector_Public_SOTS_MissionDirectorTypes_h__Script_SOTS_MissionDirector_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MissionDirector_Source_SOTS_MissionDirector_Public_SOTS_MissionDirectorTypes_h__Script_SOTS_MissionDirector_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MissionDirector_Source_SOTS_MissionDirector_Public_SOTS_MissionDirectorTypes_h__Script_SOTS_MissionDirector_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MissionDirector_Source_SOTS_MissionDirector_Public_SOTS_MissionDirectorTypes_h__Script_SOTS_MissionDirector_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MissionDirector_Source_SOTS_MissionDirector_Public_SOTS_MissionDirectorTypes_h__Script_SOTS_MissionDirector_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
