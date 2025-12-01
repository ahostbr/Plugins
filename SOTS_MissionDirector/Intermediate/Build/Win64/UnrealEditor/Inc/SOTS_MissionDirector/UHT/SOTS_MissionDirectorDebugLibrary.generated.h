// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SOTS_MissionDirectorDebugLibrary.h"

#ifdef SOTS_MISSIONDIRECTOR_SOTS_MissionDirectorDebugLibrary_generated_h
#error "SOTS_MissionDirectorDebugLibrary.generated.h already included, missing '#pragma once' in SOTS_MissionDirectorDebugLibrary.h"
#endif
#define SOTS_MISSIONDIRECTOR_SOTS_MissionDirectorDebugLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FGameplayTag;

// ********** Begin Class USOTS_MissionDirectorDebugLibrary ****************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MissionDirector_Source_SOTS_MissionDirector_Public_SOTS_MissionDirectorDebugLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSOTS_IsMissionCompleted); \
	DECLARE_FUNCTION(execSOTS_MarkMissionCompleted); \
	DECLARE_FUNCTION(execSOTS_MarkMissionStarted); \
	DECLARE_FUNCTION(execRunSOTS_MissionDirector_DebugRun);


struct Z_Construct_UClass_USOTS_MissionDirectorDebugLibrary_Statics;
SOTS_MISSIONDIRECTOR_API UClass* Z_Construct_UClass_USOTS_MissionDirectorDebugLibrary_NoRegister();

#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MissionDirector_Source_SOTS_MissionDirector_Public_SOTS_MissionDirectorDebugLibrary_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSOTS_MissionDirectorDebugLibrary(); \
	friend struct ::Z_Construct_UClass_USOTS_MissionDirectorDebugLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOTS_MISSIONDIRECTOR_API UClass* ::Z_Construct_UClass_USOTS_MissionDirectorDebugLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(USOTS_MissionDirectorDebugLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SOTS_MissionDirector"), Z_Construct_UClass_USOTS_MissionDirectorDebugLibrary_NoRegister) \
	DECLARE_SERIALIZER(USOTS_MissionDirectorDebugLibrary)


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MissionDirector_Source_SOTS_MissionDirector_Public_SOTS_MissionDirectorDebugLibrary_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USOTS_MissionDirectorDebugLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USOTS_MissionDirectorDebugLibrary(USOTS_MissionDirectorDebugLibrary&&) = delete; \
	USOTS_MissionDirectorDebugLibrary(const USOTS_MissionDirectorDebugLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USOTS_MissionDirectorDebugLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USOTS_MissionDirectorDebugLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USOTS_MissionDirectorDebugLibrary) \
	NO_API virtual ~USOTS_MissionDirectorDebugLibrary();


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MissionDirector_Source_SOTS_MissionDirector_Public_SOTS_MissionDirectorDebugLibrary_h_9_PROLOG
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MissionDirector_Source_SOTS_MissionDirector_Public_SOTS_MissionDirectorDebugLibrary_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MissionDirector_Source_SOTS_MissionDirector_Public_SOTS_MissionDirectorDebugLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MissionDirector_Source_SOTS_MissionDirector_Public_SOTS_MissionDirectorDebugLibrary_h_12_INCLASS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MissionDirector_Source_SOTS_MissionDirector_Public_SOTS_MissionDirectorDebugLibrary_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USOTS_MissionDirectorDebugLibrary;

// ********** End Class USOTS_MissionDirectorDebugLibrary ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_SOTS_MissionDirector_Source_SOTS_MissionDirector_Public_SOTS_MissionDirectorDebugLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
