// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SOTS_SkillTreeSubsystem.h"

#ifdef SOTS_SKILLTREE_SOTS_SkillTreeSubsystem_generated_h
#error "SOTS_SkillTreeSubsystem.generated.h already included, missing '#pragma once' in SOTS_SkillTreeSubsystem.h"
#endif
#define SOTS_SKILLTREE_SOTS_SkillTreeSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USOTS_SkillTreeDefinition;
enum class ESOTS_SkillNodeStatus : uint8;
struct FGameplayTag;
struct FGameplayTagContainer;
struct FSOTS_SkillTreeNodeView;
struct FSOTS_SkillTreeProfileState;
struct FSOTS_SkillTreeRuntimeState;

// ********** Begin Delegate FOnSkillTreeStateChanged **********************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeSubsystem_h_35_DELEGATE \
static void FOnSkillTreeStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnSkillTreeStateChanged, FSOTS_SkillTreeRuntimeState const& NewState);


// ********** End Delegate FOnSkillTreeStateChanged ************************************************

// ********** Begin Class USOTS_SkillTreeSubsystem *************************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeSubsystem_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLoadSkillTreeState); \
	DECLARE_FUNCTION(execSaveSkillTreeState); \
	DECLARE_FUNCTION(execCanRaiseStat); \
	DECLARE_FUNCTION(execCanGrantAbility); \
	DECLARE_FUNCTION(execHasSkillTag); \
	DECLARE_FUNCTION(execGetAvailableNodes); \
	DECLARE_FUNCTION(execGetSkillTreeOverview); \
	DECLARE_FUNCTION(execGetNodeStatus); \
	DECLARE_FUNCTION(execRestoreRuntimeStates); \
	DECLARE_FUNCTION(execGetRegisteredTreeIds); \
	DECLARE_FUNCTION(execResetAllSkillTrees); \
	DECLARE_FUNCTION(execGetAllRuntimeStates); \
	DECLARE_FUNCTION(execGetRuntimeState); \
	DECLARE_FUNCTION(execGetGrantedTagsForTree); \
	DECLARE_FUNCTION(execAddSkillPoints); \
	DECLARE_FUNCTION(execRefundSkillNode); \
	DECLARE_FUNCTION(execUnlockSkillNode); \
	DECLARE_FUNCTION(execTryUnlockNode); \
	DECLARE_FUNCTION(execUnlockNode); \
	DECLARE_FUNCTION(execCanUnlockNode); \
	DECLARE_FUNCTION(execIsNodeUnlocked); \
	DECLARE_FUNCTION(execRegisterSkillTree);


struct Z_Construct_UClass_USOTS_SkillTreeSubsystem_Statics;
SOTS_SKILLTREE_API UClass* Z_Construct_UClass_USOTS_SkillTreeSubsystem_NoRegister();

#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeSubsystem_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSOTS_SkillTreeSubsystem(); \
	friend struct ::Z_Construct_UClass_USOTS_SkillTreeSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOTS_SKILLTREE_API UClass* ::Z_Construct_UClass_USOTS_SkillTreeSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(USOTS_SkillTreeSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SOTS_SkillTree"), Z_Construct_UClass_USOTS_SkillTreeSubsystem_NoRegister) \
	DECLARE_SERIALIZER(USOTS_SkillTreeSubsystem)


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeSubsystem_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USOTS_SkillTreeSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USOTS_SkillTreeSubsystem(USOTS_SkillTreeSubsystem&&) = delete; \
	USOTS_SkillTreeSubsystem(const USOTS_SkillTreeSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USOTS_SkillTreeSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USOTS_SkillTreeSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USOTS_SkillTreeSubsystem) \
	NO_API virtual ~USOTS_SkillTreeSubsystem();


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeSubsystem_h_29_PROLOG
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeSubsystem_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeSubsystem_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeSubsystem_h_32_INCLASS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeSubsystem_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USOTS_SkillTreeSubsystem;

// ********** End Class USOTS_SkillTreeSubsystem ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
