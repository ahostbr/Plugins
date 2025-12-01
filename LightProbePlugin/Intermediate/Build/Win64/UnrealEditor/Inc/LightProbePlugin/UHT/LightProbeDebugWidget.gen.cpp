// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LightProbeDebugWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeLightProbeDebugWidget() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
LIGHTPROBEPLUGIN_API UClass* Z_Construct_UClass_ULightProbeDebugWidget();
LIGHTPROBEPLUGIN_API UClass* Z_Construct_UClass_ULightProbeDebugWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_LightProbePlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ULightProbeDebugWidget ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ULightProbeDebugWidget;
UClass* ULightProbeDebugWidget::GetPrivateStaticClass()
{
	using TClass = ULightProbeDebugWidget;
	if (!Z_Registration_Info_UClass_ULightProbeDebugWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("LightProbeDebugWidget"),
			Z_Registration_Info_UClass_ULightProbeDebugWidget.InnerSingleton,
			StaticRegisterNativesULightProbeDebugWidget,
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
	return Z_Registration_Info_UClass_ULightProbeDebugWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_ULightProbeDebugWidget_NoRegister()
{
	return ULightProbeDebugWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULightProbeDebugWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LightProbeDebugWidget.h" },
		{ "ModuleRelativePath", "Public/LightProbeDebugWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderTarget_MetaData[] = {
		{ "Category", "Light Probe" },
		{ "ModuleRelativePath", "Public/LightProbeDebugWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImageSize_MetaData[] = {
		{ "Category", "Light Probe" },
		{ "ModuleRelativePath", "Public/LightProbeDebugWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenOffset_MetaData[] = {
		{ "Category", "Light Probe" },
		{ "ModuleRelativePath", "Public/LightProbeDebugWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ULightProbeDebugWidget constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImageSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ULightProbeDebugWidget constinit property declarations *********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULightProbeDebugWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ULightProbeDebugWidget_Statics

// ********** Begin Class ULightProbeDebugWidget Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULightProbeDebugWidget_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightProbeDebugWidget, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderTarget_MetaData), NewProp_RenderTarget_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULightProbeDebugWidget_Statics::NewProp_ImageSize = { "ImageSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightProbeDebugWidget, ImageSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImageSize_MetaData), NewProp_ImageSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULightProbeDebugWidget_Statics::NewProp_ScreenOffset = { "ScreenOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightProbeDebugWidget, ScreenOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenOffset_MetaData), NewProp_ScreenOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULightProbeDebugWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightProbeDebugWidget_Statics::NewProp_RenderTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightProbeDebugWidget_Statics::NewProp_ImageSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightProbeDebugWidget_Statics::NewProp_ScreenOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULightProbeDebugWidget_Statics::PropPointers) < 2048);
// ********** End Class ULightProbeDebugWidget Property Definitions ********************************
UObject* (*const Z_Construct_UClass_ULightProbeDebugWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_LightProbePlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULightProbeDebugWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULightProbeDebugWidget_Statics::ClassParams = {
	&ULightProbeDebugWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULightProbeDebugWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULightProbeDebugWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULightProbeDebugWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_ULightProbeDebugWidget_Statics::Class_MetaDataParams)
};
void ULightProbeDebugWidget::StaticRegisterNativesULightProbeDebugWidget()
{
}
UClass* Z_Construct_UClass_ULightProbeDebugWidget()
{
	if (!Z_Registration_Info_UClass_ULightProbeDebugWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULightProbeDebugWidget.OuterSingleton, Z_Construct_UClass_ULightProbeDebugWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULightProbeDebugWidget.OuterSingleton;
}
ULightProbeDebugWidget::ULightProbeDebugWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ULightProbeDebugWidget);
ULightProbeDebugWidget::~ULightProbeDebugWidget() {}
// ********** End Class ULightProbeDebugWidget *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_LightProbePlugin_Source_LightProbePlugin_Public_LightProbeDebugWidget_h__Script_LightProbePlugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULightProbeDebugWidget, ULightProbeDebugWidget::StaticClass, TEXT("ULightProbeDebugWidget"), &Z_Registration_Info_UClass_ULightProbeDebugWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULightProbeDebugWidget), 1345553521U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_LightProbePlugin_Source_LightProbePlugin_Public_LightProbeDebugWidget_h__Script_LightProbePlugin_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_LightProbePlugin_Source_LightProbePlugin_Public_LightProbeDebugWidget_h__Script_LightProbePlugin_3066488146{
	TEXT("/Script/LightProbePlugin"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_LightProbePlugin_Source_LightProbePlugin_Public_LightProbeDebugWidget_h__Script_LightProbePlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_LightProbePlugin_Source_LightProbePlugin_Public_LightProbeDebugWidget_h__Script_LightProbePlugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
