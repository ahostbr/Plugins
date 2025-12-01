// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LightProbeDebugWidget.h"

#ifdef LIGHTPROBEPLUGIN_LightProbeDebugWidget_generated_h
#error "LightProbeDebugWidget.generated.h already included, missing '#pragma once' in LightProbeDebugWidget.h"
#endif
#define LIGHTPROBEPLUGIN_LightProbeDebugWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULightProbeDebugWidget ***************************************************
struct Z_Construct_UClass_ULightProbeDebugWidget_Statics;
LIGHTPROBEPLUGIN_API UClass* Z_Construct_UClass_ULightProbeDebugWidget_NoRegister();

#define FID_SAS_ShadowsAndShurikens_Plugins_LightProbePlugin_Source_LightProbePlugin_Public_LightProbeDebugWidget_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULightProbeDebugWidget(); \
	friend struct ::Z_Construct_UClass_ULightProbeDebugWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIGHTPROBEPLUGIN_API UClass* ::Z_Construct_UClass_ULightProbeDebugWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(ULightProbeDebugWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LightProbePlugin"), Z_Construct_UClass_ULightProbeDebugWidget_NoRegister) \
	DECLARE_SERIALIZER(ULightProbeDebugWidget)


#define FID_SAS_ShadowsAndShurikens_Plugins_LightProbePlugin_Source_LightProbePlugin_Public_LightProbeDebugWidget_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULightProbeDebugWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULightProbeDebugWidget(ULightProbeDebugWidget&&) = delete; \
	ULightProbeDebugWidget(const ULightProbeDebugWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULightProbeDebugWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULightProbeDebugWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULightProbeDebugWidget) \
	NO_API virtual ~ULightProbeDebugWidget();


#define FID_SAS_ShadowsAndShurikens_Plugins_LightProbePlugin_Source_LightProbePlugin_Public_LightProbeDebugWidget_h_11_PROLOG
#define FID_SAS_ShadowsAndShurikens_Plugins_LightProbePlugin_Source_LightProbePlugin_Public_LightProbeDebugWidget_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SAS_ShadowsAndShurikens_Plugins_LightProbePlugin_Source_LightProbePlugin_Public_LightProbeDebugWidget_h_14_INCLASS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_LightProbePlugin_Source_LightProbePlugin_Public_LightProbeDebugWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULightProbeDebugWidget;

// ********** End Class ULightProbeDebugWidget *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_LightProbePlugin_Source_LightProbePlugin_Public_LightProbeDebugWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
