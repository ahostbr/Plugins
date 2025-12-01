// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SOTS_MMSSSubsystem.h"

#ifdef SOTS_MMSS_SOTS_MMSSSubsystem_generated_h
#error "SOTS_MMSSSubsystem.generated.h already included, missing '#pragma once' in SOTS_MMSSSubsystem.h"
#endif
#define SOTS_MMSS_SOTS_MMSSSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USOTS_MissionMusicLibrary;
enum class ESOTS_MusicDebugMode : uint8;
struct FGameplayTag;

// ********** Begin Class USOTS_MMSSSubsystem ******************************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MMSS_Source_SOTS_MMSS_Public_SOTS_MMSSSubsystem_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDebugPrintCurrentState); \
	DECLARE_FUNCTION(execStopMusic); \
	DECLARE_FUNCTION(execRequestRoleTrack); \
	DECLARE_FUNCTION(execRequestMusicByMissionAndTag); \
	DECLARE_FUNCTION(execRequestMusicByTag); \
	DECLARE_FUNCTION(execGetCurrentPlaybackTime); \
	DECLARE_FUNCTION(execGetCurrentMusicRoleTag); \
	DECLARE_FUNCTION(execGetCurrentTrackId); \
	DECLARE_FUNCTION(execGetCurrentMissionId); \
	DECLARE_FUNCTION(execSetDebugMode); \
	DECLARE_FUNCTION(execSetCurrentMissionId); \
	DECLARE_FUNCTION(execSetMusicLibrary);


struct Z_Construct_UClass_USOTS_MMSSSubsystem_Statics;
SOTS_MMSS_API UClass* Z_Construct_UClass_USOTS_MMSSSubsystem_NoRegister();

#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MMSS_Source_SOTS_MMSS_Public_SOTS_MMSSSubsystem_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSOTS_MMSSSubsystem(); \
	friend struct ::Z_Construct_UClass_USOTS_MMSSSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOTS_MMSS_API UClass* ::Z_Construct_UClass_USOTS_MMSSSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(USOTS_MMSSSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SOTS_MMSS"), Z_Construct_UClass_USOTS_MMSSSubsystem_NoRegister) \
	DECLARE_SERIALIZER(USOTS_MMSSSubsystem)


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MMSS_Source_SOTS_MMSS_Public_SOTS_MMSSSubsystem_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USOTS_MMSSSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USOTS_MMSSSubsystem(USOTS_MMSSSubsystem&&) = delete; \
	USOTS_MMSSSubsystem(const USOTS_MMSSSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USOTS_MMSSSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USOTS_MMSSSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USOTS_MMSSSubsystem) \
	NO_API virtual ~USOTS_MMSSSubsystem();


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MMSS_Source_SOTS_MMSS_Public_SOTS_MMSSSubsystem_h_25_PROLOG
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MMSS_Source_SOTS_MMSS_Public_SOTS_MMSSSubsystem_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MMSS_Source_SOTS_MMSS_Public_SOTS_MMSSSubsystem_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MMSS_Source_SOTS_MMSS_Public_SOTS_MMSSSubsystem_h_28_INCLASS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MMSS_Source_SOTS_MMSS_Public_SOTS_MMSSSubsystem_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USOTS_MMSSSubsystem;

// ********** End Class USOTS_MMSSSubsystem ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MMSS_Source_SOTS_MMSS_Public_SOTS_MMSSSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
