// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SOTS_ExecutionHelperActor.h"

#ifdef SOTS_KILLEXECUTIONMANAGER_SOTS_ExecutionHelperActor_generated_h
#error "SOTS_ExecutionHelperActor.generated.h already included, missing '#pragma once' in SOTS_ExecutionHelperActor.h"
#endif
#define SOTS_KILLEXECUTIONMANAGER_SOTS_ExecutionHelperActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSOTS_KEM_OmniTraceWarpResult;

// ********** Begin Class ASOTS_ExecutionHelperActor ***********************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_ExecutionHelperActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSpawnTransform); \
	DECLARE_FUNCTION(execGetWarpResult); \
	DECLARE_FUNCTION(execNotifyExecutionEnded); \
	DECLARE_FUNCTION(execPrePlaySpawnMontages);


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_ExecutionHelperActor_h_18_CALLBACK_WRAPPERS
struct Z_Construct_UClass_ASOTS_ExecutionHelperActor_Statics;
SOTS_KILLEXECUTIONMANAGER_API UClass* Z_Construct_UClass_ASOTS_ExecutionHelperActor_NoRegister();

#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_ExecutionHelperActor_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASOTS_ExecutionHelperActor(); \
	friend struct ::Z_Construct_UClass_ASOTS_ExecutionHelperActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOTS_KILLEXECUTIONMANAGER_API UClass* ::Z_Construct_UClass_ASOTS_ExecutionHelperActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ASOTS_ExecutionHelperActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SOTS_KillExecutionManager"), Z_Construct_UClass_ASOTS_ExecutionHelperActor_NoRegister) \
	DECLARE_SERIALIZER(ASOTS_ExecutionHelperActor)


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_ExecutionHelperActor_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASOTS_ExecutionHelperActor(ASOTS_ExecutionHelperActor&&) = delete; \
	ASOTS_ExecutionHelperActor(const ASOTS_ExecutionHelperActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASOTS_ExecutionHelperActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASOTS_ExecutionHelperActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASOTS_ExecutionHelperActor) \
	NO_API virtual ~ASOTS_ExecutionHelperActor();


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_ExecutionHelperActor_h_15_PROLOG
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_ExecutionHelperActor_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_ExecutionHelperActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_ExecutionHelperActor_h_18_CALLBACK_WRAPPERS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_ExecutionHelperActor_h_18_INCLASS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_ExecutionHelperActor_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASOTS_ExecutionHelperActor;

// ********** End Class ASOTS_ExecutionHelperActor *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_ExecutionHelperActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
