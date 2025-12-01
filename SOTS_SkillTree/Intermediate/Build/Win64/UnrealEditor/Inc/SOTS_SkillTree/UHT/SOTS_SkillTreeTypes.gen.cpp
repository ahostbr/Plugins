// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTS_SkillTreeTypes.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_SkillTreeTypes() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
SOTS_SKILLTREE_API UEnum* Z_Construct_UEnum_SOTS_SkillTree_ESOTS_SkillNodeStatus();
SOTS_SKILLTREE_API UEnum* Z_Construct_UEnum_SOTS_SkillTree_ESOTS_SkillNodeType();
SOTS_SKILLTREE_API UEnum* Z_Construct_UEnum_SOTS_SkillTree_ESOTS_SkillUnlockRule();
SOTS_SKILLTREE_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition();
SOTS_SKILLTREE_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_SkillNodeEffects();
SOTS_SKILLTREE_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_SkillNodeLink();
SOTS_SKILLTREE_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_SkillNodeRequirements();
SOTS_SKILLTREE_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_SkillNodeState();
SOTS_SKILLTREE_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_SkillTreeNodeView();
SOTS_SKILLTREE_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_SkillTreeProfileState();
SOTS_SKILLTREE_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_SkillTreeRuntimeState();
SOTS_SKILLTREE_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_UnlockedSkillNode();
UPackage* Z_Construct_UPackage__Script_SOTS_SkillTree();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ESOTS_SkillNodeStatus *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESOTS_SkillNodeStatus;
static UEnum* ESOTS_SkillNodeStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESOTS_SkillNodeStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESOTS_SkillNodeStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SOTS_SkillTree_ESOTS_SkillNodeStatus, (UObject*)Z_Construct_UPackage__Script_SOTS_SkillTree(), TEXT("ESOTS_SkillNodeStatus"));
	}
	return Z_Registration_Info_UEnum_ESOTS_SkillNodeStatus.OuterSingleton;
}
template<> SOTS_SKILLTREE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESOTS_SkillNodeStatus>()
{
	return ESOTS_SkillNodeStatus_StaticEnum();
}
struct Z_Construct_UEnum_SOTS_SkillTree_ESOTS_SkillNodeStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Available.DisplayName", "Available" },
		{ "Available.Name", "ESOTS_SkillNodeStatus::Available" },
		{ "BlueprintType", "true" },
		{ "Locked.DisplayName", "Locked" },
		{ "Locked.Name", "ESOTS_SkillNodeStatus::Locked" },
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeTypes.h" },
		{ "Unlocked.DisplayName", "Unlocked" },
		{ "Unlocked.Name", "ESOTS_SkillNodeStatus::Unlocked" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESOTS_SkillNodeStatus::Locked", (int64)ESOTS_SkillNodeStatus::Locked },
		{ "ESOTS_SkillNodeStatus::Available", (int64)ESOTS_SkillNodeStatus::Available },
		{ "ESOTS_SkillNodeStatus::Unlocked", (int64)ESOTS_SkillNodeStatus::Unlocked },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SOTS_SkillTree_ESOTS_SkillNodeStatus_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SOTS_SkillTree_ESOTS_SkillNodeStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SOTS_SkillTree,
	nullptr,
	"ESOTS_SkillNodeStatus",
	"ESOTS_SkillNodeStatus",
	Z_Construct_UEnum_SOTS_SkillTree_ESOTS_SkillNodeStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SOTS_SkillTree_ESOTS_SkillNodeStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SOTS_SkillTree_ESOTS_SkillNodeStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SOTS_SkillTree_ESOTS_SkillNodeStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SOTS_SkillTree_ESOTS_SkillNodeStatus()
{
	if (!Z_Registration_Info_UEnum_ESOTS_SkillNodeStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESOTS_SkillNodeStatus.InnerSingleton, Z_Construct_UEnum_SOTS_SkillTree_ESOTS_SkillNodeStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESOTS_SkillNodeStatus.InnerSingleton;
}
// ********** End Enum ESOTS_SkillNodeStatus *******************************************************

// ********** Begin Enum ESOTS_SkillNodeType *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESOTS_SkillNodeType;
static UEnum* ESOTS_SkillNodeType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESOTS_SkillNodeType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESOTS_SkillNodeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SOTS_SkillTree_ESOTS_SkillNodeType, (UObject*)Z_Construct_UPackage__Script_SOTS_SkillTree(), TEXT("ESOTS_SkillNodeType"));
	}
	return Z_Registration_Info_UEnum_ESOTS_SkillNodeType.OuterSingleton;
}
template<> SOTS_SKILLTREE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESOTS_SkillNodeType>()
{
	return ESOTS_SkillNodeType_StaticEnum();
}
struct Z_Construct_UEnum_SOTS_SkillTree_ESOTS_SkillNodeType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ActiveAbility.DisplayName", "Active Ability" },
		{ "ActiveAbility.Name", "ESOTS_SkillNodeType::ActiveAbility" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeTypes.h" },
		{ "Passive.DisplayName", "Passive" },
		{ "Passive.Name", "ESOTS_SkillNodeType::Passive" },
		{ "Upgrade.DisplayName", "Upgrade/Modifier" },
		{ "Upgrade.Name", "ESOTS_SkillNodeType::Upgrade" },
		{ "Utility.DisplayName", "Utility" },
		{ "Utility.Name", "ESOTS_SkillNodeType::Utility" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESOTS_SkillNodeType::Passive", (int64)ESOTS_SkillNodeType::Passive },
		{ "ESOTS_SkillNodeType::ActiveAbility", (int64)ESOTS_SkillNodeType::ActiveAbility },
		{ "ESOTS_SkillNodeType::Upgrade", (int64)ESOTS_SkillNodeType::Upgrade },
		{ "ESOTS_SkillNodeType::Utility", (int64)ESOTS_SkillNodeType::Utility },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SOTS_SkillTree_ESOTS_SkillNodeType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SOTS_SkillTree_ESOTS_SkillNodeType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SOTS_SkillTree,
	nullptr,
	"ESOTS_SkillNodeType",
	"ESOTS_SkillNodeType",
	Z_Construct_UEnum_SOTS_SkillTree_ESOTS_SkillNodeType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SOTS_SkillTree_ESOTS_SkillNodeType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SOTS_SkillTree_ESOTS_SkillNodeType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SOTS_SkillTree_ESOTS_SkillNodeType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SOTS_SkillTree_ESOTS_SkillNodeType()
{
	if (!Z_Registration_Info_UEnum_ESOTS_SkillNodeType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESOTS_SkillNodeType.InnerSingleton, Z_Construct_UEnum_SOTS_SkillTree_ESOTS_SkillNodeType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESOTS_SkillNodeType.InnerSingleton;
}
// ********** End Enum ESOTS_SkillNodeType *********************************************************

// ********** Begin Enum ESOTS_SkillUnlockRule *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESOTS_SkillUnlockRule;
static UEnum* ESOTS_SkillUnlockRule_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESOTS_SkillUnlockRule.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESOTS_SkillUnlockRule.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SOTS_SkillTree_ESOTS_SkillUnlockRule, (UObject*)Z_Construct_UPackage__Script_SOTS_SkillTree(), TEXT("ESOTS_SkillUnlockRule"));
	}
	return Z_Registration_Info_UEnum_ESOTS_SkillUnlockRule.OuterSingleton;
}
template<> SOTS_SKILLTREE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESOTS_SkillUnlockRule>()
{
	return ESOTS_SkillUnlockRule_StaticEnum();
}
struct Z_Construct_UEnum_SOTS_SkillTree_ESOTS_SkillUnlockRule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AllParents.DisplayName", "All Parents Required" },
		{ "AllParents.Name", "ESOTS_SkillUnlockRule::AllParents" },
		{ "AnyParent.DisplayName", "Any Parent Required" },
		{ "AnyParent.Name", "ESOTS_SkillUnlockRule::AnyParent" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeTypes.h" },
		{ "NoParentNeeded.DisplayName", "No Parents Required" },
		{ "NoParentNeeded.Name", "ESOTS_SkillUnlockRule::NoParentNeeded" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESOTS_SkillUnlockRule::AllParents", (int64)ESOTS_SkillUnlockRule::AllParents },
		{ "ESOTS_SkillUnlockRule::AnyParent", (int64)ESOTS_SkillUnlockRule::AnyParent },
		{ "ESOTS_SkillUnlockRule::NoParentNeeded", (int64)ESOTS_SkillUnlockRule::NoParentNeeded },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SOTS_SkillTree_ESOTS_SkillUnlockRule_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SOTS_SkillTree_ESOTS_SkillUnlockRule_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SOTS_SkillTree,
	nullptr,
	"ESOTS_SkillUnlockRule",
	"ESOTS_SkillUnlockRule",
	Z_Construct_UEnum_SOTS_SkillTree_ESOTS_SkillUnlockRule_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SOTS_SkillTree_ESOTS_SkillUnlockRule_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SOTS_SkillTree_ESOTS_SkillUnlockRule_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SOTS_SkillTree_ESOTS_SkillUnlockRule_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SOTS_SkillTree_ESOTS_SkillUnlockRule()
{
	if (!Z_Registration_Info_UEnum_ESOTS_SkillUnlockRule.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESOTS_SkillUnlockRule.InnerSingleton, Z_Construct_UEnum_SOTS_SkillTree_ESOTS_SkillUnlockRule_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESOTS_SkillUnlockRule.InnerSingleton;
}
// ********** End Enum ESOTS_SkillUnlockRule *******************************************************

// ********** Begin ScriptStruct FSOTS_SkillNodeRequirements ***************************************
struct Z_Construct_UScriptStruct_FSOTS_SkillNodeRequirements_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_SkillNodeRequirements); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_SkillNodeRequirements); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Data-only description of what is required to unlock a given node.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Data-only description of what is required to unlock a given node." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredTags_MetaData[] = {
		{ "Category", "SOTS|SkillTree|Requirements" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Generic global/player tags required to unlock this node. These are\n// evaluated via the global tag manager (e.g. difficulty, mission flags).\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generic global/player tags required to unlock this node. These are\nevaluated via the global tag manager (e.g. difficulty, mission flags)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredAbilityTags_MetaData[] = {
		{ "Category", "SOTS|SkillTree|Requirements" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ability tags that should already be owned / granted before this node\n// can be unlocked. In the current SOTS project these are usually mirrored\n// as global player tags when abilities are granted.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ability tags that should already be owned / granted before this node\ncan be unlocked. In the current SOTS project these are usually mirrored\nas global player tags when abilities are granted." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredMissionTags_MetaData[] = {
		{ "Category", "SOTS|SkillTree|Requirements" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mission-related tags that must be present (e.g. Mission.Castle.Completed).\n// These are also evaluated via the global tag manager and are authored\n// in MissionDirector or higher-level content.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mission-related tags that must be present (e.g. Mission.Castle.Completed).\nThese are also evaluated via the global tag manager and are authored\nin MissionDirector or higher-level content." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredPoints_MetaData[] = {
		{ "Category", "SOTS|SkillTree|Requirements" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Skill points required to unlock this node. If set to a value > 0,\n// this overrides the legacy Cost field on FSOTS_SkillNodeDefinition.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Skill points required to unlock this node. If set to a value > 0,\nthis overrides the legacy Cost field on FSOTS_SkillNodeDefinition." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_SkillNodeRequirements constinit property declarations *******
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredAbilityTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredMissionTags;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RequiredPoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_SkillNodeRequirements constinit property declarations *********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_SkillNodeRequirements>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_SkillNodeRequirements_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_SkillNodeRequirements;
class UScriptStruct* FSOTS_SkillNodeRequirements::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_SkillNodeRequirements.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_SkillNodeRequirements.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_SkillNodeRequirements, (UObject*)Z_Construct_UPackage__Script_SOTS_SkillTree(), TEXT("SOTS_SkillNodeRequirements"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_SkillNodeRequirements.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_SkillNodeRequirements Property Definitions ******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_SkillNodeRequirements_Statics::NewProp_RequiredTags = { "RequiredTags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_SkillNodeRequirements, RequiredTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredTags_MetaData), NewProp_RequiredTags_MetaData) }; // 3438578166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_SkillNodeRequirements_Statics::NewProp_RequiredAbilityTags = { "RequiredAbilityTags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_SkillNodeRequirements, RequiredAbilityTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredAbilityTags_MetaData), NewProp_RequiredAbilityTags_MetaData) }; // 3438578166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_SkillNodeRequirements_Statics::NewProp_RequiredMissionTags = { "RequiredMissionTags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_SkillNodeRequirements, RequiredMissionTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredMissionTags_MetaData), NewProp_RequiredMissionTags_MetaData) }; // 3438578166
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSOTS_SkillNodeRequirements_Statics::NewProp_RequiredPoints = { "RequiredPoints", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_SkillNodeRequirements, RequiredPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredPoints_MetaData), NewProp_RequiredPoints_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_SkillNodeRequirements_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_SkillNodeRequirements_Statics::NewProp_RequiredTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_SkillNodeRequirements_Statics::NewProp_RequiredAbilityTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_SkillNodeRequirements_Statics::NewProp_RequiredMissionTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_SkillNodeRequirements_Statics::NewProp_RequiredPoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_SkillNodeRequirements_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_SkillNodeRequirements Property Definitions ********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_SkillNodeRequirements_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_SkillTree,
	nullptr,
	&NewStructOps,
	"SOTS_SkillNodeRequirements",
	Z_Construct_UScriptStruct_FSOTS_SkillNodeRequirements_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_SkillNodeRequirements_Statics::PropPointers),
	sizeof(FSOTS_SkillNodeRequirements),
	alignof(FSOTS_SkillNodeRequirements),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_SkillNodeRequirements_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_SkillNodeRequirements_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_SkillNodeRequirements()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_SkillNodeRequirements.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_SkillNodeRequirements.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_SkillNodeRequirements_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_SkillNodeRequirements.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_SkillNodeRequirements *****************************************

// ********** Begin ScriptStruct FSOTS_SkillNodeEffects ********************************************
struct Z_Construct_UScriptStruct_FSOTS_SkillNodeEffects_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_SkillNodeEffects); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_SkillNodeEffects); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Data-only description of what happens when a node is unlocked.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Data-only description of what happens when a node is unlocked." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrantedTags_MetaData[] = {
		{ "Category", "SOTS|SkillTree|Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tags granted when this node is unlocked (e.g., stat modifiers,\n// long-lived progression flags). These are pushed into the global\n// tag state by the skill tree subsystem.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tags granted when this node is unlocked (e.g., stat modifiers,\nlong-lived progression flags). These are pushed into the global\ntag state by the skill tree subsystem." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrantedAbilityTags_MetaData[] = {
		{ "Category", "SOTS|SkillTree|Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ability tags that represent abilities unlocked by this node. The\n// SkillTree subsystem itself only exposes these as data; higher-level\n// systems (or GAS bridges) can listen for node unlocks and grant\n// the actual abilities via UAC_SOTS_Abilitys.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ability tags that represent abilities unlocked by this node. The\nSkillTree subsystem itself only exposes these as data; higher-level\nsystems (or GAS bridges) can listen for node unlocks and grant\nthe actual abilities via UAC_SOTS_Abilitys." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FXTag_OnUnlock_MetaData[] = {
		{ "Category", "SOTS|SkillTree|Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional FX tag fired via the global FX manager when the node is\n// successfully unlocked. This is purely descriptive; listeners are\n// responsible for mapping it to actual Niagara/Sound assets.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional FX tag fired via the global FX manager when the node is\nsuccessfully unlocked. This is purely descriptive; listeners are\nresponsible for mapping it to actual Niagara/Sound assets." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_SkillNodeEffects constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedAbilityTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FXTag_OnUnlock;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_SkillNodeEffects constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_SkillNodeEffects>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_SkillNodeEffects_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_SkillNodeEffects;
class UScriptStruct* FSOTS_SkillNodeEffects::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_SkillNodeEffects.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_SkillNodeEffects.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_SkillNodeEffects, (UObject*)Z_Construct_UPackage__Script_SOTS_SkillTree(), TEXT("SOTS_SkillNodeEffects"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_SkillNodeEffects.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_SkillNodeEffects Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_SkillNodeEffects_Statics::NewProp_GrantedTags = { "GrantedTags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_SkillNodeEffects, GrantedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrantedTags_MetaData), NewProp_GrantedTags_MetaData) }; // 3438578166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_SkillNodeEffects_Statics::NewProp_GrantedAbilityTags = { "GrantedAbilityTags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_SkillNodeEffects, GrantedAbilityTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrantedAbilityTags_MetaData), NewProp_GrantedAbilityTags_MetaData) }; // 3438578166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_SkillNodeEffects_Statics::NewProp_FXTag_OnUnlock = { "FXTag_OnUnlock", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_SkillNodeEffects, FXTag_OnUnlock), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FXTag_OnUnlock_MetaData), NewProp_FXTag_OnUnlock_MetaData) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_SkillNodeEffects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_SkillNodeEffects_Statics::NewProp_GrantedTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_SkillNodeEffects_Statics::NewProp_GrantedAbilityTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_SkillNodeEffects_Statics::NewProp_FXTag_OnUnlock,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_SkillNodeEffects_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_SkillNodeEffects Property Definitions *************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_SkillNodeEffects_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_SkillTree,
	nullptr,
	&NewStructOps,
	"SOTS_SkillNodeEffects",
	Z_Construct_UScriptStruct_FSOTS_SkillNodeEffects_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_SkillNodeEffects_Statics::PropPointers),
	sizeof(FSOTS_SkillNodeEffects),
	alignof(FSOTS_SkillNodeEffects),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_SkillNodeEffects_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_SkillNodeEffects_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_SkillNodeEffects()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_SkillNodeEffects.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_SkillNodeEffects.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_SkillNodeEffects_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_SkillNodeEffects.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_SkillNodeEffects **********************************************

// ********** Begin ScriptStruct FSOTS_SkillNodeDefinition *****************************************
struct Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_SkillNodeDefinition); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_SkillNodeDefinition); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeId_MetaData[] = {
		{ "Category", "SOTS|SkillTree" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Unique identifier for this node within the tree\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unique identifier for this node within the tree" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "SOTS|SkillTree" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Display name for UI\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Display name for UI" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "SOTS|SkillTree" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Description for UI\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeTypes.h" },
		{ "MultiLine", "true" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Description for UI" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "Category", "SOTS|SkillTree" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional icon for UI representation.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional icon for UI representation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeType_MetaData[] = {
		{ "Category", "SOTS|SkillTree" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// High-level node type (passive, active ability, upgrade, etc.).\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "High-level node type (passive, active ability, upgrade, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorPosition_MetaData[] = {
		{ "Category", "SOTS|SkillTree|Layout" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// 2D editor/UI position for layout tools. This is not used for\n// gameplay and can safely be ignored by runtime systems.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "2D editor/UI position for layout tools. This is not used for\ngameplay and can safely be ignored by runtime systems." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentNodeIds_MetaData[] = {
		{ "Category", "SOTS|SkillTree" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Parent/child wiring (by node id). If empty, falls back to PrerequisiteNodeIds.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Parent/child wiring (by node id). If empty, falls back to PrerequisiteNodeIds." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrerequisiteNodeIds_MetaData[] = {
		{ "Category", "SOTS|SkillTree" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Existing prerequisite list kept for backwards-compatibility.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Existing prerequisite list kept for backwards-compatibility." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnlockRule_MetaData[] = {
		{ "Category", "SOTS|SkillTree" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Unlock rule controlling how parents are evaluated.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unlock rule controlling how parents are evaluated." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cost_MetaData[] = {
		{ "Category", "SOTS|SkillTree" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cost in skill points to unlock this node\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cost in skill points to unlock this node" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredTags_MetaData[] = {
		{ "Category", "SOTS|SkillTree|Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tags that must be present on the player to unlock this node (difficulty, mission flags, etc).\n// Integration point: SOTS can query its global tag provider to validate these.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tags that must be present on the player to unlock this node (difficulty, mission flags, etc).\nIntegration point: SOTS can query its global tag provider to validate these." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillTag_MetaData[] = {
		{ "Category", "SOTS|SkillTree|Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Primary gameplay tag granted when this node is unlocked (e.g. Skill.Stealth.Backstab).\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Primary gameplay tag granted when this node is unlocked (e.g. Skill.Stealth.Backstab)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrantedTags_MetaData[] = {
		{ "Category", "SOTS|SkillTree|Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tags granted when this node is unlocked (e.g., abilities, stat modifiers, progression flags).\n// Integration point: SOTS can listen for node unlocks and apply these tags.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tags granted when this node is unlocked (e.g., abilities, stat modifiers, progression flags).\nIntegration point: SOTS can listen for node unlocks and apply these tags." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRefundable_MetaData[] = {
		{ "Category", "SOTS|SkillTree" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, this node may be refunded (respecced) via the subsystem/component APIs.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, this node may be refunded (respecced) via the subsystem/component APIs." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Requirements_MetaData[] = {
		{ "Category", "SOTS|SkillTree" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// New, consolidated requirements and effects containers. Existing fields\n// (Cost, RequiredTags, GrantedTags) are kept for backward-compatibility;\n// when Requirements.RequiredPoints is > 0 it is treated as the primary\n// authored cost, and Effects.GrantedTags is appended to GrantedTags.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "New, consolidated requirements and effects containers. Existing fields\n(Cost, RequiredTags, GrantedTags) are kept for backward-compatibility;\nwhen Requirements.RequiredPoints is > 0 it is treated as the primary\nauthored cost, and Effects.GrantedTags is appended to GrantedTags." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Effects_MetaData[] = {
		{ "Category", "SOTS|SkillTree" },
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_SkillNodeDefinition constinit property declarations *********
	static const UECodeGen_Private::FNamePropertyParams NewProp_NodeId;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NodeType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NodeType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EditorPosition;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParentNodeIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ParentNodeIds;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PrerequisiteNodeIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PrerequisiteNodeIds;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UnlockRule_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UnlockRule;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Cost;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SkillTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedTags;
	static void NewProp_bRefundable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRefundable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Requirements;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Effects;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_SkillNodeDefinition constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_SkillNodeDefinition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_SkillNodeDefinition;
class UScriptStruct* FSOTS_SkillNodeDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_SkillNodeDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_SkillNodeDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition, (UObject*)Z_Construct_UPackage__Script_SOTS_SkillTree(), TEXT("SOTS_SkillNodeDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_SkillNodeDefinition.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_SkillNodeDefinition Property Definitions ********************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_SkillNodeDefinition, NodeId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeId_MetaData), NewProp_NodeId_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_SkillNodeDefinition, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_SkillNodeDefinition, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_SkillNodeDefinition, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition_Statics::NewProp_NodeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition_Statics::NewProp_NodeType = { "NodeType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_SkillNodeDefinition, NodeType), Z_Construct_UEnum_SOTS_SkillTree_ESOTS_SkillNodeType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeType_MetaData), NewProp_NodeType_MetaData) }; // 3171003353
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition_Statics::NewProp_EditorPosition = { "EditorPosition", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_SkillNodeDefinition, EditorPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorPosition_MetaData), NewProp_EditorPosition_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition_Statics::NewProp_ParentNodeIds_Inner = { "ParentNodeIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition_Statics::NewProp_ParentNodeIds = { "ParentNodeIds", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_SkillNodeDefinition, ParentNodeIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentNodeIds_MetaData), NewProp_ParentNodeIds_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition_Statics::NewProp_PrerequisiteNodeIds_Inner = { "PrerequisiteNodeIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition_Statics::NewProp_PrerequisiteNodeIds = { "PrerequisiteNodeIds", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_SkillNodeDefinition, PrerequisiteNodeIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrerequisiteNodeIds_MetaData), NewProp_PrerequisiteNodeIds_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition_Statics::NewProp_UnlockRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition_Statics::NewProp_UnlockRule = { "UnlockRule", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_SkillNodeDefinition, UnlockRule), Z_Construct_UEnum_SOTS_SkillTree_ESOTS_SkillUnlockRule, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnlockRule_MetaData), NewProp_UnlockRule_MetaData) }; // 347159097
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition_Statics::NewProp_Cost = { "Cost", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_SkillNodeDefinition, Cost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cost_MetaData), NewProp_Cost_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition_Statics::NewProp_RequiredTags = { "RequiredTags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_SkillNodeDefinition, RequiredTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredTags_MetaData), NewProp_RequiredTags_MetaData) }; // 3438578166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition_Statics::NewProp_SkillTag = { "SkillTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_SkillNodeDefinition, SkillTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillTag_MetaData), NewProp_SkillTag_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition_Statics::NewProp_GrantedTags = { "GrantedTags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_SkillNodeDefinition, GrantedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrantedTags_MetaData), NewProp_GrantedTags_MetaData) }; // 3438578166
void Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition_Statics::NewProp_bRefundable_SetBit(void* Obj)
{
	((FSOTS_SkillNodeDefinition*)Obj)->bRefundable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition_Statics::NewProp_bRefundable = { "bRefundable", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSOTS_SkillNodeDefinition), &Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition_Statics::NewProp_bRefundable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRefundable_MetaData), NewProp_bRefundable_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition_Statics::NewProp_Requirements = { "Requirements", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_SkillNodeDefinition, Requirements), Z_Construct_UScriptStruct_FSOTS_SkillNodeRequirements, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Requirements_MetaData), NewProp_Requirements_MetaData) }; // 3789687777
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition_Statics::NewProp_Effects = { "Effects", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_SkillNodeDefinition, Effects), Z_Construct_UScriptStruct_FSOTS_SkillNodeEffects, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Effects_MetaData), NewProp_Effects_MetaData) }; // 1620570712
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition_Statics::NewProp_NodeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition_Statics::NewProp_NodeType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition_Statics::NewProp_NodeType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition_Statics::NewProp_EditorPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition_Statics::NewProp_ParentNodeIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition_Statics::NewProp_ParentNodeIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition_Statics::NewProp_PrerequisiteNodeIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition_Statics::NewProp_PrerequisiteNodeIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition_Statics::NewProp_UnlockRule_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition_Statics::NewProp_UnlockRule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition_Statics::NewProp_Cost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition_Statics::NewProp_RequiredTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition_Statics::NewProp_SkillTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition_Statics::NewProp_GrantedTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition_Statics::NewProp_bRefundable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition_Statics::NewProp_Requirements,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition_Statics::NewProp_Effects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_SkillNodeDefinition Property Definitions **********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_SkillTree,
	nullptr,
	&NewStructOps,
	"SOTS_SkillNodeDefinition",
	Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition_Statics::PropPointers),
	sizeof(FSOTS_SkillNodeDefinition),
	alignof(FSOTS_SkillNodeDefinition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_SkillNodeDefinition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_SkillNodeDefinition.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_SkillNodeDefinition.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_SkillNodeDefinition *******************************************

// ********** Begin ScriptStruct FSOTS_SkillNodeState **********************************************
struct Z_Construct_UScriptStruct_FSOTS_SkillNodeState_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_SkillNodeState); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_SkillNodeState); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeId_MetaData[] = {
		{ "Category", "SOTS|SkillTree" },
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[] = {
		{ "Category", "SOTS|SkillTree" },
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_SkillNodeState constinit property declarations **************
	static const UECodeGen_Private::FNamePropertyParams NewProp_NodeId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Status;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_SkillNodeState constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_SkillNodeState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_SkillNodeState_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_SkillNodeState;
class UScriptStruct* FSOTS_SkillNodeState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_SkillNodeState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_SkillNodeState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_SkillNodeState, (UObject*)Z_Construct_UPackage__Script_SOTS_SkillTree(), TEXT("SOTS_SkillNodeState"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_SkillNodeState.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_SkillNodeState Property Definitions *************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSOTS_SkillNodeState_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_SkillNodeState, NodeId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeId_MetaData), NewProp_NodeId_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSOTS_SkillNodeState_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSOTS_SkillNodeState_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_SkillNodeState, Status), Z_Construct_UEnum_SOTS_SkillTree_ESOTS_SkillNodeStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Status_MetaData), NewProp_Status_MetaData) }; // 2160274606
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_SkillNodeState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_SkillNodeState_Statics::NewProp_NodeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_SkillNodeState_Statics::NewProp_Status_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_SkillNodeState_Statics::NewProp_Status,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_SkillNodeState_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_SkillNodeState Property Definitions ***************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_SkillNodeState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_SkillTree,
	nullptr,
	&NewStructOps,
	"SOTS_SkillNodeState",
	Z_Construct_UScriptStruct_FSOTS_SkillNodeState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_SkillNodeState_Statics::PropPointers),
	sizeof(FSOTS_SkillNodeState),
	alignof(FSOTS_SkillNodeState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_SkillNodeState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_SkillNodeState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_SkillNodeState()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_SkillNodeState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_SkillNodeState.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_SkillNodeState_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_SkillNodeState.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_SkillNodeState ************************************************

// ********** Begin ScriptStruct FSOTS_UnlockedSkillNode *******************************************
struct Z_Construct_UScriptStruct_FSOTS_UnlockedSkillNode_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_UnlockedSkillNode); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_UnlockedSkillNode); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Minimal runtime representation of an unlocked node.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimal runtime representation of an unlocked node." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeId_MetaData[] = {
		{ "Category", "SOTS|SkillTree" },
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rank_MetaData[] = {
		{ "Category", "SOTS|SkillTree" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Future: rank/level. For now, just 1 = unlocked.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Future: rank/level. For now, just 1 = unlocked." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_UnlockedSkillNode constinit property declarations ***********
	static const UECodeGen_Private::FNamePropertyParams NewProp_NodeId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Rank;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_UnlockedSkillNode constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_UnlockedSkillNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_UnlockedSkillNode_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_UnlockedSkillNode;
class UScriptStruct* FSOTS_UnlockedSkillNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_UnlockedSkillNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_UnlockedSkillNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_UnlockedSkillNode, (UObject*)Z_Construct_UPackage__Script_SOTS_SkillTree(), TEXT("SOTS_UnlockedSkillNode"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_UnlockedSkillNode.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_UnlockedSkillNode Property Definitions **********************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSOTS_UnlockedSkillNode_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_UnlockedSkillNode, NodeId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeId_MetaData), NewProp_NodeId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSOTS_UnlockedSkillNode_Statics::NewProp_Rank = { "Rank", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_UnlockedSkillNode, Rank), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rank_MetaData), NewProp_Rank_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_UnlockedSkillNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_UnlockedSkillNode_Statics::NewProp_NodeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_UnlockedSkillNode_Statics::NewProp_Rank,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_UnlockedSkillNode_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_UnlockedSkillNode Property Definitions ************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_UnlockedSkillNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_SkillTree,
	nullptr,
	&NewStructOps,
	"SOTS_UnlockedSkillNode",
	Z_Construct_UScriptStruct_FSOTS_UnlockedSkillNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_UnlockedSkillNode_Statics::PropPointers),
	sizeof(FSOTS_UnlockedSkillNode),
	alignof(FSOTS_UnlockedSkillNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_UnlockedSkillNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_UnlockedSkillNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_UnlockedSkillNode()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_UnlockedSkillNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_UnlockedSkillNode.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_UnlockedSkillNode_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_UnlockedSkillNode.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_UnlockedSkillNode *********************************************

// ********** Begin ScriptStruct FSOTS_SkillTreeRuntimeState ***************************************
struct Z_Construct_UScriptStruct_FSOTS_SkillTreeRuntimeState_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_SkillTreeRuntimeState); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_SkillTreeRuntimeState); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TreeId_MetaData[] = {
		{ "Category", "SOTS|SkillTree" },
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnlockedNodes_MetaData[] = {
		{ "Category", "SOTS|SkillTree" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Unlocked node ids (and optional rank data).\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unlocked node ids (and optional rank data)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvailablePoints_MetaData[] = {
		{ "Category", "SOTS|SkillTree" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional point pool associated with this tree (for save/load friendliness).\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional point pool associated with this tree (for save/load friendliness)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_SkillTreeRuntimeState constinit property declarations *******
	static const UECodeGen_Private::FNamePropertyParams NewProp_TreeId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UnlockedNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UnlockedNodes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AvailablePoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_SkillTreeRuntimeState constinit property declarations *********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_SkillTreeRuntimeState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_SkillTreeRuntimeState_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_SkillTreeRuntimeState;
class UScriptStruct* FSOTS_SkillTreeRuntimeState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_SkillTreeRuntimeState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_SkillTreeRuntimeState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_SkillTreeRuntimeState, (UObject*)Z_Construct_UPackage__Script_SOTS_SkillTree(), TEXT("SOTS_SkillTreeRuntimeState"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_SkillTreeRuntimeState.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_SkillTreeRuntimeState Property Definitions ******************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSOTS_SkillTreeRuntimeState_Statics::NewProp_TreeId = { "TreeId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_SkillTreeRuntimeState, TreeId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TreeId_MetaData), NewProp_TreeId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_SkillTreeRuntimeState_Statics::NewProp_UnlockedNodes_Inner = { "UnlockedNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSOTS_UnlockedSkillNode, METADATA_PARAMS(0, nullptr) }; // 4285734239
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSOTS_SkillTreeRuntimeState_Statics::NewProp_UnlockedNodes = { "UnlockedNodes", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_SkillTreeRuntimeState, UnlockedNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnlockedNodes_MetaData), NewProp_UnlockedNodes_MetaData) }; // 4285734239
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSOTS_SkillTreeRuntimeState_Statics::NewProp_AvailablePoints = { "AvailablePoints", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_SkillTreeRuntimeState, AvailablePoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvailablePoints_MetaData), NewProp_AvailablePoints_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_SkillTreeRuntimeState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_SkillTreeRuntimeState_Statics::NewProp_TreeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_SkillTreeRuntimeState_Statics::NewProp_UnlockedNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_SkillTreeRuntimeState_Statics::NewProp_UnlockedNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_SkillTreeRuntimeState_Statics::NewProp_AvailablePoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_SkillTreeRuntimeState_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_SkillTreeRuntimeState Property Definitions ********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_SkillTreeRuntimeState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_SkillTree,
	nullptr,
	&NewStructOps,
	"SOTS_SkillTreeRuntimeState",
	Z_Construct_UScriptStruct_FSOTS_SkillTreeRuntimeState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_SkillTreeRuntimeState_Statics::PropPointers),
	sizeof(FSOTS_SkillTreeRuntimeState),
	alignof(FSOTS_SkillTreeRuntimeState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_SkillTreeRuntimeState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_SkillTreeRuntimeState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_SkillTreeRuntimeState()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_SkillTreeRuntimeState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_SkillTreeRuntimeState.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_SkillTreeRuntimeState_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_SkillTreeRuntimeState.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_SkillTreeRuntimeState *****************************************

// ********** Begin ScriptStruct FSOTS_SkillTreeNodeView *******************************************
struct Z_Construct_UScriptStruct_FSOTS_SkillTreeNodeView_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_SkillTreeNodeView); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_SkillTreeNodeView); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Lightweight view used by UI to query a tree's nodes along with their\n// current unlock status and effective cost.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lightweight view used by UI to query a tree's nodes along with their\ncurrent unlock status and effective cost." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Definition_MetaData[] = {
		{ "Category", "SOTS|SkillTree" },
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[] = {
		{ "Category", "SOTS|SkillTree" },
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectiveCost_MetaData[] = {
		{ "Category", "SOTS|SkillTree" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Effective cost after applying Requirements / legacy Cost fields.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Effective cost after applying Requirements / legacy Cost fields." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_SkillTreeNodeView constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Definition;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Status;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EffectiveCost;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_SkillTreeNodeView constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_SkillTreeNodeView>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_SkillTreeNodeView_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_SkillTreeNodeView;
class UScriptStruct* FSOTS_SkillTreeNodeView::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_SkillTreeNodeView.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_SkillTreeNodeView.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_SkillTreeNodeView, (UObject*)Z_Construct_UPackage__Script_SOTS_SkillTree(), TEXT("SOTS_SkillTreeNodeView"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_SkillTreeNodeView.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_SkillTreeNodeView Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_SkillTreeNodeView_Statics::NewProp_Definition = { "Definition", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_SkillTreeNodeView, Definition), Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Definition_MetaData), NewProp_Definition_MetaData) }; // 2741794244
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSOTS_SkillTreeNodeView_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSOTS_SkillTreeNodeView_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_SkillTreeNodeView, Status), Z_Construct_UEnum_SOTS_SkillTree_ESOTS_SkillNodeStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Status_MetaData), NewProp_Status_MetaData) }; // 2160274606
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSOTS_SkillTreeNodeView_Statics::NewProp_EffectiveCost = { "EffectiveCost", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_SkillTreeNodeView, EffectiveCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectiveCost_MetaData), NewProp_EffectiveCost_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_SkillTreeNodeView_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_SkillTreeNodeView_Statics::NewProp_Definition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_SkillTreeNodeView_Statics::NewProp_Status_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_SkillTreeNodeView_Statics::NewProp_Status,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_SkillTreeNodeView_Statics::NewProp_EffectiveCost,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_SkillTreeNodeView_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_SkillTreeNodeView Property Definitions ************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_SkillTreeNodeView_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_SkillTree,
	nullptr,
	&NewStructOps,
	"SOTS_SkillTreeNodeView",
	Z_Construct_UScriptStruct_FSOTS_SkillTreeNodeView_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_SkillTreeNodeView_Statics::PropPointers),
	sizeof(FSOTS_SkillTreeNodeView),
	alignof(FSOTS_SkillTreeNodeView),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_SkillTreeNodeView_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_SkillTreeNodeView_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_SkillTreeNodeView()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_SkillTreeNodeView.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_SkillTreeNodeView.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_SkillTreeNodeView_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_SkillTreeNodeView.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_SkillTreeNodeView *********************************************

