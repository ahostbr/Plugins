// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTS_AIPerceptionComponent.h"
#include "SOTS_AIPerceptionTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_AIPerceptionComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
SOTS_AIPERCEPTION_API UClass* Z_Construct_UClass_USOTS_AIGuardPerceptionDataAsset_NoRegister();
SOTS_AIPERCEPTION_API UClass* Z_Construct_UClass_USOTS_AIPerceptionComponent();
SOTS_AIPERCEPTION_API UClass* Z_Construct_UClass_USOTS_AIPerceptionComponent_NoRegister();
SOTS_AIPERCEPTION_API UClass* Z_Construct_UClass_USOTS_AIPerceptionConfig_NoRegister();
SOTS_AIPERCEPTION_API UEnum* Z_Construct_UEnum_SOTS_AIPerception_ESOTS_PerceptionState();
SOTS_AIPERCEPTION_API UFunction* Z_Construct_UDelegateFunction_USOTS_AIPerceptionComponent_SOTS_OnPerceptionStateChanged__DelegateSignature();
SOTS_AIPERCEPTION_API UFunction* Z_Construct_UDelegateFunction_USOTS_AIPerceptionComponent_SOTS_OnTargetPerceptionChanged__DelegateSignature();
SOTS_AIPERCEPTION_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_PerceivedTargetState();
UPackage* Z_Construct_UPackage__Script_SOTS_AIPerception();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FSOTS_OnPerceptionStateChanged ****************************************
struct Z_Construct_UDelegateFunction_USOTS_AIPerceptionComponent_SOTS_OnPerceptionStateChanged__DelegateSignature_Statics
{
	struct SOTS_AIPerceptionComponent_eventSOTS_OnPerceptionStateChanged_Parms
	{
		ESOTS_PerceptionState NewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- EVENTS ---\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- EVENTS ---" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Delegate FSOTS_OnPerceptionStateChanged constinit property declarations ********
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FSOTS_OnPerceptionStateChanged constinit property declarations **********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FSOTS_OnPerceptionStateChanged Property Definitions *******************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_USOTS_AIPerceptionComponent_SOTS_OnPerceptionStateChanged__DelegateSignature_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_USOTS_AIPerceptionComponent_SOTS_OnPerceptionStateChanged__DelegateSignature_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AIPerceptionComponent_eventSOTS_OnPerceptionStateChanged_Parms, NewState), Z_Construct_UEnum_SOTS_AIPerception_ESOTS_PerceptionState, METADATA_PARAMS(0, nullptr) }; // 238031394
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USOTS_AIPerceptionComponent_SOTS_OnPerceptionStateChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USOTS_AIPerceptionComponent_SOTS_OnPerceptionStateChanged__DelegateSignature_Statics::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USOTS_AIPerceptionComponent_SOTS_OnPerceptionStateChanged__DelegateSignature_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USOTS_AIPerceptionComponent_SOTS_OnPerceptionStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FSOTS_OnPerceptionStateChanged Property Definitions *********************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_USOTS_AIPerceptionComponent_SOTS_OnPerceptionStateChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_AIPerceptionComponent, nullptr, "SOTS_OnPerceptionStateChanged__DelegateSignature", 	Z_Construct_UDelegateFunction_USOTS_AIPerceptionComponent_SOTS_OnPerceptionStateChanged__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USOTS_AIPerceptionComponent_SOTS_OnPerceptionStateChanged__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_USOTS_AIPerceptionComponent_SOTS_OnPerceptionStateChanged__DelegateSignature_Statics::SOTS_AIPerceptionComponent_eventSOTS_OnPerceptionStateChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USOTS_AIPerceptionComponent_SOTS_OnPerceptionStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_USOTS_AIPerceptionComponent_SOTS_OnPerceptionStateChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_USOTS_AIPerceptionComponent_SOTS_OnPerceptionStateChanged__DelegateSignature_Statics::SOTS_AIPerceptionComponent_eventSOTS_OnPerceptionStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_USOTS_AIPerceptionComponent_SOTS_OnPerceptionStateChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USOTS_AIPerceptionComponent_SOTS_OnPerceptionStateChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void USOTS_AIPerceptionComponent::FSOTS_OnPerceptionStateChanged_DelegateWrapper(const FMulticastScriptDelegate& SOTS_OnPerceptionStateChanged, ESOTS_PerceptionState NewState)
{
	struct SOTS_AIPerceptionComponent_eventSOTS_OnPerceptionStateChanged_Parms
	{
		ESOTS_PerceptionState NewState;
	};
	SOTS_AIPerceptionComponent_eventSOTS_OnPerceptionStateChanged_Parms Parms;
	Parms.NewState=NewState;
	SOTS_OnPerceptionStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FSOTS_OnPerceptionStateChanged ******************************************

// ********** Begin Delegate FSOTS_OnTargetPerceptionChanged ***************************************
struct Z_Construct_UDelegateFunction_USOTS_AIPerceptionComponent_SOTS_OnTargetPerceptionChanged__DelegateSignature_Statics
{
	struct SOTS_AIPerceptionComponent_eventSOTS_OnTargetPerceptionChanged_Parms
	{
		AActor* Target;
		ESOTS_PerceptionState NewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FSOTS_OnTargetPerceptionChanged constinit property declarations *******
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FSOTS_OnTargetPerceptionChanged constinit property declarations *********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FSOTS_OnTargetPerceptionChanged Property Definitions ******************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_USOTS_AIPerceptionComponent_SOTS_OnTargetPerceptionChanged__DelegateSignature_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AIPerceptionComponent_eventSOTS_OnTargetPerceptionChanged_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_USOTS_AIPerceptionComponent_SOTS_OnTargetPerceptionChanged__DelegateSignature_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_USOTS_AIPerceptionComponent_SOTS_OnTargetPerceptionChanged__DelegateSignature_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AIPerceptionComponent_eventSOTS_OnTargetPerceptionChanged_Parms, NewState), Z_Construct_UEnum_SOTS_AIPerception_ESOTS_PerceptionState, METADATA_PARAMS(0, nullptr) }; // 238031394
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USOTS_AIPerceptionComponent_SOTS_OnTargetPerceptionChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USOTS_AIPerceptionComponent_SOTS_OnTargetPerceptionChanged__DelegateSignature_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USOTS_AIPerceptionComponent_SOTS_OnTargetPerceptionChanged__DelegateSignature_Statics::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USOTS_AIPerceptionComponent_SOTS_OnTargetPerceptionChanged__DelegateSignature_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USOTS_AIPerceptionComponent_SOTS_OnTargetPerceptionChanged__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FSOTS_OnTargetPerceptionChanged Property Definitions ********************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_USOTS_AIPerceptionComponent_SOTS_OnTargetPerceptionChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_AIPerceptionComponent, nullptr, "SOTS_OnTargetPerceptionChanged__DelegateSignature", 	Z_Construct_UDelegateFunction_USOTS_AIPerceptionComponent_SOTS_OnTargetPerceptionChanged__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USOTS_AIPerceptionComponent_SOTS_OnTargetPerceptionChanged__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_USOTS_AIPerceptionComponent_SOTS_OnTargetPerceptionChanged__DelegateSignature_Statics::SOTS_AIPerceptionComponent_eventSOTS_OnTargetPerceptionChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USOTS_AIPerceptionComponent_SOTS_OnTargetPerceptionChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_USOTS_AIPerceptionComponent_SOTS_OnTargetPerceptionChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_USOTS_AIPerceptionComponent_SOTS_OnTargetPerceptionChanged__DelegateSignature_Statics::SOTS_AIPerceptionComponent_eventSOTS_OnTargetPerceptionChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_USOTS_AIPerceptionComponent_SOTS_OnTargetPerceptionChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USOTS_AIPerceptionComponent_SOTS_OnTargetPerceptionChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void USOTS_AIPerceptionComponent::FSOTS_OnTargetPerceptionChanged_DelegateWrapper(const FMulticastScriptDelegate& SOTS_OnTargetPerceptionChanged, AActor* Target, ESOTS_PerceptionState NewState)
{
	struct SOTS_AIPerceptionComponent_eventSOTS_OnTargetPerceptionChanged_Parms
	{
		AActor* Target;
		ESOTS_PerceptionState NewState;
	};
	SOTS_AIPerceptionComponent_eventSOTS_OnTargetPerceptionChanged_Parms Parms;
	Parms.Target=Target;
	Parms.NewState=NewState;
	SOTS_OnTargetPerceptionChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FSOTS_OnTargetPerceptionChanged *****************************************

// ********** Begin Class USOTS_AIPerceptionComponent Function ForceAlertToLocation ****************
struct Z_Construct_UFunction_USOTS_AIPerceptionComponent_ForceAlertToLocation_Statics
{
	struct SOTS_AIPerceptionComponent_eventForceAlertToLocation_Parms
	{
		FVector Location;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Perception" },
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ForceAlertToLocation constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ForceAlertToLocation constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ForceAlertToLocation Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_AIPerceptionComponent_ForceAlertToLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AIPerceptionComponent_eventForceAlertToLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_AIPerceptionComponent_ForceAlertToLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AIPerceptionComponent_ForceAlertToLocation_Statics::NewProp_Location,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AIPerceptionComponent_ForceAlertToLocation_Statics::PropPointers) < 2048);
// ********** End Function ForceAlertToLocation Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_AIPerceptionComponent_ForceAlertToLocation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_AIPerceptionComponent, nullptr, "ForceAlertToLocation", 	Z_Construct_UFunction_USOTS_AIPerceptionComponent_ForceAlertToLocation_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AIPerceptionComponent_ForceAlertToLocation_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_AIPerceptionComponent_ForceAlertToLocation_Statics::SOTS_AIPerceptionComponent_eventForceAlertToLocation_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AIPerceptionComponent_ForceAlertToLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_AIPerceptionComponent_ForceAlertToLocation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_AIPerceptionComponent_ForceAlertToLocation_Statics::SOTS_AIPerceptionComponent_eventForceAlertToLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_AIPerceptionComponent_ForceAlertToLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_AIPerceptionComponent_ForceAlertToLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_AIPerceptionComponent::execForceAlertToLocation)
{
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ForceAlertToLocation(Z_Param_Location);
	P_NATIVE_END;
}
// ********** End Class USOTS_AIPerceptionComponent Function ForceAlertToLocation ******************

// ********** Begin Class USOTS_AIPerceptionComponent Function ForceForgetTarget *******************
struct Z_Construct_UFunction_USOTS_AIPerceptionComponent_ForceForgetTarget_Statics
{
	struct SOTS_AIPerceptionComponent_eventForceForgetTarget_Parms
	{
		AActor* Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Perception" },
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ForceForgetTarget constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ForceForgetTarget constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ForceForgetTarget Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_AIPerceptionComponent_ForceForgetTarget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AIPerceptionComponent_eventForceForgetTarget_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_AIPerceptionComponent_ForceForgetTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AIPerceptionComponent_ForceForgetTarget_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AIPerceptionComponent_ForceForgetTarget_Statics::PropPointers) < 2048);
// ********** End Function ForceForgetTarget Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_AIPerceptionComponent_ForceForgetTarget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_AIPerceptionComponent, nullptr, "ForceForgetTarget", 	Z_Construct_UFunction_USOTS_AIPerceptionComponent_ForceForgetTarget_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AIPerceptionComponent_ForceForgetTarget_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_AIPerceptionComponent_ForceForgetTarget_Statics::SOTS_AIPerceptionComponent_eventForceForgetTarget_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AIPerceptionComponent_ForceForgetTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_AIPerceptionComponent_ForceForgetTarget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_AIPerceptionComponent_ForceForgetTarget_Statics::SOTS_AIPerceptionComponent_eventForceForgetTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_AIPerceptionComponent_ForceForgetTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_AIPerceptionComponent_ForceForgetTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_AIPerceptionComponent::execForceForgetTarget)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ForceForgetTarget(Z_Param_Target);
	P_NATIVE_END;
}
// ********** End Class USOTS_AIPerceptionComponent Function ForceForgetTarget *********************

// ********** Begin Class USOTS_AIPerceptionComponent Function GetAwarenessForTarget ***************
struct Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetAwarenessForTarget_Statics
{
	struct SOTS_AIPerceptionComponent_eventGetAwarenessForTarget_Parms
	{
		AActor* Target;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Perception" },
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAwarenessForTarget constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAwarenessForTarget constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAwarenessForTarget Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetAwarenessForTarget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AIPerceptionComponent_eventGetAwarenessForTarget_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetAwarenessForTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AIPerceptionComponent_eventGetAwarenessForTarget_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetAwarenessForTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetAwarenessForTarget_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetAwarenessForTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetAwarenessForTarget_Statics::PropPointers) < 2048);
// ********** End Function GetAwarenessForTarget Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetAwarenessForTarget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_AIPerceptionComponent, nullptr, "GetAwarenessForTarget", 	Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetAwarenessForTarget_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetAwarenessForTarget_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetAwarenessForTarget_Statics::SOTS_AIPerceptionComponent_eventGetAwarenessForTarget_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetAwarenessForTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetAwarenessForTarget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetAwarenessForTarget_Statics::SOTS_AIPerceptionComponent_eventGetAwarenessForTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetAwarenessForTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetAwarenessForTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_AIPerceptionComponent::execGetAwarenessForTarget)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAwarenessForTarget(Z_Param_Target);
	P_NATIVE_END;
}
// ********** End Class USOTS_AIPerceptionComponent Function GetAwarenessForTarget *****************

