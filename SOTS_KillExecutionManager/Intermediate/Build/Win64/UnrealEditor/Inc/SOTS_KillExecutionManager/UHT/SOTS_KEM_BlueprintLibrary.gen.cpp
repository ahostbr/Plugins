// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTS_KEM_BlueprintLibrary.h"
#include "ContextualAnimTypes.h"
#include "GameplayTagContainer.h"
#include "SOTS_KEM_Types.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_KEM_BlueprintLibrary() {}

// ********** Begin Cross Module References ********************************************************
CONTEXTUALANIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimSceneBindingContext();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
SOTS_KILLEXECUTIONMANAGER_API UClass* Z_Construct_UClass_USOTS_KEM_BlueprintLibrary();
SOTS_KILLEXECUTIONMANAGER_API UClass* Z_Construct_UClass_USOTS_KEM_BlueprintLibrary_NoRegister();
SOTS_KILLEXECUTIONMANAGER_API UClass* Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_NoRegister();
SOTS_KILLEXECUTIONMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_ExecutionContext();
UPackage* Z_Construct_UPackage__Script_SOTS_KillExecutionManager();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USOTS_KEM_BlueprintLibrary Function KEM_BuildCASBindingContexts **********
struct Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_BuildCASBindingContexts_Statics
{
	struct SOTS_KEM_BlueprintLibrary_eventKEM_BuildCASBindingContexts_Parms
	{
		AActor* Instigator;
		AActor* Target;
		FGameplayTagContainer ContextTags;
		FContextualAnimSceneBindingContext OutInstigatorBinding;
		FContextualAnimSceneBindingContext OutTargetBinding;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KEM|CAS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Helper to build CAS binding contexts with KEM ContextTags injected as ExternalGameplayTags. */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_BlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Helper to build CAS binding contexts with KEM ContextTags injected as ExternalGameplayTags." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function KEM_BuildCASBindingContexts constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContextTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutInstigatorBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutTargetBinding;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function KEM_BuildCASBindingContexts constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function KEM_BuildCASBindingContexts Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_BuildCASBindingContexts_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEM_BlueprintLibrary_eventKEM_BuildCASBindingContexts_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_BuildCASBindingContexts_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEM_BlueprintLibrary_eventKEM_BuildCASBindingContexts_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_BuildCASBindingContexts_Statics::NewProp_ContextTags = { "ContextTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEM_BlueprintLibrary_eventKEM_BuildCASBindingContexts_Parms, ContextTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextTags_MetaData), NewProp_ContextTags_MetaData) }; // 3438578166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_BuildCASBindingContexts_Statics::NewProp_OutInstigatorBinding = { "OutInstigatorBinding", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEM_BlueprintLibrary_eventKEM_BuildCASBindingContexts_Parms, OutInstigatorBinding), Z_Construct_UScriptStruct_FContextualAnimSceneBindingContext, METADATA_PARAMS(0, nullptr) }; // 4109854895
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_BuildCASBindingContexts_Statics::NewProp_OutTargetBinding = { "OutTargetBinding", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEM_BlueprintLibrary_eventKEM_BuildCASBindingContexts_Parms, OutTargetBinding), Z_Construct_UScriptStruct_FContextualAnimSceneBindingContext, METADATA_PARAMS(0, nullptr) }; // 4109854895
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_BuildCASBindingContexts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_BuildCASBindingContexts_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_BuildCASBindingContexts_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_BuildCASBindingContexts_Statics::NewProp_ContextTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_BuildCASBindingContexts_Statics::NewProp_OutInstigatorBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_BuildCASBindingContexts_Statics::NewProp_OutTargetBinding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_BuildCASBindingContexts_Statics::PropPointers) < 2048);
// ********** End Function KEM_BuildCASBindingContexts Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_BuildCASBindingContexts_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_KEM_BlueprintLibrary, nullptr, "KEM_BuildCASBindingContexts", 	Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_BuildCASBindingContexts_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_BuildCASBindingContexts_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_BuildCASBindingContexts_Statics::SOTS_KEM_BlueprintLibrary_eventKEM_BuildCASBindingContexts_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_BuildCASBindingContexts_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_BuildCASBindingContexts_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_BuildCASBindingContexts_Statics::SOTS_KEM_BlueprintLibrary_eventKEM_BuildCASBindingContexts_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_BuildCASBindingContexts()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_BuildCASBindingContexts_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_KEM_BlueprintLibrary::execKEM_BuildCASBindingContexts)
{
	P_GET_OBJECT(AActor,Z_Param_Instigator);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_ContextTags);
	P_GET_STRUCT_REF(FContextualAnimSceneBindingContext,Z_Param_Out_OutInstigatorBinding);
	P_GET_STRUCT_REF(FContextualAnimSceneBindingContext,Z_Param_Out_OutTargetBinding);
	P_FINISH;
	P_NATIVE_BEGIN;
	USOTS_KEM_BlueprintLibrary::KEM_BuildCASBindingContexts(Z_Param_Instigator,Z_Param_Target,Z_Param_Out_ContextTags,Z_Param_Out_OutInstigatorBinding,Z_Param_Out_OutTargetBinding);
	P_NATIVE_END;
}
// ********** End Class USOTS_KEM_BlueprintLibrary Function KEM_BuildCASBindingContexts ************

