// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTS_FXManagerSubsystem.h"
#include "Engine/GameInstance.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_FXManagerSubsystem() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
SOTS_FX_PLUGIN_API UClass* Z_Construct_UClass_USOTS_FXCueDefinition_NoRegister();
SOTS_FX_PLUGIN_API UClass* Z_Construct_UClass_USOTS_FXDefinitionLibrary_NoRegister();
SOTS_FX_PLUGIN_API UClass* Z_Construct_UClass_USOTS_FXManagerSubsystem();
SOTS_FX_PLUGIN_API UClass* Z_Construct_UClass_USOTS_FXManagerSubsystem_NoRegister();
SOTS_FX_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SOTS_FX_Plugin_SOTS_OnFXTriggered__DelegateSignature();
SOTS_FX_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_FXCuePool();
UPackage* Z_Construct_UPackage__Script_SOTS_FX_Plugin();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FSOTS_FXCuePool ***************************************************
struct Z_Construct_UScriptStruct_FSOTS_FXCuePool_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_FXCuePool); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_FXCuePool); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Internal pool per cue definition.\n * Not exposed to BP \xe2\x80\x93 purely runtime plumbing.\n */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_FXManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Internal pool per cue definition.\nNot exposed to BP \xe2\x80\x93 purely runtime plumbing." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SOTS_FXManagerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SOTS_FXManagerSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_FXCuePool constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NiagaraComponents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AudioComponents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_FXCuePool constinit property declarations *********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_FXCuePool>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_FXCuePool_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_FXCuePool;
class UScriptStruct* FSOTS_FXCuePool::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_FXCuePool.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_FXCuePool.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_FXCuePool, (UObject*)Z_Construct_UPackage__Script_SOTS_FX_Plugin(), TEXT("SOTS_FXCuePool"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_FXCuePool.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_FXCuePool Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSOTS_FXCuePool_Statics::NewProp_NiagaraComponents_Inner = { "NiagaraComponents", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSOTS_FXCuePool_Statics::NewProp_NiagaraComponents = { "NiagaraComponents", nullptr, (EPropertyFlags)0x0114008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_FXCuePool, NiagaraComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraComponents_MetaData), NewProp_NiagaraComponents_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSOTS_FXCuePool_Statics::NewProp_AudioComponents_Inner = { "AudioComponents", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSOTS_FXCuePool_Statics::NewProp_AudioComponents = { "AudioComponents", nullptr, (EPropertyFlags)0x0114008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_FXCuePool, AudioComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioComponents_MetaData), NewProp_AudioComponents_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_FXCuePool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_FXCuePool_Statics::NewProp_NiagaraComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_FXCuePool_Statics::NewProp_NiagaraComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_FXCuePool_Statics::NewProp_AudioComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_FXCuePool_Statics::NewProp_AudioComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_FXCuePool_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_FXCuePool Property Definitions ********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_FXCuePool_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_FX_Plugin,
	nullptr,
	&NewStructOps,
	"SOTS_FXCuePool",
	Z_Construct_UScriptStruct_FSOTS_FXCuePool_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_FXCuePool_Statics::PropPointers),
	sizeof(FSOTS_FXCuePool),
	alignof(FSOTS_FXCuePool),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_FXCuePool_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_FXCuePool_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_FXCuePool()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_FXCuePool.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_FXCuePool.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_FXCuePool_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_FXCuePool.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_FXCuePool *****************************************************

// ********** Begin Class USOTS_FXManagerSubsystem Function GetFXSettingsSummary *******************
struct Z_Construct_UFunction_USOTS_FXManagerSubsystem_GetFXSettingsSummary_Statics
{
	struct SOTS_FXManagerSubsystem_eventGetFXSettingsSummary_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|FX|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns a human-readable summary of the current global FX toggles. */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_FXManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a human-readable summary of the current global FX toggles." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetFXSettingsSummary constinit property declarations ******************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFXSettingsSummary constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFXSettingsSummary Property Definitions *****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USOTS_FXManagerSubsystem_GetFXSettingsSummary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_FXManagerSubsystem_eventGetFXSettingsSummary_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_FXManagerSubsystem_GetFXSettingsSummary_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_FXManagerSubsystem_GetFXSettingsSummary_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_FXManagerSubsystem_GetFXSettingsSummary_Statics::PropPointers) < 2048);
// ********** End Function GetFXSettingsSummary Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_FXManagerSubsystem_GetFXSettingsSummary_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_FXManagerSubsystem, nullptr, "GetFXSettingsSummary", 	Z_Construct_UFunction_USOTS_FXManagerSubsystem_GetFXSettingsSummary_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_FXManagerSubsystem_GetFXSettingsSummary_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_FXManagerSubsystem_GetFXSettingsSummary_Statics::SOTS_FXManagerSubsystem_eventGetFXSettingsSummary_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_FXManagerSubsystem_GetFXSettingsSummary_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_FXManagerSubsystem_GetFXSettingsSummary_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_FXManagerSubsystem_GetFXSettingsSummary_Statics::SOTS_FXManagerSubsystem_eventGetFXSettingsSummary_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_FXManagerSubsystem_GetFXSettingsSummary()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_FXManagerSubsystem_GetFXSettingsSummary_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_FXManagerSubsystem::execGetFXSettingsSummary)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetFXSettingsSummary();
	P_NATIVE_END;
}
// ********** End Class USOTS_FXManagerSubsystem Function GetFXSettingsSummary *********************

// ********** Begin Class USOTS_FXManagerSubsystem Function IsBloodEnabled *************************
struct Z_Construct_UFunction_USOTS_FXManagerSubsystem_IsBloodEnabled_Statics
{
	struct SOTS_FXManagerSubsystem_eventIsBloodEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|FX|Toggles" },
		{ "ModuleRelativePath", "Public/SOTS_FXManagerSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsBloodEnabled constinit property declarations ************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsBloodEnabled constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsBloodEnabled Property Definitions ***********************************
void Z_Construct_UFunction_USOTS_FXManagerSubsystem_IsBloodEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_FXManagerSubsystem_eventIsBloodEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_FXManagerSubsystem_IsBloodEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_FXManagerSubsystem_eventIsBloodEnabled_Parms), &Z_Construct_UFunction_USOTS_FXManagerSubsystem_IsBloodEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_FXManagerSubsystem_IsBloodEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_FXManagerSubsystem_IsBloodEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_FXManagerSubsystem_IsBloodEnabled_Statics::PropPointers) < 2048);
// ********** End Function IsBloodEnabled Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_FXManagerSubsystem_IsBloodEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_FXManagerSubsystem, nullptr, "IsBloodEnabled", 	Z_Construct_UFunction_USOTS_FXManagerSubsystem_IsBloodEnabled_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_FXManagerSubsystem_IsBloodEnabled_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_FXManagerSubsystem_IsBloodEnabled_Statics::SOTS_FXManagerSubsystem_eventIsBloodEnabled_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_FXManagerSubsystem_IsBloodEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_FXManagerSubsystem_IsBloodEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_FXManagerSubsystem_IsBloodEnabled_Statics::SOTS_FXManagerSubsystem_eventIsBloodEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_FXManagerSubsystem_IsBloodEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_FXManagerSubsystem_IsBloodEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_FXManagerSubsystem::execIsBloodEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsBloodEnabled();
	P_NATIVE_END;
}
// ********** End Class USOTS_FXManagerSubsystem Function IsBloodEnabled ***************************

