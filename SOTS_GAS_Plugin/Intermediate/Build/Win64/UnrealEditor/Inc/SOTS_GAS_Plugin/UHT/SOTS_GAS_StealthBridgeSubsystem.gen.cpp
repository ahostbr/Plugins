// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Subsystems/SOTS_GAS_StealthBridgeSubsystem.h"
#include "Engine/GameInstance.h"
#include "SOTS_GlobalStealthTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_GAS_StealthBridgeSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_USOTS_GAS_StealthBridgeSubsystem();
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_USOTS_GAS_StealthBridgeSubsystem_NoRegister();
SOTS_GLOBALSTEALTHMANAGER_API UClass* Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_NoRegister();
SOTS_GLOBALSTEALTHMANAGER_API UEnum* Z_Construct_UEnum_SOTS_GlobalStealthManager_ESOTSStealthLevel();
SOTS_GLOBALSTEALTHMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_StealthScoreBreakdown();
UPackage* Z_Construct_UPackage__Script_SOTS_GAS_Plugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USOTS_GAS_StealthBridgeSubsystem Function GetCurrentStealthBreakdown *****
struct Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthBreakdown_Statics
{
	struct SOTS_GAS_StealthBridgeSubsystem_eventGetCurrentStealthBreakdown_Parms
	{
		FSOTS_StealthScoreBreakdown ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|GAS|Stealth" },
		{ "ModuleRelativePath", "Public/Subsystems/SOTS_GAS_StealthBridgeSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentStealthBreakdown constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentStealthBreakdown constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentStealthBreakdown Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthBreakdown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_StealthBridgeSubsystem_eventGetCurrentStealthBreakdown_Parms, ReturnValue), Z_Construct_UScriptStruct_FSOTS_StealthScoreBreakdown, METADATA_PARAMS(0, nullptr) }; // 587956614
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthBreakdown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthBreakdown_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthBreakdown_Statics::PropPointers) < 2048);
// ********** End Function GetCurrentStealthBreakdown Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthBreakdown_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GAS_StealthBridgeSubsystem, nullptr, "GetCurrentStealthBreakdown", 	Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthBreakdown_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthBreakdown_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthBreakdown_Statics::SOTS_GAS_StealthBridgeSubsystem_eventGetCurrentStealthBreakdown_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthBreakdown_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthBreakdown_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthBreakdown_Statics::SOTS_GAS_StealthBridgeSubsystem_eventGetCurrentStealthBreakdown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthBreakdown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthBreakdown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GAS_StealthBridgeSubsystem::execGetCurrentStealthBreakdown)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSOTS_StealthScoreBreakdown*)Z_Param__Result=P_THIS->GetCurrentStealthBreakdown();
	P_NATIVE_END;
}
// ********** End Class USOTS_GAS_StealthBridgeSubsystem Function GetCurrentStealthBreakdown *******

// ********** Begin Class USOTS_GAS_StealthBridgeSubsystem Function GetCurrentStealthModifierMultiplier 
struct Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthModifierMultiplier_Statics
{
	struct SOTS_GAS_StealthBridgeSubsystem_eventGetCurrentStealthModifierMultiplier_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|GAS|Stealth" },
		{ "ModuleRelativePath", "Public/Subsystems/SOTS_GAS_StealthBridgeSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentStealthModifierMultiplier constinit property declarations ***
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentStealthModifierMultiplier constinit property declarations *****
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentStealthModifierMultiplier Property Definitions **************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthModifierMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_StealthBridgeSubsystem_eventGetCurrentStealthModifierMultiplier_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthModifierMultiplier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthModifierMultiplier_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthModifierMultiplier_Statics::PropPointers) < 2048);
// ********** End Function GetCurrentStealthModifierMultiplier Property Definitions ****************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthModifierMultiplier_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GAS_StealthBridgeSubsystem, nullptr, "GetCurrentStealthModifierMultiplier", 	Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthModifierMultiplier_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthModifierMultiplier_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthModifierMultiplier_Statics::SOTS_GAS_StealthBridgeSubsystem_eventGetCurrentStealthModifierMultiplier_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthModifierMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthModifierMultiplier_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthModifierMultiplier_Statics::SOTS_GAS_StealthBridgeSubsystem_eventGetCurrentStealthModifierMultiplier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthModifierMultiplier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthModifierMultiplier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GAS_StealthBridgeSubsystem::execGetCurrentStealthModifierMultiplier)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCurrentStealthModifierMultiplier();
	P_NATIVE_END;
}
// ********** End Class USOTS_GAS_StealthBridgeSubsystem Function GetCurrentStealthModifierMultiplier 

