// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SOTS_KEM_TagSelectionCriterion.h"

#ifdef SOTS_KILLEXECUTIONMANAGER_SOTS_KEM_TagSelectionCriterion_generated_h
#error "SOTS_KEM_TagSelectionCriterion.generated.h already included, missing '#pragma once' in SOTS_KEM_TagSelectionCriterion.h"
#endif
#define SOTS_KILLEXECUTIONMANAGER_SOTS_KEM_TagSelectionCriterion_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USOTS_KEM_TagSelectionCriterion ******************************************
struct Z_Construct_UClass_USOTS_KEM_TagSelectionCriterion_Statics;
SOTS_KILLEXECUTIONMANAGER_API UClass* Z_Construct_UClass_USOTS_KEM_TagSelectionCriterion_NoRegister();

#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_TagSelectionCriterion_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSOTS_KEM_TagSelectionCriterion(); \
	friend struct ::Z_Construct_UClass_USOTS_KEM_TagSelectionCriterion_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOTS_KILLEXECUTIONMANAGER_API UClass* ::Z_Construct_UClass_USOTS_KEM_TagSelectionCriterion_NoRegister(); \
public: \
	DECLARE_CLASS2(USOTS_KEM_TagSelectionCriterion, UContextualAnimSelectionCriterion, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SOTS_KillExecutionManager"), Z_Construct_UClass_USOTS_KEM_TagSelectionCriterion_NoRegister) \
	DECLARE_SERIALIZER(USOTS_KEM_TagSelectionCriterion)


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_TagSelectionCriterion_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USOTS_KEM_TagSelectionCriterion(USOTS_KEM_TagSelectionCriterion&&) = delete; \
	USOTS_KEM_TagSelectionCriterion(const USOTS_KEM_TagSelectionCriterion&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USOTS_KEM_TagSelectionCriterion); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USOTS_KEM_TagSelectionCriterion); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USOTS_KEM_TagSelectionCriterion) \
	NO_API virtual ~USOTS_KEM_TagSelectionCriterion();


#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_TagSelectionCriterion_h_20_PROLOG
#define FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_TagSelectionCriterion_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_TagSelectionCriterion_h_24_INCLASS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_TagSelectionCriterion_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USOTS_KEM_TagSelectionCriterion;

// ********** End Class USOTS_KEM_TagSelectionCriterion ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_TagSelectionCriterion_h

// ********** Begin Enum ESOTS_KEM_TagMatchType ****************************************************
#define FOREACH_ENUM_ESOTS_KEM_TAGMATCHTYPE(op) \
	op(ESOTS_KEM_TagMatchType::Any) \
	op(ESOTS_KEM_TagMatchType::All) \
	op(ESOTS_KEM_TagMatchType::Exact) 

enum class ESOTS_KEM_TagMatchType : uint8;
template<> struct TIsUEnumClass<ESOTS_KEM_TagMatchType> { enum { Value = true }; };
template<> SOTS_KILLEXECUTIONMANAGER_NON_ATTRIBUTED_API UEnum* StaticEnum<ESOTS_KEM_TagMatchType>();
// ********** End Enum ESOTS_KEM_TagMatchType ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
