// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OmniTraceBlueprintLibrary.h"

#ifdef OMNITRACE_OmniTraceBlueprintLibrary_generated_h
#error "OmniTraceBlueprintLibrary.generated.h already included, missing '#pragma once' in OmniTraceBlueprintLibrary.h"
#endif
#define OMNITRACE_OmniTraceBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
class UOmniTracePatternLibrary;
class UOmniTracePatternPreset;
class USceneComponent;
struct FLatentActionInfo;
struct FOmniTraceBuiltinPresetKey;
struct FOmniTracePatternConfig;
struct FOmniTracePatternResult;
struct FOmniTracePresetInfo;
struct FOmniTraceRequest;

// ********** Begin Class UOmniTraceBlueprintLibrary ***********************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceBlueprintLibrary_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOmniTrace_GetBuiltinPresetInfos); \
	DECLARE_FUNCTION(execOmniTrace_TraceAlongPatternConfig); \
	DECLARE_FUNCTION(execOmniTrace_BuildPathFromPatternConfig); \
	DECLARE_FUNCTION(execOmniTrace_PatternFromBuiltinPresetKey_Async); \
	DECLARE_FUNCTION(execOmniTrace_PatternFromBuiltinPresetKey); \
	DECLARE_FUNCTION(execOmniTrace_MakeBuiltinPresetId); \
	DECLARE_FUNCTION(execOmniTrace_PatternFromBuiltinPreset_Async); \
	DECLARE_FUNCTION(execOmniTrace_PatternFromBuiltinPreset); \
	DECLARE_FUNCTION(execOmniTrace_GetLibraryPresetInfos); \
	DECLARE_FUNCTION(execOmniTrace_PatternFromLibrary_Async); \
	DECLARE_FUNCTION(execOmniTrace_PatternFromLibrary); \
	DECLARE_FUNCTION(execOmniTrace_PatternFromPreset_Async); \
	DECLARE_FUNCTION(execOmniTrace_PatternFromPreset); \
	DECLARE_FUNCTION(execOmniTrace_Pattern_Async); \
	DECLARE_FUNCTION(execOmniTrace_Pattern);


struct Z_Construct_UClass_UOmniTraceBlueprintLibrary_Statics;
OMNITRACE_API UClass* Z_Construct_UClass_UOmniTraceBlueprintLibrary_NoRegister();

#define FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceBlueprintLibrary_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOmniTraceBlueprintLibrary(); \
	friend struct ::Z_Construct_UClass_UOmniTraceBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OMNITRACE_API UClass* ::Z_Construct_UClass_UOmniTraceBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UOmniTraceBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OmniTrace"), Z_Construct_UClass_UOmniTraceBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UOmniTraceBlueprintLibrary)


#define FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceBlueprintLibrary_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOmniTraceBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOmniTraceBlueprintLibrary(UOmniTraceBlueprintLibrary&&) = delete; \
	UOmniTraceBlueprintLibrary(const UOmniTraceBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOmniTraceBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOmniTraceBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOmniTraceBlueprintLibrary) \
	NO_API virtual ~UOmniTraceBlueprintLibrary();


#define FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceBlueprintLibrary_h_19_PROLOG
#define FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceBlueprintLibrary_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceBlueprintLibrary_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceBlueprintLibrary_h_22_INCLASS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceBlueprintLibrary_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOmniTraceBlueprintLibrary;

// ********** End Class UOmniTraceBlueprintLibrary *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
