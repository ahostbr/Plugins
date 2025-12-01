// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SOTS_SkillTreeLibrary.h"

#ifdef SOTS_SKILLTREE_SOTS_SkillTreeLibrary_generated_h
#error "SOTS_SkillTreeLibrary.generated.h already included, missing '#pragma once' in SOTS_SkillTreeLibrary.h"
#endif
#define SOTS_SKILLTREE_SOTS_SkillTreeLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FGameplayTag;
struct FGameplayTagContainer;

// ********** Begin Class USOTS_SkillTreeLibrary ***************************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSOTS_PlayerHasSkillTag); \
	DECLARE_FUNCTION(execGetAllSkillTags); \
	DECLARE_FUNCTION(execIsSkillUnlocked);


struct Z_Construct_UClass_USOTS_SkillTreeLibrary_Statics;
SOTS_SKILLTREE_API UClass* Z_Construct_UClass_USOTS_SkillTreeLibrary_NoRegister();

#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSOTS_SkillTreeLibrary(); \
	friend struct ::Z_Construct_UClass_USOTS_SkillTreeLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOTS_SKILLTREE_API UClass* ::Z_Construct_UClass_USOTS_SkillTreeLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(USOTS_SkillTreeLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SOTS_SkillTree"), Z_Construct_UClass_USOTS_SkillTreeLibrary_NoRegister) \
	DECLARE_SERIALIZER(USOTS_SkillTreeLibrary)


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USOTS_SkillTreeLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USOTS_SkillTreeLibrary(USOTS_SkillTreeLibrary&&) = delete; \
	USOTS_SkillTreeLibrary(const USOTS_SkillTreeLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USOTS_SkillTreeLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USOTS_SkillTreeLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USOTS_SkillTreeLibrary) \
	NO_API virtual ~USOTS_SkillTreeLibrary();


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeLibrary_h_14_PROLOG
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeLibrary_h_17_INCLASS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USOTS_SkillTreeLibrary;

// ********** End Class USOTS_SkillTreeLibrary *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
