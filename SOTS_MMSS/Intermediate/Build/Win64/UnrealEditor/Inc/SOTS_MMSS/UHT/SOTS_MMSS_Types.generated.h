// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SOTS_MMSS_Types.h"

#ifdef SOTS_MMSS_SOTS_MMSS_Types_generated_h
#error "SOTS_MMSS_Types.generated.h already included, missing '#pragma once' in SOTS_MMSS_Types.h"
#endif
#define SOTS_MMSS_SOTS_MMSS_Types_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSOTS_MusicTrackEntry *********************************************
struct Z_Construct_UScriptStruct_FSOTS_MusicTrackEntry_Statics;
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MMSS_Source_SOTS_MMSS_Public_SOTS_MMSS_Types_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSOTS_MusicTrackEntry_Statics; \
	static class UScriptStruct* StaticStruct();


struct FSOTS_MusicTrackEntry;
// ********** End ScriptStruct FSOTS_MusicTrackEntry ***********************************************

// ********** Begin ScriptStruct FSOTS_MissionMusicSet *********************************************
struct Z_Construct_UScriptStruct_FSOTS_MissionMusicSet_Statics;
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MMSS_Source_SOTS_MMSS_Public_SOTS_MMSS_Types_h_41_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSOTS_MissionMusicSet_Statics; \
	static class UScriptStruct* StaticStruct();


struct FSOTS_MissionMusicSet;
// ********** End ScriptStruct FSOTS_MissionMusicSet ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MMSS_Source_SOTS_MMSS_Public_SOTS_MMSS_Types_h

// ********** Begin Enum ESOTS_MusicDebugMode ******************************************************
#define FOREACH_ENUM_ESOTS_MUSICDEBUGMODE(op) \
	op(ESOTS_MusicDebugMode::Off) \
	op(ESOTS_MusicDebugMode::Basic) \
	op(ESOTS_MusicDebugMode::Verbose) 

enum class ESOTS_MusicDebugMode : uint8;
template<> struct TIsUEnumClass<ESOTS_MusicDebugMode> { enum { Value = true }; };
template<> SOTS_MMSS_NON_ATTRIBUTED_API UEnum* StaticEnum<ESOTS_MusicDebugMode>();
// ********** End Enum ESOTS_MusicDebugMode ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
