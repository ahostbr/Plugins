// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Abilities/SOTS_AbilityBase.h"
#include "Data/SOTS_AbilityTypes.h"
#include "GameplayTagContainer.h"
#include "SOTS_GlobalStealthTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_AbilityBase() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_UAC_SOTS_Abilitys_NoRegister();
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_USOTS_AbilityBase();
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_USOTS_AbilityBase_NoRegister();
SOTS_GAS_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_F_SOTS_AbilityActivationContext();
SOTS_GAS_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition();
SOTS_GAS_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_F_SOTS_AbilityHandle();
SOTS_GLOBALSTEALTHMANAGER_API UEnum* Z_Construct_UEnum_SOTS_GlobalStealthManager_ESOTS_StealthTier();
SOTS_GLOBALSTEALTHMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_StealthModifier();
UPackage* Z_Construct_UPackage__Script_SOTS_GAS_Plugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USOTS_AbilityBase Function ApplyStealthModifierToWorld *******************
struct Z_Construct_UFunction_USOTS_AbilityBase_ApplyStealthModifierToWorld_Statics
{
	struct SOTS_AbilityBase_eventApplyStealthModifierToWorld_Parms
	{
		FSOTS_StealthModifier Modifier;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Stealth" },
		{ "ModuleRelativePath", "Public/Abilities/SOTS_AbilityBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Modifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ApplyStealthModifierToWorld constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Modifier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ApplyStealthModifierToWorld constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ApplyStealthModifierToWorld Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_AbilityBase_ApplyStealthModifierToWorld_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AbilityBase_eventApplyStealthModifierToWorld_Parms, Modifier), Z_Construct_UScriptStruct_FSOTS_StealthModifier, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Modifier_MetaData), NewProp_Modifier_MetaData) }; // 3619836574
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_AbilityBase_ApplyStealthModifierToWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilityBase_ApplyStealthModifierToWorld_Statics::NewProp_Modifier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityBase_ApplyStealthModifierToWorld_Statics::PropPointers) < 2048);
// ********** End Function ApplyStealthModifierToWorld Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_AbilityBase_ApplyStealthModifierToWorld_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_AbilityBase, nullptr, "ApplyStealthModifierToWorld", 	Z_Construct_UFunction_USOTS_AbilityBase_ApplyStealthModifierToWorld_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityBase_ApplyStealthModifierToWorld_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_AbilityBase_ApplyStealthModifierToWorld_Statics::SOTS_AbilityBase_eventApplyStealthModifierToWorld_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityBase_ApplyStealthModifierToWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_AbilityBase_ApplyStealthModifierToWorld_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_AbilityBase_ApplyStealthModifierToWorld_Statics::SOTS_AbilityBase_eventApplyStealthModifierToWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_AbilityBase_ApplyStealthModifierToWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_AbilityBase_ApplyStealthModifierToWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_AbilityBase::execApplyStealthModifierToWorld)
{
	P_GET_STRUCT_REF(FSOTS_StealthModifier,Z_Param_Out_Modifier);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyStealthModifierToWorld(Z_Param_Out_Modifier);
	P_NATIVE_END;
}
// ********** End Class USOTS_AbilityBase Function ApplyStealthModifierToWorld *********************

// ********** Begin Class USOTS_AbilityBase Function GetOwnerGlobalStealthScore01 ******************
struct Z_Construct_UFunction_USOTS_AbilityBase_GetOwnerGlobalStealthScore01_Statics
{
	struct SOTS_AbilityBase_eventGetOwnerGlobalStealthScore01_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Stealth" },
		{ "ModuleRelativePath", "Public/Abilities/SOTS_AbilityBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetOwnerGlobalStealthScore01 constinit property declarations **********
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetOwnerGlobalStealthScore01 constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetOwnerGlobalStealthScore01 Property Definitions *********************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USOTS_AbilityBase_GetOwnerGlobalStealthScore01_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AbilityBase_eventGetOwnerGlobalStealthScore01_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_AbilityBase_GetOwnerGlobalStealthScore01_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilityBase_GetOwnerGlobalStealthScore01_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityBase_GetOwnerGlobalStealthScore01_Statics::PropPointers) < 2048);
// ********** End Function GetOwnerGlobalStealthScore01 Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_AbilityBase_GetOwnerGlobalStealthScore01_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_AbilityBase, nullptr, "GetOwnerGlobalStealthScore01", 	Z_Construct_UFunction_USOTS_AbilityBase_GetOwnerGlobalStealthScore01_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityBase_GetOwnerGlobalStealthScore01_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_AbilityBase_GetOwnerGlobalStealthScore01_Statics::SOTS_AbilityBase_eventGetOwnerGlobalStealthScore01_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityBase_GetOwnerGlobalStealthScore01_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_AbilityBase_GetOwnerGlobalStealthScore01_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_AbilityBase_GetOwnerGlobalStealthScore01_Statics::SOTS_AbilityBase_eventGetOwnerGlobalStealthScore01_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_AbilityBase_GetOwnerGlobalStealthScore01()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_AbilityBase_GetOwnerGlobalStealthScore01_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_AbilityBase::execGetOwnerGlobalStealthScore01)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetOwnerGlobalStealthScore01();
	P_NATIVE_END;
}
// ********** End Class USOTS_AbilityBase Function GetOwnerGlobalStealthScore01 ********************

