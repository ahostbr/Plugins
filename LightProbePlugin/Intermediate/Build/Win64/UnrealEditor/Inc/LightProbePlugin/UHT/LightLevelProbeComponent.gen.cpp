// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LightLevelProbeComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeLightLevelProbeComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
LIGHTPROBEPLUGIN_API UClass* Z_Construct_UClass_ULightLevelProbeComponent();
LIGHTPROBEPLUGIN_API UClass* Z_Construct_UClass_ULightLevelProbeComponent_NoRegister();
LIGHTPROBEPLUGIN_API UClass* Z_Construct_UClass_ULightProbeDebugWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_LightProbePlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ULightLevelProbeComponent Function GetLightLevel *************************
struct Z_Construct_UFunction_ULightLevelProbeComponent_GetLightLevel_Statics
{
	struct LightLevelProbeComponent_eventGetLightLevel_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Light Probe" },
		{ "ModuleRelativePath", "Public/LightLevelProbeComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLightLevel constinit property declarations *************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLightLevel constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLightLevel Property Definitions ************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULightLevelProbeComponent_GetLightLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LightLevelProbeComponent_eventGetLightLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightLevelProbeComponent_GetLightLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightLevelProbeComponent_GetLightLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightLevelProbeComponent_GetLightLevel_Statics::PropPointers) < 2048);
// ********** End Function GetLightLevel Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightLevelProbeComponent_GetLightLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULightLevelProbeComponent, nullptr, "GetLightLevel", 	Z_Construct_UFunction_ULightLevelProbeComponent_GetLightLevel_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULightLevelProbeComponent_GetLightLevel_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULightLevelProbeComponent_GetLightLevel_Statics::LightLevelProbeComponent_eventGetLightLevel_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightLevelProbeComponent_GetLightLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULightLevelProbeComponent_GetLightLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULightLevelProbeComponent_GetLightLevel_Statics::LightLevelProbeComponent_eventGetLightLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULightLevelProbeComponent_GetLightLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightLevelProbeComponent_GetLightLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULightLevelProbeComponent::execGetLightLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetLightLevel();
	P_NATIVE_END;
}
// ********** End Class ULightLevelProbeComponent Function GetLightLevel ***************************

// ********** Begin Class ULightLevelProbeComponent Function GetRawLuminance ***********************
struct Z_Construct_UFunction_ULightLevelProbeComponent_GetRawLuminance_Statics
{
	struct LightLevelProbeComponent_eventGetRawLuminance_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Light Probe" },
		{ "ModuleRelativePath", "Public/LightLevelProbeComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetRawLuminance constinit property declarations ***********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRawLuminance constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRawLuminance Property Definitions **********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULightLevelProbeComponent_GetRawLuminance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LightLevelProbeComponent_eventGetRawLuminance_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightLevelProbeComponent_GetRawLuminance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightLevelProbeComponent_GetRawLuminance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightLevelProbeComponent_GetRawLuminance_Statics::PropPointers) < 2048);
// ********** End Function GetRawLuminance Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightLevelProbeComponent_GetRawLuminance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULightLevelProbeComponent, nullptr, "GetRawLuminance", 	Z_Construct_UFunction_ULightLevelProbeComponent_GetRawLuminance_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULightLevelProbeComponent_GetRawLuminance_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULightLevelProbeComponent_GetRawLuminance_Statics::LightLevelProbeComponent_eventGetRawLuminance_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightLevelProbeComponent_GetRawLuminance_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULightLevelProbeComponent_GetRawLuminance_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULightLevelProbeComponent_GetRawLuminance_Statics::LightLevelProbeComponent_eventGetRawLuminance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULightLevelProbeComponent_GetRawLuminance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightLevelProbeComponent_GetRawLuminance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULightLevelProbeComponent::execGetRawLuminance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetRawLuminance();
	P_NATIVE_END;
}
// ********** End Class ULightLevelProbeComponent Function GetRawLuminance *************************

// ********** Begin Class ULightLevelProbeComponent ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ULightLevelProbeComponent;
UClass* ULightLevelProbeComponent::GetPrivateStaticClass()
{
	using TClass = ULightLevelProbeComponent;
	if (!Z_Registration_Info_UClass_ULightLevelProbeComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("LightLevelProbeComponent"),
			Z_Registration_Info_UClass_ULightLevelProbeComponent.InnerSingleton,
			StaticRegisterNativesULightLevelProbeComponent,
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
	return Z_Registration_Info_UClass_ULightLevelProbeComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_ULightLevelProbeComponent_NoRegister()
{
	return ULightLevelProbeComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULightLevelProbeComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "SOTS" },
		{ "IncludePath", "LightLevelProbeComponent.h" },
		{ "ModuleRelativePath", "Public/LightLevelProbeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProbeUpdateInterval_MetaData[] = {
		{ "Category", "Light Probe" },
		{ "ClampMin", "0.01" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How often (seconds) to resample the probe. */" },
#endif
		{ "ModuleRelativePath", "Public/LightLevelProbeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How often (seconds) to resample the probe." },
#endif
		{ "UIMin", "0.01" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProbeHeightOffset_MetaData[] = {
		{ "Category", "Light Probe" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Vertical offset above the owner to place the probe cube & capture. */" },
#endif
		{ "ModuleRelativePath", "Public/LightLevelProbeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vertical offset above the owner to place the probe cube & capture." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderTargetSize_MetaData[] = {
		{ "Category", "Light Probe" },
		{ "ClampMin", "16" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Size in pixels of the square render target. Higher = less noise, more cost. */" },
#endif
		{ "ModuleRelativePath", "Public/LightLevelProbeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Size in pixels of the square render target. Higher = less noise, more cost." },
#endif
		{ "UIMin", "16" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumSamples_MetaData[] = {
		{ "Category", "Light Probe" },
		{ "ClampMax", "16" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Number of samples to take from the render target (3 = cube faces, >3 = grid). */" },
#endif
		{ "ModuleRelativePath", "Public/LightLevelProbeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of samples to take from the render target (3 = cube faces, >3 = grid)." },
#endif
		{ "UIMax", "16" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProbeArmLength_MetaData[] = {
		{ "Category", "Light Probe" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Distance from probe cube to the capture. */" },
#endif
		{ "ModuleRelativePath", "Public/LightLevelProbeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance from probe cube to the capture." },
#endif
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProbeFOV_MetaData[] = {
		{ "Category", "Light Probe" },
		{ "ClampMax", "120.0" },
		{ "ClampMin", "1.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** FOV used by the probe SceneCapture. */" },
#endif
		{ "ModuleRelativePath", "Public/LightLevelProbeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FOV used by the probe SceneCapture." },
#endif
		{ "UIMax", "120.0" },
		{ "UIMin", "1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingAlpha_MetaData[] = {
		{ "Category", "Light Probe" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Smoothing factor for light level changes (0-1). */" },
#endif
		{ "ModuleRelativePath", "Public/LightLevelProbeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Smoothing factor for light level changes (0-1)." },
#endif
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProbeMeshRotation_MetaData[] = {
		{ "Category", "Light Probe" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Rotation of the probe cube mesh (to get 3 faces visible). */" },
#endif
		{ "ModuleRelativePath", "Public/LightLevelProbeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rotation of the probe cube mesh (to get 3 faces visible)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProbeArmRotation_MetaData[] = {
		{ "Category", "Light Probe" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Rotation of the probe spring arm (usually points down at the cube). */" },
#endif
		{ "ModuleRelativePath", "Public/LightLevelProbeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rotation of the probe spring arm (usually points down at the cube)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProbeMaterial_MetaData[] = {
		{ "Category", "Light Probe" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Material used on the probe cube. If null, uses DefaultWhite. */" },
#endif
		{ "ModuleRelativePath", "Public/LightLevelProbeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Material used on the probe cube. If null, uses DefaultWhite." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadowReference_MetaData[] = {
		{ "Category", "Light Probe|Calibration" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Raw luminance value we treat as \"fully dark\". */" },
#endif
		{ "ModuleRelativePath", "Public/LightLevelProbeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Raw luminance value we treat as \"fully dark\"." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrightReference_MetaData[] = {
		{ "Category", "Light Probe|Calibration" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Raw luminance value we treat as \"fully bright\". */" },
#endif
		{ "ModuleRelativePath", "Public/LightLevelProbeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Raw luminance value we treat as \"fully bright\"." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResponseCurveGamma_MetaData[] = {
		{ "Category", "Light Probe|Calibration" },
		{ "ClampMin", "0.01" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Curve applied after normalization (gamma). 1 = linear. <1 brightens shadows. */" },
#endif
		{ "ModuleRelativePath", "Public/LightLevelProbeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Curve applied after normalization (gamma). 1 = linear. <1 brightens shadows." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAutoExposure_MetaData[] = {
		{ "Category", "Light Probe|Calibration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, the probe capture uses scene auto exposure. If false, exposure is locked. */" },
#endif
		{ "ModuleRelativePath", "Public/LightLevelProbeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, the probe capture uses scene auto exposure. If false, exposure is locked." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockedExposure_MetaData[] = {
		{ "Category", "Light Probe|Calibration" },
		{ "ClampMax", "5.0" },
		{ "ClampMin", "0.01" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Exposure brightness used when auto exposure is disabled (min/max brightness). */" },
#endif
		{ "EditCondition", "!bUseAutoExposure" },
		{ "ModuleRelativePath", "Public/LightLevelProbeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Exposure brightness used when auto exposure is disabled (min/max brightness)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowDebugWidget_MetaData[] = {
		{ "Category", "Light Probe|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Show the debug RT preview widget on screen. */" },
#endif
		{ "ModuleRelativePath", "Public/LightLevelProbeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Show the debug RT preview widget on screen." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugWidgetSize_MetaData[] = {
		{ "Category", "Light Probe|Debug" },
		{ "ModuleRelativePath", "Public/LightLevelProbeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugWidgetOffset_MetaData[] = {
		{ "Category", "Light Probe|Debug" },
		{ "ModuleRelativePath", "Public/LightLevelProbeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/LightLevelProbeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProbeMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LightLevelProbeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProbeSpringArm_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LightLevelProbeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProbeCapture_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LightLevelProbeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RawLuminance_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Light Probe" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Raw averaged luminance from the capture. */" },
#endif
		{ "ModuleRelativePath", "Public/LightLevelProbeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Raw averaged luminance from the capture." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLightLevel_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Light Probe" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Normalized light level [0..1] after calibration. */" },
#endif
		{ "ModuleRelativePath", "Public/LightLevelProbeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Normalized light level [0..1] after calibration." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LightLevelProbeComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ULightLevelProbeComponent constinit property declarations ****************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProbeUpdateInterval;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProbeHeightOffset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RenderTargetSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumSamples;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProbeArmLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProbeFOV;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SmoothingAlpha;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProbeMeshRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProbeArmRotation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProbeMaterial;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShadowReference;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BrightReference;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ResponseCurveGamma;
	static void NewProp_bUseAutoExposure_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAutoExposure;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LockedExposure;
	static void NewProp_bShowDebugWidget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDebugWidget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugWidgetSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugWidgetOffset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProbeMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProbeSpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProbeCapture;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RawLuminance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentLightLevel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DebugWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ULightLevelProbeComponent constinit property declarations ******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetLightLevel"), .Pointer = &ULightLevelProbeComponent::execGetLightLevel },
		{ .NameUTF8 = UTF8TEXT("GetRawLuminance"), .Pointer = &ULightLevelProbeComponent::execGetRawLuminance },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULightLevelProbeComponent_GetLightLevel, "GetLightLevel" }, // 829587865
		{ &Z_Construct_UFunction_ULightLevelProbeComponent_GetRawLuminance, "GetRawLuminance" }, // 67225986
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULightLevelProbeComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ULightLevelProbeComponent_Statics

// ********** Begin Class ULightLevelProbeComponent Property Definitions ***************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightLevelProbeComponent_Statics::NewProp_ProbeUpdateInterval = { "ProbeUpdateInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightLevelProbeComponent, ProbeUpdateInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProbeUpdateInterval_MetaData), NewProp_ProbeUpdateInterval_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightLevelProbeComponent_Statics::NewProp_ProbeHeightOffset = { "ProbeHeightOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightLevelProbeComponent, ProbeHeightOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProbeHeightOffset_MetaData), NewProp_ProbeHeightOffset_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULightLevelProbeComponent_Statics::NewProp_RenderTargetSize = { "RenderTargetSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightLevelProbeComponent, RenderTargetSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderTargetSize_MetaData), NewProp_RenderTargetSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULightLevelProbeComponent_Statics::NewProp_NumSamples = { "NumSamples", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightLevelProbeComponent, NumSamples), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumSamples_MetaData), NewProp_NumSamples_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightLevelProbeComponent_Statics::NewProp_ProbeArmLength = { "ProbeArmLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightLevelProbeComponent, ProbeArmLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProbeArmLength_MetaData), NewProp_ProbeArmLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightLevelProbeComponent_Statics::NewProp_ProbeFOV = { "ProbeFOV", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightLevelProbeComponent, ProbeFOV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProbeFOV_MetaData), NewProp_ProbeFOV_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightLevelProbeComponent_Statics::NewProp_SmoothingAlpha = { "SmoothingAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightLevelProbeComponent, SmoothingAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothingAlpha_MetaData), NewProp_SmoothingAlpha_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULightLevelProbeComponent_Statics::NewProp_ProbeMeshRotation = { "ProbeMeshRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightLevelProbeComponent, ProbeMeshRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProbeMeshRotation_MetaData), NewProp_ProbeMeshRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULightLevelProbeComponent_Statics::NewProp_ProbeArmRotation = { "ProbeArmRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightLevelProbeComponent, ProbeArmRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProbeArmRotation_MetaData), NewProp_ProbeArmRotation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULightLevelProbeComponent_Statics::NewProp_ProbeMaterial = { "ProbeMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightLevelProbeComponent, ProbeMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProbeMaterial_MetaData), NewProp_ProbeMaterial_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightLevelProbeComponent_Statics::NewProp_ShadowReference = { "ShadowReference", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightLevelProbeComponent, ShadowReference), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadowReference_MetaData), NewProp_ShadowReference_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightLevelProbeComponent_Statics::NewProp_BrightReference = { "BrightReference", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightLevelProbeComponent, BrightReference), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrightReference_MetaData), NewProp_BrightReference_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightLevelProbeComponent_Statics::NewProp_ResponseCurveGamma = { "ResponseCurveGamma", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightLevelProbeComponent, ResponseCurveGamma), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResponseCurveGamma_MetaData), NewProp_ResponseCurveGamma_MetaData) };
void Z_Construct_UClass_ULightLevelProbeComponent_Statics::NewProp_bUseAutoExposure_SetBit(void* Obj)
{
	((ULightLevelProbeComponent*)Obj)->bUseAutoExposure = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightLevelProbeComponent_Statics::NewProp_bUseAutoExposure = { "bUseAutoExposure", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULightLevelProbeComponent), &Z_Construct_UClass_ULightLevelProbeComponent_Statics::NewProp_bUseAutoExposure_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAutoExposure_MetaData), NewProp_bUseAutoExposure_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightLevelProbeComponent_Statics::NewProp_LockedExposure = { "LockedExposure", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightLevelProbeComponent, LockedExposure), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockedExposure_MetaData), NewProp_LockedExposure_MetaData) };
void Z_Construct_UClass_ULightLevelProbeComponent_Statics::NewProp_bShowDebugWidget_SetBit(void* Obj)
{
	((ULightLevelProbeComponent*)Obj)->bShowDebugWidget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightLevelProbeComponent_Statics::NewProp_bShowDebugWidget = { "bShowDebugWidget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULightLevelProbeComponent), &Z_Construct_UClass_ULightLevelProbeComponent_Statics::NewProp_bShowDebugWidget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowDebugWidget_MetaData), NewProp_bShowDebugWidget_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULightLevelProbeComponent_Statics::NewProp_DebugWidgetSize = { "DebugWidgetSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightLevelProbeComponent, DebugWidgetSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugWidgetSize_MetaData), NewProp_DebugWidgetSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULightLevelProbeComponent_Statics::NewProp_DebugWidgetOffset = { "DebugWidgetOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightLevelProbeComponent, DebugWidgetOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugWidgetOffset_MetaData), NewProp_DebugWidgetOffset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULightLevelProbeComponent_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightLevelProbeComponent, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderTarget_MetaData), NewProp_RenderTarget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULightLevelProbeComponent_Statics::NewProp_ProbeMesh = { "ProbeMesh", nullptr, (EPropertyFlags)0x0020080000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightLevelProbeComponent, ProbeMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProbeMesh_MetaData), NewProp_ProbeMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULightLevelProbeComponent_Statics::NewProp_ProbeSpringArm = { "ProbeSpringArm", nullptr, (EPropertyFlags)0x0020080000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightLevelProbeComponent, ProbeSpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProbeSpringArm_MetaData), NewProp_ProbeSpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULightLevelProbeComponent_Statics::NewProp_ProbeCapture = { "ProbeCapture", nullptr, (EPropertyFlags)0x0020080000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightLevelProbeComponent, ProbeCapture), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProbeCapture_MetaData), NewProp_ProbeCapture_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightLevelProbeComponent_Statics::NewProp_RawLuminance = { "RawLuminance", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightLevelProbeComponent, RawLuminance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RawLuminance_MetaData), NewProp_RawLuminance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightLevelProbeComponent_Statics::NewProp_CurrentLightLevel = { "CurrentLightLevel", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightLevelProbeComponent, CurrentLightLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLightLevel_MetaData), NewProp_CurrentLightLevel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULightLevelProbeComponent_Statics::NewProp_DebugWidget = { "DebugWidget", nullptr, (EPropertyFlags)0x0020080000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightLevelProbeComponent, DebugWidget), Z_Construct_UClass_ULightProbeDebugWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugWidget_MetaData), NewProp_DebugWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULightLevelProbeComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightLevelProbeComponent_Statics::NewProp_ProbeUpdateInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightLevelProbeComponent_Statics::NewProp_ProbeHeightOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightLevelProbeComponent_Statics::NewProp_RenderTargetSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightLevelProbeComponent_Statics::NewProp_NumSamples,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightLevelProbeComponent_Statics::NewProp_ProbeArmLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightLevelProbeComponent_Statics::NewProp_ProbeFOV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightLevelProbeComponent_Statics::NewProp_SmoothingAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightLevelProbeComponent_Statics::NewProp_ProbeMeshRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightLevelProbeComponent_Statics::NewProp_ProbeArmRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightLevelProbeComponent_Statics::NewProp_ProbeMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightLevelProbeComponent_Statics::NewProp_ShadowReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightLevelProbeComponent_Statics::NewProp_BrightReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightLevelProbeComponent_Statics::NewProp_ResponseCurveGamma,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightLevelProbeComponent_Statics::NewProp_bUseAutoExposure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightLevelProbeComponent_Statics::NewProp_LockedExposure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightLevelProbeComponent_Statics::NewProp_bShowDebugWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightLevelProbeComponent_Statics::NewProp_DebugWidgetSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightLevelProbeComponent_Statics::NewProp_DebugWidgetOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightLevelProbeComponent_Statics::NewProp_RenderTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightLevelProbeComponent_Statics::NewProp_ProbeMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightLevelProbeComponent_Statics::NewProp_ProbeSpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightLevelProbeComponent_Statics::NewProp_ProbeCapture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightLevelProbeComponent_Statics::NewProp_RawLuminance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightLevelProbeComponent_Statics::NewProp_CurrentLightLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightLevelProbeComponent_Statics::NewProp_DebugWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULightLevelProbeComponent_Statics::PropPointers) < 2048);
// ********** End Class ULightLevelProbeComponent Property Definitions *****************************
UObject* (*const Z_Construct_UClass_ULightLevelProbeComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_LightProbePlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULightLevelProbeComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULightLevelProbeComponent_Statics::ClassParams = {
	&ULightLevelProbeComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULightLevelProbeComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULightLevelProbeComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULightLevelProbeComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULightLevelProbeComponent_Statics::Class_MetaDataParams)
};
void ULightLevelProbeComponent::StaticRegisterNativesULightLevelProbeComponent()
{
	UClass* Class = ULightLevelProbeComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_ULightLevelProbeComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_ULightLevelProbeComponent()
{
	if (!Z_Registration_Info_UClass_ULightLevelProbeComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULightLevelProbeComponent.OuterSingleton, Z_Construct_UClass_ULightLevelProbeComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULightLevelProbeComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ULightLevelProbeComponent);
ULightLevelProbeComponent::~ULightLevelProbeComponent() {}
// ********** End Class ULightLevelProbeComponent **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_LightProbePlugin_Source_LightProbePlugin_Public_LightLevelProbeComponent_h__Script_LightProbePlugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULightLevelProbeComponent, ULightLevelProbeComponent::StaticClass, TEXT("ULightLevelProbeComponent"), &Z_Registration_Info_UClass_ULightLevelProbeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULightLevelProbeComponent), 533017729U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_LightProbePlugin_Source_LightProbePlugin_Public_LightLevelProbeComponent_h__Script_LightProbePlugin_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_LightProbePlugin_Source_LightProbePlugin_Public_LightLevelProbeComponent_h__Script_LightProbePlugin_1498236540{
	TEXT("/Script/LightProbePlugin"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_LightProbePlugin_Source_LightProbePlugin_Public_LightLevelProbeComponent_h__Script_LightProbePlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_LightProbePlugin_Source_LightProbePlugin_Public_LightLevelProbeComponent_h__Script_LightProbePlugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
