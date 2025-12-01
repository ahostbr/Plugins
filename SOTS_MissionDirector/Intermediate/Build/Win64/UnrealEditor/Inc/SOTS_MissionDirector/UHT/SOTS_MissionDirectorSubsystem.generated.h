// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SOTS_MissionDirectorSubsystem.h"

#ifdef SOTS_MISSIONDIRECTOR_SOTS_MissionDirectorSubsystem_generated_h
#error "SOTS_MissionDirectorSubsystem.generated.h already included, missing '#pragma once' in SOTS_MissionDirectorSubsystem.h"
#endif
#define SOTS_MISSIONDIRECTOR_SOTS_MissionDirectorSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USOTS_MissionDefinition;
class USOTS_MissionDirectorSubsystem;
enum class ESOTS_MissionState : uint8;
enum class ESOTSMissionEventCategory : uint8;
enum class ESOTSStealthLevel : uint8;
struct FGameplayTag;
struct FGameplayTagContainer;
struct FSOTS_KEM_ExecutionEvent;
struct FSOTS_MissionEventLogEntry;
struct FSOTS_MissionObjectiveRuntimeState;
struct FSOTS_MissionRunSummary;
struct FSOTS_MissionRuntimeState;

// ********** Begin Delegate FSOTS_MissionScoreChangedSignature ************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MissionDirector_Source_SOTS_MissionDirector_Public_SOTS_MissionDirectorSubsystem_h_13_DELEGATE \
SOTS_MISSIONDIRECTOR_API void FSOTS_MissionScoreChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& SOTS_MissionScoreChangedSignature, float NewScore, float Delta, FGameplayTagContainer ContextTags);


// ********** End Delegate FSOTS_MissionScoreChangedSignature **************************************

// ********** Begin Delegate FSOTS_MissionEventLoggedSignature *************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MissionDirector_Source_SOTS_MissionDirector_Public_SOTS_MissionDirectorSubsystem_h_14_DELEGATE \
SOTS_MISSIONDIRECTOR_API void FSOTS_MissionEventLoggedSignature_DelegateWrapper(const FMulticastScriptDelegate& SOTS_MissionEventLoggedSignature, FSOTS_MissionEventLogEntry const& Entry);


// ********** End Delegate FSOTS_MissionEventLoggedSignature ***************************************

// ********** Begin Delegate FSOTS_MissionEndedSignature *******************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MissionDirector_Source_SOTS_MissionDirector_Public_SOTS_MissionDirectorSubsystem_h_15_DELEGATE \
SOTS_MISSIONDIRECTOR_API void FSOTS_MissionEndedSignature_DelegateWrapper(const FMulticastScriptDelegate& SOTS_MissionEndedSignature, FSOTS_MissionRunSummary const& Summary);


// ********** End Delegate FSOTS_MissionEndedSignature *********************************************

// ********** Begin Delegate FSOTS_MissionSimpleEventSignature *************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MissionDirector_Source_SOTS_MissionDirector_Public_SOTS_MissionDirectorSubsystem_h_16_DELEGATE \
SOTS_MISSIONDIRECTOR_API void FSOTS_MissionSimpleEventSignature_DelegateWrapper(const FMulticastScriptDelegate& SOTS_MissionSimpleEventSignature);


// ********** End Delegate FSOTS_MissionSimpleEventSignature ***************************************

// ********** Begin Delegate FSOTS_OnObjectiveUpdatedSignature *************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MissionDirector_Source_SOTS_MissionDirector_Public_SOTS_MissionDirectorSubsystem_h_17_DELEGATE \
SOTS_MISSIONDIRECTOR_API void FSOTS_OnObjectiveUpdatedSignature_DelegateWrapper(const FMulticastScriptDelegate& SOTS_OnObjectiveUpdatedSignature, FName ObjectiveId);


// ********** End Delegate FSOTS_OnObjectiveUpdatedSignature ***************************************

