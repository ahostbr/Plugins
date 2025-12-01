// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OmniTracePatternPreset.h"
#include "OmniTraceTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeOmniTracePatternPreset() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
OMNITRACE_API UClass* Z_Construct_UClass_UOmniTracePatternPreset();
OMNITRACE_API UClass* Z_Construct_UClass_UOmniTracePatternPreset_NoRegister();
OMNITRACE_API UScriptStruct* Z_Construct_UScriptStruct_FOmniTraceRequest();
UPackage* Z_Construct_UPackage__Script_OmniTrace();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOmniTracePatternPreset **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UOmniTracePatternPreset;
UClass* UOmniTracePatternPreset::GetPrivateStaticClass()
{
	using TClass = UOmniTracePatternPreset;
	if (!Z_Registration_Info_UClass_UOmniTracePatternPreset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OmniTracePatternPreset"),
			Z_Registration_Info_UClass_UOmniTracePatternPreset.InnerSingleton,
			StaticRegisterNativesUOmniTracePatternPreset,
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
	return Z_Registration_Info_UClass_UOmniTracePatternPreset.InnerSingleton;
}
UClass* Z_Construct_UClass_UOmniTracePatternPreset_NoRegister()
{
	return UOmniTracePatternPreset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOmniTracePatternPreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * DataAsset wrapper for FOmniTraceRequest plus metadata.\n * Users create presets of this type and pass them to the library functions.\n */" },
#endif
		{ "IncludePath", "OmniTracePatternPreset.h" },
		{ "ModuleRelativePath", "Public/OmniTracePatternPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DataAsset wrapper for FOmniTraceRequest plus metadata.\nUsers create presets of this type and pass them to the library functions." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PresetId_MetaData[] = {
		{ "Category", "OmniTrace|Preset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Stable internal identifier for this preset (for lookups, debug, etc.). */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTracePatternPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stable internal identifier for this preset (for lookups, debug, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "OmniTrace|Preset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Display name shown in tools / UIs. */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTracePatternPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Display name shown in tools / UIs." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "OmniTrace|Preset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Short human description of what this preset does. */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTracePatternPreset.h" },
		{ "MultiLine", "TRUE" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Short human description of what this preset does." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[] = {
		{ "Category", "OmniTrace|Preset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Loose category tag (Vision, Weapon, Environment, Utility, etc.). */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTracePatternPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Loose category tag (Vision, Weapon, Environment, Utility, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FamilyColor_MetaData[] = {
		{ "Category", "OmniTrace|Preset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Default debug color for this preset's lines. */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTracePatternPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default debug color for this preset's lines." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideDebugColorFromFamily_MetaData[] = {
		{ "Category", "OmniTrace|Preset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * If true, when applying this preset the FamilyColor will overwrite\n     * Request.DebugOptions.Color.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTracePatternPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, when applying this preset the FamilyColor will overwrite\nRequest.DebugOptions.Color." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[] = {
		{ "Category", "OmniTrace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The underlying OmniTrace request this preset represents. */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTracePatternPreset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The underlying OmniTrace request this preset represents." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UOmniTracePatternPreset constinit property declarations ******************
	static const UECodeGen_Private::FNamePropertyParams NewProp_PresetId;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Category;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FamilyColor;
	static void NewProp_bOverrideDebugColorFromFamily_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideDebugColorFromFamily;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UOmniTracePatternPreset constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOmniTracePatternPreset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UOmniTracePatternPreset_Statics

// ********** Begin Class UOmniTracePatternPreset Property Definitions *****************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOmniTracePatternPreset_Statics::NewProp_PresetId = { "PresetId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOmniTracePatternPreset, PresetId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PresetId_MetaData), NewProp_PresetId_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UOmniTracePatternPreset_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOmniTracePatternPreset, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UOmniTracePatternPreset_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOmniTracePatternPreset, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOmniTracePatternPreset_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOmniTracePatternPreset, Category), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Category_MetaData), NewProp_Category_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOmniTracePatternPreset_Statics::NewProp_FamilyColor = { "FamilyColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOmniTracePatternPreset, FamilyColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FamilyColor_MetaData), NewProp_FamilyColor_MetaData) };
void Z_Construct_UClass_UOmniTracePatternPreset_Statics::NewProp_bOverrideDebugColorFromFamily_SetBit(void* Obj)
{
	((UOmniTracePatternPreset*)Obj)->bOverrideDebugColorFromFamily = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOmniTracePatternPreset_Statics::NewProp_bOverrideDebugColorFromFamily = { "bOverrideDebugColorFromFamily", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOmniTracePatternPreset), &Z_Construct_UClass_UOmniTracePatternPreset_Statics::NewProp_bOverrideDebugColorFromFamily_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideDebugColorFromFamily_MetaData), NewProp_bOverrideDebugColorFromFamily_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOmniTracePatternPreset_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010008000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOmniTracePatternPreset, Request), Z_Construct_UScriptStruct_FOmniTraceRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 979700793
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOmniTracePatternPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOmniTracePatternPreset_Statics::NewProp_PresetId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOmniTracePatternPreset_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOmniTracePatternPreset_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOmniTracePatternPreset_Statics::NewProp_Category,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOmniTracePatternPreset_Statics::NewProp_FamilyColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOmniTracePatternPreset_Statics::NewProp_bOverrideDebugColorFromFamily,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOmniTracePatternPreset_Statics::NewProp_Request,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOmniTracePatternPreset_Statics::PropPointers) < 2048);
// ********** End Class UOmniTracePatternPreset Property Definitions *******************************
UObject* (*const Z_Construct_UClass_UOmniTracePatternPreset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_OmniTrace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOmniTracePatternPreset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOmniTracePatternPreset_Statics::ClassParams = {
	&UOmniTracePatternPreset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOmniTracePatternPreset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOmniTracePatternPreset_Statics::PropPointers),
	0,
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOmniTracePatternPreset_Statics::Class_MetaDataParams), Z_Construct_UClass_UOmniTracePatternPreset_Statics::Class_MetaDataParams)
};
void UOmniTracePatternPreset::StaticRegisterNativesUOmniTracePatternPreset()
{
}
UClass* Z_Construct_UClass_UOmniTracePatternPreset()
{
	if (!Z_Registration_Info_UClass_UOmniTracePatternPreset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOmniTracePatternPreset.OuterSingleton, Z_Construct_UClass_UOmniTracePatternPreset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOmniTracePatternPreset.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOmniTracePatternPreset);
UOmniTracePatternPreset::~UOmniTracePatternPreset() {}
// ********** End Class UOmniTracePatternPreset ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTracePatternPreset_h__Script_OmniTrace_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOmniTracePatternPreset, UOmniTracePatternPreset::StaticClass, TEXT("UOmniTracePatternPreset"), &Z_Registration_Info_UClass_UOmniTracePatternPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOmniTracePatternPreset), 3914241431U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTracePatternPreset_h__Script_OmniTrace_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTracePatternPreset_h__Script_OmniTrace_79633690{
	TEXT("/Script/OmniTrace"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTracePatternPreset_h__Script_OmniTrace_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTracePatternPreset_h__Script_OmniTrace_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
