// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SOTS_GAS_SkillTreeLibrary.h"

#ifdef SOTS_GAS_PLUGIN_SOTS_GAS_SkillTreeLibrary_generated_h
#error "SOTS_GAS_SkillTreeLibrary.generated.h already included, missing '#pragma once' in SOTS_GAS_SkillTreeLibrary.h"
#endif
#define SOTS_GAS_PLUGIN_SOTS_GAS_SkillTreeLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FGameplayTag;
struct FGameplayTagContainer;

// ********** Begin Class USOTS_GAS_SkillTreeLibrary ***********************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_SkillTreeLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAllSkillTags); \
	DECLARE_FUNCTION(execGetAllSkillTagsForTree); \
	DECLARE_FUNCTION(execHasSkillTagOnTree);


struct Z_Construct_UClass_USOTS_GAS_SkillTreeLibrary_Statics;
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_USOTS_GAS_SkillTreeLibrary_NoRegister();

#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_SkillTreeLibrary_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSOTS_GAS_SkillTreeLibrary(); \
	friend struct ::Z_Construct_UClass_USOTS_GAS_SkillTreeLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOTS_GAS_PLUGIN_API UClass* ::Z_Construct_UClass_USOTS_GAS_SkillTreeLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(USOTS_GAS_SkillTreeLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SOTS_GAS_Plugin"), Z_Construct_UClass_USOTS_GAS_SkillTreeLibrary_NoRegister) \
	DECLARE_SERIALIZER(USOTS_GAS_SkillTreeLibrary)


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_SkillTreeLibrary_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USOTS_GAS_SkillTreeLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USOTS_GAS_SkillTreeLibrary(USOTS_GAS_SkillTreeLibrary&&) = delete; \
	USOTS_GAS_SkillTreeLibrary(const USOTS_GAS_SkillTreeLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USOTS_GAS_SkillTreeLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USOTS_GAS_SkillTreeLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USOTS_GAS_SkillTreeLibrary) \
	NO_API virtual ~USOTS_GAS_SkillTreeLibrary();


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_SkillTreeLibrary_h_10_PROLOG
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_SkillTreeLibrary_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_SkillTreeLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_SkillTreeLibrary_h_13_INCLASS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_SkillTreeLibrary_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USOTS_GAS_SkillTreeLibrary;

// ********** End Class USOTS_GAS_SkillTreeLibrary *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_SkillTreeLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
