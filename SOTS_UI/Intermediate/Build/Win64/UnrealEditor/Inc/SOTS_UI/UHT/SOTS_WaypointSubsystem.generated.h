// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SOTS_WaypointSubsystem.h"

#ifdef SOTS_UI_SOTS_WaypointSubsystem_generated_h
#error "SOTS_WaypointSubsystem.generated.h already included, missing '#pragma once' in SOTS_WaypointSubsystem.h"
#endif
#define SOTS_UI_SOTS_WaypointSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FGameplayTag;
struct FGuid;
struct FSOTS_WaypointEntry;

// ********** Begin ScriptStruct FSOTS_WaypointEntry ***********************************************
struct Z_Construct_UScriptStruct_FSOTS_WaypointEntry_Statics;
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_WaypointSubsystem_h_11_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSOTS_WaypointEntry_Statics; \
	SOTS_UI_API static class UScriptStruct* StaticStruct();


struct FSOTS_WaypointEntry;
// ********** End ScriptStruct FSOTS_WaypointEntry *************************************************

// ********** Begin Delegate FSOTS_OnWaypointsChanged **********************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_WaypointSubsystem_h_47_DELEGATE \
static void FSOTS_OnWaypointsChanged_DelegateWrapper(const FMulticastScriptDelegate& SOTS_OnWaypointsChanged);


// ********** End Delegate FSOTS_OnWaypointsChanged ************************************************

// ********** Begin Class USOTS_WaypointSubsystem **************************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_WaypointSubsystem_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetWaypoints); \
	DECLARE_FUNCTION(execRemoveWaypoint); \
	DECLARE_FUNCTION(execAddLocationWaypoint); \
	DECLARE_FUNCTION(execAddActorWaypoint);


struct Z_Construct_UClass_USOTS_WaypointSubsystem_Statics;
SOTS_UI_API UClass* Z_Construct_UClass_USOTS_WaypointSubsystem_NoRegister();

#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_WaypointSubsystem_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSOTS_WaypointSubsystem(); \
	friend struct ::Z_Construct_UClass_USOTS_WaypointSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOTS_UI_API UClass* ::Z_Construct_UClass_USOTS_WaypointSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(USOTS_WaypointSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SOTS_UI"), Z_Construct_UClass_USOTS_WaypointSubsystem_NoRegister) \
	DECLARE_SERIALIZER(USOTS_WaypointSubsystem)


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_WaypointSubsystem_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USOTS_WaypointSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USOTS_WaypointSubsystem(USOTS_WaypointSubsystem&&) = delete; \
	USOTS_WaypointSubsystem(const USOTS_WaypointSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USOTS_WaypointSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USOTS_WaypointSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USOTS_WaypointSubsystem) \
	NO_API virtual ~USOTS_WaypointSubsystem();


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_WaypointSubsystem_h_29_PROLOG
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_WaypointSubsystem_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_WaypointSubsystem_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_WaypointSubsystem_h_32_INCLASS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_WaypointSubsystem_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USOTS_WaypointSubsystem;

// ********** End Class USOTS_WaypointSubsystem ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_WaypointSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
