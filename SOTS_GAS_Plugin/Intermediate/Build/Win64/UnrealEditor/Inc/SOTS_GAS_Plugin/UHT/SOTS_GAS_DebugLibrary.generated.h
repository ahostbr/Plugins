// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SOTS_GAS_DebugLibrary.h"

#ifdef SOTS_GAS_PLUGIN_SOTS_GAS_DebugLibrary_generated_h
#error "SOTS_GAS_DebugLibrary.generated.h already included, missing '#pragma once' in SOTS_GAS_DebugLibrary.h"
#endif
#define SOTS_GAS_PLUGIN_SOTS_GAS_DebugLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USOTS_AbilityRequirementLibraryAsset;
enum class ESOTSStealthDebugMode : uint8;
struct FGameplayTag;

// ********** Begin Class USOTS_GAS_DebugLibrary ***************************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_DebugLibrary_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLogAbilityRequirementsFromLibrary); \
	DECLARE_FUNCTION(execLogCurrentSkillAndPlayerTags); \
	DECLARE_FUNCTION(execLogCurrentStealthState); \
	DECLARE_FUNCTION(execSetStealthDebugMode); \
	DECLARE_FUNCTION(execGetStealthDebugMode);


struct Z_Construct_UClass_USOTS_GAS_DebugLibrary_Statics;
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_USOTS_GAS_DebugLibrary_NoRegister();

#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_DebugLibrary_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSOTS_GAS_DebugLibrary(); \
	friend struct ::Z_Construct_UClass_USOTS_GAS_DebugLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOTS_GAS_PLUGIN_API UClass* ::Z_Construct_UClass_USOTS_GAS_DebugLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(USOTS_GAS_DebugLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SOTS_GAS_Plugin"), Z_Construct_UClass_USOTS_GAS_DebugLibrary_NoRegister) \
	DECLARE_SERIALIZER(USOTS_GAS_DebugLibrary)


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_DebugLibrary_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USOTS_GAS_DebugLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USOTS_GAS_DebugLibrary(USOTS_GAS_DebugLibrary&&) = delete; \
	USOTS_GAS_DebugLibrary(const USOTS_GAS_DebugLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USOTS_GAS_DebugLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USOTS_GAS_DebugLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USOTS_GAS_DebugLibrary) \
	NO_API virtual ~USOTS_GAS_DebugLibrary();


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_DebugLibrary_h_30_PROLOG
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_DebugLibrary_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_DebugLibrary_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_DebugLibrary_h_33_INCLASS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_DebugLibrary_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USOTS_GAS_DebugLibrary;

// ********** End Class USOTS_GAS_DebugLibrary *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_DebugLibrary_h

// ********** Begin Enum ESOTSStealthDebugMode *****************************************************
#define FOREACH_ENUM_ESOTSSTEALTHDEBUGMODE(op) \
	op(ESOTSStealthDebugMode::Off) \
	op(ESOTSStealthDebugMode::Basic) \
	op(ESOTSStealthDebugMode::Advanced) 

enum class ESOTSStealthDebugMode : uint8;
template<> struct TIsUEnumClass<ESOTSStealthDebugMode> { enum { Value = true }; };
template<> SOTS_GAS_PLUGIN_NON_ATTRIBUTED_API UEnum* StaticEnum<ESOTSStealthDebugMode>();
// ********** End Enum ESOTSStealthDebugMode *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