// ********** Begin Class USOTS_AbilityBase Function GetOwnerLightLevel01 **************************
struct Z_Construct_UFunction_USOTS_AbilityBase_GetOwnerLightLevel01_Statics
{
	struct SOTS_AbilityBase_eventGetOwnerLightLevel01_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Stealth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ---- Stealth helpers ----\n" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/SOTS_AbilityBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "---- Stealth helpers ----" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetOwnerLightLevel01 constinit property declarations ******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetOwnerLightLevel01 constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetOwnerLightLevel01 Property Definitions *****************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USOTS_AbilityBase_GetOwnerLightLevel01_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AbilityBase_eventGetOwnerLightLevel01_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_AbilityBase_GetOwnerLightLevel01_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilityBase_GetOwnerLightLevel01_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityBase_GetOwnerLightLevel01_Statics::PropPointers) < 2048);
// ********** End Function GetOwnerLightLevel01 Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_AbilityBase_GetOwnerLightLevel01_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_AbilityBase, nullptr, "GetOwnerLightLevel01", 	Z_Construct_UFunction_USOTS_AbilityBase_GetOwnerLightLevel01_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityBase_GetOwnerLightLevel01_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_AbilityBase_GetOwnerLightLevel01_Statics::SOTS_AbilityBase_eventGetOwnerLightLevel01_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityBase_GetOwnerLightLevel01_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_AbilityBase_GetOwnerLightLevel01_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_AbilityBase_GetOwnerLightLevel01_Statics::SOTS_AbilityBase_eventGetOwnerLightLevel01_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_AbilityBase_GetOwnerLightLevel01()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_AbilityBase_GetOwnerLightLevel01_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_AbilityBase::execGetOwnerLightLevel01)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetOwnerLightLevel01();
	P_NATIVE_END;
}
// ********** End Class USOTS_AbilityBase Function GetOwnerLightLevel01 ****************************

