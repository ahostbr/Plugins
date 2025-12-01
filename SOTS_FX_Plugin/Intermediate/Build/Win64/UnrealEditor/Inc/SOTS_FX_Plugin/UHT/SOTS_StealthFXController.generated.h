// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SOTS_StealthFXController.h"

#ifdef SOTS_FX_PLUGIN_SOTS_StealthFXController_generated_h
#error "SOTS_StealthFXController.generated.h already included, missing '#pragma once' in SOTS_StealthFXController.h"
#endif
#define SOTS_FX_PLUGIN_SOTS_StealthFXController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USOTS_StealthFXController ************************************************
struct Z_Construct_UClass_USOTS_StealthFXController_Statics;
SOTS_FX_PLUGIN_API UClass* Z_Construct_UClass_USOTS_StealthFXController_NoRegister();

#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTS_StealthFXController_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSOTS_StealthFXController(); \
	friend struct ::Z_Construct_UClass_USOTS_StealthFXController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOTS_FX_PLUGIN_API UClass* ::Z_Construct_UClass_USOTS_StealthFXController_NoRegister(); \
public: \
	DECLARE_CLASS2(USOTS_StealthFXController, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SOTS_FX_Plugin"), Z_Construct_UClass_USOTS_StealthFXController_NoRegister) \
	DECLARE_SERIALIZER(USOTS_StealthFXController)


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTS_StealthFXController_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USOTS_StealthFXController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USOTS_StealthFXController(USOTS_StealthFXController&&) = delete; \
	USOTS_StealthFXController(const USOTS_StealthFXController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USOTS_StealthFXController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USOTS_StealthFXController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USOTS_StealthFXController) \
	NO_API virtual ~USOTS_StealthFXController();


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTS_StealthFXController_h_16_PROLOG
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTS_StealthFXController_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTS_StealthFXController_h_19_INCLASS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTS_StealthFXController_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USOTS_StealthFXController;

// ********** End Class USOTS_StealthFXController **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTS_StealthFXController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