// ********** Begin ScriptStruct FSOTS_SkillTreeProfileState ***************************************
struct Z_Construct_UScriptStruct_FSOTS_SkillTreeProfileState_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_SkillTreeProfileState); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_SkillTreeProfileState); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Profile-level snapshot that can be serialized by an external save system.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Profile-level snapshot that can be serialized by an external save system." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Trees_MetaData[] = {
		{ "Category", "SOTS|SkillTree" },
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_SkillTreeProfileState constinit property declarations *******
	static const UECodeGen_Private::FStructPropertyParams NewProp_Trees_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Trees;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_SkillTreeProfileState constinit property declarations *********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_SkillTreeProfileState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_SkillTreeProfileState_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_SkillTreeProfileState;
class UScriptStruct* FSOTS_SkillTreeProfileState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_SkillTreeProfileState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_SkillTreeProfileState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_SkillTreeProfileState, (UObject*)Z_Construct_UPackage__Script_SOTS_SkillTree(), TEXT("SOTS_SkillTreeProfileState"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_SkillTreeProfileState.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_SkillTreeProfileState Property Definitions ******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_SkillTreeProfileState_Statics::NewProp_Trees_Inner = { "Trees", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSOTS_SkillTreeRuntimeState, METADATA_PARAMS(0, nullptr) }; // 2780143163
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSOTS_SkillTreeProfileState_Statics::NewProp_Trees = { "Trees", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_SkillTreeProfileState, Trees), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Trees_MetaData), NewProp_Trees_MetaData) }; // 2780143163
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_SkillTreeProfileState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_SkillTreeProfileState_Statics::NewProp_Trees_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_SkillTreeProfileState_Statics::NewProp_Trees,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_SkillTreeProfileState_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_SkillTreeProfileState Property Definitions ********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_SkillTreeProfileState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_SkillTree,
	nullptr,
	&NewStructOps,
	"SOTS_SkillTreeProfileState",
	Z_Construct_UScriptStruct_FSOTS_SkillTreeProfileState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_SkillTreeProfileState_Statics::PropPointers),
	sizeof(FSOTS_SkillTreeProfileState),
	alignof(FSOTS_SkillTreeProfileState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_SkillTreeProfileState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_SkillTreeProfileState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_SkillTreeProfileState()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_SkillTreeProfileState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_SkillTreeProfileState.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_SkillTreeProfileState_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_SkillTreeProfileState.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_SkillTreeProfileState *****************************************

// ********** Begin ScriptStruct FSOTS_SkillNodeLink ***********************************************
struct Z_Construct_UScriptStruct_FSOTS_SkillNodeLink_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_SkillNodeLink); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_SkillNodeLink); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Lightweight edge description for UI/layout tooling. Runtime logic primarily\n// relies on per-node ParentNodeIds, but trees may also author explicit links.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lightweight edge description for UI/layout tooling. Runtime logic primarily\nrelies on per-node ParentNodeIds, but trees may also author explicit links." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentNodeId_MetaData[] = {
		{ "Category", "SOTS|SkillTree" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Parent (source) node id.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Parent (source) node id." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildNodeId_MetaData[] = {
		{ "Category", "SOTS|SkillTree" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Child (destination) node id.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Child (destination) node id." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_SkillNodeLink constinit property declarations ***************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParentNodeId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ChildNodeId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_SkillNodeLink constinit property declarations *****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_SkillNodeLink>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_SkillNodeLink_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_SkillNodeLink;
class UScriptStruct* FSOTS_SkillNodeLink::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_SkillNodeLink.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_SkillNodeLink.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_SkillNodeLink, (UObject*)Z_Construct_UPackage__Script_SOTS_SkillTree(), TEXT("SOTS_SkillNodeLink"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_SkillNodeLink.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_SkillNodeLink Property Definitions **************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSOTS_SkillNodeLink_Statics::NewProp_ParentNodeId = { "ParentNodeId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_SkillNodeLink, ParentNodeId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentNodeId_MetaData), NewProp_ParentNodeId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSOTS_SkillNodeLink_Statics::NewProp_ChildNodeId = { "ChildNodeId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_SkillNodeLink, ChildNodeId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildNodeId_MetaData), NewProp_ChildNodeId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_SkillNodeLink_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_SkillNodeLink_Statics::NewProp_ParentNodeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_SkillNodeLink_Statics::NewProp_ChildNodeId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_SkillNodeLink_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_SkillNodeLink Property Definitions ****************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_SkillNodeLink_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_SkillTree,
	nullptr,
	&NewStructOps,
	"SOTS_SkillNodeLink",
	Z_Construct_UScriptStruct_FSOTS_SkillNodeLink_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_SkillNodeLink_Statics::PropPointers),
	sizeof(FSOTS_SkillNodeLink),
	alignof(FSOTS_SkillNodeLink),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_SkillNodeLink_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_SkillNodeLink_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_SkillNodeLink()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_SkillNodeLink.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_SkillNodeLink.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_SkillNodeLink_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_SkillNodeLink.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_SkillNodeLink *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeTypes_h__Script_SOTS_SkillTree_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESOTS_SkillNodeStatus_StaticEnum, TEXT("ESOTS_SkillNodeStatus"), &Z_Registration_Info_UEnum_ESOTS_SkillNodeStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2160274606U) },
		{ ESOTS_SkillNodeType_StaticEnum, TEXT("ESOTS_SkillNodeType"), &Z_Registration_Info_UEnum_ESOTS_SkillNodeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3171003353U) },
		{ ESOTS_SkillUnlockRule_StaticEnum, TEXT("ESOTS_SkillUnlockRule"), &Z_Registration_Info_UEnum_ESOTS_SkillUnlockRule, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 347159097U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSOTS_SkillNodeRequirements::StaticStruct, Z_Construct_UScriptStruct_FSOTS_SkillNodeRequirements_Statics::NewStructOps, TEXT("SOTS_SkillNodeRequirements"),&Z_Registration_Info_UScriptStruct_FSOTS_SkillNodeRequirements, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_SkillNodeRequirements), 3789687777U) },
		{ FSOTS_SkillNodeEffects::StaticStruct, Z_Construct_UScriptStruct_FSOTS_SkillNodeEffects_Statics::NewStructOps, TEXT("SOTS_SkillNodeEffects"),&Z_Registration_Info_UScriptStruct_FSOTS_SkillNodeEffects, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_SkillNodeEffects), 1620570712U) },
		{ FSOTS_SkillNodeDefinition::StaticStruct, Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition_Statics::NewStructOps, TEXT("SOTS_SkillNodeDefinition"),&Z_Registration_Info_UScriptStruct_FSOTS_SkillNodeDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_SkillNodeDefinition), 2741794244U) },
		{ FSOTS_SkillNodeState::StaticStruct, Z_Construct_UScriptStruct_FSOTS_SkillNodeState_Statics::NewStructOps, TEXT("SOTS_SkillNodeState"),&Z_Registration_Info_UScriptStruct_FSOTS_SkillNodeState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_SkillNodeState), 1019549346U) },
		{ FSOTS_UnlockedSkillNode::StaticStruct, Z_Construct_UScriptStruct_FSOTS_UnlockedSkillNode_Statics::NewStructOps, TEXT("SOTS_UnlockedSkillNode"),&Z_Registration_Info_UScriptStruct_FSOTS_UnlockedSkillNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_UnlockedSkillNode), 4285734239U) },
		{ FSOTS_SkillTreeRuntimeState::StaticStruct, Z_Construct_UScriptStruct_FSOTS_SkillTreeRuntimeState_Statics::NewStructOps, TEXT("SOTS_SkillTreeRuntimeState"),&Z_Registration_Info_UScriptStruct_FSOTS_SkillTreeRuntimeState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_SkillTreeRuntimeState), 2780143163U) },
		{ FSOTS_SkillTreeNodeView::StaticStruct, Z_Construct_UScriptStruct_FSOTS_SkillTreeNodeView_Statics::NewStructOps, TEXT("SOTS_SkillTreeNodeView"),&Z_Registration_Info_UScriptStruct_FSOTS_SkillTreeNodeView, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_SkillTreeNodeView), 330864293U) },
		{ FSOTS_SkillTreeProfileState::StaticStruct, Z_Construct_UScriptStruct_FSOTS_SkillTreeProfileState_Statics::NewStructOps, TEXT("SOTS_SkillTreeProfileState"),&Z_Registration_Info_UScriptStruct_FSOTS_SkillTreeProfileState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_SkillTreeProfileState), 816689775U) },
		{ FSOTS_SkillNodeLink::StaticStruct, Z_Construct_UScriptStruct_FSOTS_SkillNodeLink_Statics::NewStructOps, TEXT("SOTS_SkillNodeLink"),&Z_Registration_Info_UScriptStruct_FSOTS_SkillNodeLink, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_SkillNodeLink), 157350572U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeTypes_h__Script_SOTS_SkillTree_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeTypes_h__Script_SOTS_SkillTree_2024591840{
	TEXT("/Script/SOTS_SkillTree"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeTypes_h__Script_SOTS_SkillTree_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeTypes_h__Script_SOTS_SkillTree_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeTypes_h__Script_SOTS_SkillTree_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeTypes_h__Script_SOTS_SkillTree_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
