// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OmniTracePresetLibrary.h"

#ifdef OMNITRACE_OmniTracePresetLibrary_generated_h
#error "OmniTracePresetLibrary.generated.h already included, missing '#pragma once' in OmniTracePresetLibrary.h"
#endif
#define OMNITRACE_OmniTracePresetLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UOmniTracePatternPreset;

// ********** Begin ScriptStruct FOmniTracePatternLibraryEntry *************************************
struct Z_Construct_UScriptStruct_FOmniTracePatternLibraryEntry_Statics;
#define FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTracePresetLibrary_h_15_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOmniTracePatternLibraryEntry_Statics; \
	OMNITRACE_API static class UScriptStruct* StaticStruct();


struct FOmniTracePatternLibraryEntry;
// ********** End ScriptStruct FOmniTracePatternLibraryEntry ***************************************

// ********** Begin Class UOmniTracePatternLibrary *************************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTracePresetLibrary_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFindPresetById);


struct Z_Construct_UClass_UOmniTracePatternLibrary_Statics;
OMNITRACE_API UClass* Z_Construct_UClass_UOmniTracePatternLibrary_NoRegister();

#define FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTracePresetLibrary_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOmniTracePatternLibrary(); \
	friend struct ::Z_Construct_UClass_UOmniTracePatternLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OMNITRACE_API UClass* ::Z_Construct_UClass_UOmniTracePatternLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UOmniTracePatternLibrary, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OmniTrace"), Z_Construct_UClass_UOmniTracePatternLibrary_NoRegister) \
	DECLARE_SERIALIZER(UOmniTracePatternLibrary)


#define FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTracePresetLibrary_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOmniTracePatternLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOmniTracePatternLibrary(UOmniTracePatternLibrary&&) = delete; \
	UOmniTracePatternLibrary(const UOmniTracePatternLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOmniTracePatternLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOmniTracePatternLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOmniTracePatternLibrary) \
	NO_API virtual ~UOmniTracePatternLibrary();


#define FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTracePresetLibrary_h_30_PROLOG
#define FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTracePresetLibrary_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTracePresetLibrary_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTracePresetLibrary_h_33_INCLASS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTracePresetLibrary_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOmniTracePatternLibrary;

// ********** End Class UOmniTracePatternLibrary ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTracePresetLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