// ********** Begin Class USOTS_AbilityBase Function GetOwnerStealthTier ***************************
struct Z_Construct_UFunction_USOTS_AbilityBase_GetOwnerStealthTier_Statics
{
	struct SOTS_AbilityBase_eventGetOwnerStealthTier_Parms
	{
		ESOTS_StealthTier ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Stealth" },
		{ "ModuleRelativePath", "Public/Abilities/SOTS_AbilityBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetOwnerStealthTier constinit property declarations *******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetOwnerStealthTier constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetOwnerStealthTier Property Definitions ******************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USOTS_AbilityBase_GetOwnerStealthTier_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USOTS_AbilityBase_GetOwnerStealthTier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AbilityBase_eventGetOwnerStealthTier_Parms, ReturnValue), Z_Construct_UEnum_SOTS_GlobalStealthManager_ESOTS_StealthTier, METADATA_PARAMS(0, nullptr) }; // 3407880652
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_AbilityBase_GetOwnerStealthTier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilityBase_GetOwnerStealthTier_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilityBase_GetOwnerStealthTier_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityBase_GetOwnerStealthTier_Statics::PropPointers) < 2048);
// ********** End Function GetOwnerStealthTier Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_AbilityBase_GetOwnerStealthTier_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_AbilityBase, nullptr, "GetOwnerStealthTier", 	Z_Construct_UFunction_USOTS_AbilityBase_GetOwnerStealthTier_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityBase_GetOwnerStealthTier_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_AbilityBase_GetOwnerStealthTier_Statics::SOTS_AbilityBase_eventGetOwnerStealthTier_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityBase_GetOwnerStealthTier_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_AbilityBase_GetOwnerStealthTier_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_AbilityBase_GetOwnerStealthTier_Statics::SOTS_AbilityBase_eventGetOwnerStealthTier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_AbilityBase_GetOwnerStealthTier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_AbilityBase_GetOwnerStealthTier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_AbilityBase::execGetOwnerStealthTier)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESOTS_StealthTier*)Z_Param__Result=P_THIS->GetOwnerStealthTier();
	P_NATIVE_END;
}
// ********** End Class USOTS_AbilityBase Function GetOwnerStealthTier *****************************

