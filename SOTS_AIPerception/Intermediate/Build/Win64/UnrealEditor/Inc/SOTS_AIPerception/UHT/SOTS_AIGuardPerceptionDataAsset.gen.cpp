// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTS_AIGuardPerceptionDataAsset.h"
#include "SOTS_AIPerceptionTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_AIGuardPerceptionDataAsset() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
SOTS_AIPERCEPTION_API UClass* Z_Construct_UClass_USOTS_AIGuardPerceptionDataAsset();
SOTS_AIPERCEPTION_API UClass* Z_Construct_UClass_USOTS_AIGuardPerceptionDataAsset_NoRegister();
SOTS_AIPERCEPTION_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_AIGuardPerceptionConfig();
UPackage* Z_Construct_UPackage__Script_SOTS_AIPerception();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USOTS_AIGuardPerceptionDataAsset *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_AIGuardPerceptionDataAsset;
UClass* USOTS_AIGuardPerceptionDataAsset::GetPrivateStaticClass()
{
	using TClass = USOTS_AIGuardPerceptionDataAsset;
	if (!Z_Registration_Info_UClass_USOTS_AIGuardPerceptionDataAsset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_AIGuardPerceptionDataAsset"),
			Z_Registration_Info_UClass_USOTS_AIGuardPerceptionDataAsset.InnerSingleton,
			StaticRegisterNativesUSOTS_AIGuardPerceptionDataAsset,
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
	return Z_Registration_Info_UClass_USOTS_AIGuardPerceptionDataAsset.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_AIGuardPerceptionDataAsset_NoRegister()
{
	return USOTS_AIGuardPerceptionDataAsset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_AIGuardPerceptionDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Per-guard perception tuning asset. Controls how fast suspicion\n * rises/falls and which tags are applied when states change.\n */" },
#endif
		{ "IncludePath", "SOTS_AIGuardPerceptionDataAsset.h" },
		{ "ModuleRelativePath", "Public/SOTS_AIGuardPerceptionDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Per-guard perception tuning asset. Controls how fast suspicion\nrises/falls and which tags are applied when states change." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "SOTS|AI" },
		{ "ModuleRelativePath", "Public/SOTS_AIGuardPerceptionDataAsset.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_AIGuardPerceptionDataAsset constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USOTS_AIGuardPerceptionDataAsset constinit property declarations ***********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_AIGuardPerceptionDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_AIGuardPerceptionDataAsset_Statics

// ********** Begin Class USOTS_AIGuardPerceptionDataAsset Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_AIGuardPerceptionDataAsset_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AIGuardPerceptionDataAsset, Config), Z_Construct_UScriptStruct_FSOTS_AIGuardPerceptionConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 4249128913
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USOTS_AIGuardPerceptionDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AIGuardPerceptionDataAsset_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AIGuardPerceptionDataAsset_Statics::PropPointers) < 2048);
// ********** End Class USOTS_AIGuardPerceptionDataAsset Property Definitions **********************
UObject* (*const Z_Construct_UClass_USOTS_AIGuardPerceptionDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_AIPerception,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AIGuardPerceptionDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_AIGuardPerceptionDataAsset_Statics::ClassParams = {
	&USOTS_AIGuardPerceptionDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USOTS_AIGuardPerceptionDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AIGuardPerceptionDataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AIGuardPerceptionDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_AIGuardPerceptionDataAsset_Statics::Class_MetaDataParams)
};
void USOTS_AIGuardPerceptionDataAsset::StaticRegisterNativesUSOTS_AIGuardPerceptionDataAsset()
{
}
UClass* Z_Construct_UClass_USOTS_AIGuardPerceptionDataAsset()
{
	if (!Z_Registration_Info_UClass_USOTS_AIGuardPerceptionDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_AIGuardPerceptionDataAsset.OuterSingleton, Z_Construct_UClass_USOTS_AIGuardPerceptionDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_AIGuardPerceptionDataAsset.OuterSingleton;
}
USOTS_AIGuardPerceptionDataAsset::USOTS_AIGuardPerceptionDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_AIGuardPerceptionDataAsset);
USOTS_AIGuardPerceptionDataAsset::~USOTS_AIGuardPerceptionDataAsset() {}
// ********** End Class USOTS_AIGuardPerceptionDataAsset *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_AIPerception_Source_SOTS_AIPerception_Public_SOTS_AIGuardPerceptionDataAsset_h__Script_SOTS_AIPerception_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_AIGuardPerceptionDataAsset, USOTS_AIGuardPerceptionDataAsset::StaticClass, TEXT("USOTS_AIGuardPerceptionDataAsset"), &Z_Registration_Info_UClass_USOTS_AIGuardPerceptionDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_AIGuardPerceptionDataAsset), 3783712608U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_AIPerception_Source_SOTS_AIPerception_Public_SOTS_AIGuardPerceptionDataAsset_h__Script_SOTS_AIPerception_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_AIPerception_Source_SOTS_AIPerception_Public_SOTS_AIGuardPerceptionDataAsset_h__Script_SOTS_AIPerception_2114807871{
	TEXT("/Script/SOTS_AIPerception"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_AIPerception_Source_SOTS_AIPerception_Public_SOTS_AIGuardPerceptionDataAsset_h__Script_SOTS_AIPerception_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_AIPerception_Source_SOTS_AIPerception_Public_SOTS_AIGuardPerceptionDataAsset_h__Script_SOTS_AIPerception_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
