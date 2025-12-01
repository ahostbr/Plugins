// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OmniTraceTraceLabActor.h"

#ifdef OMNITRACE_OmniTraceTraceLabActor_generated_h
#error "OmniTraceTraceLabActor.generated.h already included, missing '#pragma once' in OmniTraceTraceLabActor.h"
#endif
#define OMNITRACE_OmniTraceTraceLabActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AOmniTraceTraceLabActor **************************************************
#if WITH_EDITOR
#define FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceTraceLabActor_h_22_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execRunPatternTraceTest); \
	DECLARE_FUNCTION(execRunRadialBurstTest); \
	DECLARE_FUNCTION(execRunOrbitRingTest); \
	DECLARE_FUNCTION(execRunTargetArcTest); \
	DECLARE_FUNCTION(execRunForwardFanTest);
#else // WITH_EDITOR
#define FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceTraceLabActor_h_22_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_AOmniTraceTraceLabActor_Statics;
OMNITRACE_API UClass* Z_Construct_UClass_AOmniTraceTraceLabActor_NoRegister();

#define FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceTraceLabActor_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOmniTraceTraceLabActor(); \
	friend struct ::Z_Construct_UClass_AOmniTraceTraceLabActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OMNITRACE_API UClass* ::Z_Construct_UClass_AOmniTraceTraceLabActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AOmniTraceTraceLabActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OmniTrace"), Z_Construct_UClass_AOmniTraceTraceLabActor_NoRegister) \
	DECLARE_SERIALIZER(AOmniTraceTraceLabActor)


#define FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceTraceLabActor_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AOmniTraceTraceLabActor(AOmniTraceTraceLabActor&&) = delete; \
	AOmniTraceTraceLabActor(const AOmniTraceTraceLabActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOmniTraceTraceLabActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOmniTraceTraceLabActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOmniTraceTraceLabActor) \
	NO_API virtual ~AOmniTraceTraceLabActor();


#define FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceTraceLabActor_h_19_PROLOG
#define FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceTraceLabActor_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceTraceLabActor_h_22_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceTraceLabActor_h_22_INCLASS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceTraceLabActor_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AOmniTraceTraceLabActor;

// ********** End Class AOmniTraceTraceLabActor ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceTraceLabActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
