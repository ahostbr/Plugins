// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTS_MMSS_Types.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_MMSS_Types() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
SOTS_MMSS_API UEnum* Z_Construct_UEnum_SOTS_MMSS_ESOTS_MusicDebugMode();
SOTS_MMSS_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_MissionMusicSet();
SOTS_MMSS_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_MusicTrackEntry();
UPackage* Z_Construct_UPackage__Script_SOTS_MMSS();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ESOTS_MusicDebugMode ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESOTS_MusicDebugMode;
static UEnum* ESOTS_MusicDebugMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESOTS_MusicDebugMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESOTS_MusicDebugMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SOTS_MMSS_ESOTS_MusicDebugMode, (UObject*)Z_Construct_UPackage__Script_SOTS_MMSS(), TEXT("ESOTS_MusicDebugMode"));
	}
	return Z_Registration_Info_UEnum_ESOTS_MusicDebugMode.OuterSingleton;
}
template<> SOTS_MMSS_NON_ATTRIBUTED_API UEnum* StaticEnum<ESOTS_MusicDebugMode>()
{
	return ESOTS_MusicDebugMode_StaticEnum();
}
struct Z_Construct_UEnum_SOTS_MMSS_ESOTS_MusicDebugMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Basic.DisplayName", "Basic" },
		{ "Basic.Name", "ESOTS_MusicDebugMode::Basic" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SOTS_MMSS_Types.h" },
		{ "Off.DisplayName", "Off" },
		{ "Off.Name", "ESOTS_MusicDebugMode::Off" },
		{ "Verbose.DisplayName", "Verbose" },
		{ "Verbose.Name", "ESOTS_MusicDebugMode::Verbose" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESOTS_MusicDebugMode::Off", (int64)ESOTS_MusicDebugMode::Off },
		{ "ESOTS_MusicDebugMode::Basic", (int64)ESOTS_MusicDebugMode::Basic },
		{ "ESOTS_MusicDebugMode::Verbose", (int64)ESOTS_MusicDebugMode::Verbose },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_SOTS_MMSS_ESOTS_MusicDebugMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SOTS_MMSS_ESOTS_MusicDebugMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SOTS_MMSS,
	nullptr,
	"ESOTS_MusicDebugMode",
	"ESOTS_MusicDebugMode",
	Z_Construct_UEnum_SOTS_MMSS_ESOTS_MusicDebugMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SOTS_MMSS_ESOTS_MusicDebugMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SOTS_MMSS_ESOTS_MusicDebugMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SOTS_MMSS_ESOTS_MusicDebugMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SOTS_MMSS_ESOTS_MusicDebugMode()
{
	if (!Z_Registration_Info_UEnum_ESOTS_MusicDebugMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESOTS_MusicDebugMode.InnerSingleton, Z_Construct_UEnum_SOTS_MMSS_ESOTS_MusicDebugMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESOTS_MusicDebugMode.InnerSingleton;
}
// ********** End Enum ESOTS_MusicDebugMode ********************************************************

// ********** Begin ScriptStruct FSOTS_MusicTrackEntry *********************************************
struct Z_Construct_UScriptStruct_FSOTS_MusicTrackEntry_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_MusicTrackEntry); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_MusicTrackEntry); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SOTS_MMSS_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[] = {
		{ "Category", "SOTS|Music" },
		{ "ModuleRelativePath", "Public/SOTS_MMSS_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeInTime_MetaData[] = {
		{ "Category", "SOTS|Music" },
		{ "ModuleRelativePath", "Public/SOTS_MMSS_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeOutTime_MetaData[] = {
		{ "Category", "SOTS|Music" },
		{ "ModuleRelativePath", "Public/SOTS_MMSS_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[] = {
		{ "Category", "SOTS|Music" },
		{ "ModuleRelativePath", "Public/SOTS_MMSS_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeMultiplier_MetaData[] = {
		{ "Category", "SOTS|Music" },
		{ "ModuleRelativePath", "Public/SOTS_MMSS_Types.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_MusicTrackEntry constinit property declarations *************
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Sound;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeInTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeOutTime;
	static void NewProp_bLooping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_MusicTrackEntry constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_MusicTrackEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_MusicTrackEntry_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_MusicTrackEntry;
class UScriptStruct* FSOTS_MusicTrackEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_MusicTrackEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_MusicTrackEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_MusicTrackEntry, (UObject*)Z_Construct_UPackage__Script_SOTS_MMSS(), TEXT("SOTS_MusicTrackEntry"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_MusicTrackEntry.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_MusicTrackEntry Property Definitions ************************
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSOTS_MusicTrackEntry_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_MusicTrackEntry, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sound_MetaData), NewProp_Sound_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_MusicTrackEntry_Statics::NewProp_FadeInTime = { "FadeInTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_MusicTrackEntry, FadeInTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeInTime_MetaData), NewProp_FadeInTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_MusicTrackEntry_Statics::NewProp_FadeOutTime = { "FadeOutTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_MusicTrackEntry, FadeOutTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeOutTime_MetaData), NewProp_FadeOutTime_MetaData) };
void Z_Construct_UScriptStruct_FSOTS_MusicTrackEntry_Statics::NewProp_bLooping_SetBit(void* Obj)
{
	((FSOTS_MusicTrackEntry*)Obj)->bLooping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSOTS_MusicTrackEntry_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSOTS_MusicTrackEntry), &Z_Construct_UScriptStruct_FSOTS_MusicTrackEntry_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLooping_MetaData), NewProp_bLooping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_MusicTrackEntry_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_MusicTrackEntry, VolumeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeMultiplier_MetaData), NewProp_VolumeMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_MusicTrackEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MusicTrackEntry_Statics::NewProp_Sound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MusicTrackEntry_Statics::NewProp_FadeInTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MusicTrackEntry_Statics::NewProp_FadeOutTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MusicTrackEntry_Statics::NewProp_bLooping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MusicTrackEntry_Statics::NewProp_VolumeMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_MusicTrackEntry_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_MusicTrackEntry Property Definitions **************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_MusicTrackEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_MMSS,
	nullptr,
	&NewStructOps,
	"SOTS_MusicTrackEntry",
	Z_Construct_UScriptStruct_FSOTS_MusicTrackEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_MusicTrackEntry_Statics::PropPointers),
	sizeof(FSOTS_MusicTrackEntry),
	alignof(FSOTS_MusicTrackEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_MusicTrackEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_MusicTrackEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_MusicTrackEntry()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_MusicTrackEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_MusicTrackEntry.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_MusicTrackEntry_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_MusicTrackEntry.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_MusicTrackEntry ***********************************************

// ********** Begin ScriptStruct FSOTS_MissionMusicSet *********************************************
struct Z_Construct_UScriptStruct_FSOTS_MissionMusicSet_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_MissionMusicSet); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_MissionMusicSet); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SOTS_MMSS_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tracks_MetaData[] = {
		{ "Category", "SOTS|Music" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// TrackId -> Track data for this mission.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_MMSS_Types.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TrackId -> Track data for this mission." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_MissionMusicSet constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tracks_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tracks_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Tracks;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_MissionMusicSet constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_MissionMusicSet>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_MissionMusicSet_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_MissionMusicSet;
class UScriptStruct* FSOTS_MissionMusicSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_MissionMusicSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_MissionMusicSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_MissionMusicSet, (UObject*)Z_Construct_UPackage__Script_SOTS_MMSS(), TEXT("SOTS_MissionMusicSet"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_MissionMusicSet.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_MissionMusicSet Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_MissionMusicSet_Statics::NewProp_Tracks_ValueProp = { "Tracks", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSOTS_MusicTrackEntry, METADATA_PARAMS(0, nullptr) }; // 2877753432
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_MissionMusicSet_Statics::NewProp_Tracks_Key_KeyProp = { "Tracks_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSOTS_MissionMusicSet_Statics::NewProp_Tracks = { "Tracks", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_MissionMusicSet, Tracks), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tracks_MetaData), NewProp_Tracks_MetaData) }; // 517357616 2877753432
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_MissionMusicSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionMusicSet_Statics::NewProp_Tracks_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionMusicSet_Statics::NewProp_Tracks_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_MissionMusicSet_Statics::NewProp_Tracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_MissionMusicSet_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_MissionMusicSet Property Definitions **************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_MissionMusicSet_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_MMSS,
	nullptr,
	&NewStructOps,
	"SOTS_MissionMusicSet",
	Z_Construct_UScriptStruct_FSOTS_MissionMusicSet_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_MissionMusicSet_Statics::PropPointers),
	sizeof(FSOTS_MissionMusicSet),
	alignof(FSOTS_MissionMusicSet),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_MissionMusicSet_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_MissionMusicSet_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_MissionMusicSet()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_MissionMusicSet.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_MissionMusicSet.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_MissionMusicSet_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_MissionMusicSet.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_MissionMusicSet ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MMSS_Source_SOTS_MMSS_Public_SOTS_MMSS_Types_h__Script_SOTS_MMSS_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESOTS_MusicDebugMode_StaticEnum, TEXT("ESOTS_MusicDebugMode"), &Z_Registration_Info_UEnum_ESOTS_MusicDebugMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1242760997U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSOTS_MusicTrackEntry::StaticStruct, Z_Construct_UScriptStruct_FSOTS_MusicTrackEntry_Statics::NewStructOps, TEXT("SOTS_MusicTrackEntry"),&Z_Registration_Info_UScriptStruct_FSOTS_MusicTrackEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_MusicTrackEntry), 2877753432U) },
		{ FSOTS_MissionMusicSet::StaticStruct, Z_Construct_UScriptStruct_FSOTS_MissionMusicSet_Statics::NewStructOps, TEXT("SOTS_MissionMusicSet"),&Z_Registration_Info_UScriptStruct_FSOTS_MissionMusicSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_MissionMusicSet), 818525697U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MMSS_Source_SOTS_MMSS_Public_SOTS_MMSS_Types_h__Script_SOTS_MMSS_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MMSS_Source_SOTS_MMSS_Public_SOTS_MMSS_Types_h__Script_SOTS_MMSS_2615992526{
	TEXT("/Script/SOTS_MMSS"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MMSS_Source_SOTS_MMSS_Public_SOTS_MMSS_Types_h__Script_SOTS_MMSS_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MMSS_Source_SOTS_MMSS_Public_SOTS_MMSS_Types_h__Script_SOTS_MMSS_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MMSS_Source_SOTS_MMSS_Public_SOTS_MMSS_Types_h__Script_SOTS_MMSS_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MMSS_Source_SOTS_MMSS_Public_SOTS_MMSS_Types_h__Script_SOTS_MMSS_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
