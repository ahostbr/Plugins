// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SOTS_AIPerceptionComponent.h"

#ifdef SOTS_AIPERCEPTION_SOTS_AIPerceptionComponent_generated_h
#error "SOTS_AIPerceptionComponent.generated.h already included, missing '#pragma once' in SOTS_AIPerceptionComponent.h"
#endif
#define SOTS_AIPERCEPTION_SOTS_AIPerceptionComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class ESOTS_PerceptionState : uint8;
struct FSOTS_PerceivedTargetState;

// ********** Begin Delegate FSOTS_OnPerceptionStateChanged ****************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_AIPerception_Source_SOTS_AIPerception_Public_SOTS_AIPerceptionComponent_h_91_DELEGATE \
static void FSOTS_OnPerceptionStateChanged_DelegateWrapper(const FMulticastScriptDelegate& SOTS_OnPerceptionStateChanged, ESOTS_PerceptionState NewState);


// ********** End Delegate FSOTS_OnPerceptionStateChanged ******************************************

// ********** Begin Delegate FSOTS_OnTargetPerceptionChanged ***************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_AIPerception_Source_SOTS_AIPerception_Public_SOTS_AIPerceptionComponent_h_92_DELEGATE \
static void FSOTS_OnTargetPerceptionChanged_DelegateWrapper(const FMulticastScriptDelegate& SOTS_OnTargetPerceptionChanged, AActor* Target, ESOTS_PerceptionState NewState);


// ********** End Delegate FSOTS_OnTargetPerceptionChanged *****************************************

// ********** Begin Class USOTS_AIPerceptionComponent **********************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_AIPerception_Source_SOTS_AIPerception_Public_SOTS_AIPerceptionComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execReportAlertStateChanged); \
	DECLARE_FUNCTION(execReportDetectionLevelChanged); \
	DECLARE_FUNCTION(execForceForgetTarget); \
	DECLARE_FUNCTION(execForceAlertToLocation); \
	DECLARE_FUNCTION(execSuppressPerceptionForDuration); \
	DECLARE_FUNCTION(execGetCurrentSuspicion01); \
	DECLARE_FUNCTION(execGetTargetState); \
	DECLARE_FUNCTION(execHasLineOfSightToTarget); \
	DECLARE_FUNCTION(execGetAwarenessForTarget); \
	DECLARE_FUNCTION(execGetCurrentPerceptionState);


struct Z_Construct_UClass_USOTS_AIPerceptionComponent_Statics;
SOTS_AIPERCEPTION_API UClass* Z_Construct_UClass_USOTS_AIPerceptionComponent_NoRegister();

#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_AIPerception_Source_SOTS_AIPerception_Public_SOTS_AIPerceptionComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSOTS_AIPerceptionComponent(); \
	friend struct ::Z_Construct_UClass_USOTS_AIPerceptionComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOTS_AIPERCEPTION_API UClass* ::Z_Construct_UClass_USOTS_AIPerceptionComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(USOTS_AIPerceptionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SOTS_AIPerception"), Z_Construct_UClass_USOTS_AIPerceptionComponent_NoRegister) \
	DECLARE_SERIALIZER(USOTS_AIPerceptionComponent)


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_AIPerception_Source_SOTS_AIPerception_Public_SOTS_AIPerceptionComponent_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USOTS_AIPerceptionComponent(USOTS_AIPerceptionComponent&&) = delete; \
	USOTS_AIPerceptionComponent(const USOTS_AIPerceptionComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USOTS_AIPerceptionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USOTS_AIPerceptionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USOTS_AIPerceptionComponent) \
	NO_API virtual ~USOTS_AIPerceptionComponent();


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_AIPerception_Source_SOTS_AIPerception_Public_SOTS_AIPerceptionComponent_h_15_PROLOG
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_AIPerception_Source_SOTS_AIPerception_Public_SOTS_AIPerceptionComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_AIPerception_Source_SOTS_AIPerception_Public_SOTS_AIPerceptionComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_AIPerception_Source_SOTS_AIPerception_Public_SOTS_AIPerceptionComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_AIPerception_Source_SOTS_AIPerception_Public_SOTS_AIPerceptionComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USOTS_AIPerceptionComponent;

// ********** End Class USOTS_AIPerceptionComponent ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_SOTS_AIPerception_Source_SOTS_AIPerception_Public_SOTS_AIPerceptionComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