// ********** Begin Class USOTS_GAS_StealthBridgeSubsystem Function GetCurrentStealthScore *********
struct Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthScore_Statics
{
	struct SOTS_GAS_StealthBridgeSubsystem_eventGetCurrentStealthScore_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|GAS|Stealth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Latest global stealth score [0..1]. */" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/SOTS_GAS_StealthBridgeSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Latest global stealth score [0..1]." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentStealthScore constinit property declarations ****************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentStealthScore constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentStealthScore Property Definitions ***************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_StealthBridgeSubsystem_eventGetCurrentStealthScore_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthScore_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthScore_Statics::PropPointers) < 2048);
// ********** End Function GetCurrentStealthScore Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthScore_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GAS_StealthBridgeSubsystem, nullptr, "GetCurrentStealthScore", 	Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthScore_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthScore_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthScore_Statics::SOTS_GAS_StealthBridgeSubsystem_eventGetCurrentStealthScore_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthScore_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthScore_Statics::SOTS_GAS_StealthBridgeSubsystem_eventGetCurrentStealthScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GAS_StealthBridgeSubsystem::execGetCurrentStealthScore)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCurrentStealthScore();
	P_NATIVE_END;
}
// ********** End Class USOTS_GAS_StealthBridgeSubsystem Function GetCurrentStealthScore ***********

// ********** Begin Class USOTS_GAS_StealthBridgeSubsystem Function GetCurrentStealthTier **********
struct Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthTier_Statics
{
	struct SOTS_GAS_StealthBridgeSubsystem_eventGetCurrentStealthTier_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|GAS|Stealth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Latest global stealth tier as an int (castable to ESOTS_StealthTier). */" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/SOTS_GAS_StealthBridgeSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Latest global stealth tier as an int (castable to ESOTS_StealthTier)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentStealthTier constinit property declarations *****************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentStealthTier constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentStealthTier Property Definitions ****************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthTier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_StealthBridgeSubsystem_eventGetCurrentStealthTier_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthTier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthTier_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthTier_Statics::PropPointers) < 2048);
// ********** End Function GetCurrentStealthTier Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthTier_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GAS_StealthBridgeSubsystem, nullptr, "GetCurrentStealthTier", 	Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthTier_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthTier_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthTier_Statics::SOTS_GAS_StealthBridgeSubsystem_eventGetCurrentStealthTier_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthTier_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthTier_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthTier_Statics::SOTS_GAS_StealthBridgeSubsystem_eventGetCurrentStealthTier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthTier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthTier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GAS_StealthBridgeSubsystem::execGetCurrentStealthTier)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentStealthTier();
	P_NATIVE_END;
}
// ********** End Class USOTS_GAS_StealthBridgeSubsystem Function GetCurrentStealthTier ************

