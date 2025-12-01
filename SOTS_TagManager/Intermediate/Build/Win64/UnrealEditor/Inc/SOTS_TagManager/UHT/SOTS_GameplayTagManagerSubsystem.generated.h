// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SOTS_TagManager/Public/SOTS_GameplayTagManagerSubsystem.h"

#ifdef SOTS_TAGMANAGER_SOTS_GameplayTagManagerSubsystem_generated_h
#error "SOTS_GameplayTagManagerSubsystem.generated.h already included, missing '#pragma once' in SOTS_GameplayTagManagerSubsystem.h"
#endif
#define SOTS_TAGMANAGER_SOTS_GameplayTagManagerSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FGameplayTag;
struct FGameplayTagContainer;

// ********** Begin Class USOTS_GameplayTagManagerSubsystem ****************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_TagManager_Source_SOTS_TagManager_Public_SOTS_GameplayTagManagerSubsystem_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveTagFromActorByName); \
	DECLARE_FUNCTION(execAddTagToActorByName); \
	DECLARE_FUNCTION(execRemoveTagsFromActor); \
	DECLARE_FUNCTION(execRemoveTagFromActor); \
	DECLARE_FUNCTION(execAddTagToActor); \
	DECLARE_FUNCTION(execActorHasAllTags); \
	DECLARE_FUNCTION(execActorHasAnyTags); \
	DECLARE_FUNCTION(execActorHasTagByName); \
	DECLARE_FUNCTION(execActorHasTag); \
	DECLARE_FUNCTION(execGetTagChecked); \
	DECLARE_FUNCTION(execGetTagByName);


struct Z_Construct_UClass_USOTS_GameplayTagManagerSubsystem_Statics;
SOTS_TAGMANAGER_API UClass* Z_Construct_UClass_USOTS_GameplayTagManagerSubsystem_NoRegister();

#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_TagManager_Source_SOTS_TagManager_Public_SOTS_GameplayTagManagerSubsystem_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSOTS_GameplayTagManagerSubsystem(); \
	friend struct ::Z_Construct_UClass_USOTS_GameplayTagManagerSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOTS_TAGMANAGER_API UClass* ::Z_Construct_UClass_USOTS_GameplayTagManagerSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(USOTS_GameplayTagManagerSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SOTS_TagManager"), Z_Construct_UClass_USOTS_GameplayTagManagerSubsystem_NoRegister) \
	DECLARE_SERIALIZER(USOTS_GameplayTagManagerSubsystem)


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_TagManager_Source_SOTS_TagManager_Public_SOTS_GameplayTagManagerSubsystem_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USOTS_GameplayTagManagerSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USOTS_GameplayTagManagerSubsystem(USOTS_GameplayTagManagerSubsystem&&) = delete; \
	USOTS_GameplayTagManagerSubsystem(const USOTS_GameplayTagManagerSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USOTS_GameplayTagManagerSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USOTS_GameplayTagManagerSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USOTS_GameplayTagManagerSubsystem) \
	NO_API virtual ~USOTS_GameplayTagManagerSubsystem();


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_TagManager_Source_SOTS_TagManager_Public_SOTS_GameplayTagManagerSubsystem_h_19_PROLOG
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_TagManager_Source_SOTS_TagManager_Public_SOTS_GameplayTagManagerSubsystem_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_TagManager_Source_SOTS_TagManager_Public_SOTS_GameplayTagManagerSubsystem_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_TagManager_Source_SOTS_TagManager_Public_SOTS_GameplayTagManagerSubsystem_h_22_INCLASS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_TagManager_Source_SOTS_TagManager_Public_SOTS_GameplayTagManagerSubsystem_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USOTS_GameplayTagManagerSubsystem;

// ********** End Class USOTS_GameplayTagManagerSubsystem ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_SOTS_TagManager_Source_SOTS_TagManager_Public_SOTS_GameplayTagManagerSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
