// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OmniTracePresetLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeOmniTracePresetLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
OMNITRACE_API UClass* Z_Construct_UClass_UOmniTracePatternLibrary();
OMNITRACE_API UClass* Z_Construct_UClass_UOmniTracePatternLibrary_NoRegister();
OMNITRACE_API UClass* Z_Construct_UClass_UOmniTracePatternPreset_NoRegister();
OMNITRACE_API UScriptStruct* Z_Construct_UScriptStruct_FOmniTracePatternLibraryEntry();
UPackage* Z_Construct_UPackage__Script_OmniTrace();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FOmniTracePatternLibraryEntry *************************************
struct Z_Construct_UScriptStruct_FOmniTracePatternLibraryEntry_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FOmniTracePatternLibraryEntry); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOmniTracePatternLibraryEntry); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** One entry in a pattern library. */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTracePresetLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "One entry in a pattern library." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PresetId_MetaData[] = {
		{ "Category", "OmniTrace|Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Id used for lookup. If left None, the Preset's PresetId will be used. */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTracePresetLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Id used for lookup. If left None, the Preset's PresetId will be used." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Preset_MetaData[] = {
		{ "Category", "OmniTrace|Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The preset asset associated with this entry. */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTracePresetLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The preset asset associated with this entry." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOmniTracePatternLibraryEntry constinit property declarations *****
	static const UECodeGen_Private::FNamePropertyParams NewProp_PresetId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Preset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FOmniTracePatternLibraryEntry constinit property declarations *******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOmniTracePatternLibraryEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FOmniTracePatternLibraryEntry_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOmniTracePatternLibraryEntry;
class UScriptStruct* FOmniTracePatternLibraryEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FOmniTracePatternLibraryEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FOmniTracePatternLibraryEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOmniTracePatternLibraryEntry, (UObject*)Z_Construct_UPackage__Script_OmniTrace(), TEXT("OmniTracePatternLibraryEntry"));
	}
	return Z_Registration_Info_UScriptStruct_FOmniTracePatternLibraryEntry.OuterSingleton;
	}

// ********** Begin ScriptStruct FOmniTracePatternLibraryEntry Property Definitions ****************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOmniTracePatternLibraryEntry_Statics::NewProp_PresetId = { "PresetId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOmniTracePatternLibraryEntry, PresetId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PresetId_MetaData), NewProp_PresetId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOmniTracePatternLibraryEntry_Statics::NewProp_Preset = { "Preset", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOmniTracePatternLibraryEntry, Preset), Z_Construct_UClass_UOmniTracePatternPreset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Preset_MetaData), NewProp_Preset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOmniTracePatternLibraryEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTracePatternLibraryEntry_Statics::NewProp_PresetId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOmniTracePatternLibraryEntry_Statics::NewProp_Preset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOmniTracePatternLibraryEntry_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FOmniTracePatternLibraryEntry Property Definitions ******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOmniTracePatternLibraryEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OmniTrace,
	nullptr,
	&NewStructOps,
	"OmniTracePatternLibraryEntry",
	Z_Construct_UScriptStruct_FOmniTracePatternLibraryEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOmniTracePatternLibraryEntry_Statics::PropPointers),
	sizeof(FOmniTracePatternLibraryEntry),
	alignof(FOmniTracePatternLibraryEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOmniTracePatternLibraryEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOmniTracePatternLibraryEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOmniTracePatternLibraryEntry()
{
	if (!Z_Registration_Info_UScriptStruct_FOmniTracePatternLibraryEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOmniTracePatternLibraryEntry.InnerSingleton, Z_Construct_UScriptStruct_FOmniTracePatternLibraryEntry_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOmniTracePatternLibraryEntry.InnerSingleton);
}
// ********** End ScriptStruct FOmniTracePatternLibraryEntry ***************************************

// ********** Begin Class UOmniTracePatternLibrary Function FindPresetById *************************
struct Z_Construct_UFunction_UOmniTracePatternLibrary_FindPresetById_Statics
{
	struct OmniTracePatternLibrary_eventFindPresetById_Parms
	{
		FName InPresetId;
		UOmniTracePatternPreset* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OmniTrace|Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Simple linear search by id. Returns nullptr if not found. */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTracePresetLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple linear search by id. Returns nullptr if not found." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function FindPresetById constinit property declarations ************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InPresetId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FindPresetById constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FindPresetById Property Definitions ***********************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOmniTracePatternLibrary_FindPresetById_Statics::NewProp_InPresetId = { "InPresetId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTracePatternLibrary_eventFindPresetById_Parms, InPresetId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOmniTracePatternLibrary_FindPresetById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OmniTracePatternLibrary_eventFindPresetById_Parms, ReturnValue), Z_Construct_UClass_UOmniTracePatternPreset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOmniTracePatternLibrary_FindPresetById_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTracePatternLibrary_FindPresetById_Statics::NewProp_InPresetId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOmniTracePatternLibrary_FindPresetById_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOmniTracePatternLibrary_FindPresetById_Statics::PropPointers) < 2048);
