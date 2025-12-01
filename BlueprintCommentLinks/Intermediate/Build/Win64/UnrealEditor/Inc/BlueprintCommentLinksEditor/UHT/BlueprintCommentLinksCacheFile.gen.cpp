// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintCommentLinksCacheFile.h"
#include "BlueprintCommentLinksTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBlueprintCommentLinksCacheFile() {}

// ********** Begin Cross Module References ********************************************************
BLUEPRINTCOMMENTLINKSEDITOR_API UClass* Z_Construct_UClass_UBlueprintCommentLinkCacheFile();
BLUEPRINTCOMMENTLINKSEDITOR_API UClass* Z_Construct_UClass_UBlueprintCommentLinkCacheFile_NoRegister();
BLUEPRINTCOMMENTLINKSEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintCommentLinkGraphData();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_BlueprintCommentLinksEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBlueprintCommentLinkCacheFile *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UBlueprintCommentLinkCacheFile;
UClass* UBlueprintCommentLinkCacheFile::GetPrivateStaticClass()
{
	using TClass = UBlueprintCommentLinkCacheFile;
	if (!Z_Registration_Info_UClass_UBlueprintCommentLinkCacheFile.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BlueprintCommentLinkCacheFile"),
			Z_Registration_Info_UClass_UBlueprintCommentLinkCacheFile.InnerSingleton,
			StaticRegisterNativesUBlueprintCommentLinkCacheFile,
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
	return Z_Registration_Info_UClass_UBlueprintCommentLinkCacheFile.InnerSingleton;
}
UClass* Z_Construct_UClass_UBlueprintCommentLinkCacheFile_NoRegister()
{
	return UBlueprintCommentLinkCacheFile::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBlueprintCommentLinkCacheFile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Global cache responsible for storing per-graph comment link data and\n * persisting it to package metadata.\n */" },
#endif
		{ "IncludePath", "BlueprintCommentLinksCacheFile.h" },
		{ "ModuleRelativePath", "Public/BlueprintCommentLinksCacheFile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Global cache responsible for storing per-graph comment link data and\npersisting it to package metadata." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CacheData_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Per-graph data, keyed by the graph path name. */" },
#endif
		{ "ModuleRelativePath", "Public/BlueprintCommentLinksCacheFile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Per-graph data, keyed by the graph path name." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UBlueprintCommentLinkCacheFile constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_CacheData_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CacheData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CacheData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UBlueprintCommentLinkCacheFile constinit property declarations *************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintCommentLinkCacheFile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UBlueprintCommentLinkCacheFile_Statics

// ********** Begin Class UBlueprintCommentLinkCacheFile Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprintCommentLinkCacheFile_Statics::NewProp_CacheData_ValueProp = { "CacheData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FBlueprintCommentLinkGraphData, METADATA_PARAMS(0, nullptr) }; // 3635883753
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBlueprintCommentLinkCacheFile_Statics::NewProp_CacheData_Key_KeyProp = { "CacheData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UBlueprintCommentLinkCacheFile_Statics::NewProp_CacheData = { "CacheData", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlueprintCommentLinkCacheFile, CacheData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CacheData_MetaData), NewProp_CacheData_MetaData) }; // 3635883753
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlueprintCommentLinkCacheFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintCommentLinkCacheFile_Statics::NewProp_CacheData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintCommentLinkCacheFile_Statics::NewProp_CacheData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintCommentLinkCacheFile_Statics::NewProp_CacheData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintCommentLinkCacheFile_Statics::PropPointers) < 2048);
// ********** End Class UBlueprintCommentLinkCacheFile Property Definitions ************************
UObject* (*const Z_Construct_UClass_UBlueprintCommentLinkCacheFile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_BlueprintCommentLinksEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintCommentLinkCacheFile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintCommentLinkCacheFile_Statics::ClassParams = {
	&UBlueprintCommentLinkCacheFile::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBlueprintCommentLinkCacheFile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintCommentLinkCacheFile_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintCommentLinkCacheFile_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlueprintCommentLinkCacheFile_Statics::Class_MetaDataParams)
};
void UBlueprintCommentLinkCacheFile::StaticRegisterNativesUBlueprintCommentLinkCacheFile()
{
}
UClass* Z_Construct_UClass_UBlueprintCommentLinkCacheFile()
{
	if (!Z_Registration_Info_UClass_UBlueprintCommentLinkCacheFile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintCommentLinkCacheFile.OuterSingleton, Z_Construct_UClass_UBlueprintCommentLinkCacheFile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlueprintCommentLinkCacheFile.OuterSingleton;
}
UBlueprintCommentLinkCacheFile::UBlueprintCommentLinkCacheFile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBlueprintCommentLinkCacheFile);
UBlueprintCommentLinkCacheFile::~UBlueprintCommentLinkCacheFile() {}
// ********** End Class UBlueprintCommentLinkCacheFile *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_BlueprintCommentLinks_Source_BlueprintCommentLinksEditor_Public_BlueprintCommentLinksCacheFile_h__Script_BlueprintCommentLinksEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlueprintCommentLinkCacheFile, UBlueprintCommentLinkCacheFile::StaticClass, TEXT("UBlueprintCommentLinkCacheFile"), &Z_Registration_Info_UClass_UBlueprintCommentLinkCacheFile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintCommentLinkCacheFile), 2234200297U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_BlueprintCommentLinks_Source_BlueprintCommentLinksEditor_Public_BlueprintCommentLinksCacheFile_h__Script_BlueprintCommentLinksEditor_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_BlueprintCommentLinks_Source_BlueprintCommentLinksEditor_Public_BlueprintCommentLinksCacheFile_h__Script_BlueprintCommentLinksEditor_3310759436{
	TEXT("/Script/BlueprintCommentLinksEditor"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_BlueprintCommentLinks_Source_BlueprintCommentLinksEditor_Public_BlueprintCommentLinksCacheFile_h__Script_BlueprintCommentLinksEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_BlueprintCommentLinks_Source_BlueprintCommentLinksEditor_Public_BlueprintCommentLinksCacheFile_h__Script_BlueprintCommentLinksEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
