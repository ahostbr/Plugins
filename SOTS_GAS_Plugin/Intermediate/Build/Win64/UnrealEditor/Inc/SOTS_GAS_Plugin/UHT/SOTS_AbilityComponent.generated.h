// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/SOTS_AbilityComponent.h"

#ifdef SOTS_GAS_PLUGIN_SOTS_AbilityComponent_generated_h
#error "SOTS_AbilityComponent.generated.h already included, missing '#pragma once' in SOTS_AbilityComponent.h"
#endif
#define SOTS_GAS_PLUGIN_SOTS_AbilityComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAC_SOTS_Abilitys;
enum class E_SOTS_AbilityActivationResult : uint8;
struct F_SOTS_AbilityActivationContext;
struct F_SOTS_AbilityComponentSaveData;
struct F_SOTS_AbilityGrantOptions;
struct F_SOTS_AbilityHandle;
struct F_SOTS_AbilityStateSnapshot;
struct FGameplayTag;

// ********** Begin Delegate FSOTS_AbilitySimpleSignature ******************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Components_SOTS_AbilityComponent_h_14_DELEGATE \
SOTS_GAS_PLUGIN_API void FSOTS_AbilitySimpleSignature_DelegateWrapper(const FMulticastScriptDelegate& SOTS_AbilitySimpleSignature, FGameplayTag AbilityTag, F_SOTS_AbilityHandle Handle);


// ********** End Delegate FSOTS_AbilitySimpleSignature ********************************************

// ********** Begin Delegate FSOTS_AbilityFailedSignature ******************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Components_SOTS_AbilityComponent_h_15_DELEGATE \
SOTS_GAS_PLUGIN_API void FSOTS_AbilityFailedSignature_DelegateWrapper(const FMulticastScriptDelegate& SOTS_AbilityFailedSignature, FGameplayTag AbilityTag, E_SOTS_AbilityActivationResult Result);


// ********** End Delegate FSOTS_AbilityFailedSignature ********************************************

// ********** Begin Delegate FSOTS_AbilityActivatedWithContextSignature ****************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Components_SOTS_AbilityComponent_h_16_DELEGATE \
SOTS_GAS_PLUGIN_API void FSOTS_AbilityActivatedWithContextSignature_DelegateWrapper(const FMulticastScriptDelegate& SOTS_AbilityActivatedWithContextSignature, FGameplayTag AbilityTag, F_SOTS_AbilityHandle Handle, F_SOTS_AbilityActivationContext const& Context);


// ********** End Delegate FSOTS_AbilityActivatedWithContextSignature ******************************

// ********** Begin Delegate FSOTS_AbilityListChangedSignature *************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Components_SOTS_AbilityComponent_h_17_DELEGATE \
SOTS_GAS_PLUGIN_API void FSOTS_AbilityListChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& SOTS_AbilityListChangedSignature, UAC_SOTS_Abilitys* AbilityComponent);


// ********** End Delegate FSOTS_AbilityListChangedSignature ***************************************

// ********** Begin Delegate FSOTS_AbilityStateChangedSignature ************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Components_SOTS_AbilityComponent_h_18_DELEGATE \
SOTS_GAS_PLUGIN_API void FSOTS_AbilityStateChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& SOTS_AbilityStateChangedSignature, FGameplayTag AbilityTag, F_SOTS_AbilityStateSnapshot NewState);


// ********** End Delegate FSOTS_AbilityStateChangedSignature **************************************

// ********** Begin Class UAC_SOTS_Abilitys ********************************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Components_SOTS_AbilityComponent_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execApplySerializedState); \
	DECLARE_FUNCTION(execGetSerializedState); \
	DECLARE_FUNCTION(execPullProfileStateFromSubsystem); \
	DECLARE_FUNCTION(execPushProfileStateToSubsystem); \
	DECLARE_FUNCTION(execForceRemoveAbility); \
	DECLARE_FUNCTION(execForceGrantAbility); \
	DECLARE_FUNCTION(execActivateAbility); \
	DECLARE_FUNCTION(execCanActivateAbility); \
	DECLARE_FUNCTION(execGetKnownAbilities); \
	DECLARE_FUNCTION(execHasAbility); \
	DECLARE_FUNCTION(execRemoveAbility); \
	DECLARE_FUNCTION(execIsAbilityOnCooldown); \
	DECLARE_FUNCTION(execGetAbilityCharges); \
	DECLARE_FUNCTION(execCancelAllAbilities); \
	DECLARE_FUNCTION(execTryActivateAbilityByTag); \
	DECLARE_FUNCTION(execRevokeAbilityByTag); \
	DECLARE_FUNCTION(execGrantAbility);


struct Z_Construct_UClass_UAC_SOTS_Abilitys_Statics;
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_UAC_SOTS_Abilitys_NoRegister();

#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Components_SOTS_AbilityComponent_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAC_SOTS_Abilitys(); \
	friend struct ::Z_Construct_UClass_UAC_SOTS_Abilitys_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOTS_GAS_PLUGIN_API UClass* ::Z_Construct_UClass_UAC_SOTS_Abilitys_NoRegister(); \
public: \
	DECLARE_CLASS2(UAC_SOTS_Abilitys, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SOTS_GAS_Plugin"), Z_Construct_UClass_UAC_SOTS_Abilitys_NoRegister) \
	DECLARE_SERIALIZER(UAC_SOTS_Abilitys)


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Components_SOTS_AbilityComponent_h_40_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAC_SOTS_Abilitys(UAC_SOTS_Abilitys&&) = delete; \
	UAC_SOTS_Abilitys(const UAC_SOTS_Abilitys&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAC_SOTS_Abilitys); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAC_SOTS_Abilitys); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAC_SOTS_Abilitys) \
	NO_API virtual ~UAC_SOTS_Abilitys();


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Components_SOTS_AbilityComponent_h_37_PROLOG
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Components_SOTS_AbilityComponent_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Components_SOTS_AbilityComponent_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Components_SOTS_AbilityComponent_h_40_INCLASS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Components_SOTS_AbilityComponent_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAC_SOTS_Abilitys;

// ********** End Class UAC_SOTS_Abilitys **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Components_SOTS_AbilityComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
