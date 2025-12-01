// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SOTS_NotificationSubsystem.h"

#ifdef SOTS_UI_SOTS_NotificationSubsystem_generated_h
#error "SOTS_NotificationSubsystem.generated.h already included, missing '#pragma once' in SOTS_NotificationSubsystem.h"
#endif
#define SOTS_UI_SOTS_NotificationSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
struct FGuid;
struct FSOTS_NotificationEntry;

// ********** Begin ScriptStruct FSOTS_NotificationEntry *******************************************
struct Z_Construct_UScriptStruct_FSOTS_NotificationEntry_Statics;
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_NotificationSubsystem_h_11_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSOTS_NotificationEntry_Statics; \
	SOTS_UI_API static class UScriptStruct* StaticStruct();


struct FSOTS_NotificationEntry;
// ********** End ScriptStruct FSOTS_NotificationEntry *********************************************

// ********** Begin Delegate FSOTS_OnNotificationsChanged ******************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_NotificationSubsystem_h_43_DELEGATE \
static void FSOTS_OnNotificationsChanged_DelegateWrapper(const FMulticastScriptDelegate& SOTS_OnNotificationsChanged);


// ********** End Delegate FSOTS_OnNotificationsChanged ********************************************

// ********** Begin Class USOTS_NotificationSubsystem **********************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_NotificationSubsystem_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetNotifications); \
	DECLARE_FUNCTION(execRemoveNotification); \
	DECLARE_FUNCTION(execPushNotification);


struct Z_Construct_UClass_USOTS_NotificationSubsystem_Statics;
SOTS_UI_API UClass* Z_Construct_UClass_USOTS_NotificationSubsystem_NoRegister();

#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_NotificationSubsystem_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSOTS_NotificationSubsystem(); \
	friend struct ::Z_Construct_UClass_USOTS_NotificationSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOTS_UI_API UClass* ::Z_Construct_UClass_USOTS_NotificationSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(USOTS_NotificationSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SOTS_UI"), Z_Construct_UClass_USOTS_NotificationSubsystem_NoRegister) \
	DECLARE_SERIALIZER(USOTS_NotificationSubsystem)


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_NotificationSubsystem_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USOTS_NotificationSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USOTS_NotificationSubsystem(USOTS_NotificationSubsystem&&) = delete; \
	USOTS_NotificationSubsystem(const USOTS_NotificationSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USOTS_NotificationSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USOTS_NotificationSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USOTS_NotificationSubsystem) \
	NO_API virtual ~USOTS_NotificationSubsystem();


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_NotificationSubsystem_h_26_PROLOG
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_NotificationSubsystem_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_NotificationSubsystem_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_NotificationSubsystem_h_29_INCLASS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_NotificationSubsystem_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USOTS_NotificationSubsystem;

// ********** End Class USOTS_NotificationSubsystem ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_NotificationSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
