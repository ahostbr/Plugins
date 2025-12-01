// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTS_ProfileTypes.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_ProfileTypes() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
SOTS_PROFILESHARED_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_AbilityProfileData();
SOTS_PROFILESHARED_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_CharacterStateData();
SOTS_PROFILESHARED_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_FXProfileData();
SOTS_PROFILESHARED_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_GSMProfileData();
SOTS_PROFILESHARED_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_InventoryProfileData();
SOTS_PROFILESHARED_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_ItemSlotBinding();
SOTS_PROFILESHARED_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_MissionProfileData();
SOTS_PROFILESHARED_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_MMSSProfileData();
SOTS_PROFILESHARED_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_ProfileId();
SOTS_PROFILESHARED_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_ProfileMetadata();
SOTS_PROFILESHARED_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_ProfileSnapshot();
SOTS_PROFILESHARED_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_SerializedItem();
SOTS_PROFILESHARED_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_SkillTreeProfileData();
UPackage* Z_Construct_UPackage__Script_SOTS_ProfileShared();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FSOTS_ProfileId ***************************************************
struct Z_Construct_UScriptStruct_FSOTS_ProfileId_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_ProfileId); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_ProfileId); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProfileName_MetaData[] = {
		{ "Category", "SOTS|Profile" },
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotIndex_MetaData[] = {
		{ "Category", "SOTS|Profile" },
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_ProfileId constinit property declarations *******************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ProfileName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_ProfileId constinit property declarations *********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_ProfileId>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_ProfileId_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_ProfileId;
class UScriptStruct* FSOTS_ProfileId::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_ProfileId.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_ProfileId.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_ProfileId, (UObject*)Z_Construct_UPackage__Script_SOTS_ProfileShared(), TEXT("SOTS_ProfileId"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_ProfileId.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_ProfileId Property Definitions ******************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSOTS_ProfileId_Statics::NewProp_ProfileName = { "ProfileName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_ProfileId, ProfileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProfileName_MetaData), NewProp_ProfileName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSOTS_ProfileId_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_ProfileId, SlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotIndex_MetaData), NewProp_SlotIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_ProfileId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_ProfileId_Statics::NewProp_ProfileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_ProfileId_Statics::NewProp_SlotIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_ProfileId_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_ProfileId Property Definitions ********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_ProfileId_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_ProfileShared,
	nullptr,
	&NewStructOps,
	"SOTS_ProfileId",
	Z_Construct_UScriptStruct_FSOTS_ProfileId_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_ProfileId_Statics::PropPointers),
	sizeof(FSOTS_ProfileId),
	alignof(FSOTS_ProfileId),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_ProfileId_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_ProfileId_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_ProfileId()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_ProfileId.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_ProfileId.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_ProfileId_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_ProfileId.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_ProfileId *****************************************************

// ********** Begin ScriptStruct FSOTS_ProfileMetadata *********************************************
struct Z_Construct_UScriptStruct_FSOTS_ProfileMetadata_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_ProfileMetadata); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_ProfileMetadata); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "SOTS|Profile" },
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "SOTS|Profile" },
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastPlayedUtc_MetaData[] = {
		{ "Category", "SOTS|Profile" },
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalPlaySeconds_MetaData[] = {
		{ "Category", "SOTS|Profile" },
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_ProfileMetadata constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastPlayedUtc;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalPlaySeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_ProfileMetadata constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_ProfileMetadata>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_ProfileMetadata_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_ProfileMetadata;
class UScriptStruct* FSOTS_ProfileMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_ProfileMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_ProfileMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_ProfileMetadata, (UObject*)Z_Construct_UPackage__Script_SOTS_ProfileShared(), TEXT("SOTS_ProfileMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_ProfileMetadata.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_ProfileMetadata Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_ProfileMetadata_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_ProfileMetadata, Id), Z_Construct_UScriptStruct_FSOTS_ProfileId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) }; // 1693538078
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSOTS_ProfileMetadata_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_ProfileMetadata, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_ProfileMetadata_Statics::NewProp_LastPlayedUtc = { "LastPlayedUtc", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_ProfileMetadata, LastPlayedUtc), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastPlayedUtc_MetaData), NewProp_LastPlayedUtc_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSOTS_ProfileMetadata_Statics::NewProp_TotalPlaySeconds = { "TotalPlaySeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_ProfileMetadata, TotalPlaySeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalPlaySeconds_MetaData), NewProp_TotalPlaySeconds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_ProfileMetadata_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_ProfileMetadata_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_ProfileMetadata_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_ProfileMetadata_Statics::NewProp_LastPlayedUtc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_ProfileMetadata_Statics::NewProp_TotalPlaySeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_ProfileMetadata_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_ProfileMetadata Property Definitions **************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_ProfileMetadata_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_ProfileShared,
	nullptr,
	&NewStructOps,
	"SOTS_ProfileMetadata",
	Z_Construct_UScriptStruct_FSOTS_ProfileMetadata_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_ProfileMetadata_Statics::PropPointers),
	sizeof(FSOTS_ProfileMetadata),
	alignof(FSOTS_ProfileMetadata),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_ProfileMetadata_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_ProfileMetadata_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_ProfileMetadata()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_ProfileMetadata.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_ProfileMetadata.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_ProfileMetadata_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_ProfileMetadata.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_ProfileMetadata ***********************************************

// ********** Begin ScriptStruct FSOTS_CharacterStateData ******************************************
struct Z_Construct_UScriptStruct_FSOTS_CharacterStateData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_CharacterStateData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_CharacterStateData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// FSOTS_CharacterStateData stores per-character runtime state that needs\n// to be persisted, including StatValues which mirror USOTS_StatsComponent.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FSOTS_CharacterStateData stores per-character runtime state that needs\nto be persisted, including StatValues which mirror USOTS_StatsComponent." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "SOTS|Profile" },
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatValues_MetaData[] = {
		{ "Category", "SOTS|Profile" },
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementStateTags_MetaData[] = {
		{ "Category", "SOTS|Profile" },
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquippedAbilityTags_MetaData[] = {
		{ "Category", "SOTS|Profile" },
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_CharacterStateData constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StatValues_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StatValues_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_StatValues;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MovementStateTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EquippedAbilityTags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EquippedAbilityTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_CharacterStateData constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_CharacterStateData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_CharacterStateData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_CharacterStateData;
class UScriptStruct* FSOTS_CharacterStateData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_CharacterStateData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_CharacterStateData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_CharacterStateData, (UObject*)Z_Construct_UPackage__Script_SOTS_ProfileShared(), TEXT("SOTS_CharacterStateData"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_CharacterStateData.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_CharacterStateData Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_CharacterStateData_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_CharacterStateData, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_CharacterStateData_Statics::NewProp_StatValues_ValueProp = { "StatValues", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_CharacterStateData_Statics::NewProp_StatValues_Key_KeyProp = { "StatValues_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSOTS_CharacterStateData_Statics::NewProp_StatValues = { "StatValues", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_CharacterStateData, StatValues), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatValues_MetaData), NewProp_StatValues_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_CharacterStateData_Statics::NewProp_MovementStateTags = { "MovementStateTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_CharacterStateData, MovementStateTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementStateTags_MetaData), NewProp_MovementStateTags_MetaData) }; // 3438578166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_CharacterStateData_Statics::NewProp_EquippedAbilityTags_Inner = { "EquippedAbilityTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSOTS_CharacterStateData_Statics::NewProp_EquippedAbilityTags = { "EquippedAbilityTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_CharacterStateData, EquippedAbilityTags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquippedAbilityTags_MetaData), NewProp_EquippedAbilityTags_MetaData) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_CharacterStateData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_CharacterStateData_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_CharacterStateData_Statics::NewProp_StatValues_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_CharacterStateData_Statics::NewProp_StatValues_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_CharacterStateData_Statics::NewProp_StatValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_CharacterStateData_Statics::NewProp_MovementStateTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_CharacterStateData_Statics::NewProp_EquippedAbilityTags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_CharacterStateData_Statics::NewProp_EquippedAbilityTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_CharacterStateData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_CharacterStateData Property Definitions ***********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_CharacterStateData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_ProfileShared,
	nullptr,
	&NewStructOps,
	"SOTS_CharacterStateData",
	Z_Construct_UScriptStruct_FSOTS_CharacterStateData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_CharacterStateData_Statics::PropPointers),
	sizeof(FSOTS_CharacterStateData),
	alignof(FSOTS_CharacterStateData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_CharacterStateData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_CharacterStateData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_CharacterStateData()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_CharacterStateData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_CharacterStateData.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_CharacterStateData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_CharacterStateData.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_CharacterStateData ********************************************

// ********** Begin ScriptStruct FSOTS_SerializedItem **********************************************
struct Z_Construct_UScriptStruct_FSOTS_SerializedItem_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_SerializedItem); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_SerializedItem); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[] = {
		{ "Category", "SOTS|Inventory" },
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[] = {
		{ "Category", "SOTS|Inventory" },
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_SerializedItem constinit property declarations **************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_SerializedItem constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_SerializedItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_SerializedItem_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_SerializedItem;
class UScriptStruct* FSOTS_SerializedItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_SerializedItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_SerializedItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_SerializedItem, (UObject*)Z_Construct_UPackage__Script_SOTS_ProfileShared(), TEXT("SOTS_SerializedItem"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_SerializedItem.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_SerializedItem Property Definitions *************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSOTS_SerializedItem_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_SerializedItem, ItemId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemId_MetaData), NewProp_ItemId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSOTS_SerializedItem_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_SerializedItem, Quantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quantity_MetaData), NewProp_Quantity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_SerializedItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_SerializedItem_Statics::NewProp_ItemId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_SerializedItem_Statics::NewProp_Quantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_SerializedItem_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_SerializedItem Property Definitions ***************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_SerializedItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_ProfileShared,
	nullptr,
	&NewStructOps,
	"SOTS_SerializedItem",
	Z_Construct_UScriptStruct_FSOTS_SerializedItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_SerializedItem_Statics::PropPointers),
	sizeof(FSOTS_SerializedItem),
	alignof(FSOTS_SerializedItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_SerializedItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_SerializedItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_SerializedItem()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_SerializedItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_SerializedItem.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_SerializedItem_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_SerializedItem.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_SerializedItem ************************************************

// ********** Begin ScriptStruct FSOTS_ItemSlotBinding *********************************************
struct Z_Construct_UScriptStruct_FSOTS_ItemSlotBinding_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_ItemSlotBinding); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_ItemSlotBinding); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotIndex_MetaData[] = {
		{ "Category", "SOTS|Inventory" },
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[] = {
		{ "Category", "SOTS|Inventory" },
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_ItemSlotBinding constinit property declarations *************
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_ItemSlotBinding constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_ItemSlotBinding>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_ItemSlotBinding_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_ItemSlotBinding;
class UScriptStruct* FSOTS_ItemSlotBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_ItemSlotBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_ItemSlotBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_ItemSlotBinding, (UObject*)Z_Construct_UPackage__Script_SOTS_ProfileShared(), TEXT("SOTS_ItemSlotBinding"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_ItemSlotBinding.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_ItemSlotBinding Property Definitions ************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSOTS_ItemSlotBinding_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_ItemSlotBinding, SlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotIndex_MetaData), NewProp_SlotIndex_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSOTS_ItemSlotBinding_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_ItemSlotBinding, ItemId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemId_MetaData), NewProp_ItemId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_ItemSlotBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_ItemSlotBinding_Statics::NewProp_SlotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_ItemSlotBinding_Statics::NewProp_ItemId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_ItemSlotBinding_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_ItemSlotBinding Property Definitions **************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_ItemSlotBinding_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_ProfileShared,
	nullptr,
	&NewStructOps,
	"SOTS_ItemSlotBinding",
	Z_Construct_UScriptStruct_FSOTS_ItemSlotBinding_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_ItemSlotBinding_Statics::PropPointers),
	sizeof(FSOTS_ItemSlotBinding),
	alignof(FSOTS_ItemSlotBinding),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_ItemSlotBinding_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_ItemSlotBinding_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_ItemSlotBinding()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_ItemSlotBinding.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_ItemSlotBinding.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_ItemSlotBinding_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_ItemSlotBinding.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_ItemSlotBinding ***********************************************

// ********** Begin ScriptStruct FSOTS_GSMProfileData **********************************************
struct Z_Construct_UScriptStruct_FSOTS_GSMProfileData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_GSMProfileData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_GSMProfileData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalAlertLevel_MetaData[] = {
		{ "Category", "SOTS|Profile" },
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAlertTier_MetaData[] = {
		{ "Category", "SOTS|Profile" },
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PersistentStealthFlags_MetaData[] = {
		{ "Category", "SOTS|Profile" },
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_GSMProfileData constinit property declarations **************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GlobalAlertLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentAlertTier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PersistentStealthFlags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PersistentStealthFlags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_GSMProfileData constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_GSMProfileData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_GSMProfileData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_GSMProfileData;
class UScriptStruct* FSOTS_GSMProfileData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_GSMProfileData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_GSMProfileData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_GSMProfileData, (UObject*)Z_Construct_UPackage__Script_SOTS_ProfileShared(), TEXT("SOTS_GSMProfileData"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_GSMProfileData.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_GSMProfileData Property Definitions *************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_GSMProfileData_Statics::NewProp_GlobalAlertLevel = { "GlobalAlertLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_GSMProfileData, GlobalAlertLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalAlertLevel_MetaData), NewProp_GlobalAlertLevel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_GSMProfileData_Statics::NewProp_CurrentAlertTier = { "CurrentAlertTier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_GSMProfileData, CurrentAlertTier), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentAlertTier_MetaData), NewProp_CurrentAlertTier_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_GSMProfileData_Statics::NewProp_PersistentStealthFlags_Inner = { "PersistentStealthFlags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSOTS_GSMProfileData_Statics::NewProp_PersistentStealthFlags = { "PersistentStealthFlags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_GSMProfileData, PersistentStealthFlags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PersistentStealthFlags_MetaData), NewProp_PersistentStealthFlags_MetaData) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_GSMProfileData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_GSMProfileData_Statics::NewProp_GlobalAlertLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_GSMProfileData_Statics::NewProp_CurrentAlertTier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_GSMProfileData_Statics::NewProp_PersistentStealthFlags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_GSMProfileData_Statics::NewProp_PersistentStealthFlags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_GSMProfileData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_GSMProfileData Property Definitions ***************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_GSMProfileData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_ProfileShared,
	nullptr,
	&NewStructOps,
	"SOTS_GSMProfileData",
	Z_Construct_UScriptStruct_FSOTS_GSMProfileData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_GSMProfileData_Statics::PropPointers),
	sizeof(FSOTS_GSMProfileData),
	alignof(FSOTS_GSMProfileData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_GSMProfileData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_GSMProfileData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_GSMProfileData()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_GSMProfileData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_GSMProfileData.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_GSMProfileData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_GSMProfileData.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_GSMProfileData ************************************************

// ********** Begin ScriptStruct FSOTS_AbilityProfileData ******************************************
struct Z_Construct_UScriptStruct_FSOTS_AbilityProfileData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_AbilityProfileData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_AbilityProfileData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrantedAbilityTags_MetaData[] = {
		{ "Category", "SOTS|Profile" },
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityRanks_MetaData[] = {
		{ "Category", "SOTS|Profile" },
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CooldownsRemaining_MetaData[] = {
		{ "Category", "SOTS|Profile" },
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_AbilityProfileData constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedAbilityTags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedAbilityTags;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AbilityRanks_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityRanks_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AbilityRanks;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CooldownsRemaining_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CooldownsRemaining_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CooldownsRemaining;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_AbilityProfileData constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_AbilityProfileData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_AbilityProfileData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_AbilityProfileData;
class UScriptStruct* FSOTS_AbilityProfileData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_AbilityProfileData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_AbilityProfileData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_AbilityProfileData, (UObject*)Z_Construct_UPackage__Script_SOTS_ProfileShared(), TEXT("SOTS_AbilityProfileData"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_AbilityProfileData.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_AbilityProfileData Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_AbilityProfileData_Statics::NewProp_GrantedAbilityTags_Inner = { "GrantedAbilityTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSOTS_AbilityProfileData_Statics::NewProp_GrantedAbilityTags = { "GrantedAbilityTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_AbilityProfileData, GrantedAbilityTags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrantedAbilityTags_MetaData), NewProp_GrantedAbilityTags_MetaData) }; // 517357616
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSOTS_AbilityProfileData_Statics::NewProp_AbilityRanks_ValueProp = { "AbilityRanks", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_AbilityProfileData_Statics::NewProp_AbilityRanks_Key_KeyProp = { "AbilityRanks_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSOTS_AbilityProfileData_Statics::NewProp_AbilityRanks = { "AbilityRanks", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_AbilityProfileData, AbilityRanks), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityRanks_MetaData), NewProp_AbilityRanks_MetaData) }; // 517357616
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_AbilityProfileData_Statics::NewProp_CooldownsRemaining_ValueProp = { "CooldownsRemaining", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_AbilityProfileData_Statics::NewProp_CooldownsRemaining_Key_KeyProp = { "CooldownsRemaining_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSOTS_AbilityProfileData_Statics::NewProp_CooldownsRemaining = { "CooldownsRemaining", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_AbilityProfileData, CooldownsRemaining), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CooldownsRemaining_MetaData), NewProp_CooldownsRemaining_MetaData) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_AbilityProfileData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_AbilityProfileData_Statics::NewProp_GrantedAbilityTags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_AbilityProfileData_Statics::NewProp_GrantedAbilityTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_AbilityProfileData_Statics::NewProp_AbilityRanks_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_AbilityProfileData_Statics::NewProp_AbilityRanks_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_AbilityProfileData_Statics::NewProp_AbilityRanks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_AbilityProfileData_Statics::NewProp_CooldownsRemaining_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_AbilityProfileData_Statics::NewProp_CooldownsRemaining_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_AbilityProfileData_Statics::NewProp_CooldownsRemaining,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_AbilityProfileData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_AbilityProfileData Property Definitions ***********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_AbilityProfileData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_ProfileShared,
	nullptr,
	&NewStructOps,
	"SOTS_AbilityProfileData",
	Z_Construct_UScriptStruct_FSOTS_AbilityProfileData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_AbilityProfileData_Statics::PropPointers),
	sizeof(FSOTS_AbilityProfileData),
	alignof(FSOTS_AbilityProfileData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_AbilityProfileData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_AbilityProfileData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_AbilityProfileData()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_AbilityProfileData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_AbilityProfileData.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_AbilityProfileData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_AbilityProfileData.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_AbilityProfileData ********************************************

// ********** Begin ScriptStruct FSOTS_SkillTreeProfileData ****************************************
struct Z_Construct_UScriptStruct_FSOTS_SkillTreeProfileData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_SkillTreeProfileData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_SkillTreeProfileData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnlockedSkillNodes_MetaData[] = {
		{ "Category", "SOTS|Profile|SkillTree" },
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnspentSkillPoints_MetaData[] = {
		{ "Category", "SOTS|Profile|SkillTree" },
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_SkillTreeProfileData constinit property declarations ********
	static const UECodeGen_Private::FStructPropertyParams NewProp_UnlockedSkillNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UnlockedSkillNodes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UnspentSkillPoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_SkillTreeProfileData constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_SkillTreeProfileData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_SkillTreeProfileData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_SkillTreeProfileData;
class UScriptStruct* FSOTS_SkillTreeProfileData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_SkillTreeProfileData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_SkillTreeProfileData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_SkillTreeProfileData, (UObject*)Z_Construct_UPackage__Script_SOTS_ProfileShared(), TEXT("SOTS_SkillTreeProfileData"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_SkillTreeProfileData.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_SkillTreeProfileData Property Definitions *******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_SkillTreeProfileData_Statics::NewProp_UnlockedSkillNodes_Inner = { "UnlockedSkillNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSOTS_SkillTreeProfileData_Statics::NewProp_UnlockedSkillNodes = { "UnlockedSkillNodes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_SkillTreeProfileData, UnlockedSkillNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnlockedSkillNodes_MetaData), NewProp_UnlockedSkillNodes_MetaData) }; // 517357616
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSOTS_SkillTreeProfileData_Statics::NewProp_UnspentSkillPoints = { "UnspentSkillPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_SkillTreeProfileData, UnspentSkillPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnspentSkillPoints_MetaData), NewProp_UnspentSkillPoints_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_SkillTreeProfileData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_SkillTreeProfileData_Statics::NewProp_UnlockedSkillNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_SkillTreeProfileData_Statics::NewProp_UnlockedSkillNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_SkillTreeProfileData_Statics::NewProp_UnspentSkillPoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_SkillTreeProfileData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_SkillTreeProfileData Property Definitions *********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_SkillTreeProfileData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_ProfileShared,
	nullptr,
	&NewStructOps,
	"SOTS_SkillTreeProfileData",
	Z_Construct_UScriptStruct_FSOTS_SkillTreeProfileData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_SkillTreeProfileData_Statics::PropPointers),
	sizeof(FSOTS_SkillTreeProfileData),
	alignof(FSOTS_SkillTreeProfileData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_SkillTreeProfileData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_SkillTreeProfileData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_SkillTreeProfileData()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_SkillTreeProfileData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_SkillTreeProfileData.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_SkillTreeProfileData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_SkillTreeProfileData.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_SkillTreeProfileData ******************************************

// ********** Begin ScriptStruct FSOTS_InventoryProfileData ****************************************
struct Z_Construct_UScriptStruct_FSOTS_InventoryProfileData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_InventoryProfileData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_InventoryProfileData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CarriedItems_MetaData[] = {
		{ "Category", "SOTS|Profile" },
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StashItems_MetaData[] = {
		{ "Category", "SOTS|Profile" },
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuickSlots_MetaData[] = {
		{ "Category", "SOTS|Profile" },
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_InventoryProfileData constinit property declarations ********
	static const UECodeGen_Private::FStructPropertyParams NewProp_CarriedItems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CarriedItems;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StashItems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StashItems;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QuickSlots_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_QuickSlots;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_InventoryProfileData constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_InventoryProfileData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_InventoryProfileData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_InventoryProfileData;
class UScriptStruct* FSOTS_InventoryProfileData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_InventoryProfileData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_InventoryProfileData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_InventoryProfileData, (UObject*)Z_Construct_UPackage__Script_SOTS_ProfileShared(), TEXT("SOTS_InventoryProfileData"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_InventoryProfileData.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_InventoryProfileData Property Definitions *******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_InventoryProfileData_Statics::NewProp_CarriedItems_Inner = { "CarriedItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSOTS_SerializedItem, METADATA_PARAMS(0, nullptr) }; // 767104650
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSOTS_InventoryProfileData_Statics::NewProp_CarriedItems = { "CarriedItems", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_InventoryProfileData, CarriedItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CarriedItems_MetaData), NewProp_CarriedItems_MetaData) }; // 767104650
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_InventoryProfileData_Statics::NewProp_StashItems_Inner = { "StashItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSOTS_SerializedItem, METADATA_PARAMS(0, nullptr) }; // 767104650
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSOTS_InventoryProfileData_Statics::NewProp_StashItems = { "StashItems", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_InventoryProfileData, StashItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StashItems_MetaData), NewProp_StashItems_MetaData) }; // 767104650
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_InventoryProfileData_Statics::NewProp_QuickSlots_Inner = { "QuickSlots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSOTS_ItemSlotBinding, METADATA_PARAMS(0, nullptr) }; // 3298278532
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSOTS_InventoryProfileData_Statics::NewProp_QuickSlots = { "QuickSlots", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_InventoryProfileData, QuickSlots), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuickSlots_MetaData), NewProp_QuickSlots_MetaData) }; // 3298278532
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_InventoryProfileData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_InventoryProfileData_Statics::NewProp_CarriedItems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_InventoryProfileData_Statics::NewProp_CarriedItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_InventoryProfileData_Statics::NewProp_StashItems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_InventoryProfileData_Statics::NewProp_StashItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_InventoryProfileData_Statics::NewProp_QuickSlots_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_InventoryProfileData_Statics::NewProp_QuickSlots,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_InventoryProfileData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_InventoryProfileData Property Definitions *********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_InventoryProfileData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_ProfileShared,
	nullptr,
	&NewStructOps,
	"SOTS_InventoryProfileData",
	Z_Construct_UScriptStruct_FSOTS_InventoryProfileData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_InventoryProfileData_Statics::PropPointers),
	sizeof(FSOTS_InventoryProfileData),
	alignof(FSOTS_InventoryProfileData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_InventoryProfileData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_InventoryProfileData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_InventoryProfileData()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_InventoryProfileData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_InventoryProfileData.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_InventoryProfileData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_InventoryProfileData.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_InventoryProfileData ******************************************

// ********** Begin ScriptStruct FSOTS_MissionProfileData ******************************************
struct Z_Construct_UScriptStruct_FSOTS_MissionProfileData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_MissionProfileData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_MissionProfileData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveMissionId_MetaData[] = {
		{ "Category", "SOTS|Mission" },
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompletedMissionIds_MetaData[] = {
		{ "Category", "SOTS|Mission" },
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailedMissionIds_MetaData[] = {
		{ "Category", "SOTS|Mission" },
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastMissionId_MetaData[] = {
		{ "Category", "SOTS|Mission" },
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastFinalScore_MetaData[] = {
		{ "Category", "SOTS|Mission" },
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastDurationSeconds_MetaData[] = {
		{ "Category", "SOTS|Mission" },
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLastMissionCompleted_MetaData[] = {
		{ "Category", "SOTS|Mission" },
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLastMissionFailed_MetaData[] = {
		{ "Category", "SOTS|Mission" },
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_MissionProfileData constinit property declarations **********
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActiveMissionId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CompletedMissionIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CompletedMissionIds;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FailedMissionIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FailedMissionIds;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LastMissionId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LastFinalScore;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LastDurationSeconds;
	static void NewProp_bLastMissionCompleted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLastMissionCompleted;
	static void NewProp_bLastMissionFailed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLastMissionFailed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_MissionProfileData constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_MissionProfileData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_MissionProfileData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_MissionProfileData;
class UScriptStruct* FSOTS_MissionProfileData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_MissionProfileData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_MissionProfileData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_MissionProfileData, (UObject*)Z_Construct_UPackage__Script_SOTS_ProfileShared(), TEXT("SOTS_MissionProfileData"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_MissionProfileData.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_MissionProfileData Property Definitions *********************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSOTS_MissionProfileData_Statics::NewProp_ActiveMissionId = { "ActiveMissionId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_MissionProfileData, ActiveMissionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveMissionId_MetaData), NewProp_ActiveMissionId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSOTS_MissionProfileData_Statics::NewProp_CompletedMissionIds_Inner = { "CompletedMissionIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSOTS_MissionProfileData_Statics::NewProp_CompletedMissionIds = { "CompletedMissionIds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_MissionProfileData, CompletedMissionIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompletedMissionIds_MetaData), NewProp_CompletedMissionIds_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSOTS_MissionProfileData_Statics::NewProp_FailedMissionIds_Inner = { "FailedMissionIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSOTS_MissionProfileData_Statics::NewProp_FailedMissionIds = { "FailedMissionIds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_MissionProfileData, FailedMissionIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailedMissionIds_MetaData), NewProp_FailedMissionIds_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSOTS_MissionProfileData_Statics::NewProp_LastMissionId = { "LastMissionId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_MissionProfileData, LastMissionId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastMissionId_MetaData), NewProp_LastMissionId_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_MissionProfileData_Statics::NewProp_LastFinalScore = { "LastFinalScore", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_MissionProfileData, LastFinalScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastFinalScore_MetaData), NewProp_LastFinalScore_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_MissionProfileData_Statics::NewProp_LastDurationSeconds = { "LastDurationSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_MissionProfileData, LastDurationSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastDurationSeconds_MetaData), NewProp_LastDurationSeconds_MetaData) };
void Z_Construct_UScriptStruct_FSOTS_MissionProfileData_Statics::NewProp_bLastMissionCompleted_SetBit(void* Obj)
{
	((FSOTS_MissionProfileData*)Obj)->bLastMissionCompleted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSOTS_MissionProfileData_Statics::NewProp_bLastMissionCompleted = { "bLastMissionCompleted", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSOTS_MissionProfileData), &Z_Construct_UScriptStruct_FSOTS_MissionProfileData_Statics::NewProp_bLastMissionCompleted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLastMissionCompleted_MetaData), NewProp_bLastMissionCompleted_MetaData) };
void Z_Construct_UScriptStruct_FSOTS_MissionProfileData_Statics::NewProp_bLastMissionFailed_SetBit(void* Obj)
{
	((FSOTS_MissionProfileData*)Obj)->bLastMissionFailed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSOTS_MissionProfileData_Statics::NewProp_bLastMissionFailed = { "bLastMissionFailed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSOTS_MissionProfileData), &Z_Construct_UScriptStruct_FSOTS_MissionProfileData_Statics::NewProp_bLastMissionFailed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLastMissionFailed_MetaData), NewProp_bLastMissionFailed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_MissionProfileData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionProfileData_Statics::NewProp_ActiveMissionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionProfileData_Statics::NewProp_CompletedMissionIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionProfileData_Statics::NewProp_CompletedMissionIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionProfileData_Statics::NewProp_FailedMissionIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionProfileData_Statics::NewProp_FailedMissionIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionProfileData_Statics::NewProp_LastMissionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionProfileData_Statics::NewProp_LastFinalScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionProfileData_Statics::NewProp_LastDurationSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionProfileData_Statics::NewProp_bLastMissionCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionProfileData_Statics::NewProp_bLastMissionFailed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_MissionProfileData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_MissionProfileData Property Definitions ***********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_MissionProfileData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_ProfileShared,
	nullptr,
	&NewStructOps,
	"SOTS_MissionProfileData",
	Z_Construct_UScriptStruct_FSOTS_MissionProfileData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_MissionProfileData_Statics::PropPointers),
	sizeof(FSOTS_MissionProfileData),
	alignof(FSOTS_MissionProfileData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_MissionProfileData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_MissionProfileData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_MissionProfileData()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_MissionProfileData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_MissionProfileData.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_MissionProfileData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_MissionProfileData.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_MissionProfileData ********************************************

// ********** Begin ScriptStruct FSOTS_MMSSProfileData *********************************************
struct Z_Construct_UScriptStruct_FSOTS_MMSSProfileData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_MMSSProfileData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_MMSSProfileData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMusicRoleTag_MetaData[] = {
		{ "Category", "SOTS|Profile" },
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTrackId_MetaData[] = {
		{ "Category", "SOTS|Profile" },
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackPositionSeconds_MetaData[] = {
		{ "Category", "SOTS|Profile" },
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_MMSSProfileData constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentMusicRoleTag;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentTrackId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlaybackPositionSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_MMSSProfileData constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_MMSSProfileData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_MMSSProfileData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_MMSSProfileData;
class UScriptStruct* FSOTS_MMSSProfileData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_MMSSProfileData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_MMSSProfileData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_MMSSProfileData, (UObject*)Z_Construct_UPackage__Script_SOTS_ProfileShared(), TEXT("SOTS_MMSSProfileData"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_MMSSProfileData.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_MMSSProfileData Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_MMSSProfileData_Statics::NewProp_CurrentMusicRoleTag = { "CurrentMusicRoleTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_MMSSProfileData, CurrentMusicRoleTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMusicRoleTag_MetaData), NewProp_CurrentMusicRoleTag_MetaData) }; // 517357616
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSOTS_MMSSProfileData_Statics::NewProp_CurrentTrackId = { "CurrentTrackId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_MMSSProfileData, CurrentTrackId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTrackId_MetaData), NewProp_CurrentTrackId_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_MMSSProfileData_Statics::NewProp_PlaybackPositionSeconds = { "PlaybackPositionSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_MMSSProfileData, PlaybackPositionSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaybackPositionSeconds_MetaData), NewProp_PlaybackPositionSeconds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_MMSSProfileData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MMSSProfileData_Statics::NewProp_CurrentMusicRoleTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MMSSProfileData_Statics::NewProp_CurrentTrackId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MMSSProfileData_Statics::NewProp_PlaybackPositionSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_MMSSProfileData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_MMSSProfileData Property Definitions **************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_MMSSProfileData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_ProfileShared,
	nullptr,
	&NewStructOps,
	"SOTS_MMSSProfileData",
	Z_Construct_UScriptStruct_FSOTS_MMSSProfileData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_MMSSProfileData_Statics::PropPointers),
	sizeof(FSOTS_MMSSProfileData),
	alignof(FSOTS_MMSSProfileData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_MMSSProfileData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_MMSSProfileData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_MMSSProfileData()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_MMSSProfileData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_MMSSProfileData.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_MMSSProfileData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_MMSSProfileData.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_MMSSProfileData ***********************************************

// ********** Begin ScriptStruct FSOTS_FXProfileData ***********************************************
struct Z_Construct_UScriptStruct_FSOTS_FXProfileData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_FXProfileData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_FXProfileData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBloodEnabled_MetaData[] = {
		{ "Category", "SOTS|Profile|FX" },
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHighIntensityFX_MetaData[] = {
		{ "Category", "SOTS|Profile|FX" },
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCameraMotionFXEnabled_MetaData[] = {
		{ "Category", "SOTS|Profile|FX" },
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_FXProfileData constinit property declarations ***************
	static void NewProp_bBloodEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBloodEnabled;
	static void NewProp_bHighIntensityFX_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHighIntensityFX;
	static void NewProp_bCameraMotionFXEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCameraMotionFXEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_FXProfileData constinit property declarations *****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_FXProfileData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_FXProfileData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_FXProfileData;
class UScriptStruct* FSOTS_FXProfileData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_FXProfileData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_FXProfileData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_FXProfileData, (UObject*)Z_Construct_UPackage__Script_SOTS_ProfileShared(), TEXT("SOTS_FXProfileData"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_FXProfileData.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_FXProfileData Property Definitions **************************
void Z_Construct_UScriptStruct_FSOTS_FXProfileData_Statics::NewProp_bBloodEnabled_SetBit(void* Obj)
{
	((FSOTS_FXProfileData*)Obj)->bBloodEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSOTS_FXProfileData_Statics::NewProp_bBloodEnabled = { "bBloodEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSOTS_FXProfileData), &Z_Construct_UScriptStruct_FSOTS_FXProfileData_Statics::NewProp_bBloodEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBloodEnabled_MetaData), NewProp_bBloodEnabled_MetaData) };
void Z_Construct_UScriptStruct_FSOTS_FXProfileData_Statics::NewProp_bHighIntensityFX_SetBit(void* Obj)
{
	((FSOTS_FXProfileData*)Obj)->bHighIntensityFX = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSOTS_FXProfileData_Statics::NewProp_bHighIntensityFX = { "bHighIntensityFX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSOTS_FXProfileData), &Z_Construct_UScriptStruct_FSOTS_FXProfileData_Statics::NewProp_bHighIntensityFX_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHighIntensityFX_MetaData), NewProp_bHighIntensityFX_MetaData) };
void Z_Construct_UScriptStruct_FSOTS_FXProfileData_Statics::NewProp_bCameraMotionFXEnabled_SetBit(void* Obj)
{
	((FSOTS_FXProfileData*)Obj)->bCameraMotionFXEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSOTS_FXProfileData_Statics::NewProp_bCameraMotionFXEnabled = { "bCameraMotionFXEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSOTS_FXProfileData), &Z_Construct_UScriptStruct_FSOTS_FXProfileData_Statics::NewProp_bCameraMotionFXEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCameraMotionFXEnabled_MetaData), NewProp_bCameraMotionFXEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_FXProfileData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_FXProfileData_Statics::NewProp_bBloodEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_FXProfileData_Statics::NewProp_bHighIntensityFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_FXProfileData_Statics::NewProp_bCameraMotionFXEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_FXProfileData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_FXProfileData Property Definitions ****************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_FXProfileData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_ProfileShared,
	nullptr,
	&NewStructOps,
	"SOTS_FXProfileData",
	Z_Construct_UScriptStruct_FSOTS_FXProfileData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_FXProfileData_Statics::PropPointers),
	sizeof(FSOTS_FXProfileData),
	alignof(FSOTS_FXProfileData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_FXProfileData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_FXProfileData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_FXProfileData()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_FXProfileData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_FXProfileData.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_FXProfileData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_FXProfileData.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_FXProfileData *************************************************

// ********** Begin ScriptStruct FSOTS_ProfileSnapshot *********************************************
struct Z_Construct_UScriptStruct_FSOTS_ProfileSnapshot_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_ProfileSnapshot); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_ProfileSnapshot); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// FSOTS_ProfileSnapshot is the single source of truth for persistent SOTS\n// player profile data. It aggregates slices from multiple SOTS plugins\n// (stats, inventory, missions, music, FX, abilities, etc.).\n// DevTools: Profile validators and debug dumps will treat this as the canonical layout.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FSOTS_ProfileSnapshot is the single source of truth for persistent SOTS\nplayer profile data. It aggregates slices from multiple SOTS plugins\n(stats, inventory, missions, music, FX, abilities, etc.).\nDevTools: Profile validators and debug dumps will treat this as the canonical layout." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Meta_MetaData[] = {
		{ "Category", "SOTS|Profile" },
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacter_MetaData[] = {
		{ "Category", "SOTS|Profile" },
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GSM_MetaData[] = {
		{ "Category", "SOTS|Profile" },
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ability_MetaData[] = {
		{ "Category", "SOTS|Profile" },
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillTree_MetaData[] = {
		{ "Category", "SOTS|Profile" },
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[] = {
		{ "Category", "SOTS|Profile" },
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Missions_MetaData[] = {
		{ "Category", "SOTS|Profile" },
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Music_MetaData[] = {
		{ "Category", "SOTS|Profile" },
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FX_MetaData[] = {
		{ "Category", "SOTS|Profile" },
		{ "ModuleRelativePath", "Public/SOTS_ProfileTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_ProfileSnapshot constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Meta;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerCharacter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GSM;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Ability;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SkillTree;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Inventory;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Missions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Music;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FX;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_ProfileSnapshot constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_ProfileSnapshot>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_ProfileSnapshot_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_ProfileSnapshot;
class UScriptStruct* FSOTS_ProfileSnapshot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_ProfileSnapshot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_ProfileSnapshot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_ProfileSnapshot, (UObject*)Z_Construct_UPackage__Script_SOTS_ProfileShared(), TEXT("SOTS_ProfileSnapshot"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_ProfileSnapshot.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_ProfileSnapshot Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_ProfileSnapshot_Statics::NewProp_Meta = { "Meta", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_ProfileSnapshot, Meta), Z_Construct_UScriptStruct_FSOTS_ProfileMetadata, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Meta_MetaData), NewProp_Meta_MetaData) }; // 3689105285
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_ProfileSnapshot_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_ProfileSnapshot, PlayerCharacter), Z_Construct_UScriptStruct_FSOTS_CharacterStateData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCharacter_MetaData), NewProp_PlayerCharacter_MetaData) }; // 165950162
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_ProfileSnapshot_Statics::NewProp_GSM = { "GSM", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_ProfileSnapshot, GSM), Z_Construct_UScriptStruct_FSOTS_GSMProfileData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GSM_MetaData), NewProp_GSM_MetaData) }; // 270540302
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_ProfileSnapshot_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_ProfileSnapshot, Ability), Z_Construct_UScriptStruct_FSOTS_AbilityProfileData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ability_MetaData), NewProp_Ability_MetaData) }; // 1934971424
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_ProfileSnapshot_Statics::NewProp_SkillTree = { "SkillTree", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_ProfileSnapshot, SkillTree), Z_Construct_UScriptStruct_FSOTS_SkillTreeProfileData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillTree_MetaData), NewProp_SkillTree_MetaData) }; // 1443305357
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_ProfileSnapshot_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_ProfileSnapshot, Inventory), Z_Construct_UScriptStruct_FSOTS_InventoryProfileData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inventory_MetaData), NewProp_Inventory_MetaData) }; // 4177627712
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_ProfileSnapshot_Statics::NewProp_Missions = { "Missions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_ProfileSnapshot, Missions), Z_Construct_UScriptStruct_FSOTS_MissionProfileData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Missions_MetaData), NewProp_Missions_MetaData) }; // 3422280594
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_ProfileSnapshot_Statics::NewProp_Music = { "Music", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_ProfileSnapshot, Music), Z_Construct_UScriptStruct_FSOTS_MMSSProfileData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Music_MetaData), NewProp_Music_MetaData) }; // 2205190582
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_ProfileSnapshot_Statics::NewProp_FX = { "FX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_ProfileSnapshot, FX), Z_Construct_UScriptStruct_FSOTS_FXProfileData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FX_MetaData), NewProp_FX_MetaData) }; // 1785525197
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_ProfileSnapshot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_ProfileSnapshot_Statics::NewProp_Meta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_ProfileSnapshot_Statics::NewProp_PlayerCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_ProfileSnapshot_Statics::NewProp_GSM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_ProfileSnapshot_Statics::NewProp_Ability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_ProfileSnapshot_Statics::NewProp_SkillTree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_ProfileSnapshot_Statics::NewProp_Inventory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_ProfileSnapshot_Statics::NewProp_Missions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_ProfileSnapshot_Statics::NewProp_Music,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_ProfileSnapshot_Statics::NewProp_FX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_ProfileSnapshot_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_ProfileSnapshot Property Definitions **************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_ProfileSnapshot_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_ProfileShared,
	nullptr,
	&NewStructOps,
	"SOTS_ProfileSnapshot",
	Z_Construct_UScriptStruct_FSOTS_ProfileSnapshot_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_ProfileSnapshot_Statics::PropPointers),
	sizeof(FSOTS_ProfileSnapshot),
	alignof(FSOTS_ProfileSnapshot),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_ProfileSnapshot_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_ProfileSnapshot_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_ProfileSnapshot()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_ProfileSnapshot.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_ProfileSnapshot.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_ProfileSnapshot_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_ProfileSnapshot.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_ProfileSnapshot ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_ProfileShared_Source_SOTS_ProfileShared_Public_SOTS_ProfileTypes_h__Script_SOTS_ProfileShared_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSOTS_ProfileId::StaticStruct, Z_Construct_UScriptStruct_FSOTS_ProfileId_Statics::NewStructOps, TEXT("SOTS_ProfileId"),&Z_Registration_Info_UScriptStruct_FSOTS_ProfileId, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_ProfileId), 1693538078U) },
		{ FSOTS_ProfileMetadata::StaticStruct, Z_Construct_UScriptStruct_FSOTS_ProfileMetadata_Statics::NewStructOps, TEXT("SOTS_ProfileMetadata"),&Z_Registration_Info_UScriptStruct_FSOTS_ProfileMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_ProfileMetadata), 3689105285U) },
		{ FSOTS_CharacterStateData::StaticStruct, Z_Construct_UScriptStruct_FSOTS_CharacterStateData_Statics::NewStructOps, TEXT("SOTS_CharacterStateData"),&Z_Registration_Info_UScriptStruct_FSOTS_CharacterStateData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_CharacterStateData), 165950162U) },
		{ FSOTS_SerializedItem::StaticStruct, Z_Construct_UScriptStruct_FSOTS_SerializedItem_Statics::NewStructOps, TEXT("SOTS_SerializedItem"),&Z_Registration_Info_UScriptStruct_FSOTS_SerializedItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_SerializedItem), 767104650U) },
		{ FSOTS_ItemSlotBinding::StaticStruct, Z_Construct_UScriptStruct_FSOTS_ItemSlotBinding_Statics::NewStructOps, TEXT("SOTS_ItemSlotBinding"),&Z_Registration_Info_UScriptStruct_FSOTS_ItemSlotBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_ItemSlotBinding), 3298278532U) },
		{ FSOTS_GSMProfileData::StaticStruct, Z_Construct_UScriptStruct_FSOTS_GSMProfileData_Statics::NewStructOps, TEXT("SOTS_GSMProfileData"),&Z_Registration_Info_UScriptStruct_FSOTS_GSMProfileData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_GSMProfileData), 270540302U) },
		{ FSOTS_AbilityProfileData::StaticStruct, Z_Construct_UScriptStruct_FSOTS_AbilityProfileData_Statics::NewStructOps, TEXT("SOTS_AbilityProfileData"),&Z_Registration_Info_UScriptStruct_FSOTS_AbilityProfileData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_AbilityProfileData), 1934971424U) },
		{ FSOTS_SkillTreeProfileData::StaticStruct, Z_Construct_UScriptStruct_FSOTS_SkillTreeProfileData_Statics::NewStructOps, TEXT("SOTS_SkillTreeProfileData"),&Z_Registration_Info_UScriptStruct_FSOTS_SkillTreeProfileData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_SkillTreeProfileData), 1443305357U) },
		{ FSOTS_InventoryProfileData::StaticStruct, Z_Construct_UScriptStruct_FSOTS_InventoryProfileData_Statics::NewStructOps, TEXT("SOTS_InventoryProfileData"),&Z_Registration_Info_UScriptStruct_FSOTS_InventoryProfileData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_InventoryProfileData), 4177627712U) },
		{ FSOTS_MissionProfileData::StaticStruct, Z_Construct_UScriptStruct_FSOTS_MissionProfileData_Statics::NewStructOps, TEXT("SOTS_MissionProfileData"),&Z_Registration_Info_UScriptStruct_FSOTS_MissionProfileData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_MissionProfileData), 3422280594U) },
		{ FSOTS_MMSSProfileData::StaticStruct, Z_Construct_UScriptStruct_FSOTS_MMSSProfileData_Statics::NewStructOps, TEXT("SOTS_MMSSProfileData"),&Z_Registration_Info_UScriptStruct_FSOTS_MMSSProfileData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_MMSSProfileData), 2205190582U) },
		{ FSOTS_FXProfileData::StaticStruct, Z_Construct_UScriptStruct_FSOTS_FXProfileData_Statics::NewStructOps, TEXT("SOTS_FXProfileData"),&Z_Registration_Info_UScriptStruct_FSOTS_FXProfileData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_FXProfileData), 1785525197U) },
		{ FSOTS_ProfileSnapshot::StaticStruct, Z_Construct_UScriptStruct_FSOTS_ProfileSnapshot_Statics::NewStructOps, TEXT("SOTS_ProfileSnapshot"),&Z_Registration_Info_UScriptStruct_FSOTS_ProfileSnapshot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_ProfileSnapshot), 1343673627U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_ProfileShared_Source_SOTS_ProfileShared_Public_SOTS_ProfileTypes_h__Script_SOTS_ProfileShared_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_ProfileShared_Source_SOTS_ProfileShared_Public_SOTS_ProfileTypes_h__Script_SOTS_ProfileShared_1807338687{
	TEXT("/Script/SOTS_ProfileShared"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_ProfileShared_Source_SOTS_ProfileShared_Public_SOTS_ProfileTypes_h__Script_SOTS_ProfileShared_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_ProfileShared_Source_SOTS_ProfileShared_Public_SOTS_ProfileTypes_h__Script_SOTS_ProfileShared_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