// ********** Begin Class USOTS_AbilityBase Function Initialize ************************************
struct Z_Construct_UFunction_USOTS_AbilityBase_Initialize_Statics
{
	struct SOTS_AbilityBase_eventInitialize_Parms
	{
		UAC_SOTS_Abilitys* InComponent;
		F_SOTS_AbilityDefinition InDefinition;
		F_SOTS_AbilityHandle InHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS Ability" },
		{ "ModuleRelativePath", "Public/Abilities/SOTS_AbilityBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDefinition_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Initialize constinit property declarations ****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InDefinition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Initialize constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Initialize Property Definitions ***************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_AbilityBase_Initialize_Statics::NewProp_InComponent = { "InComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AbilityBase_eventInitialize_Parms, InComponent), Z_Construct_UClass_UAC_SOTS_Abilitys_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InComponent_MetaData), NewProp_InComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_AbilityBase_Initialize_Statics::NewProp_InDefinition = { "InDefinition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AbilityBase_eventInitialize_Parms, InDefinition), Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDefinition_MetaData), NewProp_InDefinition_MetaData) }; // 2812081814
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_AbilityBase_Initialize_Statics::NewProp_InHandle = { "InHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AbilityBase_eventInitialize_Parms, InHandle), Z_Construct_UScriptStruct_F_SOTS_AbilityHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InHandle_MetaData), NewProp_InHandle_MetaData) }; // 3514428892
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_AbilityBase_Initialize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilityBase_Initialize_Statics::NewProp_InComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilityBase_Initialize_Statics::NewProp_InDefinition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilityBase_Initialize_Statics::NewProp_InHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityBase_Initialize_Statics::PropPointers) < 2048);
// ********** End Function Initialize Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_AbilityBase_Initialize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_AbilityBase, nullptr, "Initialize", 	Z_Construct_UFunction_USOTS_AbilityBase_Initialize_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityBase_Initialize_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_AbilityBase_Initialize_Statics::SOTS_AbilityBase_eventInitialize_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityBase_Initialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_AbilityBase_Initialize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_AbilityBase_Initialize_Statics::SOTS_AbilityBase_eventInitialize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_AbilityBase_Initialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_AbilityBase_Initialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_AbilityBase::execInitialize)
{
	P_GET_OBJECT(UAC_SOTS_Abilitys,Z_Param_InComponent);
	P_GET_STRUCT_REF(F_SOTS_AbilityDefinition,Z_Param_Out_InDefinition);
	P_GET_STRUCT_REF(F_SOTS_AbilityHandle,Z_Param_Out_InHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Initialize(Z_Param_InComponent,Z_Param_Out_InDefinition,Z_Param_Out_InHandle);
	P_NATIVE_END;
}
// ********** End Class USOTS_AbilityBase Function Initialize **************************************

// ********** Begin Class USOTS_AbilityBase Function K2_ActivateAbility ****************************
struct SOTS_AbilityBase_eventK2_ActivateAbility_Parms
{
	F_SOTS_AbilityActivationContext Context;
};
static FName NAME_USOTS_AbilityBase_K2_ActivateAbility = FName(TEXT("K2_ActivateAbility"));
void USOTS_AbilityBase::K2_ActivateAbility(F_SOTS_AbilityActivationContext const& Context)
{
	SOTS_AbilityBase_eventK2_ActivateAbility_Parms Parms;
	Parms.Context=Context;
	UFunction* Func = FindFunctionChecked(NAME_USOTS_AbilityBase_K2_ActivateAbility);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_USOTS_AbilityBase_K2_ActivateAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS Ability" },
		{ "ModuleRelativePath", "Public/Abilities/SOTS_AbilityBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function K2_ActivateAbility constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function K2_ActivateAbility constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function K2_ActivateAbility Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_AbilityBase_K2_ActivateAbility_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AbilityBase_eventK2_ActivateAbility_Parms, Context), Z_Construct_UScriptStruct_F_SOTS_AbilityActivationContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) }; // 2980214493
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_AbilityBase_K2_ActivateAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilityBase_K2_ActivateAbility_Statics::NewProp_Context,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityBase_K2_ActivateAbility_Statics::PropPointers) < 2048);
// ********** End Function K2_ActivateAbility Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_AbilityBase_K2_ActivateAbility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_AbilityBase, nullptr, "K2_ActivateAbility", 	Z_Construct_UFunction_USOTS_AbilityBase_K2_ActivateAbility_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityBase_K2_ActivateAbility_Statics::PropPointers), 
sizeof(SOTS_AbilityBase_eventK2_ActivateAbility_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityBase_K2_ActivateAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_AbilityBase_K2_ActivateAbility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(SOTS_AbilityBase_eventK2_ActivateAbility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_AbilityBase_K2_ActivateAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_AbilityBase_K2_ActivateAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class USOTS_AbilityBase Function K2_ActivateAbility ******************************

// ********** Begin Class USOTS_AbilityBase Function K2_EndAbility *********************************
static FName NAME_USOTS_AbilityBase_K2_EndAbility = FName(TEXT("K2_EndAbility"));
void USOTS_AbilityBase::K2_EndAbility()
{
	UFunction* Func = FindFunctionChecked(NAME_USOTS_AbilityBase_K2_EndAbility);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_USOTS_AbilityBase_K2_EndAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS Ability" },
		{ "ModuleRelativePath", "Public/Abilities/SOTS_AbilityBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function K2_EndAbility constinit property declarations *************************
// ********** End Function K2_EndAbility constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_AbilityBase_K2_EndAbility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_AbilityBase, nullptr, "K2_EndAbility", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityBase_K2_EndAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_AbilityBase_K2_EndAbility_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USOTS_AbilityBase_K2_EndAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_AbilityBase_K2_EndAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class USOTS_AbilityBase Function K2_EndAbility ***********************************

// ********** Begin Class USOTS_AbilityBase Function OnAbilityGranted ******************************
struct SOTS_AbilityBase_eventOnAbilityGranted_Parms
{
	F_SOTS_AbilityDefinition Definition;
};
static FName NAME_USOTS_AbilityBase_OnAbilityGranted = FName(TEXT("OnAbilityGranted"));
void USOTS_AbilityBase::OnAbilityGranted(F_SOTS_AbilityDefinition const& Definition)
{
	SOTS_AbilityBase_eventOnAbilityGranted_Parms Parms;
	Parms.Definition=Definition;
	UFunction* Func = FindFunctionChecked(NAME_USOTS_AbilityBase_OnAbilityGranted);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_USOTS_AbilityBase_OnAbilityGranted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS Ability" },
		{ "ModuleRelativePath", "Public/Abilities/SOTS_AbilityBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Definition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnAbilityGranted constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Definition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnAbilityGranted constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnAbilityGranted Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_AbilityBase_OnAbilityGranted_Statics::NewProp_Definition = { "Definition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AbilityBase_eventOnAbilityGranted_Parms, Definition), Z_Construct_UScriptStruct_F_SOTS_AbilityDefinition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Definition_MetaData), NewProp_Definition_MetaData) }; // 2812081814
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_AbilityBase_OnAbilityGranted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilityBase_OnAbilityGranted_Statics::NewProp_Definition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityBase_OnAbilityGranted_Statics::PropPointers) < 2048);
// ********** End Function OnAbilityGranted Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_AbilityBase_OnAbilityGranted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_AbilityBase, nullptr, "OnAbilityGranted", 	Z_Construct_UFunction_USOTS_AbilityBase_OnAbilityGranted_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityBase_OnAbilityGranted_Statics::PropPointers), 
sizeof(SOTS_AbilityBase_eventOnAbilityGranted_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityBase_OnAbilityGranted_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_AbilityBase_OnAbilityGranted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(SOTS_AbilityBase_eventOnAbilityGranted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_AbilityBase_OnAbilityGranted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_AbilityBase_OnAbilityGranted_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class USOTS_AbilityBase Function OnAbilityGranted ********************************

// ********** Begin Class USOTS_AbilityBase Function OnAbilityRemoved ******************************
static FName NAME_USOTS_AbilityBase_OnAbilityRemoved = FName(TEXT("OnAbilityRemoved"));
void USOTS_AbilityBase::OnAbilityRemoved()
{
	UFunction* Func = FindFunctionChecked(NAME_USOTS_AbilityBase_OnAbilityRemoved);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_USOTS_AbilityBase_OnAbilityRemoved_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS Ability" },
		{ "ModuleRelativePath", "Public/Abilities/SOTS_AbilityBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnAbilityRemoved constinit property declarations **********************
// ********** End Function OnAbilityRemoved constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_AbilityBase_OnAbilityRemoved_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_AbilityBase, nullptr, "OnAbilityRemoved", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityBase_OnAbilityRemoved_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_AbilityBase_OnAbilityRemoved_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USOTS_AbilityBase_OnAbilityRemoved()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_AbilityBase_OnAbilityRemoved_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class USOTS_AbilityBase Function OnAbilityRemoved ********************************

// ********** Begin Class USOTS_AbilityBase Function RemoveStealthModifierFromWorld ****************
struct Z_Construct_UFunction_USOTS_AbilityBase_RemoveStealthModifierFromWorld_Statics
{
	struct SOTS_AbilityBase_eventRemoveStealthModifierFromWorld_Parms
	{
		FName SourceId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Stealth" },
		{ "ModuleRelativePath", "Public/Abilities/SOTS_AbilityBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveStealthModifierFromWorld constinit property declarations ********
	static const UECodeGen_Private::FNamePropertyParams NewProp_SourceId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveStealthModifierFromWorld constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveStealthModifierFromWorld Property Definitions *******************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USOTS_AbilityBase_RemoveStealthModifierFromWorld_Statics::NewProp_SourceId = { "SourceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AbilityBase_eventRemoveStealthModifierFromWorld_Parms, SourceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_AbilityBase_RemoveStealthModifierFromWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AbilityBase_RemoveStealthModifierFromWorld_Statics::NewProp_SourceId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityBase_RemoveStealthModifierFromWorld_Statics::PropPointers) < 2048);
// ********** End Function RemoveStealthModifierFromWorld Property Definitions *********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_AbilityBase_RemoveStealthModifierFromWorld_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_AbilityBase, nullptr, "RemoveStealthModifierFromWorld", 	Z_Construct_UFunction_USOTS_AbilityBase_RemoveStealthModifierFromWorld_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityBase_RemoveStealthModifierFromWorld_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_AbilityBase_RemoveStealthModifierFromWorld_Statics::SOTS_AbilityBase_eventRemoveStealthModifierFromWorld_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AbilityBase_RemoveStealthModifierFromWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_AbilityBase_RemoveStealthModifierFromWorld_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_AbilityBase_RemoveStealthModifierFromWorld_Statics::SOTS_AbilityBase_eventRemoveStealthModifierFromWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_AbilityBase_RemoveStealthModifierFromWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_AbilityBase_RemoveStealthModifierFromWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_AbilityBase::execRemoveStealthModifierFromWorld)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_SourceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveStealthModifierFromWorld(Z_Param_SourceId);
	P_NATIVE_END;
}
// ********** End Class USOTS_AbilityBase Function RemoveStealthModifierFromWorld ******************

// ********** Begin Class USOTS_AbilityBase ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_AbilityBase;
UClass* USOTS_AbilityBase::GetPrivateStaticClass()
{
	using TClass = USOTS_AbilityBase;
	if (!Z_Registration_Info_UClass_USOTS_AbilityBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_AbilityBase"),
			Z_Registration_Info_UClass_USOTS_AbilityBase.InnerSingleton,
			StaticRegisterNativesUSOTS_AbilityBase,
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
	return Z_Registration_Info_UClass_USOTS_AbilityBase.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_AbilityBase_NoRegister()
{
	return USOTS_AbilityBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_AbilityBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Abilities/SOTS_AbilityBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Abilities/SOTS_AbilityBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityTag_MetaData[] = {
		{ "Category", "SOTS Ability" },
		{ "ModuleRelativePath", "Public/Abilities/SOTS_AbilityBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[] = {
		{ "Category", "SOTS Ability" },
		{ "ModuleRelativePath", "Public/Abilities/SOTS_AbilityBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningComponent_MetaData[] = {
		{ "Category", "SOTS Ability" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Abilities/SOTS_AbilityBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningActor_MetaData[] = {
		{ "Category", "SOTS Ability" },
		{ "ModuleRelativePath", "Public/Abilities/SOTS_AbilityBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_AbilityBase constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USOTS_AbilityBase constinit property declarations **************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ApplyStealthModifierToWorld"), .Pointer = &USOTS_AbilityBase::execApplyStealthModifierToWorld },
		{ .NameUTF8 = UTF8TEXT("GetOwnerGlobalStealthScore01"), .Pointer = &USOTS_AbilityBase::execGetOwnerGlobalStealthScore01 },
		{ .NameUTF8 = UTF8TEXT("GetOwnerLightLevel01"), .Pointer = &USOTS_AbilityBase::execGetOwnerLightLevel01 },
		{ .NameUTF8 = UTF8TEXT("GetOwnerStealthTier"), .Pointer = &USOTS_AbilityBase::execGetOwnerStealthTier },
		{ .NameUTF8 = UTF8TEXT("Initialize"), .Pointer = &USOTS_AbilityBase::execInitialize },
		{ .NameUTF8 = UTF8TEXT("RemoveStealthModifierFromWorld"), .Pointer = &USOTS_AbilityBase::execRemoveStealthModifierFromWorld },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USOTS_AbilityBase_ApplyStealthModifierToWorld, "ApplyStealthModifierToWorld" }, // 1451505255
		{ &Z_Construct_UFunction_USOTS_AbilityBase_GetOwnerGlobalStealthScore01, "GetOwnerGlobalStealthScore01" }, // 1715200464
		{ &Z_Construct_UFunction_USOTS_AbilityBase_GetOwnerLightLevel01, "GetOwnerLightLevel01" }, // 2439844038
		{ &Z_Construct_UFunction_USOTS_AbilityBase_GetOwnerStealthTier, "GetOwnerStealthTier" }, // 2709529360
		{ &Z_Construct_UFunction_USOTS_AbilityBase_Initialize, "Initialize" }, // 16227217
		{ &Z_Construct_UFunction_USOTS_AbilityBase_K2_ActivateAbility, "K2_ActivateAbility" }, // 1289155810
		{ &Z_Construct_UFunction_USOTS_AbilityBase_K2_EndAbility, "K2_EndAbility" }, // 332403002
		{ &Z_Construct_UFunction_USOTS_AbilityBase_OnAbilityGranted, "OnAbilityGranted" }, // 1537514764
		{ &Z_Construct_UFunction_USOTS_AbilityBase_OnAbilityRemoved, "OnAbilityRemoved" }, // 3728788651
		{ &Z_Construct_UFunction_USOTS_AbilityBase_RemoveStealthModifierFromWorld, "RemoveStealthModifierFromWorld" }, // 41392061
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_AbilityBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_AbilityBase_Statics

// ********** Begin Class USOTS_AbilityBase Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_AbilityBase_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AbilityBase, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityTag_MetaData), NewProp_AbilityTag_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_AbilityBase_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AbilityBase, Handle), Z_Construct_UScriptStruct_F_SOTS_AbilityHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handle_MetaData), NewProp_Handle_MetaData) }; // 3514428892
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USOTS_AbilityBase_Statics::NewProp_OwningComponent = { "OwningComponent", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AbilityBase, OwningComponent), Z_Construct_UClass_UAC_SOTS_Abilitys_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningComponent_MetaData), NewProp_OwningComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USOTS_AbilityBase_Statics::NewProp_OwningActor = { "OwningActor", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AbilityBase, OwningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningActor_MetaData), NewProp_OwningActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USOTS_AbilityBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AbilityBase_Statics::NewProp_AbilityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AbilityBase_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AbilityBase_Statics::NewProp_OwningComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AbilityBase_Statics::NewProp_OwningActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AbilityBase_Statics::PropPointers) < 2048);
// ********** End Class USOTS_AbilityBase Property Definitions *************************************
UObject* (*const Z_Construct_UClass_USOTS_AbilityBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_GAS_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AbilityBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_AbilityBase_Statics::ClassParams = {
	&USOTS_AbilityBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USOTS_AbilityBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AbilityBase_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AbilityBase_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_AbilityBase_Statics::Class_MetaDataParams)
};
void USOTS_AbilityBase::StaticRegisterNativesUSOTS_AbilityBase()
{
	UClass* Class = USOTS_AbilityBase::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USOTS_AbilityBase_Statics::Funcs));
}
UClass* Z_Construct_UClass_USOTS_AbilityBase()
{
	if (!Z_Registration_Info_UClass_USOTS_AbilityBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_AbilityBase.OuterSingleton, Z_Construct_UClass_USOTS_AbilityBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_AbilityBase.OuterSingleton;
}
USOTS_AbilityBase::USOTS_AbilityBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_AbilityBase);
USOTS_AbilityBase::~USOTS_AbilityBase() {}
// ********** End Class USOTS_AbilityBase **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Abilities_SOTS_AbilityBase_h__Script_SOTS_GAS_Plugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_AbilityBase, USOTS_AbilityBase::StaticClass, TEXT("USOTS_AbilityBase"), &Z_Registration_Info_UClass_USOTS_AbilityBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_AbilityBase), 1961973386U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Abilities_SOTS_AbilityBase_h__Script_SOTS_GAS_Plugin_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Abilities_SOTS_AbilityBase_h__Script_SOTS_GAS_Plugin_2219935882{
	TEXT("/Script/SOTS_GAS_Plugin"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Abilities_SOTS_AbilityBase_h__Script_SOTS_GAS_Plugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Abilities_SOTS_AbilityBase_h__Script_SOTS_GAS_Plugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
