// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SOTS_OmniTraceKEMPresetLibrary.h"

#ifdef OMNITRACE_SOTS_OmniTraceKEMPresetLibrary_generated_h
#error "SOTS_OmniTraceKEMPresetLibrary.generated.h already included, missing '#pragma once' in SOTS_OmniTraceKEMPresetLibrary.h"
#endif
#define OMNITRACE_SOTS_OmniTraceKEMPresetLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSOTS_OmniTraceKEMPresetEntry *************************************
struct Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMPresetEntry_Statics;
#define FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_SOTS_OmniTraceKEMPresetLibrary_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSOTS_OmniTraceKEMPresetEntry_Statics; \
	OMNITRACE_API static class UScriptStruct* StaticStruct();


struct FSOTS_OmniTraceKEMPresetEntry;
// ********** End ScriptStruct FSOTS_OmniTraceKEMPresetEntry ***************************************

// ********** Begin Class USOTS_OmniTraceKEMPresetLibrary ******************************************
struct Z_Construct_UClass_USOTS_OmniTraceKEMPresetLibrary_Statics;
OMNITRACE_API UClass* Z_Construct_UClass_USOTS_OmniTraceKEMPresetLibrary_NoRegister();

#define FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_SOTS_OmniTraceKEMPresetLibrary_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSOTS_OmniTraceKEMPresetLibrary(); \
	friend struct ::Z_Construct_UClass_USOTS_OmniTraceKEMPresetLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OMNITRACE_API UClass* ::Z_Construct_UClass_USOTS_OmniTraceKEMPresetLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(USOTS_OmniTraceKEMPresetLibrary, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OmniTrace"), Z_Construct_UClass_USOTS_OmniTraceKEMPresetLibrary_NoRegister) \
	DECLARE_SERIALIZER(USOTS_OmniTraceKEMPresetLibrary)


#define FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_SOTS_OmniTraceKEMPresetLibrary_h_59_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USOTS_OmniTraceKEMPresetLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USOTS_OmniTraceKEMPresetLibrary(USOTS_OmniTraceKEMPresetLibrary&&) = delete; \
	USOTS_OmniTraceKEMPresetLibrary(const USOTS_OmniTraceKEMPresetLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USOTS_OmniTraceKEMPresetLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USOTS_OmniTraceKEMPresetLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USOTS_OmniTraceKEMPresetLibrary) \
	NO_API virtual ~USOTS_OmniTraceKEMPresetLibrary();


#define FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_SOTS_OmniTraceKEMPresetLibrary_h_56_PROLOG
#define FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_SOTS_OmniTraceKEMPresetLibrary_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_SOTS_OmniTraceKEMPresetLibrary_h_59_INCLASS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_SOTS_OmniTraceKEMPresetLibrary_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USOTS_OmniTraceKEMPresetLibrary;

// ********** End Class USOTS_OmniTraceKEMPresetLibrary ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_SOTS_OmniTraceKEMPresetLibrary_h

// ********** Begin Enum ESOTS_OmniTraceKEMPreset **************************************************
#define FOREACH_ENUM_ESOTS_OMNITRACEKEMPRESET(op) \
	op(ESOTS_OmniTraceKEMPreset::Unknown) \
	op(ESOTS_OmniTraceKEMPreset::GroundRear) \
	op(ESOTS_OmniTraceKEMPreset::GroundFront) \
	op(ESOTS_OmniTraceKEMPreset::GroundLeft) \
	op(ESOTS_OmniTraceKEMPreset::GroundRight) \
	op(ESOTS_OmniTraceKEMPreset::CornerLeft) \
	op(ESOTS_OmniTraceKEMPreset::CornerRight) \
	op(ESOTS_OmniTraceKEMPreset::VerticalAbove) \
	op(ESOTS_OmniTraceKEMPreset::VerticalBelow) 

enum class ESOTS_OmniTraceKEMPreset : uint8;
template<> struct TIsUEnumClass<ESOTS_OmniTraceKEMPreset> { enum { Value = true }; };
template<> OMNITRACE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESOTS_OmniTraceKEMPreset>();
// ********** End Enum ESOTS_OmniTraceKEMPreset ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
