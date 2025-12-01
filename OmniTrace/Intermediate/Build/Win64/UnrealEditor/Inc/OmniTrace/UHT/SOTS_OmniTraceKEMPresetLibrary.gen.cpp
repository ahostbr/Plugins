// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTS_OmniTraceKEMPresetLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_OmniTraceKEMPresetLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
OMNITRACE_API UClass* Z_Construct_UClass_UOmniTracePatternPreset_NoRegister();
OMNITRACE_API UClass* Z_Construct_UClass_USOTS_OmniTraceKEMPresetLibrary();
OMNITRACE_API UClass* Z_Construct_UClass_USOTS_OmniTraceKEMPresetLibrary_NoRegister();
OMNITRACE_API UEnum* Z_Construct_UEnum_OmniTrace_ESOTS_OmniTraceKEMPreset();
OMNITRACE_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMPresetEntry();
UPackage* Z_Construct_UPackage__Script_OmniTrace();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ESOTS_OmniTraceKEMPreset **************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESOTS_OmniTraceKEMPreset;
static UEnum* ESOTS_OmniTraceKEMPreset_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESOTS_OmniTraceKEMPreset.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESOTS_OmniTraceKEMPreset.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OmniTrace_ESOTS_OmniTraceKEMPreset, (UObject*)Z_Construct_UPackage__Script_OmniTrace(), TEXT("ESOTS_OmniTraceKEMPreset"));
	}
	return Z_Registration_Info_UEnum_ESOTS_OmniTraceKEMPreset.OuterSingleton;
}
template<> OMNITRACE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESOTS_OmniTraceKEMPreset>()
{
	return ESOTS_OmniTraceKEMPreset_StaticEnum();
}
struct Z_Construct_UEnum_OmniTrace_ESOTS_OmniTraceKEMPreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CornerLeft.DisplayName", "Corner Left" },
		{ "CornerLeft.Name", "ESOTS_OmniTraceKEMPreset::CornerLeft" },
		{ "CornerRight.DisplayName", "Corner Right" },
		{ "CornerRight.Name", "ESOTS_OmniTraceKEMPreset::CornerRight" },
		{ "GroundFront.DisplayName", "Ground Front" },
		{ "GroundFront.Name", "ESOTS_OmniTraceKEMPreset::GroundFront" },
		{ "GroundLeft.DisplayName", "Ground Left" },
		{ "GroundLeft.Name", "ESOTS_OmniTraceKEMPreset::GroundLeft" },
		{ "GroundRear.DisplayName", "Ground Rear" },
		{ "GroundRear.Name", "ESOTS_OmniTraceKEMPreset::GroundRear" },
		{ "GroundRight.DisplayName", "Ground Right" },
		{ "GroundRight.Name", "ESOTS_OmniTraceKEMPreset::GroundRight" },
		{ "ModuleRelativePath", "Public/SOTS_OmniTraceKEMPresetLibrary.h" },
		{ "Unknown.DisplayName", "Unknown" },
		{ "Unknown.Name", "ESOTS_OmniTraceKEMPreset::Unknown" },
		{ "VerticalAbove.DisplayName", "Vertical Above" },
		{ "VerticalAbove.Name", "ESOTS_OmniTraceKEMPreset::VerticalAbove" },
		{ "VerticalBelow.DisplayName", "Vertical Below" },
		{ "VerticalBelow.Name", "ESOTS_OmniTraceKEMPreset::VerticalBelow" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESOTS_OmniTraceKEMPreset::Unknown", (int64)ESOTS_OmniTraceKEMPreset::Unknown },
		{ "ESOTS_OmniTraceKEMPreset::GroundRear", (int64)ESOTS_OmniTraceKEMPreset::GroundRear },
		{ "ESOTS_OmniTraceKEMPreset::GroundFront", (int64)ESOTS_OmniTraceKEMPreset::GroundFront },
		{ "ESOTS_OmniTraceKEMPreset::GroundLeft", (int64)ESOTS_OmniTraceKEMPreset::GroundLeft },
		{ "ESOTS_OmniTraceKEMPreset::GroundRight", (int64)ESOTS_OmniTraceKEMPreset::GroundRight },
		{ "ESOTS_OmniTraceKEMPreset::CornerLeft", (int64)ESOTS_OmniTraceKEMPreset::CornerLeft },
		{ "ESOTS_OmniTraceKEMPreset::CornerRight", (int64)ESOTS_OmniTraceKEMPreset::CornerRight },
		{ "ESOTS_OmniTraceKEMPreset::VerticalAbove", (int64)ESOTS_OmniTraceKEMPreset::VerticalAbove },
		{ "ESOTS_OmniTraceKEMPreset::VerticalBelow", (int64)ESOTS_OmniTraceKEMPreset::VerticalBelow },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_OmniTrace_ESOTS_OmniTraceKEMPreset_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OmniTrace_ESOTS_OmniTraceKEMPreset_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OmniTrace,
	nullptr,
	"ESOTS_OmniTraceKEMPreset",
	"ESOTS_OmniTraceKEMPreset",
	Z_Construct_UEnum_OmniTrace_ESOTS_OmniTraceKEMPreset_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OmniTrace_ESOTS_OmniTraceKEMPreset_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OmniTrace_ESOTS_OmniTraceKEMPreset_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OmniTrace_ESOTS_OmniTraceKEMPreset_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OmniTrace_ESOTS_OmniTraceKEMPreset()
{
	if (!Z_Registration_Info_UEnum_ESOTS_OmniTraceKEMPreset.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESOTS_OmniTraceKEMPreset.InnerSingleton, Z_Construct_UEnum_OmniTrace_ESOTS_OmniTraceKEMPreset_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESOTS_OmniTraceKEMPreset.InnerSingleton;
}
// ********** End Enum ESOTS_OmniTraceKEMPreset ****************************************************

// ********** Begin ScriptStruct FSOTS_OmniTraceKEMPresetEntry *************************************
struct Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMPresetEntry_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_OmniTraceKEMPresetEntry); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_OmniTraceKEMPresetEntry); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SOTS_OmniTraceKEMPresetLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PresetId_MetaData[] = {
		{ "Category", "KEM" },
		{ "ModuleRelativePath", "Public/SOTS_OmniTraceKEMPresetLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalDirection_MetaData[] = {
		{ "Category", "KEM" },
		{ "ModuleRelativePath", "Public/SOTS_OmniTraceKEMPresetLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseGroundRelative_MetaData[] = {
		{ "Category", "KEM" },
		{ "ModuleRelativePath", "Public/SOTS_OmniTraceKEMPresetLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseVertical_MetaData[] = {
		{ "Category", "KEM" },
		{ "ModuleRelativePath", "Public/SOTS_OmniTraceKEMPresetLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVerticalAbove_MetaData[] = {
		{ "Category", "KEM" },
		{ "EditCondition", "bUseVertical" },
		{ "ModuleRelativePath", "Public/SOTS_OmniTraceKEMPresetLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalTraceDistance_MetaData[] = {
		{ "Category", "KEM" },
		{ "EditCondition", "bUseVertical" },
		{ "ModuleRelativePath", "Public/SOTS_OmniTraceKEMPresetLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceDistance_MetaData[] = {
		{ "Category", "KEM" },
		{ "ModuleRelativePath", "Public/SOTS_OmniTraceKEMPresetLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatternLabel_MetaData[] = {
		{ "Category", "KEM" },
		{ "ModuleRelativePath", "Public/SOTS_OmniTraceKEMPresetLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatternPreset_MetaData[] = {
		{ "Category", "KEM" },
		{ "ModuleRelativePath", "Public/SOTS_OmniTraceKEMPresetLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_OmniTraceKEMPresetEntry constinit property declarations *****
	static const UECodeGen_Private::FBytePropertyParams NewProp_PresetId_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PresetId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalDirection;
	static void NewProp_bUseGroundRelative_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGroundRelative;
	static void NewProp_bUseVertical_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseVertical;
	static void NewProp_bVerticalAbove_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVerticalAbove;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VerticalTraceDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceDistance;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PatternLabel;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PatternPreset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_OmniTraceKEMPresetEntry constinit property declarations *******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_OmniTraceKEMPresetEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMPresetEntry_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_OmniTraceKEMPresetEntry;
class UScriptStruct* FSOTS_OmniTraceKEMPresetEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_OmniTraceKEMPresetEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_OmniTraceKEMPresetEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMPresetEntry, (UObject*)Z_Construct_UPackage__Script_OmniTrace(), TEXT("SOTS_OmniTraceKEMPresetEntry"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_OmniTraceKEMPresetEntry.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_OmniTraceKEMPresetEntry Property Definitions ****************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMPresetEntry_Statics::NewProp_PresetId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMPresetEntry_Statics::NewProp_PresetId = { "PresetId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_OmniTraceKEMPresetEntry, PresetId), Z_Construct_UEnum_OmniTrace_ESOTS_OmniTraceKEMPreset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PresetId_MetaData), NewProp_PresetId_MetaData) }; // 3632778219
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMPresetEntry_Statics::NewProp_LocalDirection = { "LocalDirection", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_OmniTraceKEMPresetEntry, LocalDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalDirection_MetaData), NewProp_LocalDirection_MetaData) };
void Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMPresetEntry_Statics::NewProp_bUseGroundRelative_SetBit(void* Obj)
{
	((FSOTS_OmniTraceKEMPresetEntry*)Obj)->bUseGroundRelative = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMPresetEntry_Statics::NewProp_bUseGroundRelative = { "bUseGroundRelative", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSOTS_OmniTraceKEMPresetEntry), &Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMPresetEntry_Statics::NewProp_bUseGroundRelative_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseGroundRelative_MetaData), NewProp_bUseGroundRelative_MetaData) };
void Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMPresetEntry_Statics::NewProp_bUseVertical_SetBit(void* Obj)
{
	((FSOTS_OmniTraceKEMPresetEntry*)Obj)->bUseVertical = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMPresetEntry_Statics::NewProp_bUseVertical = { "bUseVertical", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSOTS_OmniTraceKEMPresetEntry), &Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMPresetEntry_Statics::NewProp_bUseVertical_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseVertical_MetaData), NewProp_bUseVertical_MetaData) };
void Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMPresetEntry_Statics::NewProp_bVerticalAbove_SetBit(void* Obj)
{
	((FSOTS_OmniTraceKEMPresetEntry*)Obj)->bVerticalAbove = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMPresetEntry_Statics::NewProp_bVerticalAbove = { "bVerticalAbove", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSOTS_OmniTraceKEMPresetEntry), &Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMPresetEntry_Statics::NewProp_bVerticalAbove_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVerticalAbove_MetaData), NewProp_bVerticalAbove_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMPresetEntry_Statics::NewProp_VerticalTraceDistance = { "VerticalTraceDistance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_OmniTraceKEMPresetEntry, VerticalTraceDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalTraceDistance_MetaData), NewProp_VerticalTraceDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMPresetEntry_Statics::NewProp_TraceDistance = { "TraceDistance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_OmniTraceKEMPresetEntry, TraceDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceDistance_MetaData), NewProp_TraceDistance_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMPresetEntry_Statics::NewProp_PatternLabel = { "PatternLabel", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_OmniTraceKEMPresetEntry, PatternLabel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatternLabel_MetaData), NewProp_PatternLabel_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMPresetEntry_Statics::NewProp_PatternPreset = { "PatternPreset", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_OmniTraceKEMPresetEntry, PatternPreset), Z_Construct_UClass_UOmniTracePatternPreset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatternPreset_MetaData), NewProp_PatternPreset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMPresetEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMPresetEntry_Statics::NewProp_PresetId_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMPresetEntry_Statics::NewProp_PresetId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMPresetEntry_Statics::NewProp_LocalDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMPresetEntry_Statics::NewProp_bUseGroundRelative,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMPresetEntry_Statics::NewProp_bUseVertical,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMPresetEntry_Statics::NewProp_bVerticalAbove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMPresetEntry_Statics::NewProp_VerticalTraceDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMPresetEntry_Statics::NewProp_TraceDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMPresetEntry_Statics::NewProp_PatternLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMPresetEntry_Statics::NewProp_PatternPreset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMPresetEntry_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_OmniTraceKEMPresetEntry Property Definitions ******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMPresetEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OmniTrace,
	nullptr,
	&NewStructOps,
	"SOTS_OmniTraceKEMPresetEntry",
	Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMPresetEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMPresetEntry_Statics::PropPointers),
	sizeof(FSOTS_OmniTraceKEMPresetEntry),
	alignof(FSOTS_OmniTraceKEMPresetEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMPresetEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMPresetEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMPresetEntry()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_OmniTraceKEMPresetEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_OmniTraceKEMPresetEntry.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMPresetEntry_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_OmniTraceKEMPresetEntry.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_OmniTraceKEMPresetEntry ***************************************

// ********** Begin Class USOTS_OmniTraceKEMPresetLibrary ******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_OmniTraceKEMPresetLibrary;
UClass* USOTS_OmniTraceKEMPresetLibrary::GetPrivateStaticClass()
{
	using TClass = USOTS_OmniTraceKEMPresetLibrary;
	if (!Z_Registration_Info_UClass_USOTS_OmniTraceKEMPresetLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_OmniTraceKEMPresetLibrary"),
			Z_Registration_Info_UClass_USOTS_OmniTraceKEMPresetLibrary.InnerSingleton,
			StaticRegisterNativesUSOTS_OmniTraceKEMPresetLibrary,
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
	return Z_Registration_Info_UClass_USOTS_OmniTraceKEMPresetLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_OmniTraceKEMPresetLibrary_NoRegister()
{
	return USOTS_OmniTraceKEMPresetLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_OmniTraceKEMPresetLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SOTS_OmniTraceKEMPresetLibrary.h" },
		{ "ModuleRelativePath", "Public/SOTS_OmniTraceKEMPresetLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[] = {
		{ "Category", "KEM" },
		{ "ModuleRelativePath", "Public/SOTS_OmniTraceKEMPresetLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_OmniTraceKEMPresetLibrary constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USOTS_OmniTraceKEMPresetLibrary constinit property declarations ************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_OmniTraceKEMPresetLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_OmniTraceKEMPresetLibrary_Statics

// ********** Begin Class USOTS_OmniTraceKEMPresetLibrary Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_OmniTraceKEMPresetLibrary_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMPresetEntry, METADATA_PARAMS(0, nullptr) }; // 1331929954
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USOTS_OmniTraceKEMPresetLibrary_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_OmniTraceKEMPresetLibrary, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entries_MetaData), NewProp_Entries_MetaData) }; // 1331929954
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USOTS_OmniTraceKEMPresetLibrary_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_OmniTraceKEMPresetLibrary_Statics::NewProp_Entries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_OmniTraceKEMPresetLibrary_Statics::NewProp_Entries,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_OmniTraceKEMPresetLibrary_Statics::PropPointers) < 2048);
// ********** End Class USOTS_OmniTraceKEMPresetLibrary Property Definitions ***********************
UObject* (*const Z_Construct_UClass_USOTS_OmniTraceKEMPresetLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_OmniTrace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_OmniTraceKEMPresetLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_OmniTraceKEMPresetLibrary_Statics::ClassParams = {
	&USOTS_OmniTraceKEMPresetLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USOTS_OmniTraceKEMPresetLibrary_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_OmniTraceKEMPresetLibrary_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_OmniTraceKEMPresetLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_OmniTraceKEMPresetLibrary_Statics::Class_MetaDataParams)
};
void USOTS_OmniTraceKEMPresetLibrary::StaticRegisterNativesUSOTS_OmniTraceKEMPresetLibrary()
{
}
UClass* Z_Construct_UClass_USOTS_OmniTraceKEMPresetLibrary()
{
	if (!Z_Registration_Info_UClass_USOTS_OmniTraceKEMPresetLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_OmniTraceKEMPresetLibrary.OuterSingleton, Z_Construct_UClass_USOTS_OmniTraceKEMPresetLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_OmniTraceKEMPresetLibrary.OuterSingleton;
}
USOTS_OmniTraceKEMPresetLibrary::USOTS_OmniTraceKEMPresetLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_OmniTraceKEMPresetLibrary);
USOTS_OmniTraceKEMPresetLibrary::~USOTS_OmniTraceKEMPresetLibrary() {}
// ********** End Class USOTS_OmniTraceKEMPresetLibrary ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_SOTS_OmniTraceKEMPresetLibrary_h__Script_OmniTrace_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESOTS_OmniTraceKEMPreset_StaticEnum, TEXT("ESOTS_OmniTraceKEMPreset"), &Z_Registration_Info_UEnum_ESOTS_OmniTraceKEMPreset, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3632778219U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSOTS_OmniTraceKEMPresetEntry::StaticStruct, Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMPresetEntry_Statics::NewStructOps, TEXT("SOTS_OmniTraceKEMPresetEntry"),&Z_Registration_Info_UScriptStruct_FSOTS_OmniTraceKEMPresetEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_OmniTraceKEMPresetEntry), 1331929954U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_OmniTraceKEMPresetLibrary, USOTS_OmniTraceKEMPresetLibrary::StaticClass, TEXT("USOTS_OmniTraceKEMPresetLibrary"), &Z_Registration_Info_UClass_USOTS_OmniTraceKEMPresetLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_OmniTraceKEMPresetLibrary), 3495433105U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_SOTS_OmniTraceKEMPresetLibrary_h__Script_OmniTrace_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_SOTS_OmniTraceKEMPresetLibrary_h__Script_OmniTrace_1878224104{
	TEXT("/Script/OmniTrace"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_SOTS_OmniTraceKEMPresetLibrary_h__Script_OmniTrace_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_SOTS_OmniTraceKEMPresetLibrary_h__Script_OmniTrace_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_SOTS_OmniTraceKEMPresetLibrary_h__Script_OmniTrace_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_SOTS_OmniTraceKEMPresetLibrary_h__Script_OmniTrace_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_SOTS_OmniTraceKEMPresetLibrary_h__Script_OmniTrace_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_SOTS_OmniTraceKEMPresetLibrary_h__Script_OmniTrace_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