// ********** Begin Class USOTS_GAS_StealthBridgeSubsystem Function HandleStealthLevelChanged ******
struct Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_HandleStealthLevelChanged_Statics
{
	struct SOTS_GAS_StealthBridgeSubsystem_eventHandleStealthLevelChanged_Parms
	{
		ESOTSStealthLevel OldLevel;
		ESOTSStealthLevel NewLevel;
		float NewScore;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/SOTS_GAS_StealthBridgeSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleStealthLevelChanged constinit property declarations *************
	static const UECodeGen_Private::FBytePropertyParams NewProp_OldLevel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OldLevel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewLevel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewScore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleStealthLevelChanged constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleStealthLevelChanged Property Definitions ************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_HandleStealthLevelChanged_Statics::NewProp_OldLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_HandleStealthLevelChanged_Statics::NewProp_OldLevel = { "OldLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_StealthBridgeSubsystem_eventHandleStealthLevelChanged_Parms, OldLevel), Z_Construct_UEnum_SOTS_GlobalStealthManager_ESOTSStealthLevel, METADATA_PARAMS(0, nullptr) }; // 3112324723
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_HandleStealthLevelChanged_Statics::NewProp_NewLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_HandleStealthLevelChanged_Statics::NewProp_NewLevel = { "NewLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_StealthBridgeSubsystem_eventHandleStealthLevelChanged_Parms, NewLevel), Z_Construct_UEnum_SOTS_GlobalStealthManager_ESOTSStealthLevel, METADATA_PARAMS(0, nullptr) }; // 3112324723
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_HandleStealthLevelChanged_Statics::NewProp_NewScore = { "NewScore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_StealthBridgeSubsystem_eventHandleStealthLevelChanged_Parms, NewScore), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_HandleStealthLevelChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_HandleStealthLevelChanged_Statics::NewProp_OldLevel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_HandleStealthLevelChanged_Statics::NewProp_OldLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_HandleStealthLevelChanged_Statics::NewProp_NewLevel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_HandleStealthLevelChanged_Statics::NewProp_NewLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_HandleStealthLevelChanged_Statics::NewProp_NewScore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_HandleStealthLevelChanged_Statics::PropPointers) < 2048);
// ********** End Function HandleStealthLevelChanged Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_HandleStealthLevelChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GAS_StealthBridgeSubsystem, nullptr, "HandleStealthLevelChanged", 	Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_HandleStealthLevelChanged_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_HandleStealthLevelChanged_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_HandleStealthLevelChanged_Statics::SOTS_GAS_StealthBridgeSubsystem_eventHandleStealthLevelChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_HandleStealthLevelChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_HandleStealthLevelChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_HandleStealthLevelChanged_Statics::SOTS_GAS_StealthBridgeSubsystem_eventHandleStealthLevelChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_HandleStealthLevelChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_HandleStealthLevelChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GAS_StealthBridgeSubsystem::execHandleStealthLevelChanged)
{
	P_GET_ENUM(ESOTSStealthLevel,Z_Param_OldLevel);
	P_GET_ENUM(ESOTSStealthLevel,Z_Param_NewLevel);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewScore);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleStealthLevelChanged(ESOTSStealthLevel(Z_Param_OldLevel),ESOTSStealthLevel(Z_Param_NewLevel),Z_Param_NewScore);
	P_NATIVE_END;
}
// ********** End Class USOTS_GAS_StealthBridgeSubsystem Function HandleStealthLevelChanged ********

// ********** Begin Class USOTS_GAS_StealthBridgeSubsystem Function IsStealthTierAtLeast ***********
struct Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_IsStealthTierAtLeast_Statics
{
	struct SOTS_GAS_StealthBridgeSubsystem_eventIsStealthTierAtLeast_Parms
	{
		int32 MinTier;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|GAS|Stealth" },
		{ "ModuleRelativePath", "Public/Subsystems/SOTS_GAS_StealthBridgeSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsStealthTierAtLeast constinit property declarations ******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinTier;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsStealthTierAtLeast constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsStealthTierAtLeast Property Definitions *****************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_IsStealthTierAtLeast_Statics::NewProp_MinTier = { "MinTier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_StealthBridgeSubsystem_eventIsStealthTierAtLeast_Parms, MinTier), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_IsStealthTierAtLeast_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_GAS_StealthBridgeSubsystem_eventIsStealthTierAtLeast_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_IsStealthTierAtLeast_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_GAS_StealthBridgeSubsystem_eventIsStealthTierAtLeast_Parms), &Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_IsStealthTierAtLeast_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_IsStealthTierAtLeast_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_IsStealthTierAtLeast_Statics::NewProp_MinTier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_IsStealthTierAtLeast_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_IsStealthTierAtLeast_Statics::PropPointers) < 2048);
// ********** End Function IsStealthTierAtLeast Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_IsStealthTierAtLeast_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GAS_StealthBridgeSubsystem, nullptr, "IsStealthTierAtLeast", 	Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_IsStealthTierAtLeast_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_IsStealthTierAtLeast_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_IsStealthTierAtLeast_Statics::SOTS_GAS_StealthBridgeSubsystem_eventIsStealthTierAtLeast_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_IsStealthTierAtLeast_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_IsStealthTierAtLeast_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_IsStealthTierAtLeast_Statics::SOTS_GAS_StealthBridgeSubsystem_eventIsStealthTierAtLeast_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_IsStealthTierAtLeast()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_IsStealthTierAtLeast_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GAS_StealthBridgeSubsystem::execIsStealthTierAtLeast)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_MinTier);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsStealthTierAtLeast(Z_Param_MinTier);
	P_NATIVE_END;
}
// ********** End Class USOTS_GAS_StealthBridgeSubsystem Function IsStealthTierAtLeast *************

// ********** Begin Class USOTS_GAS_StealthBridgeSubsystem *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_GAS_StealthBridgeSubsystem;
UClass* USOTS_GAS_StealthBridgeSubsystem::GetPrivateStaticClass()
{
	using TClass = USOTS_GAS_StealthBridgeSubsystem;
	if (!Z_Registration_Info_UClass_USOTS_GAS_StealthBridgeSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_GAS_StealthBridgeSubsystem"),
			Z_Registration_Info_UClass_USOTS_GAS_StealthBridgeSubsystem.InnerSingleton,
			StaticRegisterNativesUSOTS_GAS_StealthBridgeSubsystem,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_USOTS_GAS_StealthBridgeSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_GAS_StealthBridgeSubsystem_NoRegister()
{
	return USOTS_GAS_StealthBridgeSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_GAS_StealthBridgeSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Lightweight GAS-facing bridge to the global stealth manager.\n * Provides cached access to the current stealth score and tier so\n * abilities can query stealth without knowing about GSM details.\n */" },
#endif
		{ "IncludePath", "Subsystems/SOTS_GAS_StealthBridgeSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/SOTS_GAS_StealthBridgeSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lightweight GAS-facing bridge to the global stealth manager.\nProvides cached access to the current stealth score and tier so\nabilities can query stealth without knowing about GSM details." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalStealthSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsystems/SOTS_GAS_StealthBridgeSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedBreakdown_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SOTS|GAS|Stealth" },
		{ "ModuleRelativePath", "Public/Subsystems/SOTS_GAS_StealthBridgeSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_GAS_StealthBridgeSubsystem constinit property declarations *********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GlobalStealthSubsystem;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedBreakdown;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USOTS_GAS_StealthBridgeSubsystem constinit property declarations ***********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetCurrentStealthBreakdown"), .Pointer = &USOTS_GAS_StealthBridgeSubsystem::execGetCurrentStealthBreakdown },
		{ .NameUTF8 = UTF8TEXT("GetCurrentStealthModifierMultiplier"), .Pointer = &USOTS_GAS_StealthBridgeSubsystem::execGetCurrentStealthModifierMultiplier },
		{ .NameUTF8 = UTF8TEXT("GetCurrentStealthScore"), .Pointer = &USOTS_GAS_StealthBridgeSubsystem::execGetCurrentStealthScore },
		{ .NameUTF8 = UTF8TEXT("GetCurrentStealthTier"), .Pointer = &USOTS_GAS_StealthBridgeSubsystem::execGetCurrentStealthTier },
		{ .NameUTF8 = UTF8TEXT("HandleStealthLevelChanged"), .Pointer = &USOTS_GAS_StealthBridgeSubsystem::execHandleStealthLevelChanged },
		{ .NameUTF8 = UTF8TEXT("IsStealthTierAtLeast"), .Pointer = &USOTS_GAS_StealthBridgeSubsystem::execIsStealthTierAtLeast },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthBreakdown, "GetCurrentStealthBreakdown" }, // 3480458112
		{ &Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthModifierMultiplier, "GetCurrentStealthModifierMultiplier" }, // 1956759279
		{ &Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthScore, "GetCurrentStealthScore" }, // 464194753
		{ &Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_GetCurrentStealthTier, "GetCurrentStealthTier" }, // 3366855464
		{ &Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_HandleStealthLevelChanged, "HandleStealthLevelChanged" }, // 3553910326
		{ &Z_Construct_UFunction_USOTS_GAS_StealthBridgeSubsystem_IsStealthTierAtLeast, "IsStealthTierAtLeast" }, // 3052234728
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_GAS_StealthBridgeSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_GAS_StealthBridgeSubsystem_Statics

// ********** Begin Class USOTS_GAS_StealthBridgeSubsystem Property Definitions ********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USOTS_GAS_StealthBridgeSubsystem_Statics::NewProp_GlobalStealthSubsystem = { "GlobalStealthSubsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_GAS_StealthBridgeSubsystem, GlobalStealthSubsystem), Z_Construct_UClass_USOTS_GlobalStealthManagerSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalStealthSubsystem_MetaData), NewProp_GlobalStealthSubsystem_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_GAS_StealthBridgeSubsystem_Statics::NewProp_CachedBreakdown = { "CachedBreakdown", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_GAS_StealthBridgeSubsystem, CachedBreakdown), Z_Construct_UScriptStruct_FSOTS_StealthScoreBreakdown, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedBreakdown_MetaData), NewProp_CachedBreakdown_MetaData) }; // 587956614
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USOTS_GAS_StealthBridgeSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_GAS_StealthBridgeSubsystem_Statics::NewProp_GlobalStealthSubsystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_GAS_StealthBridgeSubsystem_Statics::NewProp_CachedBreakdown,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_GAS_StealthBridgeSubsystem_Statics::PropPointers) < 2048);
// ********** End Class USOTS_GAS_StealthBridgeSubsystem Property Definitions **********************
UObject* (*const Z_Construct_UClass_USOTS_GAS_StealthBridgeSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_GAS_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_GAS_StealthBridgeSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_GAS_StealthBridgeSubsystem_Statics::ClassParams = {
	&USOTS_GAS_StealthBridgeSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USOTS_GAS_StealthBridgeSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_GAS_StealthBridgeSubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_GAS_StealthBridgeSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_GAS_StealthBridgeSubsystem_Statics::Class_MetaDataParams)
};
void USOTS_GAS_StealthBridgeSubsystem::StaticRegisterNativesUSOTS_GAS_StealthBridgeSubsystem()
{
	UClass* Class = USOTS_GAS_StealthBridgeSubsystem::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USOTS_GAS_StealthBridgeSubsystem_Statics::Funcs));
}
UClass* Z_Construct_UClass_USOTS_GAS_StealthBridgeSubsystem()
{
	if (!Z_Registration_Info_UClass_USOTS_GAS_StealthBridgeSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_GAS_StealthBridgeSubsystem.OuterSingleton, Z_Construct_UClass_USOTS_GAS_StealthBridgeSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_GAS_StealthBridgeSubsystem.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_GAS_StealthBridgeSubsystem);
USOTS_GAS_StealthBridgeSubsystem::~USOTS_GAS_StealthBridgeSubsystem() {}
// ********** End Class USOTS_GAS_StealthBridgeSubsystem *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Subsystems_SOTS_GAS_StealthBridgeSubsystem_h__Script_SOTS_GAS_Plugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_GAS_StealthBridgeSubsystem, USOTS_GAS_StealthBridgeSubsystem::StaticClass, TEXT("USOTS_GAS_StealthBridgeSubsystem"), &Z_Registration_Info_UClass_USOTS_GAS_StealthBridgeSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_GAS_StealthBridgeSubsystem), 2895822539U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Subsystems_SOTS_GAS_StealthBridgeSubsystem_h__Script_SOTS_GAS_Plugin_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Subsystems_SOTS_GAS_StealthBridgeSubsystem_h__Script_SOTS_GAS_Plugin_677903896{
	TEXT("/Script/SOTS_GAS_Plugin"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Subsystems_SOTS_GAS_StealthBridgeSubsystem_h__Script_SOTS_GAS_Plugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Subsystems_SOTS_GAS_StealthBridgeSubsystem_h__Script_SOTS_GAS_Plugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
