// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTS_PlayerStealthComponent.h"
#include "SOTS_GlobalStealthTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_PlayerStealthComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
SOTS_GLOBALSTEALTHMANAGER_API UClass* Z_Construct_UClass_USOTS_PlayerStealthComponent();
SOTS_GLOBALSTEALTHMANAGER_API UClass* Z_Construct_UClass_USOTS_PlayerStealthComponent_NoRegister();
SOTS_GLOBALSTEALTHMANAGER_API UEnum* Z_Construct_UEnum_SOTS_GlobalStealthManager_ESOTS_StealthTier();
SOTS_GLOBALSTEALTHMANAGER_API UFunction* Z_Construct_UDelegateFunction_USOTS_PlayerStealthComponent_OnLocalVisibilityUpdated__DelegateSignature();
SOTS_GLOBALSTEALTHMANAGER_API UFunction* Z_Construct_UDelegateFunction_USOTS_PlayerStealthComponent_OnStealthTierChanged__DelegateSignature();
SOTS_GLOBALSTEALTHMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_PlayerStealthState();
UPackage* Z_Construct_UPackage__Script_SOTS_GlobalStealthManager();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnLocalVisibilityUpdated *********************************************
struct Z_Construct_UDelegateFunction_USOTS_PlayerStealthComponent_OnLocalVisibilityUpdated__DelegateSignature_Statics
{
	struct SOTS_PlayerStealthComponent_eventOnLocalVisibilityUpdated_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SOTS_PlayerStealthComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnLocalVisibilityUpdated constinit property declarations *************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnLocalVisibilityUpdated constinit property declarations ***************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnLocalVisibilityUpdated Property Definitions ************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_USOTS_PlayerStealthComponent_OnLocalVisibilityUpdated__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_PlayerStealthComponent_eventOnLocalVisibilityUpdated_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USOTS_PlayerStealthComponent_OnLocalVisibilityUpdated__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USOTS_PlayerStealthComponent_OnLocalVisibilityUpdated__DelegateSignature_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USOTS_PlayerStealthComponent_OnLocalVisibilityUpdated__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnLocalVisibilityUpdated Property Definitions **************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_USOTS_PlayerStealthComponent_OnLocalVisibilityUpdated__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_PlayerStealthComponent, nullptr, "OnLocalVisibilityUpdated__DelegateSignature", 	Z_Construct_UDelegateFunction_USOTS_PlayerStealthComponent_OnLocalVisibilityUpdated__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USOTS_PlayerStealthComponent_OnLocalVisibilityUpdated__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_USOTS_PlayerStealthComponent_OnLocalVisibilityUpdated__DelegateSignature_Statics::SOTS_PlayerStealthComponent_eventOnLocalVisibilityUpdated_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USOTS_PlayerStealthComponent_OnLocalVisibilityUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_USOTS_PlayerStealthComponent_OnLocalVisibilityUpdated__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_USOTS_PlayerStealthComponent_OnLocalVisibilityUpdated__DelegateSignature_Statics::SOTS_PlayerStealthComponent_eventOnLocalVisibilityUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_USOTS_PlayerStealthComponent_OnLocalVisibilityUpdated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USOTS_PlayerStealthComponent_OnLocalVisibilityUpdated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void USOTS_PlayerStealthComponent::FOnLocalVisibilityUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnLocalVisibilityUpdated, float NewValue)
{
	struct SOTS_PlayerStealthComponent_eventOnLocalVisibilityUpdated_Parms
	{
		float NewValue;
	};
	SOTS_PlayerStealthComponent_eventOnLocalVisibilityUpdated_Parms Parms;
	Parms.NewValue=NewValue;
	OnLocalVisibilityUpdated.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnLocalVisibilityUpdated ***********************************************

// ********** Begin Delegate FOnStealthTierChanged *************************************************
struct Z_Construct_UDelegateFunction_USOTS_PlayerStealthComponent_OnStealthTierChanged__DelegateSignature_Statics
{
	struct SOTS_PlayerStealthComponent_eventOnStealthTierChanged_Parms
	{
		ESOTS_StealthTier NewTier;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SOTS_PlayerStealthComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnStealthTierChanged constinit property declarations *****************
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewTier_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewTier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnStealthTierChanged constinit property declarations *******************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnStealthTierChanged Property Definitions ****************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_USOTS_PlayerStealthComponent_OnStealthTierChanged__DelegateSignature_Statics::NewProp_NewTier_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_USOTS_PlayerStealthComponent_OnStealthTierChanged__DelegateSignature_Statics::NewProp_NewTier = { "NewTier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_PlayerStealthComponent_eventOnStealthTierChanged_Parms, NewTier), Z_Construct_UEnum_SOTS_GlobalStealthManager_ESOTS_StealthTier, METADATA_PARAMS(0, nullptr) }; // 3407880652
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USOTS_PlayerStealthComponent_OnStealthTierChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USOTS_PlayerStealthComponent_OnStealthTierChanged__DelegateSignature_Statics::NewProp_NewTier_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USOTS_PlayerStealthComponent_OnStealthTierChanged__DelegateSignature_Statics::NewProp_NewTier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USOTS_PlayerStealthComponent_OnStealthTierChanged__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnStealthTierChanged Property Definitions ******************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_USOTS_PlayerStealthComponent_OnStealthTierChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_PlayerStealthComponent, nullptr, "OnStealthTierChanged__DelegateSignature", 	Z_Construct_UDelegateFunction_USOTS_PlayerStealthComponent_OnStealthTierChanged__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USOTS_PlayerStealthComponent_OnStealthTierChanged__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_USOTS_PlayerStealthComponent_OnStealthTierChanged__DelegateSignature_Statics::SOTS_PlayerStealthComponent_eventOnStealthTierChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USOTS_PlayerStealthComponent_OnStealthTierChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_USOTS_PlayerStealthComponent_OnStealthTierChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_USOTS_PlayerStealthComponent_OnStealthTierChanged__DelegateSignature_Statics::SOTS_PlayerStealthComponent_eventOnStealthTierChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_USOTS_PlayerStealthComponent_OnStealthTierChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USOTS_PlayerStealthComponent_OnStealthTierChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void USOTS_PlayerStealthComponent::FOnStealthTierChanged_DelegateWrapper(const FMulticastScriptDelegate& OnStealthTierChanged, ESOTS_StealthTier NewTier)
{
	struct SOTS_PlayerStealthComponent_eventOnStealthTierChanged_Parms
	{
		ESOTS_StealthTier NewTier;
	};
	SOTS_PlayerStealthComponent_eventOnStealthTierChanged_Parms Parms;
	Parms.NewTier=NewTier;
	OnStealthTierChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnStealthTierChanged ***************************************************

// ********** Begin Class USOTS_PlayerStealthComponent Function GetState ***************************
struct Z_Construct_UFunction_USOTS_PlayerStealthComponent_GetState_Statics
{
	struct SOTS_PlayerStealthComponent_eventGetState_Parms
	{
		FSOTS_PlayerStealthState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stealth" },
		{ "ModuleRelativePath", "Public/SOTS_PlayerStealthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetState constinit property declarations ******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetState constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetState Property Definitions *****************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_PlayerStealthComponent_GetState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_PlayerStealthComponent_eventGetState_Parms, ReturnValue), Z_Construct_UScriptStruct_FSOTS_PlayerStealthState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2815183295
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_PlayerStealthComponent_GetState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_PlayerStealthComponent_GetState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_PlayerStealthComponent_GetState_Statics::PropPointers) < 2048);
// ********** End Function GetState Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_PlayerStealthComponent_GetState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_PlayerStealthComponent, nullptr, "GetState", 	Z_Construct_UFunction_USOTS_PlayerStealthComponent_GetState_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_PlayerStealthComponent_GetState_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_PlayerStealthComponent_GetState_Statics::SOTS_PlayerStealthComponent_eventGetState_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_PlayerStealthComponent_GetState_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_PlayerStealthComponent_GetState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_PlayerStealthComponent_GetState_Statics::SOTS_PlayerStealthComponent_eventGetState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_PlayerStealthComponent_GetState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_PlayerStealthComponent_GetState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_PlayerStealthComponent::execGetState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSOTS_PlayerStealthState*)Z_Param__Result=P_THIS->GetState();
	P_NATIVE_END;
}
// ********** End Class USOTS_PlayerStealthComponent Function GetState *****************************

// ********** Begin Class USOTS_PlayerStealthComponent Function RecomputeLocalVisibility ***********
struct Z_Construct_UFunction_USOTS_PlayerStealthComponent_RecomputeLocalVisibility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stealth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Main recompute function (event-driven, no Tick).\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_PlayerStealthComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Main recompute function (event-driven, no Tick)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RecomputeLocalVisibility constinit property declarations **************
// ********** End Function RecomputeLocalVisibility constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_PlayerStealthComponent_RecomputeLocalVisibility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_PlayerStealthComponent, nullptr, "RecomputeLocalVisibility", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_PlayerStealthComponent_RecomputeLocalVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_PlayerStealthComponent_RecomputeLocalVisibility_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USOTS_PlayerStealthComponent_RecomputeLocalVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_PlayerStealthComponent_RecomputeLocalVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_PlayerStealthComponent::execRecomputeLocalVisibility)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RecomputeLocalVisibility();
	P_NATIVE_END;
}
// ********** End Class USOTS_PlayerStealthComponent Function RecomputeLocalVisibility *************

// ********** Begin Class USOTS_PlayerStealthComponent Function SetAISuspicion *********************
struct Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetAISuspicion_Statics
{
	struct SOTS_PlayerStealthComponent_eventSetAISuspicion_Parms
	{
		float In01;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stealth" },
		{ "ModuleRelativePath", "Public/SOTS_PlayerStealthComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetAISuspicion constinit property declarations ************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_In01;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetAISuspicion constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetAISuspicion Property Definitions ***********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetAISuspicion_Statics::NewProp_In01 = { "In01", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_PlayerStealthComponent_eventSetAISuspicion_Parms, In01), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetAISuspicion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetAISuspicion_Statics::NewProp_In01,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetAISuspicion_Statics::PropPointers) < 2048);
// ********** End Function SetAISuspicion Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetAISuspicion_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_PlayerStealthComponent, nullptr, "SetAISuspicion", 	Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetAISuspicion_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetAISuspicion_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetAISuspicion_Statics::SOTS_PlayerStealthComponent_eventSetAISuspicion_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetAISuspicion_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetAISuspicion_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetAISuspicion_Statics::SOTS_PlayerStealthComponent_eventSetAISuspicion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetAISuspicion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetAISuspicion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_PlayerStealthComponent::execSetAISuspicion)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_In01);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAISuspicion(Z_Param_In01);
	P_NATIVE_END;
}
// ********** End Class USOTS_PlayerStealthComponent Function SetAISuspicion ***********************

// ********** Begin Class USOTS_PlayerStealthComponent Function SetCoverExposure *******************
struct Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetCoverExposure_Statics
{
	struct SOTS_PlayerStealthComponent_eventSetCoverExposure_Parms
	{
		float In01;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stealth" },
		{ "ModuleRelativePath", "Public/SOTS_PlayerStealthComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetCoverExposure constinit property declarations **********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_In01;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetCoverExposure constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetCoverExposure Property Definitions *********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetCoverExposure_Statics::NewProp_In01 = { "In01", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_PlayerStealthComponent_eventSetCoverExposure_Parms, In01), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetCoverExposure_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetCoverExposure_Statics::NewProp_In01,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetCoverExposure_Statics::PropPointers) < 2048);
// ********** End Function SetCoverExposure Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetCoverExposure_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_PlayerStealthComponent, nullptr, "SetCoverExposure", 	Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetCoverExposure_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetCoverExposure_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetCoverExposure_Statics::SOTS_PlayerStealthComponent_eventSetCoverExposure_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetCoverExposure_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetCoverExposure_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetCoverExposure_Statics::SOTS_PlayerStealthComponent_eventSetCoverExposure_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetCoverExposure()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetCoverExposure_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_PlayerStealthComponent::execSetCoverExposure)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_In01);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCoverExposure(Z_Param_In01);
	P_NATIVE_END;
}
// ********** End Class USOTS_PlayerStealthComponent Function SetCoverExposure *********************

// ********** Begin Class USOTS_PlayerStealthComponent Function SetDetected ************************
struct Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetDetected_Statics
{
	struct SOTS_PlayerStealthComponent_eventSetDetected_Parms
	{
		bool bNewDetected;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Stealth" },
		{ "ModuleRelativePath", "Public/SOTS_PlayerStealthComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetDetected constinit property declarations ***************************
	static void NewProp_bNewDetected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewDetected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetDetected constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetDetected Property Definitions **************************************
void Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetDetected_Statics::NewProp_bNewDetected_SetBit(void* Obj)
{
	((SOTS_PlayerStealthComponent_eventSetDetected_Parms*)Obj)->bNewDetected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetDetected_Statics::NewProp_bNewDetected = { "bNewDetected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_PlayerStealthComponent_eventSetDetected_Parms), &Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetDetected_Statics::NewProp_bNewDetected_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetDetected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetDetected_Statics::NewProp_bNewDetected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetDetected_Statics::PropPointers) < 2048);
// ********** End Function SetDetected Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetDetected_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_PlayerStealthComponent, nullptr, "SetDetected", 	Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetDetected_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetDetected_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetDetected_Statics::SOTS_PlayerStealthComponent_eventSetDetected_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetDetected_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetDetected_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetDetected_Statics::SOTS_PlayerStealthComponent_eventSetDetected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetDetected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetDetected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_PlayerStealthComponent::execSetDetected)
{
	P_GET_UBOOL(Z_Param_bNewDetected);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDetected(Z_Param_bNewDetected);
	P_NATIVE_END;
}
// ********** End Class USOTS_PlayerStealthComponent Function SetDetected **************************

// ********** Begin Class USOTS_PlayerStealthComponent Function SetIsInCover ***********************
struct Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetIsInCover_Statics
{
	struct SOTS_PlayerStealthComponent_eventSetIsInCover_Parms
	{
		bool bNewInCover;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Stealth" },
		{ "ModuleRelativePath", "Public/SOTS_PlayerStealthComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetIsInCover constinit property declarations **************************
	static void NewProp_bNewInCover_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewInCover;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetIsInCover constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetIsInCover Property Definitions *************************************
void Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetIsInCover_Statics::NewProp_bNewInCover_SetBit(void* Obj)
{
	((SOTS_PlayerStealthComponent_eventSetIsInCover_Parms*)Obj)->bNewInCover = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetIsInCover_Statics::NewProp_bNewInCover = { "bNewInCover", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_PlayerStealthComponent_eventSetIsInCover_Parms), &Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetIsInCover_Statics::NewProp_bNewInCover_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetIsInCover_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetIsInCover_Statics::NewProp_bNewInCover,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetIsInCover_Statics::PropPointers) < 2048);
// ********** End Function SetIsInCover Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetIsInCover_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_PlayerStealthComponent, nullptr, "SetIsInCover", 	Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetIsInCover_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetIsInCover_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetIsInCover_Statics::SOTS_PlayerStealthComponent_eventSetIsInCover_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetIsInCover_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetIsInCover_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetIsInCover_Statics::SOTS_PlayerStealthComponent_eventSetIsInCover_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetIsInCover()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetIsInCover_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_PlayerStealthComponent::execSetIsInCover)
{
	P_GET_UBOOL(Z_Param_bNewInCover);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsInCover(Z_Param_bNewInCover);
	P_NATIVE_END;
}
// ********** End Class USOTS_PlayerStealthComponent Function SetIsInCover *************************

// ********** Begin Class USOTS_PlayerStealthComponent Function SetIsInShadow **********************
struct Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetIsInShadow_Statics
{
	struct SOTS_PlayerStealthComponent_eventSetIsInShadow_Parms
	{
		bool bNewInShadow;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Stealth" },
		{ "ModuleRelativePath", "Public/SOTS_PlayerStealthComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetIsInShadow constinit property declarations *************************
	static void NewProp_bNewInShadow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewInShadow;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetIsInShadow constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetIsInShadow Property Definitions ************************************
void Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetIsInShadow_Statics::NewProp_bNewInShadow_SetBit(void* Obj)
{
	((SOTS_PlayerStealthComponent_eventSetIsInShadow_Parms*)Obj)->bNewInShadow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetIsInShadow_Statics::NewProp_bNewInShadow = { "bNewInShadow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_PlayerStealthComponent_eventSetIsInShadow_Parms), &Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetIsInShadow_Statics::NewProp_bNewInShadow_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetIsInShadow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetIsInShadow_Statics::NewProp_bNewInShadow,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetIsInShadow_Statics::PropPointers) < 2048);
// ********** End Function SetIsInShadow Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetIsInShadow_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_PlayerStealthComponent, nullptr, "SetIsInShadow", 	Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetIsInShadow_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetIsInShadow_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetIsInShadow_Statics::SOTS_PlayerStealthComponent_eventSetIsInShadow_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetIsInShadow_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetIsInShadow_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetIsInShadow_Statics::SOTS_PlayerStealthComponent_eventSetIsInShadow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetIsInShadow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetIsInShadow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_PlayerStealthComponent::execSetIsInShadow)
{
	P_GET_UBOOL(Z_Param_bNewInShadow);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsInShadow(Z_Param_bNewInShadow);
	P_NATIVE_END;
}
// ********** End Class USOTS_PlayerStealthComponent Function SetIsInShadow ************************

// ********** Begin Class USOTS_PlayerStealthComponent Function SetLightLevel **********************
struct Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetLightLevel_Statics
{
	struct SOTS_PlayerStealthComponent_eventSetLightLevel_Parms
	{
		float In01;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stealth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Inputs from other systems (all clamped to [0,1]).\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_PlayerStealthComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Inputs from other systems (all clamped to [0,1])." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetLightLevel constinit property declarations *************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_In01;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetLightLevel constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetLightLevel Property Definitions ************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetLightLevel_Statics::NewProp_In01 = { "In01", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_PlayerStealthComponent_eventSetLightLevel_Parms, In01), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetLightLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetLightLevel_Statics::NewProp_In01,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetLightLevel_Statics::PropPointers) < 2048);
// ********** End Function SetLightLevel Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetLightLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_PlayerStealthComponent, nullptr, "SetLightLevel", 	Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetLightLevel_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetLightLevel_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetLightLevel_Statics::SOTS_PlayerStealthComponent_eventSetLightLevel_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetLightLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetLightLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetLightLevel_Statics::SOTS_PlayerStealthComponent_eventSetLightLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetLightLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetLightLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_PlayerStealthComponent::execSetLightLevel)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_In01);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLightLevel(Z_Param_In01);
	P_NATIVE_END;
}
// ********** End Class USOTS_PlayerStealthComponent Function SetLightLevel ************************

// ********** Begin Class USOTS_PlayerStealthComponent Function SetMovementNoise *******************
struct Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetMovementNoise_Statics
{
	struct SOTS_PlayerStealthComponent_eventSetMovementNoise_Parms
	{
		float In01;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stealth" },
		{ "ModuleRelativePath", "Public/SOTS_PlayerStealthComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetMovementNoise constinit property declarations **********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_In01;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetMovementNoise constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetMovementNoise Property Definitions *********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetMovementNoise_Statics::NewProp_In01 = { "In01", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_PlayerStealthComponent_eventSetMovementNoise_Parms, In01), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetMovementNoise_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetMovementNoise_Statics::NewProp_In01,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetMovementNoise_Statics::PropPointers) < 2048);
// ********** End Function SetMovementNoise Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetMovementNoise_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_PlayerStealthComponent, nullptr, "SetMovementNoise", 	Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetMovementNoise_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetMovementNoise_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetMovementNoise_Statics::SOTS_PlayerStealthComponent_eventSetMovementNoise_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetMovementNoise_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetMovementNoise_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetMovementNoise_Statics::SOTS_PlayerStealthComponent_eventSetMovementNoise_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetMovementNoise()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetMovementNoise_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_PlayerStealthComponent::execSetMovementNoise)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_In01);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMovementNoise(Z_Param_In01);
	P_NATIVE_END;
}
// ********** End Class USOTS_PlayerStealthComponent Function SetMovementNoise *********************

// ********** Begin Class USOTS_PlayerStealthComponent Function SetStealthTier *********************
struct Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetStealthTier_Statics
{
	struct SOTS_PlayerStealthComponent_eventSetStealthTier_Parms
	{
		ESOTS_StealthTier NewTier;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Stealth" },
		{ "ModuleRelativePath", "Public/SOTS_PlayerStealthComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetStealthTier constinit property declarations ************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewTier_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewTier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetStealthTier constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetStealthTier Property Definitions ***********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetStealthTier_Statics::NewProp_NewTier_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetStealthTier_Statics::NewProp_NewTier = { "NewTier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_PlayerStealthComponent_eventSetStealthTier_Parms, NewTier), Z_Construct_UEnum_SOTS_GlobalStealthManager_ESOTS_StealthTier, METADATA_PARAMS(0, nullptr) }; // 3407880652
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetStealthTier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetStealthTier_Statics::NewProp_NewTier_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetStealthTier_Statics::NewProp_NewTier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetStealthTier_Statics::PropPointers) < 2048);
// ********** End Function SetStealthTier Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetStealthTier_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_PlayerStealthComponent, nullptr, "SetStealthTier", 	Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetStealthTier_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetStealthTier_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetStealthTier_Statics::SOTS_PlayerStealthComponent_eventSetStealthTier_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetStealthTier_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetStealthTier_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetStealthTier_Statics::SOTS_PlayerStealthComponent_eventSetStealthTier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetStealthTier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetStealthTier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_PlayerStealthComponent::execSetStealthTier)
{
	P_GET_ENUM(ESOTS_StealthTier,Z_Param_NewTier);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStealthTier(ESOTS_StealthTier(Z_Param_NewTier));
	P_NATIVE_END;
}
// ********** End Class USOTS_PlayerStealthComponent Function SetStealthTier ***********************

// ********** Begin Class USOTS_PlayerStealthComponent *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_PlayerStealthComponent;
UClass* USOTS_PlayerStealthComponent::GetPrivateStaticClass()
{
	using TClass = USOTS_PlayerStealthComponent;
	if (!Z_Registration_Info_UClass_USOTS_PlayerStealthComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_PlayerStealthComponent"),
			Z_Registration_Info_UClass_USOTS_PlayerStealthComponent.InnerSingleton,
			StaticRegisterNativesUSOTS_PlayerStealthComponent,
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
	return Z_Registration_Info_UClass_USOTS_PlayerStealthComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_PlayerStealthComponent_NoRegister()
{
	return USOTS_PlayerStealthComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_PlayerStealthComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "SOTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Lightweight, non-ticking component that owns the local player stealth state.\n * Other systems (LightProbe, Cover, Movement, AI bridge) feed normalized inputs\n * and this blends them into LocalVisibility01, then forwards the state to the\n * global stealth manager subsystem.\n */" },
#endif
		{ "IncludePath", "SOTS_PlayerStealthComponent.h" },
		{ "ModuleRelativePath", "Public/SOTS_PlayerStealthComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lightweight, non-ticking component that owns the local player stealth state.\nOther systems (LightProbe, Cover, Movement, AI bridge) feed normalized inputs\nand this blends them into LocalVisibility01, then forwards the state to the\nglobal stealth manager subsystem." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[] = {
		{ "Category", "Stealth" },
		{ "ModuleRelativePath", "Public/SOTS_PlayerStealthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTier_MetaData[] = {
		{ "Category", "SOTS|Stealth" },
		{ "ModuleRelativePath", "Public/SOTS_PlayerStealthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInCover_MetaData[] = {
		{ "Category", "SOTS|Stealth" },
		{ "ModuleRelativePath", "Public/SOTS_PlayerStealthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInShadow_MetaData[] = {
		{ "Category", "SOTS|Stealth" },
		{ "ModuleRelativePath", "Public/SOTS_PlayerStealthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDetected_MetaData[] = {
		{ "Category", "SOTS|Stealth" },
		{ "ModuleRelativePath", "Public/SOTS_PlayerStealthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastDetectionScore_MetaData[] = {
		{ "Category", "SOTS|Stealth" },
		{ "ModuleRelativePath", "Public/SOTS_PlayerStealthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_Light_MetaData[] = {
		{ "Category", "Stealth|Weights" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Weights for blending into LocalVisibility01.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_PlayerStealthComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Weights for blending into LocalVisibility01." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_Cover_MetaData[] = {
		{ "Category", "Stealth|Weights" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/SOTS_PlayerStealthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_Motion_MetaData[] = {
		{ "Category", "Stealth|Weights" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/SOTS_PlayerStealthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStealthTierChanged_MetaData[] = {
		{ "Category", "SOTS|Stealth" },
		{ "ModuleRelativePath", "Public/SOTS_PlayerStealthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLocalVisibilityUpdated_MetaData[] = {
		{ "Category", "Stealth" },
		{ "ModuleRelativePath", "Public/SOTS_PlayerStealthComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_PlayerStealthComponent constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_State;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentTier_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentTier;
	static void NewProp_bIsInCover_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInCover;
	static void NewProp_bIsInShadow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInShadow;
	static void NewProp_bIsDetected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDetected;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LastDetectionScore;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight_Light;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight_Cover;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight_Motion;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStealthTierChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLocalVisibilityUpdated;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USOTS_PlayerStealthComponent constinit property declarations ***************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetState"), .Pointer = &USOTS_PlayerStealthComponent::execGetState },
		{ .NameUTF8 = UTF8TEXT("RecomputeLocalVisibility"), .Pointer = &USOTS_PlayerStealthComponent::execRecomputeLocalVisibility },
		{ .NameUTF8 = UTF8TEXT("SetAISuspicion"), .Pointer = &USOTS_PlayerStealthComponent::execSetAISuspicion },
		{ .NameUTF8 = UTF8TEXT("SetCoverExposure"), .Pointer = &USOTS_PlayerStealthComponent::execSetCoverExposure },
		{ .NameUTF8 = UTF8TEXT("SetDetected"), .Pointer = &USOTS_PlayerStealthComponent::execSetDetected },
		{ .NameUTF8 = UTF8TEXT("SetIsInCover"), .Pointer = &USOTS_PlayerStealthComponent::execSetIsInCover },
		{ .NameUTF8 = UTF8TEXT("SetIsInShadow"), .Pointer = &USOTS_PlayerStealthComponent::execSetIsInShadow },
		{ .NameUTF8 = UTF8TEXT("SetLightLevel"), .Pointer = &USOTS_PlayerStealthComponent::execSetLightLevel },
		{ .NameUTF8 = UTF8TEXT("SetMovementNoise"), .Pointer = &USOTS_PlayerStealthComponent::execSetMovementNoise },
		{ .NameUTF8 = UTF8TEXT("SetStealthTier"), .Pointer = &USOTS_PlayerStealthComponent::execSetStealthTier },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USOTS_PlayerStealthComponent_GetState, "GetState" }, // 2169205857
		{ &Z_Construct_UDelegateFunction_USOTS_PlayerStealthComponent_OnLocalVisibilityUpdated__DelegateSignature, "OnLocalVisibilityUpdated__DelegateSignature" }, // 1296632420
		{ &Z_Construct_UDelegateFunction_USOTS_PlayerStealthComponent_OnStealthTierChanged__DelegateSignature, "OnStealthTierChanged__DelegateSignature" }, // 2738195006
		{ &Z_Construct_UFunction_USOTS_PlayerStealthComponent_RecomputeLocalVisibility, "RecomputeLocalVisibility" }, // 4174751598
		{ &Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetAISuspicion, "SetAISuspicion" }, // 740893882
		{ &Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetCoverExposure, "SetCoverExposure" }, // 1149450947
		{ &Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetDetected, "SetDetected" }, // 3433743974
		{ &Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetIsInCover, "SetIsInCover" }, // 13536355
		{ &Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetIsInShadow, "SetIsInShadow" }, // 359516617
		{ &Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetLightLevel, "SetLightLevel" }, // 887260076
		{ &Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetMovementNoise, "SetMovementNoise" }, // 882955964
		{ &Z_Construct_UFunction_USOTS_PlayerStealthComponent_SetStealthTier, "SetStealthTier" }, // 2913328454
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_PlayerStealthComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_PlayerStealthComponent_Statics

// ********** Begin Class USOTS_PlayerStealthComponent Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_PlayerStealthComponent_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_PlayerStealthComponent, State), Z_Construct_UScriptStruct_FSOTS_PlayerStealthState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_State_MetaData), NewProp_State_MetaData) }; // 2815183295
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USOTS_PlayerStealthComponent_Statics::NewProp_CurrentTier_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USOTS_PlayerStealthComponent_Statics::NewProp_CurrentTier = { "CurrentTier", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_PlayerStealthComponent, CurrentTier), Z_Construct_UEnum_SOTS_GlobalStealthManager_ESOTS_StealthTier, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTier_MetaData), NewProp_CurrentTier_MetaData) }; // 3407880652
void Z_Construct_UClass_USOTS_PlayerStealthComponent_Statics::NewProp_bIsInCover_SetBit(void* Obj)
{
	((USOTS_PlayerStealthComponent*)Obj)->bIsInCover = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USOTS_PlayerStealthComponent_Statics::NewProp_bIsInCover = { "bIsInCover", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USOTS_PlayerStealthComponent), &Z_Construct_UClass_USOTS_PlayerStealthComponent_Statics::NewProp_bIsInCover_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInCover_MetaData), NewProp_bIsInCover_MetaData) };
void Z_Construct_UClass_USOTS_PlayerStealthComponent_Statics::NewProp_bIsInShadow_SetBit(void* Obj)
{
	((USOTS_PlayerStealthComponent*)Obj)->bIsInShadow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USOTS_PlayerStealthComponent_Statics::NewProp_bIsInShadow = { "bIsInShadow", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USOTS_PlayerStealthComponent), &Z_Construct_UClass_USOTS_PlayerStealthComponent_Statics::NewProp_bIsInShadow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInShadow_MetaData), NewProp_bIsInShadow_MetaData) };
void Z_Construct_UClass_USOTS_PlayerStealthComponent_Statics::NewProp_bIsDetected_SetBit(void* Obj)
{
	((USOTS_PlayerStealthComponent*)Obj)->bIsDetected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USOTS_PlayerStealthComponent_Statics::NewProp_bIsDetected = { "bIsDetected", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USOTS_PlayerStealthComponent), &Z_Construct_UClass_USOTS_PlayerStealthComponent_Statics::NewProp_bIsDetected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDetected_MetaData), NewProp_bIsDetected_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USOTS_PlayerStealthComponent_Statics::NewProp_LastDetectionScore = { "LastDetectionScore", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_PlayerStealthComponent, LastDetectionScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastDetectionScore_MetaData), NewProp_LastDetectionScore_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USOTS_PlayerStealthComponent_Statics::NewProp_Weight_Light = { "Weight_Light", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_PlayerStealthComponent, Weight_Light), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_Light_MetaData), NewProp_Weight_Light_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USOTS_PlayerStealthComponent_Statics::NewProp_Weight_Cover = { "Weight_Cover", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_PlayerStealthComponent, Weight_Cover), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_Cover_MetaData), NewProp_Weight_Cover_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USOTS_PlayerStealthComponent_Statics::NewProp_Weight_Motion = { "Weight_Motion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_PlayerStealthComponent, Weight_Motion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_Motion_MetaData), NewProp_Weight_Motion_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USOTS_PlayerStealthComponent_Statics::NewProp_OnStealthTierChanged = { "OnStealthTierChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_PlayerStealthComponent, OnStealthTierChanged), Z_Construct_UDelegateFunction_USOTS_PlayerStealthComponent_OnStealthTierChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStealthTierChanged_MetaData), NewProp_OnStealthTierChanged_MetaData) }; // 2738195006
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USOTS_PlayerStealthComponent_Statics::NewProp_OnLocalVisibilityUpdated = { "OnLocalVisibilityUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_PlayerStealthComponent, OnLocalVisibilityUpdated), Z_Construct_UDelegateFunction_USOTS_PlayerStealthComponent_OnLocalVisibilityUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLocalVisibilityUpdated_MetaData), NewProp_OnLocalVisibilityUpdated_MetaData) }; // 1296632420
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USOTS_PlayerStealthComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_PlayerStealthComponent_Statics::NewProp_State,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_PlayerStealthComponent_Statics::NewProp_CurrentTier_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_PlayerStealthComponent_Statics::NewProp_CurrentTier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_PlayerStealthComponent_Statics::NewProp_bIsInCover,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_PlayerStealthComponent_Statics::NewProp_bIsInShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_PlayerStealthComponent_Statics::NewProp_bIsDetected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_PlayerStealthComponent_Statics::NewProp_LastDetectionScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_PlayerStealthComponent_Statics::NewProp_Weight_Light,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_PlayerStealthComponent_Statics::NewProp_Weight_Cover,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_PlayerStealthComponent_Statics::NewProp_Weight_Motion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_PlayerStealthComponent_Statics::NewProp_OnStealthTierChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_PlayerStealthComponent_Statics::NewProp_OnLocalVisibilityUpdated,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_PlayerStealthComponent_Statics::PropPointers) < 2048);
// ********** End Class USOTS_PlayerStealthComponent Property Definitions **************************
UObject* (*const Z_Construct_UClass_USOTS_PlayerStealthComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_GlobalStealthManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_PlayerStealthComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_PlayerStealthComponent_Statics::ClassParams = {
	&USOTS_PlayerStealthComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USOTS_PlayerStealthComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_PlayerStealthComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_PlayerStealthComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_PlayerStealthComponent_Statics::Class_MetaDataParams)
};
void USOTS_PlayerStealthComponent::StaticRegisterNativesUSOTS_PlayerStealthComponent()
{
	UClass* Class = USOTS_PlayerStealthComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USOTS_PlayerStealthComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_USOTS_PlayerStealthComponent()
{
	if (!Z_Registration_Info_UClass_USOTS_PlayerStealthComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_PlayerStealthComponent.OuterSingleton, Z_Construct_UClass_USOTS_PlayerStealthComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_PlayerStealthComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_PlayerStealthComponent);
USOTS_PlayerStealthComponent::~USOTS_PlayerStealthComponent() {}
// ********** End Class USOTS_PlayerStealthComponent ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_PlayerStealthComponent_h__Script_SOTS_GlobalStealthManager_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_PlayerStealthComponent, USOTS_PlayerStealthComponent::StaticClass, TEXT("USOTS_PlayerStealthComponent"), &Z_Registration_Info_UClass_USOTS_PlayerStealthComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_PlayerStealthComponent), 3577273926U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_PlayerStealthComponent_h__Script_SOTS_GlobalStealthManager_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_PlayerStealthComponent_h__Script_SOTS_GlobalStealthManager_2190661581{
	TEXT("/Script/SOTS_GlobalStealthManager"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_PlayerStealthComponent_h__Script_SOTS_GlobalStealthManager_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_PlayerStealthComponent_h__Script_SOTS_GlobalStealthManager_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