// ********** Begin Class USOTS_KEM_BlueprintLibrary Function KEM_NotifyExecutionEnded *************
struct Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_NotifyExecutionEnded_Statics
{
	struct SOTS_KEM_BlueprintLibrary_eventKEM_NotifyExecutionEnded_Parms
	{
		const UObject* WorldContextObject;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KEM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Notify KEM that the current execution has finished (success or failure). */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_BlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Notify KEM that the current execution has finished (success or failure)." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function KEM_NotifyExecutionEnded constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function KEM_NotifyExecutionEnded constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function KEM_NotifyExecutionEnded Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_NotifyExecutionEnded_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEM_BlueprintLibrary_eventKEM_NotifyExecutionEnded_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
void Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_NotifyExecutionEnded_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((SOTS_KEM_BlueprintLibrary_eventKEM_NotifyExecutionEnded_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_NotifyExecutionEnded_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_KEM_BlueprintLibrary_eventKEM_NotifyExecutionEnded_Parms), &Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_NotifyExecutionEnded_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_NotifyExecutionEnded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_NotifyExecutionEnded_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_NotifyExecutionEnded_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_NotifyExecutionEnded_Statics::PropPointers) < 2048);
// ********** End Function KEM_NotifyExecutionEnded Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_NotifyExecutionEnded_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_KEM_BlueprintLibrary, nullptr, "KEM_NotifyExecutionEnded", 	Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_NotifyExecutionEnded_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_NotifyExecutionEnded_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_NotifyExecutionEnded_Statics::SOTS_KEM_BlueprintLibrary_eventKEM_NotifyExecutionEnded_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_NotifyExecutionEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_NotifyExecutionEnded_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_NotifyExecutionEnded_Statics::SOTS_KEM_BlueprintLibrary_eventKEM_NotifyExecutionEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_NotifyExecutionEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_NotifyExecutionEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_KEM_BlueprintLibrary::execKEM_NotifyExecutionEnded)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_UBOOL(Z_Param_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	USOTS_KEM_BlueprintLibrary::KEM_NotifyExecutionEnded(Z_Param_WorldContextObject,Z_Param_bSuccess);
	P_NATIVE_END;
}
// ********** End Class USOTS_KEM_BlueprintLibrary Function KEM_NotifyExecutionEnded ***************