// ********** Begin Class USOTS_AIPerceptionComponent Function GetCurrentPerceptionState ***********
struct Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetCurrentPerceptionState_Statics
{
	struct SOTS_AIPerceptionComponent_eventGetCurrentPerceptionState_Parms
	{
		ESOTS_PerceptionState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Perception" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Core API ---\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Core API ---" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentPerceptionState constinit property declarations *************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentPerceptionState constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentPerceptionState Property Definitions ************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetCurrentPerceptionState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetCurrentPerceptionState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AIPerceptionComponent_eventGetCurrentPerceptionState_Parms, ReturnValue), Z_Construct_UEnum_SOTS_AIPerception_ESOTS_PerceptionState, METADATA_PARAMS(0, nullptr) }; // 238031394
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetCurrentPerceptionState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetCurrentPerceptionState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetCurrentPerceptionState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetCurrentPerceptionState_Statics::PropPointers) < 2048);
// ********** End Function GetCurrentPerceptionState Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetCurrentPerceptionState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_AIPerceptionComponent, nullptr, "GetCurrentPerceptionState", 	Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetCurrentPerceptionState_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetCurrentPerceptionState_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetCurrentPerceptionState_Statics::SOTS_AIPerceptionComponent_eventGetCurrentPerceptionState_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetCurrentPerceptionState_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetCurrentPerceptionState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetCurrentPerceptionState_Statics::SOTS_AIPerceptionComponent_eventGetCurrentPerceptionState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetCurrentPerceptionState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetCurrentPerceptionState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_AIPerceptionComponent::execGetCurrentPerceptionState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESOTS_PerceptionState*)Z_Param__Result=P_THIS->GetCurrentPerceptionState();
	P_NATIVE_END;
}
// ********** End Class USOTS_AIPerceptionComponent Function GetCurrentPerceptionState *************

