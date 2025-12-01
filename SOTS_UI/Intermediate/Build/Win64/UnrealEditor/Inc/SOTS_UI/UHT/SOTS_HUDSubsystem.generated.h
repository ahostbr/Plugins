// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SOTS_HUDSubsystem.h"

#ifdef SOTS_UI_SOTS_HUDSubsystem_generated_h
#error "SOTS_HUDSubsystem.generated.h already included, missing '#pragma once' in SOTS_HUDSubsystem.h"
#endif
#define SOTS_UI_SOTS_HUDSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FSOTS_OnHudFloatChanged ***********************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_HUDSubsystem_h_7_DELEGATE \
SOTS_UI_API void FSOTS_OnHudFloatChanged_DelegateWrapper(const FMulticastScriptDelegate& SOTS_OnHudFloatChanged, float NewValue);


// ********** End Delegate FSOTS_OnHudFloatChanged *************************************************

// ********** Begin Delegate FSOTS_OnHudTextChanged ************************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_HUDSubsystem_h_8_DELEGATE \
SOTS_UI_API void FSOTS_OnHudTextChanged_DelegateWrapper(const FMulticastScriptDelegate& SOTS_OnHudTextChanged, const FString& NewText);


// ********** End Delegate FSOTS_OnHudTextChanged **************************************************

// ********** Begin Class USOTS_HUDSubsystem *******************************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_HUDSubsystem_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetObjectiveText); \
	DECLARE_FUNCTION(execSetObjectiveText); \
	DECLARE_FUNCTION(execGetDetectionLevel); \
	DECLARE_FUNCTION(execSetDetectionLevel); \
	DECLARE_FUNCTION(execGetHealthPercent); \
	DECLARE_FUNCTION(execSetHealthPercent);


struct Z_Construct_UClass_USOTS_HUDSubsystem_Statics;
SOTS_UI_API UClass* Z_Construct_UClass_USOTS_HUDSubsystem_NoRegister();

#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_HUDSubsystem_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSOTS_HUDSubsystem(); \
	friend struct ::Z_Construct_UClass_USOTS_HUDSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOTS_UI_API UClass* ::Z_Construct_UClass_USOTS_HUDSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(USOTS_HUDSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SOTS_UI"), Z_Construct_UClass_USOTS_HUDSubsystem_NoRegister) \
	DECLARE_SERIALIZER(USOTS_HUDSubsystem)


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_HUDSubsystem_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USOTS_HUDSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USOTS_HUDSubsystem(USOTS_HUDSubsystem&&) = delete; \
	USOTS_HUDSubsystem(const USOTS_HUDSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USOTS_HUDSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USOTS_HUDSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USOTS_HUDSubsystem) \
	NO_API virtual ~USOTS_HUDSubsystem();


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_HUDSubsystem_h_10_PROLOG
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_HUDSubsystem_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_HUDSubsystem_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_HUDSubsystem_h_13_INCLASS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_HUDSubsystem_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USOTS_HUDSubsystem;

// ********** End Class USOTS_HUDSubsystem *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_HUDSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
