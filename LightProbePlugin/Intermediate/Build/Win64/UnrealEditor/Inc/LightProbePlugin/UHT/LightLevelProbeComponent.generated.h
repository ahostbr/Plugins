// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LightLevelProbeComponent.h"

#ifdef LIGHTPROBEPLUGIN_LightLevelProbeComponent_generated_h
#error "LightLevelProbeComponent.generated.h already included, missing '#pragma once' in LightLevelProbeComponent.h"
#endif
#define LIGHTPROBEPLUGIN_LightLevelProbeComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULightLevelProbeComponent ************************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_LightProbePlugin_Source_LightProbePlugin_Public_LightLevelProbeComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRawLuminance); \
	DECLARE_FUNCTION(execGetLightLevel);


struct Z_Construct_UClass_ULightLevelProbeComponent_Statics;
LIGHTPROBEPLUGIN_API UClass* Z_Construct_UClass_ULightLevelProbeComponent_NoRegister();

#define FID_SAS_ShadowsAndShurikens_Plugins_LightProbePlugin_Source_LightProbePlugin_Public_LightLevelProbeComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULightLevelProbeComponent(); \
	friend struct ::Z_Construct_UClass_ULightLevelProbeComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIGHTPROBEPLUGIN_API UClass* ::Z_Construct_UClass_ULightLevelProbeComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(ULightLevelProbeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LightProbePlugin"), Z_Construct_UClass_ULightLevelProbeComponent_NoRegister) \
	DECLARE_SERIALIZER(ULightLevelProbeComponent)


#define FID_SAS_ShadowsAndShurikens_Plugins_LightProbePlugin_Source_LightProbePlugin_Public_LightLevelProbeComponent_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULightLevelProbeComponent(ULightLevelProbeComponent&&) = delete; \
	ULightLevelProbeComponent(const ULightLevelProbeComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULightLevelProbeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULightLevelProbeComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULightLevelProbeComponent) \
	NO_API virtual ~ULightLevelProbeComponent();


#define FID_SAS_ShadowsAndShurikens_Plugins_LightProbePlugin_Source_LightProbePlugin_Public_LightLevelProbeComponent_h_15_PROLOG
#define FID_SAS_ShadowsAndShurikens_Plugins_LightProbePlugin_Source_LightProbePlugin_Public_LightLevelProbeComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SAS_ShadowsAndShurikens_Plugins_LightProbePlugin_Source_LightProbePlugin_Public_LightLevelProbeComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_LightProbePlugin_Source_LightProbePlugin_Public_LightLevelProbeComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_LightProbePlugin_Source_LightProbePlugin_Public_LightLevelProbeComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULightLevelProbeComponent;

// ********** End Class ULightLevelProbeComponent **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_LightProbePlugin_Source_LightProbePlugin_Public_LightLevelProbeComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
