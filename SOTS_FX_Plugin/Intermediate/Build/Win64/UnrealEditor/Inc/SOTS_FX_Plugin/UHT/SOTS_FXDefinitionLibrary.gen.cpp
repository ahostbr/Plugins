// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTS_FXDefinitionLibrary.h"
#include "SOTSFXTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_FXDefinitionLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
SOTS_FX_PLUGIN_API UClass* Z_Construct_UClass_USOTS_FXDefinitionLibrary();
SOTS_FX_PLUGIN_API UClass* Z_Construct_UClass_USOTS_FXDefinitionLibrary_NoRegister();
SOTS_FX_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_FXDefinition();
UPackage* Z_Construct_UPackage__Script_SOTS_FX_Plugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USOTS_FXDefinitionLibrary ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_FXDefinitionLibrary;
UClass* USOTS_FXDefinitionLibrary::GetPrivateStaticClass()
{
	using TClass = USOTS_FXDefinitionLibrary;
	if (!Z_Registration_Info_UClass_USOTS_FXDefinitionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_FXDefinitionLibrary"),
			Z_Registration_Info_UClass_USOTS_FXDefinitionLibrary.InnerSingleton,
			StaticRegisterNativesUSOTS_FXDefinitionLibrary,
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
	return Z_Registration_Info_UClass_USOTS_FXDefinitionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_FXDefinitionLibrary_NoRegister()
{
	return USOTS_FXDefinitionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_FXDefinitionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Simple library of tag-driven FX definitions.\n * The global FX manager searches these libraries to resolve\n * incoming FX tags into concrete Niagara / Sound assets.\n */" },
#endif
		{ "IncludePath", "SOTS_FXDefinitionLibrary.h" },
		{ "ModuleRelativePath", "Public/SOTS_FXDefinitionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple library of tag-driven FX definitions.\nThe global FX manager searches these libraries to resolve\nincoming FX tags into concrete Niagara / Sound assets." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Definitions_MetaData[] = {
		{ "Category", "SOTS|FX" },
		{ "ModuleRelativePath", "Public/SOTS_FXDefinitionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_FXDefinitionLibrary constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Definitions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Definitions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USOTS_FXDefinitionLibrary constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_FXDefinitionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_FXDefinitionLibrary_Statics

// ********** Begin Class USOTS_FXDefinitionLibrary Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_FXDefinitionLibrary_Statics::NewProp_Definitions_Inner = { "Definitions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSOTS_FXDefinition, METADATA_PARAMS(0, nullptr) }; // 1227001547
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USOTS_FXDefinitionLibrary_Statics::NewProp_Definitions = { "Definitions", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_FXDefinitionLibrary, Definitions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Definitions_MetaData), NewProp_Definitions_MetaData) }; // 1227001547
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USOTS_FXDefinitionLibrary_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_FXDefinitionLibrary_Statics::NewProp_Definitions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_FXDefinitionLibrary_Statics::NewProp_Definitions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_FXDefinitionLibrary_Statics::PropPointers) < 2048);
// ********** End Class USOTS_FXDefinitionLibrary Property Definitions *****************************
UObject* (*const Z_Construct_UClass_USOTS_FXDefinitionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_FX_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_FXDefinitionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_FXDefinitionLibrary_Statics::ClassParams = {
	&USOTS_FXDefinitionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USOTS_FXDefinitionLibrary_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_FXDefinitionLibrary_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_FXDefinitionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_FXDefinitionLibrary_Statics::Class_MetaDataParams)
};
void USOTS_FXDefinitionLibrary::StaticRegisterNativesUSOTS_FXDefinitionLibrary()
{
}
UClass* Z_Construct_UClass_USOTS_FXDefinitionLibrary()
{
	if (!Z_Registration_Info_UClass_USOTS_FXDefinitionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_FXDefinitionLibrary.OuterSingleton, Z_Construct_UClass_USOTS_FXDefinitionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_FXDefinitionLibrary.OuterSingleton;
}
USOTS_FXDefinitionLibrary::USOTS_FXDefinitionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_FXDefinitionLibrary);
USOTS_FXDefinitionLibrary::~USOTS_FXDefinitionLibrary() {}
// ********** End Class USOTS_FXDefinitionLibrary **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTS_FXDefinitionLibrary_h__Script_SOTS_FX_Plugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_FXDefinitionLibrary, USOTS_FXDefinitionLibrary::StaticClass, TEXT("USOTS_FXDefinitionLibrary"), &Z_Registration_Info_UClass_USOTS_FXDefinitionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_FXDefinitionLibrary), 2818066551U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTS_FXDefinitionLibrary_h__Script_SOTS_FX_Plugin_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTS_FXDefinitionLibrary_h__Script_SOTS_FX_Plugin_3634328390{
	TEXT("/Script/SOTS_FX_Plugin"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTS_FXDefinitionLibrary_h__Script_SOTS_FX_Plugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTS_FXDefinitionLibrary_h__Script_SOTS_FX_Plugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