// ********** Begin Class USOTS_KEM_BlueprintLibrary Function KEM_RequestExecution_Simple **********
struct Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_RequestExecution_Simple_Statics
{
	struct SOTS_KEM_BlueprintLibrary_eventKEM_RequestExecution_Simple_Parms
	{
		const UObject* WorldContextObject;
		AActor* Instigator;
		AActor* Target;
		FGameplayTagContainer ContextTags;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KEM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** One-click helper: from Instigator + Target + ContextTags, request an execution via the KEM subsystem. */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_BlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "One-click helper: from Instigator + Target + ContextTags, request an execution via the KEM subsystem." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function KEM_RequestExecution_Simple constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContextTags;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function KEM_RequestExecution_Simple constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function KEM_RequestExecution_Simple Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_RequestExecution_Simple_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEM_BlueprintLibrary_eventKEM_RequestExecution_Simple_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_RequestExecution_Simple_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEM_BlueprintLibrary_eventKEM_RequestExecution_Simple_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_RequestExecution_Simple_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEM_BlueprintLibrary_eventKEM_RequestExecution_Simple_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_RequestExecution_Simple_Statics::NewProp_ContextTags = { "ContextTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEM_BlueprintLibrary_eventKEM_RequestExecution_Simple_Parms, ContextTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextTags_MetaData), NewProp_ContextTags_MetaData) }; // 3438578166
void Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_RequestExecution_Simple_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_KEM_BlueprintLibrary_eventKEM_RequestExecution_Simple_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_RequestExecution_Simple_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_KEM_BlueprintLibrary_eventKEM_RequestExecution_Simple_Parms), &Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_RequestExecution_Simple_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_RequestExecution_Simple_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_RequestExecution_Simple_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_RequestExecution_Simple_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_RequestExecution_Simple_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_RequestExecution_Simple_Statics::NewProp_ContextTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_RequestExecution_Simple_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_RequestExecution_Simple_Statics::PropPointers) < 2048);
// ********** End Function KEM_RequestExecution_Simple Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_RequestExecution_Simple_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_KEM_BlueprintLibrary, nullptr, "KEM_RequestExecution_Simple", 	Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_RequestExecution_Simple_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_RequestExecution_Simple_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_RequestExecution_Simple_Statics::SOTS_KEM_BlueprintLibrary_eventKEM_RequestExecution_Simple_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_RequestExecution_Simple_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_RequestExecution_Simple_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_RequestExecution_Simple_Statics::SOTS_KEM_BlueprintLibrary_eventKEM_RequestExecution_Simple_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_RequestExecution_Simple()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_RequestExecution_Simple_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_KEM_BlueprintLibrary::execKEM_RequestExecution_Simple)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(AActor,Z_Param_Instigator);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_ContextTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USOTS_KEM_BlueprintLibrary::KEM_RequestExecution_Simple(Z_Param_WorldContextObject,Z_Param_Instigator,Z_Param_Target,Z_Param_Out_ContextTags);
	P_NATIVE_END;
}
// ********** End Class USOTS_KEM_BlueprintLibrary Function KEM_RequestExecution_Simple ************

