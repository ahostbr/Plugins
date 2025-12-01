// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SOTS_UIAbilityLibrary.h"

#ifdef SOTS_UI_SOTS_UIAbilityLibrary_generated_h
#error "SOTS_UIAbilityLibrary.generated.h already included, missing '#pragma once' in SOTS_UIAbilityLibrary.h"
#endif
#define SOTS_UI_SOTS_UIAbilityLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FGameplayTag;

// ********** Begin Class USOTS_UIAbilityLibrary ***************************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_UIAbilityLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execNotifyAbilityEvent);


struct Z_Construct_UClass_USOTS_UIAbilityLibrary_Statics;
SOTS_UI_API UClass* Z_Construct_UClass_USOTS_UIAbilityLibrary_NoRegister();

#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_UIAbilityLibrary_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSOTS_UIAbilityLibrary(); \
	friend struct ::Z_Construct_UClass_USOTS_UIAbilityLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOTS_UI_API UClass* ::Z_Construct_UClass_USOTS_UIAbilityLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(USOTS_UIAbilityLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SOTS_UI"), Z_Construct_UClass_USOTS_UIAbilityLibrary_NoRegister) \
	DECLARE_SERIALIZER(USOTS_UIAbilityLibrary)


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_UIAbilityLibrary_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USOTS_UIAbilityLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USOTS_UIAbilityLibrary(USOTS_UIAbilityLibrary&&) = delete; \
	USOTS_UIAbilityLibrary(const USOTS_UIAbilityLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USOTS_UIAbilityLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USOTS_UIAbilityLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USOTS_UIAbilityLibrary) \
	NO_API virtual ~USOTS_UIAbilityLibrary();


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_UIAbilityLibrary_h_11_PROLOG
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_UIAbilityLibrary_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_UIAbilityLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_UIAbilityLibrary_h_14_INCLASS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_UIAbilityLibrary_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USOTS_UIAbilityLibrary;

// ********** End Class USOTS_UIAbilityLibrary *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_UIAbilityLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
