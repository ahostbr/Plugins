// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SOTS_StatsLibrary.h"

#ifdef SOTS_STATS_SOTS_StatsLibrary_generated_h
#error "SOTS_StatsLibrary.generated.h already included, missing '#pragma once' in SOTS_StatsLibrary.h"
#endif
#define SOTS_STATS_SOTS_StatsLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
struct FGameplayTag;
struct FSOTS_CharacterStateData;

// ********** Begin Class USOTS_StatsLibrary *******************************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_Stats_Source_SOTS_Stats_Public_SOTS_StatsLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSOTS_DumpStatsToString); \
	DECLARE_FUNCTION(execSOTS_ApplyCharacterStateToStats); \
	DECLARE_FUNCTION(execSOTS_BuildCharacterStateFromStats); \
	DECLARE_FUNCTION(execApplySnapshotToActor); \
	DECLARE_FUNCTION(execSnapshotActorStats); \
	DECLARE_FUNCTION(execSetActorStatValue); \
	DECLARE_FUNCTION(execAddToActorStat); \
	DECLARE_FUNCTION(execGetActorStatValue);


struct Z_Construct_UClass_USOTS_StatsLibrary_Statics;
SOTS_STATS_API UClass* Z_Construct_UClass_USOTS_StatsLibrary_NoRegister();

#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_Stats_Source_SOTS_Stats_Public_SOTS_StatsLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSOTS_StatsLibrary(); \
	friend struct ::Z_Construct_UClass_USOTS_StatsLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOTS_STATS_API UClass* ::Z_Construct_UClass_USOTS_StatsLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(USOTS_StatsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SOTS_Stats"), Z_Construct_UClass_USOTS_StatsLibrary_NoRegister) \
	DECLARE_SERIALIZER(USOTS_StatsLibrary)


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_Stats_Source_SOTS_Stats_Public_SOTS_StatsLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USOTS_StatsLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USOTS_StatsLibrary(USOTS_StatsLibrary&&) = delete; \
	USOTS_StatsLibrary(const USOTS_StatsLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USOTS_StatsLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USOTS_StatsLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USOTS_StatsLibrary) \
	NO_API virtual ~USOTS_StatsLibrary();


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_Stats_Source_SOTS_Stats_Public_SOTS_StatsLibrary_h_12_PROLOG
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_Stats_Source_SOTS_Stats_Public_SOTS_StatsLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_Stats_Source_SOTS_Stats_Public_SOTS_StatsLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_Stats_Source_SOTS_Stats_Public_SOTS_StatsLibrary_h_15_INCLASS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_Stats_Source_SOTS_Stats_Public_SOTS_StatsLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USOTS_StatsLibrary;

// ********** End Class USOTS_StatsLibrary *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_SOTS_Stats_Source_SOTS_Stats_Public_SOTS_StatsLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
