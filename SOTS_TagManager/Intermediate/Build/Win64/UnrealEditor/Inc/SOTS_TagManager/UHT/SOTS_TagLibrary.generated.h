// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SOTS_TagManager/Public/SOTS_TagLibrary.h"

#ifdef SOTS_TAGMANAGER_SOTS_TagLibrary_generated_h
#error "SOTS_TagLibrary.generated.h already included, missing '#pragma once' in SOTS_TagLibrary.h"
#endif
#define SOTS_TAGMANAGER_SOTS_TagLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
struct FGameplayTag;
struct FGameplayTagContainer;

// ********** Begin Class USOTS_TagLibrary *********************************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_TagManager_Source_SOTS_TagManager_Public_SOTS_TagLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execActorHasAllTags); \
	DECLARE_FUNCTION(execActorHasAnyTag); \
	DECLARE_FUNCTION(execRemoveTagsFromActor); \
	DECLARE_FUNCTION(execActorHasTagByName); \
	DECLARE_FUNCTION(execActorHasTag); \
	DECLARE_FUNCTION(execRemoveTagFromActorByName); \
	DECLARE_FUNCTION(execAddTagToActorByName); \
	DECLARE_FUNCTION(execRemoveTagFromActor); \
	DECLARE_FUNCTION(execAddTagToActor); \
	DECLARE_FUNCTION(execGetTagByName);


struct Z_Construct_UClass_USOTS_TagLibrary_Statics;
SOTS_TAGMANAGER_API UClass* Z_Construct_UClass_USOTS_TagLibrary_NoRegister();

#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_TagManager_Source_SOTS_TagManager_Public_SOTS_TagLibrary_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSOTS_TagLibrary(); \
	friend struct ::Z_Construct_UClass_USOTS_TagLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOTS_TAGMANAGER_API UClass* ::Z_Construct_UClass_USOTS_TagLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(USOTS_TagLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SOTS_TagManager"), Z_Construct_UClass_USOTS_TagLibrary_NoRegister) \
	DECLARE_SERIALIZER(USOTS_TagLibrary)


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_TagManager_Source_SOTS_TagManager_Public_SOTS_TagLibrary_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USOTS_TagLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USOTS_TagLibrary(USOTS_TagLibrary&&) = delete; \
	USOTS_TagLibrary(const USOTS_TagLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USOTS_TagLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USOTS_TagLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USOTS_TagLibrary) \
	NO_API virtual ~USOTS_TagLibrary();


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_TagManager_Source_SOTS_TagManager_Public_SOTS_TagLibrary_h_20_PROLOG
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_TagManager_Source_SOTS_TagManager_Public_SOTS_TagLibrary_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_TagManager_Source_SOTS_TagManager_Public_SOTS_TagLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_TagManager_Source_SOTS_TagManager_Public_SOTS_TagLibrary_h_23_INCLASS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_TagManager_Source_SOTS_TagManager_Public_SOTS_TagLibrary_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USOTS_TagLibrary;

// ********** End Class USOTS_TagLibrary ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_SOTS_TagManager_Source_SOTS_TagManager_Public_SOTS_TagLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
