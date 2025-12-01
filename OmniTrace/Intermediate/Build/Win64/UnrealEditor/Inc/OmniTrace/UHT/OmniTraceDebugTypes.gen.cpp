// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OmniTraceDebugTypes.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeOmniTraceDebugTypes() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
OMNITRACE_API UEnum* Z_Construct_UEnum_OmniTrace_EOmniTraceKEMExecutionFamily();
OMNITRACE_API UEnum* Z_Construct_UEnum_OmniTrace_ESOTS_OmniTraceKEMPreset();
OMNITRACE_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMDebugRecord();
UPackage* Z_Construct_UPackage__Script_OmniTrace();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EOmniTraceKEMExecutionFamily **********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOmniTraceKEMExecutionFamily;
static UEnum* EOmniTraceKEMExecutionFamily_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOmniTraceKEMExecutionFamily.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOmniTraceKEMExecutionFamily.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OmniTrace_EOmniTraceKEMExecutionFamily, (UObject*)Z_Construct_UPackage__Script_OmniTrace(), TEXT("EOmniTraceKEMExecutionFamily"));
	}
	return Z_Registration_Info_UEnum_EOmniTraceKEMExecutionFamily.OuterSingleton;
}
template<> OMNITRACE_NON_ATTRIBUTED_API UEnum* StaticEnum<EOmniTraceKEMExecutionFamily>()
{
	return EOmniTraceKEMExecutionFamily_StaticEnum();
}
struct Z_Construct_UEnum_OmniTrace_EOmniTraceKEMExecutionFamily_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Cinematic.Name", "EOmniTraceKEMExecutionFamily::Cinematic" },
		{ "CornerLeft.Name", "EOmniTraceKEMExecutionFamily::CornerLeft" },
		{ "CornerRight.Name", "EOmniTraceKEMExecutionFamily::CornerRight" },
		{ "DropPoint.Name", "EOmniTraceKEMExecutionFamily::DropPoint" },
		{ "GroundFront.Name", "EOmniTraceKEMExecutionFamily::GroundFront" },
		{ "GroundLeft.Name", "EOmniTraceKEMExecutionFamily::GroundLeft" },
		{ "GroundRear.Name", "EOmniTraceKEMExecutionFamily::GroundRear" },
		{ "GroundRight.Name", "EOmniTraceKEMExecutionFamily::GroundRight" },
		{ "ModuleRelativePath", "Public/OmniTraceDebugTypes.h" },
		{ "PullDown.Name", "EOmniTraceKEMExecutionFamily::PullDown" },
		{ "Unknown.Name", "EOmniTraceKEMExecutionFamily::Unknown" },
		{ "VerticalAbove.Name", "EOmniTraceKEMExecutionFamily::VerticalAbove" },
		{ "VerticalBelow.Name", "EOmniTraceKEMExecutionFamily::VerticalBelow" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOmniTraceKEMExecutionFamily::Unknown", (int64)EOmniTraceKEMExecutionFamily::Unknown },
		{ "EOmniTraceKEMExecutionFamily::GroundRear", (int64)EOmniTraceKEMExecutionFamily::GroundRear },
		{ "EOmniTraceKEMExecutionFamily::GroundFront", (int64)EOmniTraceKEMExecutionFamily::GroundFront },
		{ "EOmniTraceKEMExecutionFamily::GroundLeft", (int64)EOmniTraceKEMExecutionFamily::GroundLeft },
		{ "EOmniTraceKEMExecutionFamily::GroundRight", (int64)EOmniTraceKEMExecutionFamily::GroundRight },
		{ "EOmniTraceKEMExecutionFamily::CornerLeft", (int64)EOmniTraceKEMExecutionFamily::CornerLeft },
		{ "EOmniTraceKEMExecutionFamily::CornerRight", (int64)EOmniTraceKEMExecutionFamily::CornerRight },
		{ "EOmniTraceKEMExecutionFamily::VerticalAbove", (int64)EOmniTraceKEMExecutionFamily::VerticalAbove },
		{ "EOmniTraceKEMExecutionFamily::VerticalBelow", (int64)EOmniTraceKEMExecutionFamily::VerticalBelow },
		{ "EOmniTraceKEMExecutionFamily::DropPoint", (int64)EOmniTraceKEMExecutionFamily::DropPoint },
		{ "EOmniTraceKEMExecutionFamily::PullDown", (int64)EOmniTraceKEMExecutionFamily::PullDown },
		{ "EOmniTraceKEMExecutionFamily::Cinematic", (int64)EOmniTraceKEMExecutionFamily::Cinematic },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_OmniTrace_EOmniTraceKEMExecutionFamily_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OmniTrace_EOmniTraceKEMExecutionFamily_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OmniTrace,
	nullptr,
	"EOmniTraceKEMExecutionFamily",
	"EOmniTraceKEMExecutionFamily",
	Z_Construct_UEnum_OmniTrace_EOmniTraceKEMExecutionFamily_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OmniTrace_EOmniTraceKEMExecutionFamily_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OmniTrace_EOmniTraceKEMExecutionFamily_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OmniTrace_EOmniTraceKEMExecutionFamily_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OmniTrace_EOmniTraceKEMExecutionFamily()
{
	if (!Z_Registration_Info_UEnum_EOmniTraceKEMExecutionFamily.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOmniTraceKEMExecutionFamily.InnerSingleton, Z_Construct_UEnum_OmniTrace_EOmniTraceKEMExecutionFamily_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOmniTraceKEMExecutionFamily.InnerSingleton;
}
// ********** End Enum EOmniTraceKEMExecutionFamily ************************************************

// ********** Begin ScriptStruct FSOTS_OmniTraceKEMDebugRecord *************************************
struct Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMDebugRecord_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_OmniTraceKEMDebugRecord); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_OmniTraceKEMDebugRecord); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OmniTraceDebugTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PresetId_MetaData[] = {
		{ "ModuleRelativePath", "Public/OmniTraceDebugTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstigatorLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/OmniTraceDebugTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/OmniTraceDebugTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionTag_MetaData[] = {
		{ "ModuleRelativePath", "Public/OmniTraceDebugTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionFamily_MetaData[] = {
		{ "ModuleRelativePath", "Public/OmniTraceDebugTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHit_MetaData[] = {
		{ "ModuleRelativePath", "Public/OmniTraceDebugTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/OmniTraceDebugTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitNormal_MetaData[] = {
		{ "ModuleRelativePath", "Public/OmniTraceDebugTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinalSpawnTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/OmniTraceDebugTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_OmniTraceKEMDebugRecord constinit property declarations *****
	static const UECodeGen_Private::FBytePropertyParams NewProp_PresetId_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PresetId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstigatorLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PositionTag;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ExecutionFamily_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ExecutionFamily;
	static void NewProp_bHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitNormal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FinalSpawnTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_OmniTraceKEMDebugRecord constinit property declarations *******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_OmniTraceKEMDebugRecord>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMDebugRecord_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_OmniTraceKEMDebugRecord;
class UScriptStruct* FSOTS_OmniTraceKEMDebugRecord::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_OmniTraceKEMDebugRecord.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_OmniTraceKEMDebugRecord.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMDebugRecord, (UObject*)Z_Construct_UPackage__Script_OmniTrace(), TEXT("SOTS_OmniTraceKEMDebugRecord"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_OmniTraceKEMDebugRecord.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_OmniTraceKEMDebugRecord Property Definitions ****************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMDebugRecord_Statics::NewProp_PresetId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMDebugRecord_Statics::NewProp_PresetId = { "PresetId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_OmniTraceKEMDebugRecord, PresetId), Z_Construct_UEnum_OmniTrace_ESOTS_OmniTraceKEMPreset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PresetId_MetaData), NewProp_PresetId_MetaData) }; // 3632778219
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMDebugRecord_Statics::NewProp_InstigatorLocation = { "InstigatorLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_OmniTraceKEMDebugRecord, InstigatorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstigatorLocation_MetaData), NewProp_InstigatorLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMDebugRecord_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_OmniTraceKEMDebugRecord, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLocation_MetaData), NewProp_TargetLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMDebugRecord_Statics::NewProp_PositionTag = { "PositionTag", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_OmniTraceKEMDebugRecord, PositionTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionTag_MetaData), NewProp_PositionTag_MetaData) }; // 517357616
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMDebugRecord_Statics::NewProp_ExecutionFamily_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMDebugRecord_Statics::NewProp_ExecutionFamily = { "ExecutionFamily", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_OmniTraceKEMDebugRecord, ExecutionFamily), Z_Construct_UEnum_OmniTrace_EOmniTraceKEMExecutionFamily, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionFamily_MetaData), NewProp_ExecutionFamily_MetaData) }; // 2390868595
void Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMDebugRecord_Statics::NewProp_bHit_SetBit(void* Obj)
{
	((FSOTS_OmniTraceKEMDebugRecord*)Obj)->bHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMDebugRecord_Statics::NewProp_bHit = { "bHit", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSOTS_OmniTraceKEMDebugRecord), &Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMDebugRecord_Statics::NewProp_bHit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHit_MetaData), NewProp_bHit_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMDebugRecord_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_OmniTraceKEMDebugRecord, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitLocation_MetaData), NewProp_HitLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMDebugRecord_Statics::NewProp_HitNormal = { "HitNormal", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_OmniTraceKEMDebugRecord, HitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitNormal_MetaData), NewProp_HitNormal_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMDebugRecord_Statics::NewProp_FinalSpawnTransform = { "FinalSpawnTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_OmniTraceKEMDebugRecord, FinalSpawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinalSpawnTransform_MetaData), NewProp_FinalSpawnTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMDebugRecord_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMDebugRecord_Statics::NewProp_PresetId_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMDebugRecord_Statics::NewProp_PresetId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMDebugRecord_Statics::NewProp_InstigatorLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMDebugRecord_Statics::NewProp_TargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMDebugRecord_Statics::NewProp_PositionTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMDebugRecord_Statics::NewProp_ExecutionFamily_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMDebugRecord_Statics::NewProp_ExecutionFamily,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMDebugRecord_Statics::NewProp_bHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMDebugRecord_Statics::NewProp_HitLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMDebugRecord_Statics::NewProp_HitNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMDebugRecord_Statics::NewProp_FinalSpawnTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMDebugRecord_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_OmniTraceKEMDebugRecord Property Definitions ******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMDebugRecord_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OmniTrace,
	nullptr,
	&NewStructOps,
	"SOTS_OmniTraceKEMDebugRecord",
	Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMDebugRecord_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMDebugRecord_Statics::PropPointers),
	sizeof(FSOTS_OmniTraceKEMDebugRecord),
	alignof(FSOTS_OmniTraceKEMDebugRecord),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMDebugRecord_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMDebugRecord_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMDebugRecord()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_OmniTraceKEMDebugRecord.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_OmniTraceKEMDebugRecord.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMDebugRecord_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_OmniTraceKEMDebugRecord.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_OmniTraceKEMDebugRecord ***************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceDebugTypes_h__Script_OmniTrace_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOmniTraceKEMExecutionFamily_StaticEnum, TEXT("EOmniTraceKEMExecutionFamily"), &Z_Registration_Info_UEnum_EOmniTraceKEMExecutionFamily, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2390868595U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSOTS_OmniTraceKEMDebugRecord::StaticStruct, Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMDebugRecord_Statics::NewStructOps, TEXT("SOTS_OmniTraceKEMDebugRecord"),&Z_Registration_Info_UScriptStruct_FSOTS_OmniTraceKEMDebugRecord, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_OmniTraceKEMDebugRecord), 664593657U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceDebugTypes_h__Script_OmniTrace_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceDebugTypes_h__Script_OmniTrace_2565840409{
	TEXT("/Script/OmniTrace"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceDebugTypes_h__Script_OmniTrace_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceDebugTypes_h__Script_OmniTrace_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceDebugTypes_h__Script_OmniTrace_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceDebugTypes_h__Script_OmniTrace_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
