// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SOTS_KEM_BlueprintLibrary.h"

#ifdef SOTS_KILLEXECUTIONMANAGER_SOTS_KEM_BlueprintLibrary_generated_h
#error "SOTS_KEM_BlueprintLibrary.generated.h already included, missing '#pragma once' in SOTS_KEM_BlueprintLibrary.h"
#endif
#define SOTS_KILLEXECUTIONMANAGER_SOTS_KEM_BlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
class USOTS_KEM_ExecutionDefinition;
struct FContextualAnimSceneBindingContext;
struct FGameplayTagContainer;
struct FSOTS_ExecutionContext;

// ********** Begin Class USOTS_KEM_BlueprintLibrary ***********************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_BlueprintLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execKEM_BuildCASBindingContexts); \
	DECLARE_FUNCTION(execKEM_ResolveWarpPointByName); \
	DECLARE_FUNCTION(execSOTS_IsPlayerSafeForExecution); \
	DECLARE_FUNCTION(execKEM_NotifyExecutionEnded); \
	DECLARE_FUNCTION(execKEM_RunDebug_Simple); \
	DECLARE_FUNCTION(execKEM_RequestExecution_Simple);


struct Z_Construct_UClass_USOTS_KEM_BlueprintLibrary_Statics;
SOTS_KILLEXECUTIONMANAGER_API UClass* Z_Construct_UClass_USOTS_KEM_BlueprintLibrary_NoRegister();

#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_BlueprintLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSOTS_KEM_BlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_USOTS_KEM_BlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOTS_KILLEXECUTIONMANAGER_API UClass* ::Z_Construct_UClass_USOTS_KEM_BlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(USOTS_KEM_BlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SOTS_KillExecutionManager"), Z_Construct_UClass_USOTS_KEM_BlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(USOTS_KEM_BlueprintLibrary)


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_BlueprintLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USOTS_KEM_BlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USOTS_KEM_BlueprintLibrary(USOTS_KEM_BlueprintLibrary&&) = delete; \
	USOTS_KEM_BlueprintLibrary(const USOTS_KEM_BlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USOTS_KEM_BlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USOTS_KEM_BlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USOTS_KEM_BlueprintLibrary) \
	NO_API virtual ~USOTS_KEM_BlueprintLibrary();


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_BlueprintLibrary_h_12_PROLOG
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_BlueprintLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_BlueprintLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_BlueprintLibrary_h_15_INCLASS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_BlueprintLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USOTS_KEM_BlueprintLibrary;

// ********** End Class USOTS_KEM_BlueprintLibrary *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_BlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
