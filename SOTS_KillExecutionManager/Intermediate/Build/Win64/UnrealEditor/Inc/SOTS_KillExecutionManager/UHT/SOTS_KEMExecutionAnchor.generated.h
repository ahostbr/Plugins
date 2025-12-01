// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SOTS_KEMExecutionAnchor.h"

#ifdef SOTS_KILLEXECUTIONMANAGER_SOTS_KEMExecutionAnchor_generated_h
#error "SOTS_KEMExecutionAnchor.generated.h already included, missing '#pragma once' in SOTS_KEMExecutionAnchor.h"
#endif
#define SOTS_KILLEXECUTIONMANAGER_SOTS_KEMExecutionAnchor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USOTS_KEM_ExecutionDefinition;
enum class ESOTS_KEM_ExecutionFamily : uint8;
struct FGameplayTag;

// ********** Begin Class ASOTS_KEMExecutionAnchor *************************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEMExecutionAnchor_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetEnvContextTags); \
	DECLARE_FUNCTION(execGetUseRadius); \
	DECLARE_FUNCTION(execGetPreferredExecutions); \
	DECLARE_FUNCTION(execGetExecutionFamily); \
	DECLARE_FUNCTION(execGetPositionTag);


struct Z_Construct_UClass_ASOTS_KEMExecutionAnchor_Statics;
SOTS_KILLEXECUTIONMANAGER_API UClass* Z_Construct_UClass_ASOTS_KEMExecutionAnchor_NoRegister();

#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEMExecutionAnchor_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASOTS_KEMExecutionAnchor(); \
	friend struct ::Z_Construct_UClass_ASOTS_KEMExecutionAnchor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOTS_KILLEXECUTIONMANAGER_API UClass* ::Z_Construct_UClass_ASOTS_KEMExecutionAnchor_NoRegister(); \
public: \
	DECLARE_CLASS2(ASOTS_KEMExecutionAnchor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SOTS_KillExecutionManager"), Z_Construct_UClass_ASOTS_KEMExecutionAnchor_NoRegister) \
	DECLARE_SERIALIZER(ASOTS_KEMExecutionAnchor)


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEMExecutionAnchor_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASOTS_KEMExecutionAnchor(ASOTS_KEMExecutionAnchor&&) = delete; \
	ASOTS_KEMExecutionAnchor(const ASOTS_KEMExecutionAnchor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASOTS_KEMExecutionAnchor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASOTS_KEMExecutionAnchor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASOTS_KEMExecutionAnchor) \
	NO_API virtual ~ASOTS_KEMExecutionAnchor();


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEMExecutionAnchor_h_17_PROLOG
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEMExecutionAnchor_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEMExecutionAnchor_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEMExecutionAnchor_h_20_INCLASS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEMExecutionAnchor_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASOTS_KEMExecutionAnchor;

// ********** End Class ASOTS_KEMExecutionAnchor ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEMExecutionAnchor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
