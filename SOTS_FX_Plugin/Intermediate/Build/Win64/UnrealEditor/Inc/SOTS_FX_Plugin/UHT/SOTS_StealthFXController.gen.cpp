// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTS_StealthFXController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_StealthFXController() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
SOTS_FX_PLUGIN_API UClass* Z_Construct_UClass_USOTS_StealthFXController();
SOTS_FX_PLUGIN_API UClass* Z_Construct_UClass_USOTS_StealthFXController_NoRegister();
UPackage* Z_Construct_UPackage__Script_SOTS_FX_Plugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USOTS_StealthFXController ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_StealthFXController;
UClass* USOTS_StealthFXController::GetPrivateStaticClass()
{
	using TClass = USOTS_StealthFXController;
	if (!Z_Registration_Info_UClass_USOTS_StealthFXController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_StealthFXController"),
			Z_Registration_Info_UClass_USOTS_StealthFXController.InnerSingleton,
			StaticRegisterNativesUSOTS_StealthFXController,
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
	return Z_Registration_Info_UClass_USOTS_StealthFXController.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_StealthFXController_NoRegister()
{
	return USOTS_StealthFXController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_StealthFXController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Lightweight listener that translates global stealth state into FX parameters.\n * This object is intended to be owned/initialized by game code (e.g., GameInstance)\n * and uses existing SOTS_FX manager APIs to actually spawn/scale FX.\n */" },
#endif
		{ "IncludePath", "SOTS_StealthFXController.h" },
		{ "ModuleRelativePath", "Public/SOTS_StealthFXController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lightweight listener that translates global stealth state into FX parameters.\nThis object is intended to be owned/initialized by game code (e.g., GameInstance)\nand uses existing SOTS_FX manager APIs to actually spawn/scale FX." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Curve_LightToAmbientFX_MetaData[] = {
		{ "Category", "StealthFX" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Curves to control FX strength (set from editor or BP).\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_StealthFXController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Curves to control FX strength (set from editor or BP)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Curve_StealthToDangerFX_MetaData[] = {
		{ "Category", "StealthFX" },
		{ "ModuleRelativePath", "Public/SOTS_StealthFXController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_StealthFXController constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Curve_LightToAmbientFX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Curve_StealthToDangerFX;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USOTS_StealthFXController constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_StealthFXController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_StealthFXController_Statics

// ********** Begin Class USOTS_StealthFXController Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USOTS_StealthFXController_Statics::NewProp_Curve_LightToAmbientFX = { "Curve_LightToAmbientFX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_StealthFXController, Curve_LightToAmbientFX), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Curve_LightToAmbientFX_MetaData), NewProp_Curve_LightToAmbientFX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USOTS_StealthFXController_Statics::NewProp_Curve_StealthToDangerFX = { "Curve_StealthToDangerFX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_StealthFXController, Curve_StealthToDangerFX), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Curve_StealthToDangerFX_MetaData), NewProp_Curve_StealthToDangerFX_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USOTS_StealthFXController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_StealthFXController_Statics::NewProp_Curve_LightToAmbientFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_StealthFXController_Statics::NewProp_Curve_StealthToDangerFX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_StealthFXController_Statics::PropPointers) < 2048);
// ********** End Class USOTS_StealthFXController Property Definitions *****************************
UObject* (*const Z_Construct_UClass_USOTS_StealthFXController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_FX_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_StealthFXController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_StealthFXController_Statics::ClassParams = {
	&USOTS_StealthFXController::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USOTS_StealthFXController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_StealthFXController_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_StealthFXController_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_StealthFXController_Statics::Class_MetaDataParams)
};
void USOTS_StealthFXController::StaticRegisterNativesUSOTS_StealthFXController()
{
}
UClass* Z_Construct_UClass_USOTS_StealthFXController()
{
	if (!Z_Registration_Info_UClass_USOTS_StealthFXController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_StealthFXController.OuterSingleton, Z_Construct_UClass_USOTS_StealthFXController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_StealthFXController.OuterSingleton;
}
USOTS_StealthFXController::USOTS_StealthFXController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_StealthFXController);
USOTS_StealthFXController::~USOTS_StealthFXController() {}
// ********** End Class USOTS_StealthFXController **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTS_StealthFXController_h__Script_SOTS_FX_Plugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_StealthFXController, USOTS_StealthFXController::StaticClass, TEXT("USOTS_StealthFXController"), &Z_Registration_Info_UClass_USOTS_StealthFXController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_StealthFXController), 3035128922U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTS_StealthFXController_h__Script_SOTS_FX_Plugin_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTS_StealthFXController_h__Script_SOTS_FX_Plugin_1926313998{
	TEXT("/Script/SOTS_FX_Plugin"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTS_StealthFXController_h__Script_SOTS_FX_Plugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTS_StealthFXController_h__Script_SOTS_FX_Plugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
