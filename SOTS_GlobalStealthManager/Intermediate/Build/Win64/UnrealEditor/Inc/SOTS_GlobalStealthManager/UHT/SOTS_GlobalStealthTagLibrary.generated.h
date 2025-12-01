// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SOTS_GlobalStealthTagLibrary.h"

#ifdef SOTS_GLOBALSTEALTHMANAGER_SOTS_GlobalStealthTagLibrary_generated_h
#error "SOTS_GlobalStealthTagLibrary.generated.h already included, missing '#pragma once' in SOTS_GlobalStealthTagLibrary.h"
#endif
#define SOTS_GLOBALSTEALTHMANAGER_SOTS_GlobalStealthTagLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;

// ********** Begin Class USOTS_GlobalStealthTagLibrary ********************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_GlobalStealthTagLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSOTS_GetStealthTier); \
	DECLARE_FUNCTION(execSOTS_IsPlayerHidden);


struct Z_Construct_UClass_USOTS_GlobalStealthTagLibrary_Statics;
SOTS_GLOBALSTEALTHMANAGER_API UClass* Z_Construct_UClass_USOTS_GlobalStealthTagLibrary_NoRegister();

#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_GlobalStealthTagLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSOTS_GlobalStealthTagLibrary(); \
	friend struct ::Z_Construct_UClass_USOTS_GlobalStealthTagLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOTS_GLOBALSTEALTHMANAGER_API UClass* ::Z_Construct_UClass_USOTS_GlobalStealthTagLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(USOTS_GlobalStealthTagLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SOTS_GlobalStealthManager"), Z_Construct_UClass_USOTS_GlobalStealthTagLibrary_NoRegister) \
	DECLARE_SERIALIZER(USOTS_GlobalStealthTagLibrary)


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_GlobalStealthTagLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USOTS_GlobalStealthTagLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USOTS_GlobalStealthTagLibrary(USOTS_GlobalStealthTagLibrary&&) = delete; \
	USOTS_GlobalStealthTagLibrary(const USOTS_GlobalStealthTagLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USOTS_GlobalStealthTagLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USOTS_GlobalStealthTagLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USOTS_GlobalStealthTagLibrary) \
	NO_API virtual ~USOTS_GlobalStealthTagLibrary();


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_GlobalStealthTagLibrary_h_12_PROLOG
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_GlobalStealthTagLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_GlobalStealthTagLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_GlobalStealthTagLibrary_h_15_INCLASS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_GlobalStealthTagLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USOTS_GlobalStealthTagLibrary;

// ********** End Class USOTS_GlobalStealthTagLibrary **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_GlobalStealthTagLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