// ********** Begin Class USOTS_KEM_BlueprintLibrary Function KEM_ResolveWarpPointByName ***********
struct Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_ResolveWarpPointByName_Statics
{
	struct SOTS_KEM_BlueprintLibrary_eventKEM_ResolveWarpPointByName_Parms
	{
		const USOTS_KEM_ExecutionDefinition* ExecutionDefinition;
		FName WarpPointName;
		FSOTS_ExecutionContext Context;
		FTransform OutTransform;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KEM|Warp" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Resolve a single authored warp point for a given execution definition and context. */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_BlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resolve a single authored warp point for a given execution definition and context." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionDefinition_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function KEM_ResolveWarpPointByName constinit property declarations ************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExecutionDefinition;
	static const UECodeGen_Private::FNamePropertyParams NewProp_WarpPointName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutTransform;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function KEM_ResolveWarpPointByName constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function KEM_ResolveWarpPointByName Property Definitions ***********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_ResolveWarpPointByName_Statics::NewProp_ExecutionDefinition = { "ExecutionDefinition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEM_BlueprintLibrary_eventKEM_ResolveWarpPointByName_Parms, ExecutionDefinition), Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionDefinition_MetaData), NewProp_ExecutionDefinition_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_ResolveWarpPointByName_Statics::NewProp_WarpPointName = { "WarpPointName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEM_BlueprintLibrary_eventKEM_ResolveWarpPointByName_Parms, WarpPointName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_ResolveWarpPointByName_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEM_BlueprintLibrary_eventKEM_ResolveWarpPointByName_Parms, Context), Z_Construct_UScriptStruct_FSOTS_ExecutionContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) }; // 3760104617
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_ResolveWarpPointByName_Statics::NewProp_OutTransform = { "OutTransform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEM_BlueprintLibrary_eventKEM_ResolveWarpPointByName_Parms, OutTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_ResolveWarpPointByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_KEM_BlueprintLibrary_eventKEM_ResolveWarpPointByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_ResolveWarpPointByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_KEM_BlueprintLibrary_eventKEM_ResolveWarpPointByName_Parms), &Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_ResolveWarpPointByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_ResolveWarpPointByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_ResolveWarpPointByName_Statics::NewProp_ExecutionDefinition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_ResolveWarpPointByName_Statics::NewProp_WarpPointName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_ResolveWarpPointByName_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_ResolveWarpPointByName_Statics::NewProp_OutTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_ResolveWarpPointByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_ResolveWarpPointByName_Statics::PropPointers) < 2048);
// ********** End Function KEM_ResolveWarpPointByName Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_ResolveWarpPointByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_KEM_BlueprintLibrary, nullptr, "KEM_ResolveWarpPointByName", 	Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_ResolveWarpPointByName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_ResolveWarpPointByName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_ResolveWarpPointByName_Statics::SOTS_KEM_BlueprintLibrary_eventKEM_ResolveWarpPointByName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_ResolveWarpPointByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_ResolveWarpPointByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_ResolveWarpPointByName_Statics::SOTS_KEM_BlueprintLibrary_eventKEM_ResolveWarpPointByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_ResolveWarpPointByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_ResolveWarpPointByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_KEM_BlueprintLibrary::execKEM_ResolveWarpPointByName)
{
	P_GET_OBJECT(USOTS_KEM_ExecutionDefinition,Z_Param_ExecutionDefinition);
	P_GET_PROPERTY(FNameProperty,Z_Param_WarpPointName);
	P_GET_STRUCT_REF(FSOTS_ExecutionContext,Z_Param_Out_Context);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USOTS_KEM_BlueprintLibrary::KEM_ResolveWarpPointByName(Z_Param_ExecutionDefinition,Z_Param_WarpPointName,Z_Param_Out_Context,Z_Param_Out_OutTransform);
	P_NATIVE_END;
}
// ********** End Class USOTS_KEM_BlueprintLibrary Function KEM_ResolveWarpPointByName *************

// ********** Begin Class USOTS_KEM_BlueprintLibrary Function KEM_RunDebug_Simple ******************
struct Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_RunDebug_Simple_Statics
{
	struct SOTS_KEM_BlueprintLibrary_eventKEM_RunDebug_Simple_Parms
	{
		const UObject* WorldContextObject;
		AActor* Instigator;
		AActor* Target;
		FGameplayTagContainer ContextTags;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KEM|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** One-click helper: log debug info for all definitions for the given Instigator/Target/ContextTags. */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_BlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "One-click helper: log debug info for all definitions for the given Instigator/Target/ContextTags." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function KEM_RunDebug_Simple constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContextTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function KEM_RunDebug_Simple constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function KEM_RunDebug_Simple Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_RunDebug_Simple_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEM_BlueprintLibrary_eventKEM_RunDebug_Simple_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_RunDebug_Simple_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEM_BlueprintLibrary_eventKEM_RunDebug_Simple_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_RunDebug_Simple_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEM_BlueprintLibrary_eventKEM_RunDebug_Simple_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_RunDebug_Simple_Statics::NewProp_ContextTags = { "ContextTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEM_BlueprintLibrary_eventKEM_RunDebug_Simple_Parms, ContextTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextTags_MetaData), NewProp_ContextTags_MetaData) }; // 3438578166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_RunDebug_Simple_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_RunDebug_Simple_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_RunDebug_Simple_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_RunDebug_Simple_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_RunDebug_Simple_Statics::NewProp_ContextTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_RunDebug_Simple_Statics::PropPointers) < 2048);
// ********** End Function KEM_RunDebug_Simple Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_RunDebug_Simple_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_KEM_BlueprintLibrary, nullptr, "KEM_RunDebug_Simple", 	Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_RunDebug_Simple_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_RunDebug_Simple_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_RunDebug_Simple_Statics::SOTS_KEM_BlueprintLibrary_eventKEM_RunDebug_Simple_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_RunDebug_Simple_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_RunDebug_Simple_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_RunDebug_Simple_Statics::SOTS_KEM_BlueprintLibrary_eventKEM_RunDebug_Simple_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_RunDebug_Simple()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_RunDebug_Simple_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_KEM_BlueprintLibrary::execKEM_RunDebug_Simple)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(AActor,Z_Param_Instigator);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_ContextTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	USOTS_KEM_BlueprintLibrary::KEM_RunDebug_Simple(Z_Param_WorldContextObject,Z_Param_Instigator,Z_Param_Target,Z_Param_Out_ContextTags);
	P_NATIVE_END;
}
// ********** End Class USOTS_KEM_BlueprintLibrary Function KEM_RunDebug_Simple ********************

// ********** Begin Class USOTS_KEM_BlueprintLibrary Function SOTS_IsPlayerSafeForExecution ********
struct Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_SOTS_IsPlayerSafeForExecution_Statics
{
	struct SOTS_KEM_BlueprintLibrary_eventSOTS_IsPlayerSafeForExecution_Parms
	{
		UObject* WorldContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|KEM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns true if the player is safe for execution (no nearby AI has HasLOS.Player tag). */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_KEM_BlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if the player is safe for execution (no nearby AI has HasLOS.Player tag)." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function SOTS_IsPlayerSafeForExecution constinit property declarations *********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SOTS_IsPlayerSafeForExecution constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SOTS_IsPlayerSafeForExecution Property Definitions ********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_SOTS_IsPlayerSafeForExecution_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEM_BlueprintLibrary_eventSOTS_IsPlayerSafeForExecution_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_SOTS_IsPlayerSafeForExecution_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_KEM_BlueprintLibrary_eventSOTS_IsPlayerSafeForExecution_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_SOTS_IsPlayerSafeForExecution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_KEM_BlueprintLibrary_eventSOTS_IsPlayerSafeForExecution_Parms), &Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_SOTS_IsPlayerSafeForExecution_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_SOTS_IsPlayerSafeForExecution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_SOTS_IsPlayerSafeForExecution_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_SOTS_IsPlayerSafeForExecution_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_SOTS_IsPlayerSafeForExecution_Statics::PropPointers) < 2048);
// ********** End Function SOTS_IsPlayerSafeForExecution Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_SOTS_IsPlayerSafeForExecution_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_KEM_BlueprintLibrary, nullptr, "SOTS_IsPlayerSafeForExecution", 	Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_SOTS_IsPlayerSafeForExecution_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_SOTS_IsPlayerSafeForExecution_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_SOTS_IsPlayerSafeForExecution_Statics::SOTS_KEM_BlueprintLibrary_eventSOTS_IsPlayerSafeForExecution_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_SOTS_IsPlayerSafeForExecution_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_SOTS_IsPlayerSafeForExecution_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_SOTS_IsPlayerSafeForExecution_Statics::SOTS_KEM_BlueprintLibrary_eventSOTS_IsPlayerSafeForExecution_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_SOTS_IsPlayerSafeForExecution()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_SOTS_IsPlayerSafeForExecution_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_KEM_BlueprintLibrary::execSOTS_IsPlayerSafeForExecution)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USOTS_KEM_BlueprintLibrary::SOTS_IsPlayerSafeForExecution(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class USOTS_KEM_BlueprintLibrary Function SOTS_IsPlayerSafeForExecution **********

// ********** Begin Class USOTS_KEM_BlueprintLibrary ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_KEM_BlueprintLibrary;
UClass* USOTS_KEM_BlueprintLibrary::GetPrivateStaticClass()
{
	using TClass = USOTS_KEM_BlueprintLibrary;
	if (!Z_Registration_Info_UClass_USOTS_KEM_BlueprintLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_KEM_BlueprintLibrary"),
			Z_Registration_Info_UClass_USOTS_KEM_BlueprintLibrary.InnerSingleton,
			StaticRegisterNativesUSOTS_KEM_BlueprintLibrary,
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
	return Z_Registration_Info_UClass_USOTS_KEM_BlueprintLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_KEM_BlueprintLibrary_NoRegister()
{
	return USOTS_KEM_BlueprintLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_KEM_BlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SOTS_KEM_BlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/SOTS_KEM_BlueprintLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_KEM_BlueprintLibrary constinit property declarations ***************
// ********** End Class USOTS_KEM_BlueprintLibrary constinit property declarations *****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("KEM_BuildCASBindingContexts"), .Pointer = &USOTS_KEM_BlueprintLibrary::execKEM_BuildCASBindingContexts },
		{ .NameUTF8 = UTF8TEXT("KEM_NotifyExecutionEnded"), .Pointer = &USOTS_KEM_BlueprintLibrary::execKEM_NotifyExecutionEnded },
		{ .NameUTF8 = UTF8TEXT("KEM_RequestExecution_Simple"), .Pointer = &USOTS_KEM_BlueprintLibrary::execKEM_RequestExecution_Simple },
		{ .NameUTF8 = UTF8TEXT("KEM_ResolveWarpPointByName"), .Pointer = &USOTS_KEM_BlueprintLibrary::execKEM_ResolveWarpPointByName },
		{ .NameUTF8 = UTF8TEXT("KEM_RunDebug_Simple"), .Pointer = &USOTS_KEM_BlueprintLibrary::execKEM_RunDebug_Simple },
		{ .NameUTF8 = UTF8TEXT("SOTS_IsPlayerSafeForExecution"), .Pointer = &USOTS_KEM_BlueprintLibrary::execSOTS_IsPlayerSafeForExecution },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_BuildCASBindingContexts, "KEM_BuildCASBindingContexts" }, // 408559534
		{ &Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_NotifyExecutionEnded, "KEM_NotifyExecutionEnded" }, // 3223481245
		{ &Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_RequestExecution_Simple, "KEM_RequestExecution_Simple" }, // 2490697344
		{ &Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_ResolveWarpPointByName, "KEM_ResolveWarpPointByName" }, // 568784731
		{ &Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_KEM_RunDebug_Simple, "KEM_RunDebug_Simple" }, // 3545508348
		{ &Z_Construct_UFunction_USOTS_KEM_BlueprintLibrary_SOTS_IsPlayerSafeForExecution, "SOTS_IsPlayerSafeForExecution" }, // 1573181106
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_KEM_BlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_KEM_BlueprintLibrary_Statics
UObject* (*const Z_Construct_UClass_USOTS_KEM_BlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_KillExecutionManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_KEM_BlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_KEM_BlueprintLibrary_Statics::ClassParams = {
	&USOTS_KEM_BlueprintLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_KEM_BlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_KEM_BlueprintLibrary_Statics::Class_MetaDataParams)
};
void USOTS_KEM_BlueprintLibrary::StaticRegisterNativesUSOTS_KEM_BlueprintLibrary()
{
	UClass* Class = USOTS_KEM_BlueprintLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USOTS_KEM_BlueprintLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_USOTS_KEM_BlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_USOTS_KEM_BlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_KEM_BlueprintLibrary.OuterSingleton, Z_Construct_UClass_USOTS_KEM_BlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_KEM_BlueprintLibrary.OuterSingleton;
}
USOTS_KEM_BlueprintLibrary::USOTS_KEM_BlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_KEM_BlueprintLibrary);
USOTS_KEM_BlueprintLibrary::~USOTS_KEM_BlueprintLibrary() {}
// ********** End Class USOTS_KEM_BlueprintLibrary *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_BlueprintLibrary_h__Script_SOTS_KillExecutionManager_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_KEM_BlueprintLibrary, USOTS_KEM_BlueprintLibrary::StaticClass, TEXT("USOTS_KEM_BlueprintLibrary"), &Z_Registration_Info_UClass_USOTS_KEM_BlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_KEM_BlueprintLibrary), 1182179459U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_BlueprintLibrary_h__Script_SOTS_KillExecutionManager_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_BlueprintLibrary_h__Script_SOTS_KillExecutionManager_1171868861{
	TEXT("/Script/SOTS_KillExecutionManager"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_BlueprintLibrary_h__Script_SOTS_KillExecutionManager_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEM_BlueprintLibrary_h__Script_SOTS_KillExecutionManager_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