// ********** End Function FindPresetById Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOmniTracePatternLibrary_FindPresetById_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOmniTracePatternLibrary, nullptr, "FindPresetById", 	Z_Construct_UFunction_UOmniTracePatternLibrary_FindPresetById_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UOmniTracePatternLibrary_FindPresetById_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UOmniTracePatternLibrary_FindPresetById_Statics::OmniTracePatternLibrary_eventFindPresetById_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOmniTracePatternLibrary_FindPresetById_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOmniTracePatternLibrary_FindPresetById_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOmniTracePatternLibrary_FindPresetById_Statics::OmniTracePatternLibrary_eventFindPresetById_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOmniTracePatternLibrary_FindPresetById()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOmniTracePatternLibrary_FindPresetById_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOmniTracePatternLibrary::execFindPresetById)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InPresetId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOmniTracePatternPreset**)Z_Param__Result=P_THIS->FindPresetById(Z_Param_InPresetId);
	P_NATIVE_END;
}
// ********** End Class UOmniTracePatternLibrary Function FindPresetById ***************************

// ********** Begin Class UOmniTracePatternLibrary *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UOmniTracePatternLibrary;
UClass* UOmniTracePatternLibrary::GetPrivateStaticClass()
{
	using TClass = UOmniTracePatternLibrary;
	if (!Z_Registration_Info_UClass_UOmniTracePatternLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OmniTracePatternLibrary"),
			Z_Registration_Info_UClass_UOmniTracePatternLibrary.InnerSingleton,
			StaticRegisterNativesUOmniTracePatternLibrary,
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
	return Z_Registration_Info_UClass_UOmniTracePatternLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UOmniTracePatternLibrary_NoRegister()
{
	return UOmniTracePatternLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOmniTracePatternLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * DataAsset that groups multiple UOmniTracePatternPreset assets.\n * Used for lookups by id and for building UI lists.\n */" },
#endif
		{ "IncludePath", "OmniTracePresetLibrary.h" },
		{ "ModuleRelativePath", "Public/OmniTracePresetLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DataAsset that groups multiple UOmniTracePatternPreset assets.\nUsed for lookups by id and for building UI lists." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[] = {
		{ "Category", "OmniTrace|Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of presets available in this library. */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTracePresetLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of presets available in this library." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UOmniTracePatternLibrary constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UOmniTracePatternLibrary constinit property declarations *******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("FindPresetById"), .Pointer = &UOmniTracePatternLibrary::execFindPresetById },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOmniTracePatternLibrary_FindPresetById, "FindPresetById" }, // 554879633
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOmniTracePatternLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UOmniTracePatternLibrary_Statics

// ********** Begin Class UOmniTracePatternLibrary Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOmniTracePatternLibrary_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOmniTracePatternLibraryEntry, METADATA_PARAMS(0, nullptr) }; // 4220991059
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOmniTracePatternLibrary_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOmniTracePatternLibrary, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entries_MetaData), NewProp_Entries_MetaData) }; // 4220991059
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOmniTracePatternLibrary_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOmniTracePatternLibrary_Statics::NewProp_Entries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOmniTracePatternLibrary_Statics::NewProp_Entries,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOmniTracePatternLibrary_Statics::PropPointers) < 2048);
// ********** End Class UOmniTracePatternLibrary Property Definitions ******************************
UObject* (*const Z_Construct_UClass_UOmniTracePatternLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_OmniTrace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOmniTracePatternLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOmniTracePatternLibrary_Statics::ClassParams = {
	&UOmniTracePatternLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOmniTracePatternLibrary_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOmniTracePatternLibrary_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOmniTracePatternLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UOmniTracePatternLibrary_Statics::Class_MetaDataParams)
};
void UOmniTracePatternLibrary::StaticRegisterNativesUOmniTracePatternLibrary()
{
	UClass* Class = UOmniTracePatternLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UOmniTracePatternLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_UOmniTracePatternLibrary()
{
	if (!Z_Registration_Info_UClass_UOmniTracePatternLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOmniTracePatternLibrary.OuterSingleton, Z_Construct_UClass_UOmniTracePatternLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOmniTracePatternLibrary.OuterSingleton;
}
UOmniTracePatternLibrary::UOmniTracePatternLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOmniTracePatternLibrary);
UOmniTracePatternLibrary::~UOmniTracePatternLibrary() {}
// ********** End Class UOmniTracePatternLibrary ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTracePresetLibrary_h__Script_OmniTrace_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOmniTracePatternLibraryEntry::StaticStruct, Z_Construct_UScriptStruct_FOmniTracePatternLibraryEntry_Statics::NewStructOps, TEXT("OmniTracePatternLibraryEntry"),&Z_Registration_Info_UScriptStruct_FOmniTracePatternLibraryEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOmniTracePatternLibraryEntry), 4220991059U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOmniTracePatternLibrary, UOmniTracePatternLibrary::StaticClass, TEXT("UOmniTracePatternLibrary"), &Z_Registration_Info_UClass_UOmniTracePatternLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOmniTracePatternLibrary), 1690909571U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTracePresetLibrary_h__Script_OmniTrace_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTracePresetLibrary_h__Script_OmniTrace_518726423{
	TEXT("/Script/OmniTrace"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTracePresetLibrary_h__Script_OmniTrace_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTracePresetLibrary_h__Script_OmniTrace_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTracePresetLibrary_h__Script_OmniTrace_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTracePresetLibrary_h__Script_OmniTrace_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