// ********** Begin Class USOTS_AIPerceptionComponent Function GetCurrentSuspicion01 ***************
struct Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetCurrentSuspicion01_Statics
{
	struct SOTS_AIPerceptionComponent_eventGetCurrentSuspicion01_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Normalized suspicion value [0,1] for this guard.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Normalized suspicion value [0,1] for this guard." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentSuspicion01 constinit property declarations *****************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentSuspicion01 constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentSuspicion01 Property Definitions ****************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetCurrentSuspicion01_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AIPerceptionComponent_eventGetCurrentSuspicion01_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetCurrentSuspicion01_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetCurrentSuspicion01_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetCurrentSuspicion01_Statics::PropPointers) < 2048);
// ********** End Function GetCurrentSuspicion01 Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetCurrentSuspicion01_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_AIPerceptionComponent, nullptr, "GetCurrentSuspicion01", 	Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetCurrentSuspicion01_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetCurrentSuspicion01_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetCurrentSuspicion01_Statics::SOTS_AIPerceptionComponent_eventGetCurrentSuspicion01_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetCurrentSuspicion01_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetCurrentSuspicion01_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetCurrentSuspicion01_Statics::SOTS_AIPerceptionComponent_eventGetCurrentSuspicion01_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetCurrentSuspicion01()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetCurrentSuspicion01_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_AIPerceptionComponent::execGetCurrentSuspicion01)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCurrentSuspicion01();
	P_NATIVE_END;
}
// ********** End Class USOTS_AIPerceptionComponent Function GetCurrentSuspicion01 *****************