// ********** Begin Class USOTS_FXManagerSubsystem Function IsCameraMotionFXEnabled ****************
struct Z_Construct_UFunction_USOTS_FXManagerSubsystem_IsCameraMotionFXEnabled_Statics
{
	struct SOTS_FXManagerSubsystem_eventIsCameraMotionFXEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|FX|Toggles" },
		{ "ModuleRelativePath", "Public/SOTS_FXManagerSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsCameraMotionFXEnabled constinit property declarations ***************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsCameraMotionFXEnabled constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsCameraMotionFXEnabled Property Definitions **************************
void Z_Construct_UFunction_USOTS_FXManagerSubsystem_IsCameraMotionFXEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_FXManagerSubsystem_eventIsCameraMotionFXEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_FXManagerSubsystem_IsCameraMotionFXEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_FXManagerSubsystem_eventIsCameraMotionFXEnabled_Parms), &Z_Construct_UFunction_USOTS_FXManagerSubsystem_IsCameraMotionFXEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_FXManagerSubsystem_IsCameraMotionFXEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_FXManagerSubsystem_IsCameraMotionFXEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_FXManagerSubsystem_IsCameraMotionFXEnabled_Statics::PropPointers) < 2048);
// ********** End Function IsCameraMotionFXEnabled Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_FXManagerSubsystem_IsCameraMotionFXEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_FXManagerSubsystem, nullptr, "IsCameraMotionFXEnabled", 	Z_Construct_UFunction_USOTS_FXManagerSubsystem_IsCameraMotionFXEnabled_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_FXManagerSubsystem_IsCameraMotionFXEnabled_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_FXManagerSubsystem_IsCameraMotionFXEnabled_Statics::SOTS_FXManagerSubsystem_eventIsCameraMotionFXEnabled_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_FXManagerSubsystem_IsCameraMotionFXEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_FXManagerSubsystem_IsCameraMotionFXEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_FXManagerSubsystem_IsCameraMotionFXEnabled_Statics::SOTS_FXManagerSubsystem_eventIsCameraMotionFXEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_FXManagerSubsystem_IsCameraMotionFXEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_FXManagerSubsystem_IsCameraMotionFXEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_FXManagerSubsystem::execIsCameraMotionFXEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsCameraMotionFXEnabled();
	P_NATIVE_END;
}
// ********** End Class USOTS_FXManagerSubsystem Function IsCameraMotionFXEnabled ******************

