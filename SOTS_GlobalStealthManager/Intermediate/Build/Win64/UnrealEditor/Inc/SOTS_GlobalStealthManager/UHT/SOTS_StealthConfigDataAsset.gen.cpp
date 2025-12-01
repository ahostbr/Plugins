// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTS_StealthConfigDataAsset.h"
#include "SOTS_GlobalStealthTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_StealthConfigDataAsset() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
SOTS_GLOBALSTEALTHMANAGER_API UClass* Z_Construct_UClass_USOTS_StealthConfigDataAsset();
SOTS_GLOBALSTEALTHMANAGER_API UClass* Z_Construct_UClass_USOTS_StealthConfigDataAsset_NoRegister();
SOTS_GLOBALSTEALTHMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_StealthScoringConfig();
UPackage* Z_Construct_UPackage__Script_SOTS_GlobalStealthManager();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USOTS_StealthConfigDataAsset *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_StealthConfigDataAsset;
UClass* USOTS_StealthConfigDataAsset::GetPrivateStaticClass()
{
	using TClass = USOTS_StealthConfigDataAsset;
	if (!Z_Registration_Info_UClass_USOTS_StealthConfigDataAsset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_StealthConfigDataAsset"),
			Z_Registration_Info_UClass_USOTS_StealthConfigDataAsset.InnerSingleton,
			StaticRegisterNativesUSOTS_StealthConfigDataAsset,
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
	return Z_Registration_Info_UClass_USOTS_StealthConfigDataAsset.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_StealthConfigDataAsset_NoRegister()
{
	return USOTS_StealthConfigDataAsset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_StealthConfigDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * DataAsset that holds all tunable knobs for the global stealth scoring model.\n * This allows designers to tweak stealth behavior without touching code.\n */" },
#endif
		{ "IncludePath", "SOTS_StealthConfigDataAsset.h" },
		{ "ModuleRelativePath", "Public/SOTS_StealthConfigDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DataAsset that holds all tunable knobs for the global stealth scoring model.\nThis allows designers to tweak stealth behavior without touching code." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "Stealth" },
		{ "ModuleRelativePath", "Public/SOTS_StealthConfigDataAsset.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_StealthConfigDataAsset constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USOTS_StealthConfigDataAsset constinit property declarations ***************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_StealthConfigDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_StealthConfigDataAsset_Statics

// ********** Begin Class USOTS_StealthConfigDataAsset Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_StealthConfigDataAsset_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_StealthConfigDataAsset, Config), Z_Construct_UScriptStruct_FSOTS_StealthScoringConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 1323327223
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USOTS_StealthConfigDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_StealthConfigDataAsset_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_StealthConfigDataAsset_Statics::PropPointers) < 2048);
// ********** End Class USOTS_StealthConfigDataAsset Property Definitions **************************
UObject* (*const Z_Construct_UClass_USOTS_StealthConfigDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_GlobalStealthManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_StealthConfigDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_StealthConfigDataAsset_Statics::ClassParams = {
	&USOTS_StealthConfigDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USOTS_StealthConfigDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_StealthConfigDataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_StealthConfigDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_StealthConfigDataAsset_Statics::Class_MetaDataParams)
};
void USOTS_StealthConfigDataAsset::StaticRegisterNativesUSOTS_StealthConfigDataAsset()
{
}
UClass* Z_Construct_UClass_USOTS_StealthConfigDataAsset()
{
	if (!Z_Registration_Info_UClass_USOTS_StealthConfigDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_StealthConfigDataAsset.OuterSingleton, Z_Construct_UClass_USOTS_StealthConfigDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_StealthConfigDataAsset.OuterSingleton;
}
USOTS_StealthConfigDataAsset::USOTS_StealthConfigDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_StealthConfigDataAsset);
USOTS_StealthConfigDataAsset::~USOTS_StealthConfigDataAsset() {}
// ********** End Class USOTS_StealthConfigDataAsset ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_StealthConfigDataAsset_h__Script_SOTS_GlobalStealthManager_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_StealthConfigDataAsset, USOTS_StealthConfigDataAsset::StaticClass, TEXT("USOTS_StealthConfigDataAsset"), &Z_Registration_Info_UClass_USOTS_StealthConfigDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_StealthConfigDataAsset), 3515668250U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_StealthConfigDataAsset_h__Script_SOTS_GlobalStealthManager_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_StealthConfigDataAsset_h__Script_SOTS_GlobalStealthManager_2126020058{
	TEXT("/Script/SOTS_GlobalStealthManager"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_StealthConfigDataAsset_h__Script_SOTS_GlobalStealthManager_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_StealthConfigDataAsset_h__Script_SOTS_GlobalStealthManager_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