// ********** Begin Class USOTS_AIPerceptionComponent Function GetTargetState **********************
struct Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetTargetState_Statics
{
	struct SOTS_AIPerceptionComponent_eventGetTargetState_Parms
	{
		AActor* Target;
		bool bFound;
		FSOTS_PerceivedTargetState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Perception" },
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetTargetState constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static void NewProp_bFound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFound;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTargetState constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTargetState Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetTargetState_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AIPerceptionComponent_eventGetTargetState_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetTargetState_Statics::NewProp_bFound_SetBit(void* Obj)
{
	((SOTS_AIPerceptionComponent_eventGetTargetState_Parms*)Obj)->bFound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetTargetState_Statics::NewProp_bFound = { "bFound", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_AIPerceptionComponent_eventGetTargetState_Parms), &Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetTargetState_Statics::NewProp_bFound_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetTargetState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AIPerceptionComponent_eventGetTargetState_Parms, ReturnValue), Z_Construct_UScriptStruct_FSOTS_PerceivedTargetState, METADATA_PARAMS(0, nullptr) }; // 3791564001
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetTargetState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetTargetState_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetTargetState_Statics::NewProp_bFound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetTargetState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetTargetState_Statics::PropPointers) < 2048);
// ********** End Function GetTargetState Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetTargetState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_AIPerceptionComponent, nullptr, "GetTargetState", 	Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetTargetState_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetTargetState_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetTargetState_Statics::SOTS_AIPerceptionComponent_eventGetTargetState_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetTargetState_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetTargetState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetTargetState_Statics::SOTS_AIPerceptionComponent_eventGetTargetState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetTargetState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetTargetState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_AIPerceptionComponent::execGetTargetState)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_UBOOL_REF(Z_Param_Out_bFound);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSOTS_PerceivedTargetState*)Z_Param__Result=P_THIS->GetTargetState(Z_Param_Target,Z_Param_Out_bFound);
	P_NATIVE_END;
}
// ********** End Class USOTS_AIPerceptionComponent Function GetTargetState ************************

// ********** Begin Class USOTS_AIPerceptionComponent Function HasLineOfSightToTarget **************
struct Z_Construct_UFunction_USOTS_AIPerceptionComponent_HasLineOfSightToTarget_Statics
{
	struct SOTS_AIPerceptionComponent_eventHasLineOfSightToTarget_Parms
	{
		AActor* Target;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Perception" },
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HasLineOfSightToTarget constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasLineOfSightToTarget constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasLineOfSightToTarget Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_AIPerceptionComponent_HasLineOfSightToTarget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AIPerceptionComponent_eventHasLineOfSightToTarget_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USOTS_AIPerceptionComponent_HasLineOfSightToTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_AIPerceptionComponent_eventHasLineOfSightToTarget_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_AIPerceptionComponent_HasLineOfSightToTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_AIPerceptionComponent_eventHasLineOfSightToTarget_Parms), &Z_Construct_UFunction_USOTS_AIPerceptionComponent_HasLineOfSightToTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_AIPerceptionComponent_HasLineOfSightToTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AIPerceptionComponent_HasLineOfSightToTarget_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AIPerceptionComponent_HasLineOfSightToTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AIPerceptionComponent_HasLineOfSightToTarget_Statics::PropPointers) < 2048);
// ********** End Function HasLineOfSightToTarget Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_AIPerceptionComponent_HasLineOfSightToTarget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_AIPerceptionComponent, nullptr, "HasLineOfSightToTarget", 	Z_Construct_UFunction_USOTS_AIPerceptionComponent_HasLineOfSightToTarget_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AIPerceptionComponent_HasLineOfSightToTarget_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_AIPerceptionComponent_HasLineOfSightToTarget_Statics::SOTS_AIPerceptionComponent_eventHasLineOfSightToTarget_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AIPerceptionComponent_HasLineOfSightToTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_AIPerceptionComponent_HasLineOfSightToTarget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_AIPerceptionComponent_HasLineOfSightToTarget_Statics::SOTS_AIPerceptionComponent_eventHasLineOfSightToTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_AIPerceptionComponent_HasLineOfSightToTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_AIPerceptionComponent_HasLineOfSightToTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_AIPerceptionComponent::execHasLineOfSightToTarget)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasLineOfSightToTarget(Z_Param_Target);
	P_NATIVE_END;
}
// ********** End Class USOTS_AIPerceptionComponent Function HasLineOfSightToTarget ****************