// ********** Begin Class USOTS_FXManagerSubsystem Function IsHighIntensityFXEnabled ***************
struct Z_Construct_UFunction_USOTS_FXManagerSubsystem_IsHighIntensityFXEnabled_Statics
{
	struct SOTS_FXManagerSubsystem_eventIsHighIntensityFXEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|FX|Toggles" },
		{ "ModuleRelativePath", "Public/SOTS_FXManagerSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsHighIntensityFXEnabled constinit property declarations **************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsHighIntensityFXEnabled constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsHighIntensityFXEnabled Property Definitions *************************
void Z_Construct_UFunction_USOTS_FXManagerSubsystem_IsHighIntensityFXEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_FXManagerSubsystem_eventIsHighIntensityFXEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_FXManagerSubsystem_IsHighIntensityFXEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_FXManagerSubsystem_eventIsHighIntensityFXEnabled_Parms), &Z_Construct_UFunction_USOTS_FXManagerSubsystem_IsHighIntensityFXEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_FXManagerSubsystem_IsHighIntensityFXEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_FXManagerSubsystem_IsHighIntensityFXEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_FXManagerSubsystem_IsHighIntensityFXEnabled_Statics::PropPointers) < 2048);
// ********** End Function IsHighIntensityFXEnabled Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_FXManagerSubsystem_IsHighIntensityFXEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_FXManagerSubsystem, nullptr, "IsHighIntensityFXEnabled", 	Z_Construct_UFunction_USOTS_FXManagerSubsystem_IsHighIntensityFXEnabled_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_FXManagerSubsystem_IsHighIntensityFXEnabled_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_FXManagerSubsystem_IsHighIntensityFXEnabled_Statics::SOTS_FXManagerSubsystem_eventIsHighIntensityFXEnabled_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_FXManagerSubsystem_IsHighIntensityFXEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_FXManagerSubsystem_IsHighIntensityFXEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_FXManagerSubsystem_IsHighIntensityFXEnabled_Statics::SOTS_FXManagerSubsystem_eventIsHighIntensityFXEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_FXManagerSubsystem_IsHighIntensityFXEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_FXManagerSubsystem_IsHighIntensityFXEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_FXManagerSubsystem::execIsHighIntensityFXEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsHighIntensityFXEnabled();
	P_NATIVE_END;
}
// ********** End Class USOTS_FXManagerSubsystem Function IsHighIntensityFXEnabled *****************

// ********** Begin Class USOTS_FXManagerSubsystem Function RegisterCue ****************************
struct Z_Construct_UFunction_USOTS_FXManagerSubsystem_RegisterCue_Statics
{
	struct SOTS_FXManagerSubsystem_eventRegisterCue_Parms
	{
		USOTS_FXCueDefinition* CueDefinition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|FX" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Register a cue at runtime (e.g., from GameInstance BP). */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_FXManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Register a cue at runtime (e.g., from GameInstance BP)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RegisterCue constinit property declarations ***************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CueDefinition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RegisterCue constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RegisterCue Property Definitions **************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_FXManagerSubsystem_RegisterCue_Statics::NewProp_CueDefinition = { "CueDefinition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_FXManagerSubsystem_eventRegisterCue_Parms, CueDefinition), Z_Construct_UClass_USOTS_FXCueDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_FXManagerSubsystem_RegisterCue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_FXManagerSubsystem_RegisterCue_Statics::NewProp_CueDefinition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_FXManagerSubsystem_RegisterCue_Statics::PropPointers) < 2048);
// ********** End Function RegisterCue Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_FXManagerSubsystem_RegisterCue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_FXManagerSubsystem, nullptr, "RegisterCue", 	Z_Construct_UFunction_USOTS_FXManagerSubsystem_RegisterCue_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_FXManagerSubsystem_RegisterCue_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_FXManagerSubsystem_RegisterCue_Statics::SOTS_FXManagerSubsystem_eventRegisterCue_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_FXManagerSubsystem_RegisterCue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_FXManagerSubsystem_RegisterCue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_FXManagerSubsystem_RegisterCue_Statics::SOTS_FXManagerSubsystem_eventRegisterCue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_FXManagerSubsystem_RegisterCue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_FXManagerSubsystem_RegisterCue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_FXManagerSubsystem::execRegisterCue)
{
	P_GET_OBJECT(USOTS_FXCueDefinition,Z_Param_CueDefinition);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterCue(Z_Param_CueDefinition);
	P_NATIVE_END;
}
// ********** End Class USOTS_FXManagerSubsystem Function RegisterCue ******************************

