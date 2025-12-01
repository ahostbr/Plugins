// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SOTS_FXBlueprintLibrary.h"

#ifdef SOTS_FX_PLUGIN_SOTS_FXBlueprintLibrary_generated_h
#error "SOTS_FXBlueprintLibrary.generated.h already included, missing '#pragma once' in SOTS_FXBlueprintLibrary.h"
#endif
#define SOTS_FX_PLUGIN_SOTS_FXBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USOTS_FXCueDefinition;
class USOTS_FXManagerSubsystem;
struct FGameplayTag;
struct FSOTS_FXActiveCounts;
struct FSOTS_FXContext;
struct FSOTS_FXHandle;

// ********** Begin Class USOTS_FXBlueprintLibrary *************************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTS_FXBlueprintLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRegisteredFXCues); \
	DECLARE_FUNCTION(execGetFXActiveCounts); \
	DECLARE_FUNCTION(execStopFXHandle); \
	DECLARE_FUNCTION(execPlayFXCueDefinition); \
	DECLARE_FUNCTION(execPlayFXCueByTag); \
	DECLARE_FUNCTION(execGetFXManager);


struct Z_Construct_UClass_USOTS_FXBlueprintLibrary_Statics;
SOTS_FX_PLUGIN_API UClass* Z_Construct_UClass_USOTS_FXBlueprintLibrary_NoRegister();

#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTS_FXBlueprintLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSOTS_FXBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_USOTS_FXBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOTS_FX_PLUGIN_API UClass* ::Z_Construct_UClass_USOTS_FXBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(USOTS_FXBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SOTS_FX_Plugin"), Z_Construct_UClass_USOTS_FXBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(USOTS_FXBlueprintLibrary)


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTS_FXBlueprintLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USOTS_FXBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USOTS_FXBlueprintLibrary(USOTS_FXBlueprintLibrary&&) = delete; \
	USOTS_FXBlueprintLibrary(const USOTS_FXBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USOTS_FXBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USOTS_FXBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USOTS_FXBlueprintLibrary) \
	NO_API virtual ~USOTS_FXBlueprintLibrary();


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTS_FXBlueprintLibrary_h_12_PROLOG
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTS_FXBlueprintLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTS_FXBlueprintLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTS_FXBlueprintLibrary_h_15_INCLASS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTS_FXBlueprintLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USOTS_FXBlueprintLibrary;

// ********** End Class USOTS_FXBlueprintLibrary ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTS_FXBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