// ********** Begin Class USOTS_AIPerceptionComponent Function ReportAlertStateChanged *************
struct Z_Construct_UFunction_USOTS_AIPerceptionComponent_ReportAlertStateChanged_Statics
{
	struct SOTS_AIPerceptionComponent_eventReportAlertStateChanged_Parms
	{
		bool bAlertedNow;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Perception" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Notifies the GlobalStealthManager when this guard toggles Alerted.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Notifies the GlobalStealthManager when this guard toggles Alerted." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ReportAlertStateChanged constinit property declarations ***************
	static void NewProp_bAlertedNow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlertedNow;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReportAlertStateChanged constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReportAlertStateChanged Property Definitions **************************
void Z_Construct_UFunction_USOTS_AIPerceptionComponent_ReportAlertStateChanged_Statics::NewProp_bAlertedNow_SetBit(void* Obj)
{
	((SOTS_AIPerceptionComponent_eventReportAlertStateChanged_Parms*)Obj)->bAlertedNow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_AIPerceptionComponent_ReportAlertStateChanged_Statics::NewProp_bAlertedNow = { "bAlertedNow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_AIPerceptionComponent_eventReportAlertStateChanged_Parms), &Z_Construct_UFunction_USOTS_AIPerceptionComponent_ReportAlertStateChanged_Statics::NewProp_bAlertedNow_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_AIPerceptionComponent_ReportAlertStateChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AIPerceptionComponent_ReportAlertStateChanged_Statics::NewProp_bAlertedNow,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AIPerceptionComponent_ReportAlertStateChanged_Statics::PropPointers) < 2048);
// ********** End Function ReportAlertStateChanged Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_AIPerceptionComponent_ReportAlertStateChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_AIPerceptionComponent, nullptr, "ReportAlertStateChanged", 	Z_Construct_UFunction_USOTS_AIPerceptionComponent_ReportAlertStateChanged_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AIPerceptionComponent_ReportAlertStateChanged_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_AIPerceptionComponent_ReportAlertStateChanged_Statics::SOTS_AIPerceptionComponent_eventReportAlertStateChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AIPerceptionComponent_ReportAlertStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_AIPerceptionComponent_ReportAlertStateChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_AIPerceptionComponent_ReportAlertStateChanged_Statics::SOTS_AIPerceptionComponent_eventReportAlertStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_AIPerceptionComponent_ReportAlertStateChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_AIPerceptionComponent_ReportAlertStateChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_AIPerceptionComponent::execReportAlertStateChanged)
{
	P_GET_UBOOL(Z_Param_bAlertedNow);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReportAlertStateChanged(Z_Param_bAlertedNow);
	P_NATIVE_END;
}
// ********** End Class USOTS_AIPerceptionComponent Function ReportAlertStateChanged ***************

// ********** Begin Class USOTS_AIPerceptionComponent Function ReportDetectionLevelChanged *********
struct Z_Construct_UFunction_USOTS_AIPerceptionComponent_ReportDetectionLevelChanged_Statics
{
	struct SOTS_AIPerceptionComponent_eventReportDetectionLevelChanged_Parms
	{
		ESOTS_PerceptionState NewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Perception" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Public hook for DevTools and other systems to report perception state\n     * changes without re-implementing TagManager/GSM wiring.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Public hook for DevTools and other systems to report perception state\nchanges without re-implementing TagManager/GSM wiring." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ReportDetectionLevelChanged constinit property declarations ***********
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReportDetectionLevelChanged constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReportDetectionLevelChanged Property Definitions **********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USOTS_AIPerceptionComponent_ReportDetectionLevelChanged_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USOTS_AIPerceptionComponent_ReportDetectionLevelChanged_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AIPerceptionComponent_eventReportDetectionLevelChanged_Parms, NewState), Z_Construct_UEnum_SOTS_AIPerception_ESOTS_PerceptionState, METADATA_PARAMS(0, nullptr) }; // 238031394
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_AIPerceptionComponent_ReportDetectionLevelChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AIPerceptionComponent_ReportDetectionLevelChanged_Statics::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AIPerceptionComponent_ReportDetectionLevelChanged_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AIPerceptionComponent_ReportDetectionLevelChanged_Statics::PropPointers) < 2048);
// ********** End Function ReportDetectionLevelChanged Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_AIPerceptionComponent_ReportDetectionLevelChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_AIPerceptionComponent, nullptr, "ReportDetectionLevelChanged", 	Z_Construct_UFunction_USOTS_AIPerceptionComponent_ReportDetectionLevelChanged_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AIPerceptionComponent_ReportDetectionLevelChanged_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_AIPerceptionComponent_ReportDetectionLevelChanged_Statics::SOTS_AIPerceptionComponent_eventReportDetectionLevelChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AIPerceptionComponent_ReportDetectionLevelChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_AIPerceptionComponent_ReportDetectionLevelChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_AIPerceptionComponent_ReportDetectionLevelChanged_Statics::SOTS_AIPerceptionComponent_eventReportDetectionLevelChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_AIPerceptionComponent_ReportDetectionLevelChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_AIPerceptionComponent_ReportDetectionLevelChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_AIPerceptionComponent::execReportDetectionLevelChanged)
{
	P_GET_ENUM(ESOTS_PerceptionState,Z_Param_NewState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReportDetectionLevelChanged(ESOTS_PerceptionState(Z_Param_NewState));
	P_NATIVE_END;
}
// ********** End Class USOTS_AIPerceptionComponent Function ReportDetectionLevelChanged ***********

// ********** Begin Class USOTS_AIPerceptionComponent Function SuppressPerceptionForDuration *******
struct Z_Construct_UFunction_USOTS_AIPerceptionComponent_SuppressPerceptionForDuration_Statics
{
	struct SOTS_AIPerceptionComponent_eventSuppressPerceptionForDuration_Parms
	{
		float Seconds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Perception" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- SCRIPTED CONTROL ---\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- SCRIPTED CONTROL ---" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SuppressPerceptionForDuration constinit property declarations *********
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Seconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SuppressPerceptionForDuration constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SuppressPerceptionForDuration Property Definitions ********************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USOTS_AIPerceptionComponent_SuppressPerceptionForDuration_Statics::NewProp_Seconds = { "Seconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AIPerceptionComponent_eventSuppressPerceptionForDuration_Parms, Seconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_AIPerceptionComponent_SuppressPerceptionForDuration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AIPerceptionComponent_SuppressPerceptionForDuration_Statics::NewProp_Seconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AIPerceptionComponent_SuppressPerceptionForDuration_Statics::PropPointers) < 2048);
// ********** End Function SuppressPerceptionForDuration Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_AIPerceptionComponent_SuppressPerceptionForDuration_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_AIPerceptionComponent, nullptr, "SuppressPerceptionForDuration", 	Z_Construct_UFunction_USOTS_AIPerceptionComponent_SuppressPerceptionForDuration_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AIPerceptionComponent_SuppressPerceptionForDuration_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_AIPerceptionComponent_SuppressPerceptionForDuration_Statics::SOTS_AIPerceptionComponent_eventSuppressPerceptionForDuration_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AIPerceptionComponent_SuppressPerceptionForDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_AIPerceptionComponent_SuppressPerceptionForDuration_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_AIPerceptionComponent_SuppressPerceptionForDuration_Statics::SOTS_AIPerceptionComponent_eventSuppressPerceptionForDuration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_AIPerceptionComponent_SuppressPerceptionForDuration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_AIPerceptionComponent_SuppressPerceptionForDuration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_AIPerceptionComponent::execSuppressPerceptionForDuration)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Seconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SuppressPerceptionForDuration(Z_Param_Seconds);
	P_NATIVE_END;
}
// ********** End Class USOTS_AIPerceptionComponent Function SuppressPerceptionForDuration *********

// ********** Begin Class USOTS_AIPerceptionComponent **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_AIPerceptionComponent;
UClass* USOTS_AIPerceptionComponent::GetPrivateStaticClass()
{
	using TClass = USOTS_AIPerceptionComponent;
	if (!Z_Registration_Info_UClass_USOTS_AIPerceptionComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_AIPerceptionComponent"),
			Z_Registration_Info_UClass_USOTS_AIPerceptionComponent.InnerSingleton,
			StaticRegisterNativesUSOTS_AIPerceptionComponent,
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
	return Z_Registration_Info_UClass_USOTS_AIPerceptionComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_AIPerceptionComponent_NoRegister()
{
	return USOTS_AIPerceptionComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_AIPerceptionComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "SOTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Per-AI perception component. Tracks awareness of important targets\n * (player, dragon, etc.) and exposes a simple state machine for BT/BAT.\n */" },
#endif
		{ "IncludePath", "SOTS_AIPerceptionComponent.h" },
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Per-AI perception component. Tracks awareness of important targets\n(player, dragon, etc.) and exposes a simple state machine for BT/BAT." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerceptionConfig_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- CONFIG ---\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- CONFIG ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GuardConfig_MetaData[] = {
		{ "Category", "SOTS|AI" },
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WatchedActorClasses_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Classes this AI should track (Player, Dragon, etc.).\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Classes this AI should track (Player, Dragon, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerceptionUpdateInterval_MetaData[] = {
		{ "Category", "Config" },
		{ "ClampMin", "0.01" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Perception update interval (seconds). Kept separate from Tick.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Perception update interval (seconds). Kept separate from Tick." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[] = {
		{ "Category", "State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- RUNTIME STATE (READ-ONLY) ---\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- RUNTIME STATE (READ-ONLY) ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPerceptionStateChanged_MetaData[] = {
		{ "Category", "SOTS|Perception" },
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTargetPerceptionChanged_MetaData[] = {
		{ "Category", "SOTS|Perception" },
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WatchedActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetStates_MetaData[] = {
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviousState_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Last perception state observed for this guard. Used to detect\n// transitions and drive optional FX cues.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Last perception state observed for this guard. Used to detect\ntransitions and drive optional FX cues." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugSuspicion_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SOTS|AI|Debug" },
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StealthCurveCached_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cached curve pointer for stealth detection multiplier.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cached curve pointer for stealth detection multiplier." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_AIPerceptionComponent constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PerceptionConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GuardConfig;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WatchedActorClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WatchedActorClasses;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PerceptionUpdateInterval;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPerceptionStateChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTargetPerceptionChanged;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_WatchedActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WatchedActors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetStates_ValueProp;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_TargetStates_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TargetStates;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PreviousState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PreviousState;
	static void NewProp_bDebugSuspicion_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugSuspicion;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StealthCurveCached;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USOTS_AIPerceptionComponent constinit property declarations ****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ForceAlertToLocation"), .Pointer = &USOTS_AIPerceptionComponent::execForceAlertToLocation },
		{ .NameUTF8 = UTF8TEXT("ForceForgetTarget"), .Pointer = &USOTS_AIPerceptionComponent::execForceForgetTarget },
		{ .NameUTF8 = UTF8TEXT("GetAwarenessForTarget"), .Pointer = &USOTS_AIPerceptionComponent::execGetAwarenessForTarget },
		{ .NameUTF8 = UTF8TEXT("GetCurrentPerceptionState"), .Pointer = &USOTS_AIPerceptionComponent::execGetCurrentPerceptionState },
		{ .NameUTF8 = UTF8TEXT("GetCurrentSuspicion01"), .Pointer = &USOTS_AIPerceptionComponent::execGetCurrentSuspicion01 },
		{ .NameUTF8 = UTF8TEXT("GetTargetState"), .Pointer = &USOTS_AIPerceptionComponent::execGetTargetState },
		{ .NameUTF8 = UTF8TEXT("HasLineOfSightToTarget"), .Pointer = &USOTS_AIPerceptionComponent::execHasLineOfSightToTarget },
		{ .NameUTF8 = UTF8TEXT("ReportAlertStateChanged"), .Pointer = &USOTS_AIPerceptionComponent::execReportAlertStateChanged },
		{ .NameUTF8 = UTF8TEXT("ReportDetectionLevelChanged"), .Pointer = &USOTS_AIPerceptionComponent::execReportDetectionLevelChanged },
		{ .NameUTF8 = UTF8TEXT("SuppressPerceptionForDuration"), .Pointer = &USOTS_AIPerceptionComponent::execSuppressPerceptionForDuration },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USOTS_AIPerceptionComponent_ForceAlertToLocation, "ForceAlertToLocation" }, // 3065647975
		{ &Z_Construct_UFunction_USOTS_AIPerceptionComponent_ForceForgetTarget, "ForceForgetTarget" }, // 2652334581
		{ &Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetAwarenessForTarget, "GetAwarenessForTarget" }, // 2191396298
		{ &Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetCurrentPerceptionState, "GetCurrentPerceptionState" }, // 1060659070
		{ &Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetCurrentSuspicion01, "GetCurrentSuspicion01" }, // 3528324031
		{ &Z_Construct_UFunction_USOTS_AIPerceptionComponent_GetTargetState, "GetTargetState" }, // 2635652341
		{ &Z_Construct_UFunction_USOTS_AIPerceptionComponent_HasLineOfSightToTarget, "HasLineOfSightToTarget" }, // 705123834
		{ &Z_Construct_UFunction_USOTS_AIPerceptionComponent_ReportAlertStateChanged, "ReportAlertStateChanged" }, // 4149026343
		{ &Z_Construct_UFunction_USOTS_AIPerceptionComponent_ReportDetectionLevelChanged, "ReportDetectionLevelChanged" }, // 13670294
		{ &Z_Construct_UDelegateFunction_USOTS_AIPerceptionComponent_SOTS_OnPerceptionStateChanged__DelegateSignature, "SOTS_OnPerceptionStateChanged__DelegateSignature" }, // 4133123801
		{ &Z_Construct_UDelegateFunction_USOTS_AIPerceptionComponent_SOTS_OnTargetPerceptionChanged__DelegateSignature, "SOTS_OnTargetPerceptionChanged__DelegateSignature" }, // 1999311413
		{ &Z_Construct_UFunction_USOTS_AIPerceptionComponent_SuppressPerceptionForDuration, "SuppressPerceptionForDuration" }, // 2269768039
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_AIPerceptionComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_AIPerceptionComponent_Statics

// ********** Begin Class USOTS_AIPerceptionComponent Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USOTS_AIPerceptionComponent_Statics::NewProp_PerceptionConfig = { "PerceptionConfig", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AIPerceptionComponent, PerceptionConfig), Z_Construct_UClass_USOTS_AIPerceptionConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerceptionConfig_MetaData), NewProp_PerceptionConfig_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USOTS_AIPerceptionComponent_Statics::NewProp_GuardConfig = { "GuardConfig", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AIPerceptionComponent, GuardConfig), Z_Construct_UClass_USOTS_AIGuardPerceptionDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GuardConfig_MetaData), NewProp_GuardConfig_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USOTS_AIPerceptionComponent_Statics::NewProp_WatchedActorClasses_Inner = { "WatchedActorClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USOTS_AIPerceptionComponent_Statics::NewProp_WatchedActorClasses = { "WatchedActorClasses", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AIPerceptionComponent, WatchedActorClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WatchedActorClasses_MetaData), NewProp_WatchedActorClasses_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USOTS_AIPerceptionComponent_Statics::NewProp_PerceptionUpdateInterval = { "PerceptionUpdateInterval", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AIPerceptionComponent, PerceptionUpdateInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerceptionUpdateInterval_MetaData), NewProp_PerceptionUpdateInterval_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USOTS_AIPerceptionComponent_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USOTS_AIPerceptionComponent_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AIPerceptionComponent, CurrentState), Z_Construct_UEnum_SOTS_AIPerception_ESOTS_PerceptionState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentState_MetaData), NewProp_CurrentState_MetaData) }; // 238031394
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USOTS_AIPerceptionComponent_Statics::NewProp_OnPerceptionStateChanged = { "OnPerceptionStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AIPerceptionComponent, OnPerceptionStateChanged), Z_Construct_UDelegateFunction_USOTS_AIPerceptionComponent_SOTS_OnPerceptionStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPerceptionStateChanged_MetaData), NewProp_OnPerceptionStateChanged_MetaData) }; // 4133123801
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USOTS_AIPerceptionComponent_Statics::NewProp_OnTargetPerceptionChanged = { "OnTargetPerceptionChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AIPerceptionComponent, OnTargetPerceptionChanged), Z_Construct_UDelegateFunction_USOTS_AIPerceptionComponent_SOTS_OnTargetPerceptionChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTargetPerceptionChanged_MetaData), NewProp_OnTargetPerceptionChanged_MetaData) }; // 1999311413
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USOTS_AIPerceptionComponent_Statics::NewProp_WatchedActors_Inner = { "WatchedActors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USOTS_AIPerceptionComponent_Statics::NewProp_WatchedActors = { "WatchedActors", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AIPerceptionComponent, WatchedActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WatchedActors_MetaData), NewProp_WatchedActors_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_AIPerceptionComponent_Statics::NewProp_TargetStates_ValueProp = { "TargetStates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSOTS_PerceivedTargetState, METADATA_PARAMS(0, nullptr) }; // 3791564001
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USOTS_AIPerceptionComponent_Statics::NewProp_TargetStates_Key_KeyProp = { "TargetStates_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USOTS_AIPerceptionComponent_Statics::NewProp_TargetStates = { "TargetStates", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AIPerceptionComponent, TargetStates), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetStates_MetaData), NewProp_TargetStates_MetaData) }; // 3791564001
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USOTS_AIPerceptionComponent_Statics::NewProp_PreviousState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USOTS_AIPerceptionComponent_Statics::NewProp_PreviousState = { "PreviousState", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AIPerceptionComponent, PreviousState), Z_Construct_UEnum_SOTS_AIPerception_ESOTS_PerceptionState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviousState_MetaData), NewProp_PreviousState_MetaData) }; // 238031394
void Z_Construct_UClass_USOTS_AIPerceptionComponent_Statics::NewProp_bDebugSuspicion_SetBit(void* Obj)
{
	((USOTS_AIPerceptionComponent*)Obj)->bDebugSuspicion = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USOTS_AIPerceptionComponent_Statics::NewProp_bDebugSuspicion = { "bDebugSuspicion", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USOTS_AIPerceptionComponent), &Z_Construct_UClass_USOTS_AIPerceptionComponent_Statics::NewProp_bDebugSuspicion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugSuspicion_MetaData), NewProp_bDebugSuspicion_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USOTS_AIPerceptionComponent_Statics::NewProp_StealthCurveCached = { "StealthCurveCached", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_AIPerceptionComponent, StealthCurveCached), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StealthCurveCached_MetaData), NewProp_StealthCurveCached_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USOTS_AIPerceptionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AIPerceptionComponent_Statics::NewProp_PerceptionConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AIPerceptionComponent_Statics::NewProp_GuardConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AIPerceptionComponent_Statics::NewProp_WatchedActorClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AIPerceptionComponent_Statics::NewProp_WatchedActorClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AIPerceptionComponent_Statics::NewProp_PerceptionUpdateInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AIPerceptionComponent_Statics::NewProp_CurrentState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AIPerceptionComponent_Statics::NewProp_CurrentState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AIPerceptionComponent_Statics::NewProp_OnPerceptionStateChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AIPerceptionComponent_Statics::NewProp_OnTargetPerceptionChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AIPerceptionComponent_Statics::NewProp_WatchedActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AIPerceptionComponent_Statics::NewProp_WatchedActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AIPerceptionComponent_Statics::NewProp_TargetStates_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AIPerceptionComponent_Statics::NewProp_TargetStates_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AIPerceptionComponent_Statics::NewProp_TargetStates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AIPerceptionComponent_Statics::NewProp_PreviousState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AIPerceptionComponent_Statics::NewProp_PreviousState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AIPerceptionComponent_Statics::NewProp_bDebugSuspicion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_AIPerceptionComponent_Statics::NewProp_StealthCurveCached,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AIPerceptionComponent_Statics::PropPointers) < 2048);
// ********** End Class USOTS_AIPerceptionComponent Property Definitions ***************************
UObject* (*const Z_Construct_UClass_USOTS_AIPerceptionComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_AIPerception,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AIPerceptionComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_AIPerceptionComponent_Statics::ClassParams = {
	&USOTS_AIPerceptionComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USOTS_AIPerceptionComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AIPerceptionComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AIPerceptionComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_AIPerceptionComponent_Statics::Class_MetaDataParams)
};
void USOTS_AIPerceptionComponent::StaticRegisterNativesUSOTS_AIPerceptionComponent()
{
	UClass* Class = USOTS_AIPerceptionComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USOTS_AIPerceptionComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_USOTS_AIPerceptionComponent()
{
	if (!Z_Registration_Info_UClass_USOTS_AIPerceptionComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_AIPerceptionComponent.OuterSingleton, Z_Construct_UClass_USOTS_AIPerceptionComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_AIPerceptionComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_AIPerceptionComponent);
USOTS_AIPerceptionComponent::~USOTS_AIPerceptionComponent() {}
// ********** End Class USOTS_AIPerceptionComponent ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_AIPerception_Source_SOTS_AIPerception_Public_SOTS_AIPerceptionComponent_h__Script_SOTS_AIPerception_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_AIPerceptionComponent, USOTS_AIPerceptionComponent::StaticClass, TEXT("USOTS_AIPerceptionComponent"), &Z_Registration_Info_UClass_USOTS_AIPerceptionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_AIPerceptionComponent), 2329299607U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_AIPerception_Source_SOTS_AIPerception_Public_SOTS_AIPerceptionComponent_h__Script_SOTS_AIPerception_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_AIPerception_Source_SOTS_AIPerception_Public_SOTS_AIPerceptionComponent_h__Script_SOTS_AIPerception_3056975688{
	TEXT("/Script/SOTS_AIPerception"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_AIPerception_Source_SOTS_AIPerception_Public_SOTS_AIPerceptionComponent_h__Script_SOTS_AIPerception_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_AIPerception_Source_SOTS_AIPerception_Public_SOTS_AIPerceptionComponent_h__Script_SOTS_AIPerception_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