// ********** Begin Class USOTS_FXManagerSubsystem Function RequestFXCue ***************************
struct Z_Construct_UFunction_USOTS_FXManagerSubsystem_RequestFXCue_Statics
{
	struct SOTS_FXManagerSubsystem_eventRequestFXCue_Parms
	{
		FGameplayTag FXCueTag;
		AActor* Instigator;
		AActor* Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|FX|Cues" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Stubbed FX cue request entry point for other subsystems. */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_FXManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stubbed FX cue request entry point for other subsystems." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RequestFXCue constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_FXCueTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RequestFXCue constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RequestFXCue Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_FXManagerSubsystem_RequestFXCue_Statics::NewProp_FXCueTag = { "FXCueTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_FXManagerSubsystem_eventRequestFXCue_Parms, FXCueTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_FXManagerSubsystem_RequestFXCue_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_FXManagerSubsystem_eventRequestFXCue_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_FXManagerSubsystem_RequestFXCue_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_FXManagerSubsystem_eventRequestFXCue_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_FXManagerSubsystem_RequestFXCue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_FXManagerSubsystem_RequestFXCue_Statics::NewProp_FXCueTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_FXManagerSubsystem_RequestFXCue_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_FXManagerSubsystem_RequestFXCue_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_FXManagerSubsystem_RequestFXCue_Statics::PropPointers) < 2048);
// ********** End Function RequestFXCue Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_FXManagerSubsystem_RequestFXCue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_FXManagerSubsystem, nullptr, "RequestFXCue", 	Z_Construct_UFunction_USOTS_FXManagerSubsystem_RequestFXCue_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_FXManagerSubsystem_RequestFXCue_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_FXManagerSubsystem_RequestFXCue_Statics::SOTS_FXManagerSubsystem_eventRequestFXCue_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_FXManagerSubsystem_RequestFXCue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_FXManagerSubsystem_RequestFXCue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_FXManagerSubsystem_RequestFXCue_Statics::SOTS_FXManagerSubsystem_eventRequestFXCue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_FXManagerSubsystem_RequestFXCue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_FXManagerSubsystem_RequestFXCue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_FXManagerSubsystem::execRequestFXCue)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_FXCueTag);
	P_GET_OBJECT(AActor,Z_Param_Instigator);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestFXCue(Z_Param_FXCueTag,Z_Param_Instigator,Z_Param_Target);
	P_NATIVE_END;
}
// ********** End Class USOTS_FXManagerSubsystem Function RequestFXCue *****************************

// ********** Begin Class USOTS_FXManagerSubsystem Function SetBloodEnabled ************************
struct Z_Construct_UFunction_USOTS_FXManagerSubsystem_SetBloodEnabled_Statics
{
	struct SOTS_FXManagerSubsystem_eventSetBloodEnabled_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|FX|Toggles" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Global FX toggles persisted via FSOTS_FXProfileData. */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_FXManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Global FX toggles persisted via FSOTS_FXProfileData." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetBloodEnabled constinit property declarations ***********************
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetBloodEnabled constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetBloodEnabled Property Definitions **********************************
void Z_Construct_UFunction_USOTS_FXManagerSubsystem_SetBloodEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((SOTS_FXManagerSubsystem_eventSetBloodEnabled_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_FXManagerSubsystem_SetBloodEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_FXManagerSubsystem_eventSetBloodEnabled_Parms), &Z_Construct_UFunction_USOTS_FXManagerSubsystem_SetBloodEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_FXManagerSubsystem_SetBloodEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_FXManagerSubsystem_SetBloodEnabled_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_FXManagerSubsystem_SetBloodEnabled_Statics::PropPointers) < 2048);
// ********** End Function SetBloodEnabled Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_FXManagerSubsystem_SetBloodEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_FXManagerSubsystem, nullptr, "SetBloodEnabled", 	Z_Construct_UFunction_USOTS_FXManagerSubsystem_SetBloodEnabled_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_FXManagerSubsystem_SetBloodEnabled_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_FXManagerSubsystem_SetBloodEnabled_Statics::SOTS_FXManagerSubsystem_eventSetBloodEnabled_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_FXManagerSubsystem_SetBloodEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_FXManagerSubsystem_SetBloodEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_FXManagerSubsystem_SetBloodEnabled_Statics::SOTS_FXManagerSubsystem_eventSetBloodEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_FXManagerSubsystem_SetBloodEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_FXManagerSubsystem_SetBloodEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_FXManagerSubsystem::execSetBloodEnabled)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBloodEnabled(Z_Param_bEnabled);
	P_NATIVE_END;
}
// ********** End Class USOTS_FXManagerSubsystem Function SetBloodEnabled **************************

// ********** Begin Class USOTS_FXManagerSubsystem Function SetCameraMotionFXEnabled ***************
struct Z_Construct_UFunction_USOTS_FXManagerSubsystem_SetCameraMotionFXEnabled_Statics
{
	struct SOTS_FXManagerSubsystem_eventSetCameraMotionFXEnabled_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|FX|Toggles" },
		{ "ModuleRelativePath", "Public/SOTS_FXManagerSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetCameraMotionFXEnabled constinit property declarations **************
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetCameraMotionFXEnabled constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetCameraMotionFXEnabled Property Definitions *************************
void Z_Construct_UFunction_USOTS_FXManagerSubsystem_SetCameraMotionFXEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((SOTS_FXManagerSubsystem_eventSetCameraMotionFXEnabled_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_FXManagerSubsystem_SetCameraMotionFXEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_FXManagerSubsystem_eventSetCameraMotionFXEnabled_Parms), &Z_Construct_UFunction_USOTS_FXManagerSubsystem_SetCameraMotionFXEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_FXManagerSubsystem_SetCameraMotionFXEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_FXManagerSubsystem_SetCameraMotionFXEnabled_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_FXManagerSubsystem_SetCameraMotionFXEnabled_Statics::PropPointers) < 2048);
// ********** End Function SetCameraMotionFXEnabled Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_FXManagerSubsystem_SetCameraMotionFXEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_FXManagerSubsystem, nullptr, "SetCameraMotionFXEnabled", 	Z_Construct_UFunction_USOTS_FXManagerSubsystem_SetCameraMotionFXEnabled_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_FXManagerSubsystem_SetCameraMotionFXEnabled_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_FXManagerSubsystem_SetCameraMotionFXEnabled_Statics::SOTS_FXManagerSubsystem_eventSetCameraMotionFXEnabled_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_FXManagerSubsystem_SetCameraMotionFXEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_FXManagerSubsystem_SetCameraMotionFXEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_FXManagerSubsystem_SetCameraMotionFXEnabled_Statics::SOTS_FXManagerSubsystem_eventSetCameraMotionFXEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_FXManagerSubsystem_SetCameraMotionFXEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_FXManagerSubsystem_SetCameraMotionFXEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_FXManagerSubsystem::execSetCameraMotionFXEnabled)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCameraMotionFXEnabled(Z_Param_bEnabled);
	P_NATIVE_END;
}
// ********** End Class USOTS_FXManagerSubsystem Function SetCameraMotionFXEnabled *****************

// ********** Begin Class USOTS_FXManagerSubsystem Function SetHighIntensityFXEnabled **************
struct Z_Construct_UFunction_USOTS_FXManagerSubsystem_SetHighIntensityFXEnabled_Statics
{
	struct SOTS_FXManagerSubsystem_eventSetHighIntensityFXEnabled_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|FX|Toggles" },
		{ "ModuleRelativePath", "Public/SOTS_FXManagerSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetHighIntensityFXEnabled constinit property declarations *************
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetHighIntensityFXEnabled constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetHighIntensityFXEnabled Property Definitions ************************
void Z_Construct_UFunction_USOTS_FXManagerSubsystem_SetHighIntensityFXEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((SOTS_FXManagerSubsystem_eventSetHighIntensityFXEnabled_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_FXManagerSubsystem_SetHighIntensityFXEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_FXManagerSubsystem_eventSetHighIntensityFXEnabled_Parms), &Z_Construct_UFunction_USOTS_FXManagerSubsystem_SetHighIntensityFXEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_FXManagerSubsystem_SetHighIntensityFXEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_FXManagerSubsystem_SetHighIntensityFXEnabled_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_FXManagerSubsystem_SetHighIntensityFXEnabled_Statics::PropPointers) < 2048);
// ********** End Function SetHighIntensityFXEnabled Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_FXManagerSubsystem_SetHighIntensityFXEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_FXManagerSubsystem, nullptr, "SetHighIntensityFXEnabled", 	Z_Construct_UFunction_USOTS_FXManagerSubsystem_SetHighIntensityFXEnabled_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_FXManagerSubsystem_SetHighIntensityFXEnabled_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_FXManagerSubsystem_SetHighIntensityFXEnabled_Statics::SOTS_FXManagerSubsystem_eventSetHighIntensityFXEnabled_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_FXManagerSubsystem_SetHighIntensityFXEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_FXManagerSubsystem_SetHighIntensityFXEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_FXManagerSubsystem_SetHighIntensityFXEnabled_Statics::SOTS_FXManagerSubsystem_eventSetHighIntensityFXEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_FXManagerSubsystem_SetHighIntensityFXEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_FXManagerSubsystem_SetHighIntensityFXEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_FXManagerSubsystem::execSetHighIntensityFXEnabled)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHighIntensityFXEnabled(Z_Param_bEnabled);
	P_NATIVE_END;
}
// ********** End Class USOTS_FXManagerSubsystem Function SetHighIntensityFXEnabled ****************

// ********** Begin Class USOTS_FXManagerSubsystem Function TriggerAttachedFXByTag *****************
struct Z_Construct_UFunction_USOTS_FXManagerSubsystem_TriggerAttachedFXByTag_Statics
{
	struct SOTS_FXManagerSubsystem_eventTriggerAttachedFXByTag_Parms
	{
		UObject* WorldContextObject;
		FGameplayTag FXTag;
		AActor* Instigator;
		AActor* Target;
		USceneComponent* AttachComponent;
		FName AttachSocketName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|FX" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Triggers an FX job attached to a component/socket. */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_FXManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Triggers an FX job attached to a component/socket." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function TriggerAttachedFXByTag constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FXTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachComponent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttachSocketName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function TriggerAttachedFXByTag constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function TriggerAttachedFXByTag Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_FXManagerSubsystem_TriggerAttachedFXByTag_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_FXManagerSubsystem_eventTriggerAttachedFXByTag_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_FXManagerSubsystem_TriggerAttachedFXByTag_Statics::NewProp_FXTag = { "FXTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_FXManagerSubsystem_eventTriggerAttachedFXByTag_Parms, FXTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_FXManagerSubsystem_TriggerAttachedFXByTag_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_FXManagerSubsystem_eventTriggerAttachedFXByTag_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_FXManagerSubsystem_TriggerAttachedFXByTag_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_FXManagerSubsystem_eventTriggerAttachedFXByTag_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_FXManagerSubsystem_TriggerAttachedFXByTag_Statics::NewProp_AttachComponent = { "AttachComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_FXManagerSubsystem_eventTriggerAttachedFXByTag_Parms, AttachComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachComponent_MetaData), NewProp_AttachComponent_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USOTS_FXManagerSubsystem_TriggerAttachedFXByTag_Statics::NewProp_AttachSocketName = { "AttachSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_FXManagerSubsystem_eventTriggerAttachedFXByTag_Parms, AttachSocketName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_FXManagerSubsystem_TriggerAttachedFXByTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_FXManagerSubsystem_TriggerAttachedFXByTag_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_FXManagerSubsystem_TriggerAttachedFXByTag_Statics::NewProp_FXTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_FXManagerSubsystem_TriggerAttachedFXByTag_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_FXManagerSubsystem_TriggerAttachedFXByTag_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_FXManagerSubsystem_TriggerAttachedFXByTag_Statics::NewProp_AttachComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_FXManagerSubsystem_TriggerAttachedFXByTag_Statics::NewProp_AttachSocketName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_FXManagerSubsystem_TriggerAttachedFXByTag_Statics::PropPointers) < 2048);
// ********** End Function TriggerAttachedFXByTag Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_FXManagerSubsystem_TriggerAttachedFXByTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_FXManagerSubsystem, nullptr, "TriggerAttachedFXByTag", 	Z_Construct_UFunction_USOTS_FXManagerSubsystem_TriggerAttachedFXByTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_FXManagerSubsystem_TriggerAttachedFXByTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_FXManagerSubsystem_TriggerAttachedFXByTag_Statics::SOTS_FXManagerSubsystem_eventTriggerAttachedFXByTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_FXManagerSubsystem_TriggerAttachedFXByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_FXManagerSubsystem_TriggerAttachedFXByTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_FXManagerSubsystem_TriggerAttachedFXByTag_Statics::SOTS_FXManagerSubsystem_eventTriggerAttachedFXByTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_FXManagerSubsystem_TriggerAttachedFXByTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_FXManagerSubsystem_TriggerAttachedFXByTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_FXManagerSubsystem::execTriggerAttachedFXByTag)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FGameplayTag,Z_Param_FXTag);
	P_GET_OBJECT(AActor,Z_Param_Instigator);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_OBJECT(USceneComponent,Z_Param_AttachComponent);
	P_GET_PROPERTY(FNameProperty,Z_Param_AttachSocketName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TriggerAttachedFXByTag(Z_Param_WorldContextObject,Z_Param_FXTag,Z_Param_Instigator,Z_Param_Target,Z_Param_AttachComponent,Z_Param_AttachSocketName);
	P_NATIVE_END;
}
// ********** End Class USOTS_FXManagerSubsystem Function TriggerAttachedFXByTag *******************

// ********** Begin Class USOTS_FXManagerSubsystem Function TriggerFXByTag *************************
struct Z_Construct_UFunction_USOTS_FXManagerSubsystem_TriggerFXByTag_Statics
{
	struct SOTS_FXManagerSubsystem_eventTriggerFXByTag_Parms
	{
		UObject* WorldContextObject;
		FGameplayTag FXTag;
		AActor* Instigator;
		AActor* Target;
		FVector Location;
		FRotator Rotation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|FX" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Triggers a one-shot FX job in world space. */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_FXManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Triggers a one-shot FX job in world space." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function TriggerFXByTag constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FXTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function TriggerFXByTag constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function TriggerFXByTag Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_FXManagerSubsystem_TriggerFXByTag_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_FXManagerSubsystem_eventTriggerFXByTag_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_FXManagerSubsystem_TriggerFXByTag_Statics::NewProp_FXTag = { "FXTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_FXManagerSubsystem_eventTriggerFXByTag_Parms, FXTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_FXManagerSubsystem_TriggerFXByTag_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_FXManagerSubsystem_eventTriggerFXByTag_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_FXManagerSubsystem_TriggerFXByTag_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_FXManagerSubsystem_eventTriggerFXByTag_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_FXManagerSubsystem_TriggerFXByTag_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_FXManagerSubsystem_eventTriggerFXByTag_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_FXManagerSubsystem_TriggerFXByTag_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_FXManagerSubsystem_eventTriggerFXByTag_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_FXManagerSubsystem_TriggerFXByTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_FXManagerSubsystem_TriggerFXByTag_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_FXManagerSubsystem_TriggerFXByTag_Statics::NewProp_FXTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_FXManagerSubsystem_TriggerFXByTag_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_FXManagerSubsystem_TriggerFXByTag_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_FXManagerSubsystem_TriggerFXByTag_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_FXManagerSubsystem_TriggerFXByTag_Statics::NewProp_Rotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_FXManagerSubsystem_TriggerFXByTag_Statics::PropPointers) < 2048);
// ********** End Function TriggerFXByTag Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_FXManagerSubsystem_TriggerFXByTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_FXManagerSubsystem, nullptr, "TriggerFXByTag", 	Z_Construct_UFunction_USOTS_FXManagerSubsystem_TriggerFXByTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_FXManagerSubsystem_TriggerFXByTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_FXManagerSubsystem_TriggerFXByTag_Statics::SOTS_FXManagerSubsystem_eventTriggerFXByTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_FXManagerSubsystem_TriggerFXByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_FXManagerSubsystem_TriggerFXByTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_FXManagerSubsystem_TriggerFXByTag_Statics::SOTS_FXManagerSubsystem_eventTriggerFXByTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_FXManagerSubsystem_TriggerFXByTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_FXManagerSubsystem_TriggerFXByTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_FXManagerSubsystem::execTriggerFXByTag)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FGameplayTag,Z_Param_FXTag);
	P_GET_OBJECT(AActor,Z_Param_Instigator);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_GET_STRUCT(FRotator,Z_Param_Rotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TriggerFXByTag(Z_Param_WorldContextObject,Z_Param_FXTag,Z_Param_Instigator,Z_Param_Target,Z_Param_Location,Z_Param_Rotation);
	P_NATIVE_END;
}
// ********** End Class USOTS_FXManagerSubsystem Function TriggerFXByTag ***************************

// ********** Begin Class USOTS_FXManagerSubsystem *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_FXManagerSubsystem;
UClass* USOTS_FXManagerSubsystem::GetPrivateStaticClass()
{
	using TClass = USOTS_FXManagerSubsystem;
	if (!Z_Registration_Info_UClass_USOTS_FXManagerSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_FXManagerSubsystem"),
			Z_Registration_Info_UClass_USOTS_FXManagerSubsystem.InnerSingleton,
			StaticRegisterNativesUSOTS_FXManagerSubsystem,
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
	return Z_Registration_Info_UClass_USOTS_FXManagerSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_FXManagerSubsystem_NoRegister()
{
	return USOTS_FXManagerSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_FXManagerSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SOTS_FXManagerSubsystem.h" },
		{ "ModuleRelativePath", "Public/SOTS_FXManagerSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Libraries_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SOTS|FX" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Libraries searched to resolve FX tags into definitions. */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_FXManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Libraries searched to resolve FX tags into definitions." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFXTriggered_MetaData[] = {
		{ "Category", "SOTS|FX" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Broadcast when an FX job is requested and resolved. */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_FXManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Broadcast when an FX job is requested and resolved." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CueMap_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Tag \xe2\x86\x92 Cue definition map. */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_FXManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tag \xe2\x86\x92 Cue definition map." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CuePools_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Cue definition \xe2\x86\x92 component pools. */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_FXManagerSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cue definition \xe2\x86\x92 component pools." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_FXManagerSubsystem constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Libraries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Libraries;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFXTriggered;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CueMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CueMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CueMap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CuePools_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CuePools_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CuePools;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USOTS_FXManagerSubsystem constinit property declarations *******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetFXSettingsSummary"), .Pointer = &USOTS_FXManagerSubsystem::execGetFXSettingsSummary },
		{ .NameUTF8 = UTF8TEXT("IsBloodEnabled"), .Pointer = &USOTS_FXManagerSubsystem::execIsBloodEnabled },
		{ .NameUTF8 = UTF8TEXT("IsCameraMotionFXEnabled"), .Pointer = &USOTS_FXManagerSubsystem::execIsCameraMotionFXEnabled },
		{ .NameUTF8 = UTF8TEXT("IsHighIntensityFXEnabled"), .Pointer = &USOTS_FXManagerSubsystem::execIsHighIntensityFXEnabled },
		{ .NameUTF8 = UTF8TEXT("RegisterCue"), .Pointer = &USOTS_FXManagerSubsystem::execRegisterCue },
		{ .NameUTF8 = UTF8TEXT("RequestFXCue"), .Pointer = &USOTS_FXManagerSubsystem::execRequestFXCue },
		{ .NameUTF8 = UTF8TEXT("SetBloodEnabled"), .Pointer = &USOTS_FXManagerSubsystem::execSetBloodEnabled },
		{ .NameUTF8 = UTF8TEXT("SetCameraMotionFXEnabled"), .Pointer = &USOTS_FXManagerSubsystem::execSetCameraMotionFXEnabled },
		{ .NameUTF8 = UTF8TEXT("SetHighIntensityFXEnabled"), .Pointer = &USOTS_FXManagerSubsystem::execSetHighIntensityFXEnabled },
		{ .NameUTF8 = UTF8TEXT("TriggerAttachedFXByTag"), .Pointer = &USOTS_FXManagerSubsystem::execTriggerAttachedFXByTag },
		{ .NameUTF8 = UTF8TEXT("TriggerFXByTag"), .Pointer = &USOTS_FXManagerSubsystem::execTriggerFXByTag },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USOTS_FXManagerSubsystem_GetFXSettingsSummary, "GetFXSettingsSummary" }, // 3996424740
		{ &Z_Construct_UFunction_USOTS_FXManagerSubsystem_IsBloodEnabled, "IsBloodEnabled" }, // 1748542349
		{ &Z_Construct_UFunction_USOTS_FXManagerSubsystem_IsCameraMotionFXEnabled, "IsCameraMotionFXEnabled" }, // 1773473434
		{ &Z_Construct_UFunction_USOTS_FXManagerSubsystem_IsHighIntensityFXEnabled, "IsHighIntensityFXEnabled" }, // 3765324783
		{ &Z_Construct_UFunction_USOTS_FXManagerSubsystem_RegisterCue, "RegisterCue" }, // 2641139219
		{ &Z_Construct_UFunction_USOTS_FXManagerSubsystem_RequestFXCue, "RequestFXCue" }, // 1698038264
		{ &Z_Construct_UFunction_USOTS_FXManagerSubsystem_SetBloodEnabled, "SetBloodEnabled" }, // 3492652020
		{ &Z_Construct_UFunction_USOTS_FXManagerSubsystem_SetCameraMotionFXEnabled, "SetCameraMotionFXEnabled" }, // 2484361342
		{ &Z_Construct_UFunction_USOTS_FXManagerSubsystem_SetHighIntensityFXEnabled, "SetHighIntensityFXEnabled" }, // 4187560605
		{ &Z_Construct_UFunction_USOTS_FXManagerSubsystem_TriggerAttachedFXByTag, "TriggerAttachedFXByTag" }, // 3519699637
		{ &Z_Construct_UFunction_USOTS_FXManagerSubsystem_TriggerFXByTag, "TriggerFXByTag" }, // 4164120355
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_FXManagerSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_FXManagerSubsystem_Statics

// ********** Begin Class USOTS_FXManagerSubsystem Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USOTS_FXManagerSubsystem_Statics::NewProp_Libraries_Inner = { "Libraries", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USOTS_FXDefinitionLibrary_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USOTS_FXManagerSubsystem_Statics::NewProp_Libraries = { "Libraries", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_FXManagerSubsystem, Libraries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Libraries_MetaData), NewProp_Libraries_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USOTS_FXManagerSubsystem_Statics::NewProp_OnFXTriggered = { "OnFXTriggered", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_FXManagerSubsystem, OnFXTriggered), Z_Construct_UDelegateFunction_SOTS_FX_Plugin_SOTS_OnFXTriggered__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFXTriggered_MetaData), NewProp_OnFXTriggered_MetaData) }; // 1807069924
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USOTS_FXManagerSubsystem_Statics::NewProp_CueMap_ValueProp = { "CueMap", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USOTS_FXCueDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_FXManagerSubsystem_Statics::NewProp_CueMap_Key_KeyProp = { "CueMap_Key", nullptr, (EPropertyFlags)0x0100000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USOTS_FXManagerSubsystem_Statics::NewProp_CueMap = { "CueMap", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_FXManagerSubsystem, CueMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CueMap_MetaData), NewProp_CueMap_MetaData) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_FXManagerSubsystem_Statics::NewProp_CuePools_ValueProp = { "CuePools", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSOTS_FXCuePool, METADATA_PARAMS(0, nullptr) }; // 1843325814
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USOTS_FXManagerSubsystem_Statics::NewProp_CuePools_Key_KeyProp = { "CuePools_Key", nullptr, (EPropertyFlags)0x0004008000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USOTS_FXCueDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USOTS_FXManagerSubsystem_Statics::NewProp_CuePools = { "CuePools", nullptr, (EPropertyFlags)0x0020088000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_FXManagerSubsystem, CuePools), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CuePools_MetaData), NewProp_CuePools_MetaData) }; // 1843325814
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USOTS_FXManagerSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_FXManagerSubsystem_Statics::NewProp_Libraries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_FXManagerSubsystem_Statics::NewProp_Libraries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_FXManagerSubsystem_Statics::NewProp_OnFXTriggered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_FXManagerSubsystem_Statics::NewProp_CueMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_FXManagerSubsystem_Statics::NewProp_CueMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_FXManagerSubsystem_Statics::NewProp_CueMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_FXManagerSubsystem_Statics::NewProp_CuePools_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_FXManagerSubsystem_Statics::NewProp_CuePools_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_FXManagerSubsystem_Statics::NewProp_CuePools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_FXManagerSubsystem_Statics::PropPointers) < 2048);
// ********** End Class USOTS_FXManagerSubsystem Property Definitions ******************************
UObject* (*const Z_Construct_UClass_USOTS_FXManagerSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_FX_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_FXManagerSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_FXManagerSubsystem_Statics::ClassParams = {
	&USOTS_FXManagerSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USOTS_FXManagerSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_FXManagerSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_FXManagerSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_FXManagerSubsystem_Statics::Class_MetaDataParams)
};
void USOTS_FXManagerSubsystem::StaticRegisterNativesUSOTS_FXManagerSubsystem()
{
	UClass* Class = USOTS_FXManagerSubsystem::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USOTS_FXManagerSubsystem_Statics::Funcs));
}
UClass* Z_Construct_UClass_USOTS_FXManagerSubsystem()
{
	if (!Z_Registration_Info_UClass_USOTS_FXManagerSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_FXManagerSubsystem.OuterSingleton, Z_Construct_UClass_USOTS_FXManagerSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_FXManagerSubsystem.OuterSingleton;
}
USOTS_FXManagerSubsystem::USOTS_FXManagerSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_FXManagerSubsystem);
USOTS_FXManagerSubsystem::~USOTS_FXManagerSubsystem() {}
// ********** End Class USOTS_FXManagerSubsystem ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTS_FXManagerSubsystem_h__Script_SOTS_FX_Plugin_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSOTS_FXCuePool::StaticStruct, Z_Construct_UScriptStruct_FSOTS_FXCuePool_Statics::NewStructOps, TEXT("SOTS_FXCuePool"),&Z_Registration_Info_UScriptStruct_FSOTS_FXCuePool, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_FXCuePool), 1843325814U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_FXManagerSubsystem, USOTS_FXManagerSubsystem::StaticClass, TEXT("USOTS_FXManagerSubsystem"), &Z_Registration_Info_UClass_USOTS_FXManagerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_FXManagerSubsystem), 665669338U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTS_FXManagerSubsystem_h__Script_SOTS_FX_Plugin_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTS_FXManagerSubsystem_h__Script_SOTS_FX_Plugin_3493016261{
	TEXT("/Script/SOTS_FX_Plugin"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTS_FXManagerSubsystem_h__Script_SOTS_FX_Plugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTS_FXManagerSubsystem_h__Script_SOTS_FX_Plugin_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTS_FXManagerSubsystem_h__Script_SOTS_FX_Plugin_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_FX_Plugin_Source_SOTS_FX_Plugin_Public_SOTS_FXManagerSubsystem_h__Script_SOTS_FX_Plugin_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