// ********** Begin Class USOTS_MissionDirectorSubsystem *******************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MissionDirector_Source_SOTS_MissionDirector_Public_SOTS_MissionDirectorSubsystem_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleExecutionEvent); \
	DECLARE_FUNCTION(execHandleStealthLevelChanged); \
	DECLARE_FUNCTION(execImportMissionState); \
	DECLARE_FUNCTION(execExportMissionState); \
	DECLARE_FUNCTION(execGetCurrentMissionResult); \
	DECLARE_FUNCTION(execGetNextMissionIdByOutcome); \
	DECLARE_FUNCTION(execRestoreMissionFromSave); \
	DECLARE_FUNCTION(execGetCurrentMissionSaveState); \
	DECLARE_FUNCTION(execGetCurrentMissionState); \
	DECLARE_FUNCTION(execNotifyAlertTriggered); \
	DECLARE_FUNCTION(execForceFailObjective); \
	DECLARE_FUNCTION(execNotifyMissionEvent); \
	DECLARE_FUNCTION(execIsObjectiveCompleted); \
	DECLARE_FUNCTION(execGetCurrentMissionObjectives); \
	DECLARE_FUNCTION(execGetActiveMissionDefinition); \
	DECLARE_FUNCTION(execGetMissionState); \
	DECLARE_FUNCTION(execFailMission); \
	DECLARE_FUNCTION(execCompleteObjectiveByTag); \
	DECLARE_FUNCTION(execStartMission); \
	DECLARE_FUNCTION(execIsMissionActive); \
	DECLARE_FUNCTION(execGetCurrentScore); \
	DECLARE_FUNCTION(execEndMissionRun); \
	DECLARE_FUNCTION(execRegisterScoreEvent); \
	DECLARE_FUNCTION(execRegisterObjectiveCompleted); \
	DECLARE_FUNCTION(execStartMissionRun); \
	DECLARE_FUNCTION(execGet);


struct Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics;
SOTS_MISSIONDIRECTOR_API UClass* Z_Construct_UClass_USOTS_MissionDirectorSubsystem_NoRegister();

#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MissionDirector_Source_SOTS_MissionDirector_Public_SOTS_MissionDirectorSubsystem_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSOTS_MissionDirectorSubsystem(); \
	friend struct ::Z_Construct_UClass_USOTS_MissionDirectorSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOTS_MISSIONDIRECTOR_API UClass* ::Z_Construct_UClass_USOTS_MissionDirectorSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(USOTS_MissionDirectorSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SOTS_MissionDirector"), Z_Construct_UClass_USOTS_MissionDirectorSubsystem_NoRegister) \
	DECLARE_SERIALIZER(USOTS_MissionDirectorSubsystem)


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MissionDirector_Source_SOTS_MissionDirector_Public_SOTS_MissionDirectorSubsystem_h_37_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USOTS_MissionDirectorSubsystem(USOTS_MissionDirectorSubsystem&&) = delete; \
	USOTS_MissionDirectorSubsystem(const USOTS_MissionDirectorSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USOTS_MissionDirectorSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USOTS_MissionDirectorSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USOTS_MissionDirectorSubsystem) \
	NO_API virtual ~USOTS_MissionDirectorSubsystem();


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MissionDirector_Source_SOTS_MissionDirector_Public_SOTS_MissionDirectorSubsystem_h_34_PROLOG
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MissionDirector_Source_SOTS_MissionDirector_Public_SOTS_MissionDirectorSubsystem_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MissionDirector_Source_SOTS_MissionDirector_Public_SOTS_MissionDirectorSubsystem_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MissionDirector_Source_SOTS_MissionDirector_Public_SOTS_MissionDirectorSubsystem_h_37_INCLASS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MissionDirector_Source_SOTS_MissionDirector_Public_SOTS_MissionDirectorSubsystem_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USOTS_MissionDirectorSubsystem;

// ********** End Class USOTS_MissionDirectorSubsystem *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MissionDirector_Source_SOTS_MissionDirector_Public_SOTS_MissionDirectorSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
