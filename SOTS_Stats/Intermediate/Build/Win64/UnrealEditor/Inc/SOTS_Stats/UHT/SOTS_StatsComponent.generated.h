// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SOTS_StatsComponent.h"

#ifdef SOTS_STATS_SOTS_StatsComponent_generated_h
#error "SOTS_StatsComponent.generated.h already included, missing '#pragma once' in SOTS_StatsComponent.h"
#endif
#define SOTS_STATS_SOTS_StatsComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;

// ********** Begin Delegate FSOTS_OnStatChangedSignature ******************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_Stats_Source_SOTS_Stats_Public_SOTS_StatsComponent_h_14_DELEGATE \
SOTS_STATS_API void FSOTS_OnStatChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& SOTS_OnStatChangedSignature, FGameplayTag StatTag, float OldValue, float NewValue);


// ********** End Delegate FSOTS_OnStatChangedSignature ********************************************

// ********** Begin Class USOTS_StatsComponent *****************************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_Stats_Source_SOTS_Stats_Public_SOTS_StatsComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetStatBounds); \
	DECLARE_FUNCTION(execSetAllStats); \
	DECLARE_FUNCTION(execGetAllStats); \
	DECLARE_FUNCTION(execHasStat); \
	DECLARE_FUNCTION(execAddToStat); \
	DECLARE_FUNCTION(execSetStatValue); \
	DECLARE_FUNCTION(execGetStatValue);


struct Z_Construct_UClass_USOTS_StatsComponent_Statics;
SOTS_STATS_API UClass* Z_Construct_UClass_USOTS_StatsComponent_NoRegister();

#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_Stats_Source_SOTS_Stats_Public_SOTS_StatsComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSOTS_StatsComponent(); \
	friend struct ::Z_Construct_UClass_USOTS_StatsComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOTS_STATS_API UClass* ::Z_Construct_UClass_USOTS_StatsComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(USOTS_StatsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SOTS_Stats"), Z_Construct_UClass_USOTS_StatsComponent_NoRegister) \
	DECLARE_SERIALIZER(USOTS_StatsComponent)


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_Stats_Source_SOTS_Stats_Public_SOTS_StatsComponent_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USOTS_StatsComponent(USOTS_StatsComponent&&) = delete; \
	USOTS_StatsComponent(const USOTS_StatsComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USOTS_StatsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USOTS_StatsComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USOTS_StatsComponent) \
	NO_API virtual ~USOTS_StatsComponent();


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_Stats_Source_SOTS_Stats_Public_SOTS_StatsComponent_h_16_PROLOG
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_Stats_Source_SOTS_Stats_Public_SOTS_StatsComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_Stats_Source_SOTS_Stats_Public_SOTS_StatsComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_Stats_Source_SOTS_Stats_Public_SOTS_StatsComponent_h_19_INCLASS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_Stats_Source_SOTS_Stats_Public_SOTS_StatsComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USOTS_StatsComponent;

// ********** End Class USOTS_StatsComponent *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_SOTS_Stats_Source_SOTS_Stats_Public_SOTS_StatsComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
