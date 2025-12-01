// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SOTS_KEM_ManagerSubsystem.h"

#ifdef SOTS_KILLEXECUTIONMANAGER_SOTS_KEM_ManagerSubsystem_generated_h
#error "SOTS_KEM_ManagerSubsystem.generated.h already included, missing '#pragma once' in SOTS_KEM_ManagerSubsystem.h"
#endif
#define SOTS_KILLEXECUTIONMANAGER_SOTS_KEM_ManagerSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UContextualAnimSceneAsset;
class UObject;
class USOTS_AbilityRequirementLibraryAsset;
class USOTS_KEM_ExecutionDefinition;
class USOTS_KEM_ExecutionRegistryConfig;
enum class ESOTS_KEMState : uint8;
struct FGameplayTagContainer;
struct FSOTS_ExecutionContext;
struct FSOTS_KEM_ExecutionEvent;
struct FSOTS_KEMAnchorDebugInfo;
struct FSOTS_KEMCandidateDebugRecord;
struct FSOTS_KEMDebugRecord;
struct FSOTS_KEMDecisionSnapshot;

// ********** Begin ScriptStruct FSOTS_KEMAnchorDebugInfo ******************************************
struct Z_Construct_UScriptStruct_FSOTS_KEMAnchorDebugInfo_Statics;
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_ManagerSubsystem_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSOTS_KEMAnchorDebugInfo_Statics; \
	SOTS_KILLEXECUTIONMANAGER_API static class UScriptStruct* StaticStruct();


struct FSOTS_KEMAnchorDebugInfo;
// ********** End ScriptStruct FSOTS_KEMAnchorDebugInfo ********************************************

// ********** Begin Delegate FSOTS_OnExecutionEvent ************************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_ManagerSubsystem_h_51_DELEGATE \
SOTS_KILLEXECUTIONMANAGER_API void FSOTS_OnExecutionEvent_DelegateWrapper(const FMulticastScriptDelegate& SOTS_OnExecutionEvent, FSOTS_KEM_ExecutionEvent const& Event);


// ********** End Delegate FSOTS_OnExecutionEvent **************************************************

// ********** Begin Delegate FSOTS_KEM_CASExecutionChosenSignature *********************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_ManagerSubsystem_h_62_DELEGATE \
SOTS_KILLEXECUTIONMANAGER_API void FSOTS_KEM_CASExecutionChosenSignature_DelegateWrapper(const FMulticastScriptDelegate& SOTS_KEM_CASExecutionChosenSignature, USOTS_KEM_ExecutionDefinition* ExecutionDef, UContextualAnimSceneAsset* Scene, AActor* Instigator, AActor* Target, FName SectionName, FName InstigatorRole, FName TargetRole, FTransform InstigatorWarpTarget);


// ********** End Delegate FSOTS_KEM_CASExecutionChosenSignature ***********************************

// ********** Begin Delegate FSOTS_KEM_LevelSequenceExecutionChosenSignature ***********************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_ManagerSubsystem_h_68_DELEGATE \
SOTS_KILLEXECUTIONMANAGER_API void FSOTS_KEM_LevelSequenceExecutionChosenSignature_DelegateWrapper(const FMulticastScriptDelegate& SOTS_KEM_LevelSequenceExecutionChosenSignature, USOTS_KEM_ExecutionDefinition* ExecutionDef, AActor* Instigator, AActor* Target, FSOTS_ExecutionContext Context);


// ********** End Delegate FSOTS_KEM_LevelSequenceExecutionChosenSignature *************************

// ********** Begin Delegate FSOTS_KEM_AISExecutionChosenSignature *********************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_ManagerSubsystem_h_74_DELEGATE \
SOTS_KILLEXECUTIONMANAGER_API void FSOTS_KEM_AISExecutionChosenSignature_DelegateWrapper(const FMulticastScriptDelegate& SOTS_KEM_AISExecutionChosenSignature, USOTS_KEM_ExecutionDefinition* ExecutionDef, AActor* Instigator, AActor* Target, FSOTS_ExecutionContext Context);


