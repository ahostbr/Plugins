// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SOTS_SkillTreeComponent.h"

#ifdef SOTS_SKILLTREE_SOTS_SkillTreeComponent_generated_h
#error "SOTS_SkillTreeComponent.generated.h already included, missing '#pragma once' in SOTS_SkillTreeComponent.h"
#endif
#define SOTS_SKILLTREE_SOTS_SkillTreeComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USOTS_SkillTreeDefinition;
enum class ESOTS_SkillNodeStatus : uint8;

// ********** Begin Delegate FSOTS_SkillTreeNodeChangedSignature ***********************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeComponent_h_10_DELEGATE \
SOTS_SKILLTREE_API void FSOTS_SkillTreeNodeChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& SOTS_SkillTreeNodeChangedSignature, FName NodeId, ESOTS_SkillNodeStatus NewStatus);


// ********** End Delegate FSOTS_SkillTreeNodeChangedSignature *************************************

// ********** Begin Delegate FSOTS_SkillTreePointsChangedSignature *********************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeComponent_h_11_DELEGATE \
SOTS_SKILLTREE_API void FSOTS_SkillTreePointsChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& SOTS_SkillTreePointsChangedSignature, int32 NewPoints);


// ********** End Delegate FSOTS_SkillTreePointsChangedSignature ***********************************

// ********** Begin Class USOTS_SkillTreeComponent *************************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsNodeUnlocked); \
	DECLARE_FUNCTION(execUnlockNode); \
	DECLARE_FUNCTION(execCanUnlockNode); \
	DECLARE_FUNCTION(execGetNodeStatus); \
	DECLARE_FUNCTION(execAddSkillPoints); \
	DECLARE_FUNCTION(execInitializeSkillTree);


struct Z_Construct_UClass_USOTS_SkillTreeComponent_Statics;
SOTS_SKILLTREE_API UClass* Z_Construct_UClass_USOTS_SkillTreeComponent_NoRegister();

#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeComponent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSOTS_SkillTreeComponent(); \
	friend struct ::Z_Construct_UClass_USOTS_SkillTreeComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOTS_SKILLTREE_API UClass* ::Z_Construct_UClass_USOTS_SkillTreeComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(USOTS_SkillTreeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SOTS_SkillTree"), Z_Construct_UClass_USOTS_SkillTreeComponent_NoRegister) \
	DECLARE_SERIALIZER(USOTS_SkillTreeComponent)


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeComponent_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USOTS_SkillTreeComponent(USOTS_SkillTreeComponent&&) = delete; \
	USOTS_SkillTreeComponent(const USOTS_SkillTreeComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USOTS_SkillTreeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USOTS_SkillTreeComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USOTS_SkillTreeComponent) \
	NO_API virtual ~USOTS_SkillTreeComponent();


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeComponent_h_19_PROLOG
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeComponent_h_22_INCLASS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USOTS_SkillTreeComponent;

// ********** End Class USOTS_SkillTreeComponent ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
