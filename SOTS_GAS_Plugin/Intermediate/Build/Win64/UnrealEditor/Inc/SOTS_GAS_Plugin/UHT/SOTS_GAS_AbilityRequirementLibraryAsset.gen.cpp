// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTS_GAS_AbilityRequirementLibraryAsset.h"
#include "Data/SOTS_AbilityTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_GAS_AbilityRequirementLibraryAsset() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_USOTS_AbilityRequirementLibraryAsset();
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_USOTS_AbilityRequirementLibraryAsset_NoRegister();
SOTS_GAS_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_AbilityRequirements();
UPackage* Z_Construct_UPackage__Script_SOTS_GAS_Plugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USOTS_AbilityRequirementLibraryAsset *************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_AbilityRequirementLibraryAsset;
UClass* USOTS_AbilityRequirementLibraryAsset::GetPrivateStaticClass()
{
	using TClass = USOTS_AbilityRequirementLibraryAsset;
	if (!Z_Registration_Info_UClass_USOTS_AbilityRequirementLibraryAsset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_AbilityRequirementLibraryAsset"),
			Z_Registration_Info_UClass_USOTS_AbilityRequirementLibraryAsset.InnerSingleton,
			StaticRegisterNativesUSOTS_AbilityRequirementLibraryAsset,
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
	return Z_Registration_Info_UClass_USOTS_AbilityRequirementLibraryAsset.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_AbilityRequirementLibraryAsset_NoRegister()
{
	return USOTS_AbilityRequirementLibraryAsset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_AbilityRequirementLibraryAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Optional library asset that maps ability tags to authored requirement\n * descriptions. Abilities can look up their tag here and then evaluate\n * the resulting FSOTS_AbilityRequirements struct.\n */" },
#endif
		{ "IncludePath", "SOTS_GAS_AbilityRequirementLibraryAsset.h" },
		{ "ModuleRelativePath", "Public/SOTS_GAS_AbilityRequirementLibraryAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional library asset that maps ability tags to authored requirement\ndescriptions. Abilities can look up their tag here and then evaluate\nthe resulting FSOTS_AbilityRequirements struct." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityRequirements_MetaData[] = {
		{ "Category", "SOTS|GAS|Ability" },
		{ "ModuleRelativePath", "Public/SOTS_GAS_AbilityRequirementLibraryAsset.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_AbilityRequirementLibraryAsset constinit property declarations *****
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityRequirements_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilityRequirements;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USOTS_AbilityRequirementLibraryAsset constinit property declarations *******
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_AbilityRequirementLibraryAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_AbilityRequirementLibraryAsset_Statics

// ********** Begin Class USOTS_AbilityRequirementLibraryAsset Property Definitions ****************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_AbilityRequirementLibraryAsset_Statics::NewProp_AbilityRequirements_Inner = { "AbilityRequirements", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSOTS_AbilityRequirements, METADATA_PARAMS(0, nullptr) }; // 3678999227
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USOTS_AbilityRequirementLibraryAsset_Statics::NewProp_AbilityRequirements = { "AbilityRequirements", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AbilityRequirementLibraryAsset, AbilityRequirements), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityRequirements_MetaData), NewProp_AbilityRequirements_MetaData) }; // 3678999227
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USOTS_AbilityRequirementLibraryAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AbilityRequirementLibraryAsset_Statics::NewProp_AbilityRequirements_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AbilityRequirementLibraryAsset_Statics::NewProp_AbilityRequirements,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AbilityRequirementLibraryAsset_Statics::PropPointers) < 2048);
// ********** End Class USOTS_AbilityRequirementLibraryAsset Property Definitions ******************
UObject* (*const Z_Construct_UClass_USOTS_AbilityRequirementLibraryAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_GAS_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AbilityRequirementLibraryAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_AbilityRequirementLibraryAsset_Statics::ClassParams = {
	&USOTS_AbilityRequirementLibraryAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USOTS_AbilityRequirementLibraryAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AbilityRequirementLibraryAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AbilityRequirementLibraryAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_AbilityRequirementLibraryAsset_Statics::Class_MetaDataParams)
};
void USOTS_AbilityRequirementLibraryAsset::StaticRegisterNativesUSOTS_AbilityRequirementLibraryAsset()
{
}
UClass* Z_Construct_UClass_USOTS_AbilityRequirementLibraryAsset()
{
	if (!Z_Registration_Info_UClass_USOTS_AbilityRequirementLibraryAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_AbilityRequirementLibraryAsset.OuterSingleton, Z_Construct_UClass_USOTS_AbilityRequirementLibraryAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_AbilityRequirementLibraryAsset.OuterSingleton;
}
USOTS_AbilityRequirementLibraryAsset::USOTS_AbilityRequirementLibraryAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_AbilityRequirementLibraryAsset);
USOTS_AbilityRequirementLibraryAsset::~USOTS_AbilityRequirementLibraryAsset() {}
// ********** End Class USOTS_AbilityRequirementLibraryAsset ***************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_AbilityRequirementLibraryAsset_h__Script_SOTS_GAS_Plugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_AbilityRequirementLibraryAsset, USOTS_AbilityRequirementLibraryAsset::StaticClass, TEXT("USOTS_AbilityRequirementLibraryAsset"), &Z_Registration_Info_UClass_USOTS_AbilityRequirementLibraryAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_AbilityRequirementLibraryAsset), 708549218U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_AbilityRequirementLibraryAsset_h__Script_SOTS_GAS_Plugin_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_AbilityRequirementLibraryAsset_h__Script_SOTS_GAS_Plugin_293204539{
	TEXT("/Script/SOTS_GAS_Plugin"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_AbilityRequirementLibraryAsset_h__Script_SOTS_GAS_Plugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_AbilityRequirementLibraryAsset_h__Script_SOTS_GAS_Plugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
