// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SOTS_FXDefinitionLibrary.h"

#ifdef SOTS_FX_PLUGIN_SOTS_FXDefinitionLibrary_generated_h
#error "SOTS_FXDefinitionLibrary.generated.h already included, missing '#pragma once' in SOTS_FXDefinitionLibrary.h"
#endif
#define SOTS_FX_PLUGIN_SOTS_FXDefinitionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USOTS_FXDefinitionLibrary ************************************************
struct Z_Construct_UClass_USOTS_FXDefinitionLibrary_Statics;
SOTS_FX_PLUGIN_API UClass* Z_Construct_UClass_USOTS_FXDefinitionLibrary_NoRegister();

#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTS_FXDefinitionLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSOTS_FXDefinitionLibrary(); \
	friend struct ::Z_Construct_UClass_USOTS_FXDefinitionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOTS_FX_PLUGIN_API UClass* ::Z_Construct_UClass_USOTS_FXDefinitionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(USOTS_FXDefinitionLibrary, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SOTS_FX_Plugin"), Z_Construct_UClass_USOTS_FXDefinitionLibrary_NoRegister) \
	DECLARE_SERIALIZER(USOTS_FXDefinitionLibrary)


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTS_FXDefinitionLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USOTS_FXDefinitionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USOTS_FXDefinitionLibrary(USOTS_FXDefinitionLibrary&&) = delete; \
	USOTS_FXDefinitionLibrary(const USOTS_FXDefinitionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USOTS_FXDefinitionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USOTS_FXDefinitionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USOTS_FXDefinitionLibrary) \
	NO_API virtual ~USOTS_FXDefinitionLibrary();


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTS_FXDefinitionLibrary_h_13_PROLOG
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTS_FXDefinitionLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTS_FXDefinitionLibrary_h_16_INCLASS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTS_FXDefinitionLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USOTS_FXDefinitionLibrary;

// ********** End Class USOTS_FXDefinitionLibrary **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTS_FXDefinitionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
