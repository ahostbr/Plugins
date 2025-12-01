// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SOTS_SkillTreeDefinition.h"

#ifdef SOTS_SKILLTREE_SOTS_SkillTreeDefinition_generated_h
#error "SOTS_SkillTreeDefinition.generated.h already included, missing '#pragma once' in SOTS_SkillTreeDefinition.h"
#endif
#define SOTS_SKILLTREE_SOTS_SkillTreeDefinition_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSOTS_SkillNodeDefinition;

// ********** Begin Class USOTS_SkillTreeDefinition ************************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeDefinition_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFindNodeDefinition);


struct Z_Construct_UClass_USOTS_SkillTreeDefinition_Statics;
SOTS_SKILLTREE_API UClass* Z_Construct_UClass_USOTS_SkillTreeDefinition_NoRegister();

#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeDefinition_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSOTS_SkillTreeDefinition(); \
	friend struct ::Z_Construct_UClass_USOTS_SkillTreeDefinition_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOTS_SKILLTREE_API UClass* ::Z_Construct_UClass_USOTS_SkillTreeDefinition_NoRegister(); \
public: \
	DECLARE_CLASS2(USOTS_SkillTreeDefinition, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SOTS_SkillTree"), Z_Construct_UClass_USOTS_SkillTreeDefinition_NoRegister) \
	DECLARE_SERIALIZER(USOTS_SkillTreeDefinition)


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeDefinition_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USOTS_SkillTreeDefinition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USOTS_SkillTreeDefinition(USOTS_SkillTreeDefinition&&) = delete; \
	USOTS_SkillTreeDefinition(const USOTS_SkillTreeDefinition&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USOTS_SkillTreeDefinition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USOTS_SkillTreeDefinition); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USOTS_SkillTreeDefinition) \
	NO_API virtual ~USOTS_SkillTreeDefinition();


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeDefinition_h_12_PROLOG
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeDefinition_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeDefinition_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeDefinition_h_15_INCLASS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeDefinition_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USOTS_SkillTreeDefinition;

// ********** End Class USOTS_SkillTreeDefinition **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeDefinition_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