// ********** End Delegate FSOTS_KEM_AISExecutionChosenSignature ***********************************

// ********** Begin Class USOTS_KEMManagerSubsystem ************************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_ManagerSubsystem_h_79_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFindExecutionDefinitionById); \
	DECLARE_FUNCTION(execInitializeFromDefaultRegistryConfig); \
	DECLARE_FUNCTION(execRegisterExecutionDefinitionsFromConfig); \
	DECLARE_FUNCTION(execRegisterExecutionDefinition); \
	DECLARE_FUNCTION(execSetAbilityRequirementLibrary); \
	DECLARE_FUNCTION(execForceResetState); \
	DECLARE_FUNCTION(execNotifyExecutionEnded); \
	DECLARE_FUNCTION(execGetLastKEMCandidateStrings); \
	DECLARE_FUNCTION(execGetLastKEMDecisionSummary); \
	DECLARE_FUNCTION(execGetLastDecisionSnapshot); \
	DECLARE_FUNCTION(execGetLastKEMCandidateDebug); \
	DECLARE_FUNCTION(execGetRecentKEMDebugRecords); \
	DECLARE_FUNCTION(execGetCurrentState); \
	DECLARE_FUNCTION(execDrawAnchorDebugVisualization); \
	DECLARE_FUNCTION(execGetNearbyAnchorsForDebug); \
	DECLARE_FUNCTION(execKEM_ToggleAnchorDebug); \
	DECLARE_FUNCTION(execKEM_DumpCoverage); \
	DECLARE_FUNCTION(execKEM_SelfTest); \
	DECLARE_FUNCTION(execRunKEMDebug); \
	DECLARE_FUNCTION(execRequestExecution_FromCinematic); \
	DECLARE_FUNCTION(execRequestExecution_FromDragon); \
	DECLARE_FUNCTION(execRequestExecution_FromPlayer); \
	DECLARE_FUNCTION(execRequestExecution);


struct Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics;
SOTS_KILLEXECUTIONMANAGER_API UClass* Z_Construct_UClass_USOTS_KEMManagerSubsystem_NoRegister();

#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_ManagerSubsystem_h_79_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSOTS_KEMManagerSubsystem(); \
	friend struct ::Z_Construct_UClass_USOTS_KEMManagerSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOTS_KILLEXECUTIONMANAGER_API UClass* ::Z_Construct_UClass_USOTS_KEMManagerSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(USOTS_KEMManagerSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SOTS_KillExecutionManager"), Z_Construct_UClass_USOTS_KEMManagerSubsystem_NoRegister) \
	DECLARE_SERIALIZER(USOTS_KEMManagerSubsystem) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_ManagerSubsystem_h_79_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USOTS_KEMManagerSubsystem(USOTS_KEMManagerSubsystem&&) = delete; \
	USOTS_KEMManagerSubsystem(const USOTS_KEMManagerSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USOTS_KEMManagerSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USOTS_KEMManagerSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USOTS_KEMManagerSubsystem) \
	NO_API virtual ~USOTS_KEMManagerSubsystem();


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_ManagerSubsystem_h_76_PROLOG
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_ManagerSubsystem_h_79_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_ManagerSubsystem_h_79_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_ManagerSubsystem_h_79_INCLASS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_ManagerSubsystem_h_79_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USOTS_KEMManagerSubsystem;

// ********** End Class USOTS_KEMManagerSubsystem **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_ManagerSubsystem_h

// ********** Begin Enum EKEMDebugVerbosity ********************************************************
#define FOREACH_ENUM_EKEMDEBUGVERBOSITY(op) \
	op(EKEMDebugVerbosity::None) \
	op(EKEMDebugVerbosity::Basic) \
	op(EKEMDebugVerbosity::Verbose) 

enum class EKEMDebugVerbosity : uint8;
template<> struct TIsUEnumClass<EKEMDebugVerbosity> { enum { Value = true }; };
template<> SOTS_KILLEXECUTIONMANAGER_NON_ATTRIBUTED_API UEnum* StaticEnum<EKEMDebugVerbosity>();
// ********** End Enum EKEMDebugVerbosity **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
