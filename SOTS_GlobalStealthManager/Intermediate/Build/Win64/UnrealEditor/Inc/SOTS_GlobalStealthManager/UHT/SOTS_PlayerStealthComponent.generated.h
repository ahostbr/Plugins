// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SOTS_PlayerStealthComponent.h"

#ifdef SOTS_GLOBALSTEALTHMANAGER_SOTS_PlayerStealthComponent_generated_h
#error "SOTS_PlayerStealthComponent.generated.h already included, missing '#pragma once' in SOTS_PlayerStealthComponent.h"
#endif
#define SOTS_GLOBALSTEALTHMANAGER_SOTS_PlayerStealthComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESOTS_StealthTier : uint8;
struct FSOTS_PlayerStealthState;

// ********** Begin Delegate FOnLocalVisibilityUpdated *********************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_PlayerStealthComponent_h_70_DELEGATE \
static void FOnLocalVisibilityUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnLocalVisibilityUpdated, float NewValue);


// ********** End Delegate FOnLocalVisibilityUpdated ***********************************************

// ********** Begin Delegate FOnStealthTierChanged *************************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_PlayerStealthComponent_h_72_DELEGATE \
static void FOnStealthTierChanged_DelegateWrapper(const FMulticastScriptDelegate& OnStealthTierChanged, ESOTS_StealthTier NewTier);


// ********** End Delegate FOnStealthTierChanged ***************************************************

// ********** Begin Class USOTS_PlayerStealthComponent *********************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_PlayerStealthComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetState); \
	DECLARE_FUNCTION(execSetDetected); \
	DECLARE_FUNCTION(execSetIsInShadow); \
	DECLARE_FUNCTION(execSetIsInCover); \
	DECLARE_FUNCTION(execSetStealthTier); \
	DECLARE_FUNCTION(execRecomputeLocalVisibility); \
	DECLARE_FUNCTION(execSetAISuspicion); \
	DECLARE_FUNCTION(execSetMovementNoise); \
	DECLARE_FUNCTION(execSetCoverExposure); \
	DECLARE_FUNCTION(execSetLightLevel);


struct Z_Construct_UClass_USOTS_PlayerStealthComponent_Statics;
SOTS_GLOBALSTEALTHMANAGER_API UClass* Z_Construct_UClass_USOTS_PlayerStealthComponent_NoRegister();

#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_PlayerStealthComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSOTS_PlayerStealthComponent(); \
	friend struct ::Z_Construct_UClass_USOTS_PlayerStealthComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOTS_GLOBALSTEALTHMANAGER_API UClass* ::Z_Construct_UClass_USOTS_PlayerStealthComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(USOTS_PlayerStealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SOTS_GlobalStealthManager"), Z_Construct_UClass_USOTS_PlayerStealthComponent_NoRegister) \
	DECLARE_SERIALIZER(USOTS_PlayerStealthComponent)


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_PlayerStealthComponent_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USOTS_PlayerStealthComponent(USOTS_PlayerStealthComponent&&) = delete; \
	USOTS_PlayerStealthComponent(const USOTS_PlayerStealthComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USOTS_PlayerStealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USOTS_PlayerStealthComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USOTS_PlayerStealthComponent) \
	NO_API virtual ~USOTS_PlayerStealthComponent();


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_PlayerStealthComponent_h_17_PROLOG
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_PlayerStealthComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_PlayerStealthComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_PlayerStealthComponent_h_20_INCLASS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_PlayerStealthComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USOTS_PlayerStealthComponent;

// ********** End Class USOTS_PlayerStealthComponent ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_PlayerStealthComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
