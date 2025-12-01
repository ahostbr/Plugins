// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTS_KEMExecutionAnchor.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_KEMExecutionAnchor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
SOTS_KILLEXECUTIONMANAGER_API UClass* Z_Construct_UClass_ASOTS_KEMExecutionAnchor();
SOTS_KILLEXECUTIONMANAGER_API UClass* Z_Construct_UClass_ASOTS_KEMExecutionAnchor_NoRegister();
SOTS_KILLEXECUTIONMANAGER_API UClass* Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_NoRegister();
SOTS_KILLEXECUTIONMANAGER_API UEnum* Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_ExecutionFamily();
UPackage* Z_Construct_UPackage__Script_SOTS_KillExecutionManager();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASOTS_KEMExecutionAnchor Function GetEnvContextTags **********************
struct Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetEnvContextTags_Statics
{
	struct SOTS_KEMExecutionAnchor_eventGetEnvContextTags_Parms
	{
		TArray<FGameplayTag> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|KEM|Anchor" },
		{ "ModuleRelativePath", "Public/SOTS_KEMExecutionAnchor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetEnvContextTags constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetEnvContextTags constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetEnvContextTags Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetEnvContextTags_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetEnvContextTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEMExecutionAnchor_eventGetEnvContextTags_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetEnvContextTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetEnvContextTags_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetEnvContextTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetEnvContextTags_Statics::PropPointers) < 2048);
// ********** End Function GetEnvContextTags Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetEnvContextTags_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASOTS_KEMExecutionAnchor, nullptr, "GetEnvContextTags", 	Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetEnvContextTags_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetEnvContextTags_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetEnvContextTags_Statics::SOTS_KEMExecutionAnchor_eventGetEnvContextTags_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetEnvContextTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetEnvContextTags_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetEnvContextTags_Statics::SOTS_KEMExecutionAnchor_eventGetEnvContextTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetEnvContextTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetEnvContextTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASOTS_KEMExecutionAnchor::execGetEnvContextTags)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FGameplayTag>*)Z_Param__Result=P_THIS->GetEnvContextTags();
	P_NATIVE_END;
}
// ********** End Class ASOTS_KEMExecutionAnchor Function GetEnvContextTags ************************

// ********** Begin Class ASOTS_KEMExecutionAnchor Function GetExecutionFamily *********************
struct Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetExecutionFamily_Statics
{
	struct SOTS_KEMExecutionAnchor_eventGetExecutionFamily_Parms
	{
		ESOTS_KEM_ExecutionFamily ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|KEM|Anchor" },
		{ "ModuleRelativePath", "Public/SOTS_KEMExecutionAnchor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetExecutionFamily constinit property declarations ********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetExecutionFamily constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetExecutionFamily Property Definitions *******************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetExecutionFamily_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetExecutionFamily_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEMExecutionAnchor_eventGetExecutionFamily_Parms, ReturnValue), Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_ExecutionFamily, METADATA_PARAMS(0, nullptr) }; // 2142969268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetExecutionFamily_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetExecutionFamily_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetExecutionFamily_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetExecutionFamily_Statics::PropPointers) < 2048);
// ********** End Function GetExecutionFamily Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetExecutionFamily_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASOTS_KEMExecutionAnchor, nullptr, "GetExecutionFamily", 	Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetExecutionFamily_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetExecutionFamily_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetExecutionFamily_Statics::SOTS_KEMExecutionAnchor_eventGetExecutionFamily_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetExecutionFamily_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetExecutionFamily_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetExecutionFamily_Statics::SOTS_KEMExecutionAnchor_eventGetExecutionFamily_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetExecutionFamily()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetExecutionFamily_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASOTS_KEMExecutionAnchor::execGetExecutionFamily)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESOTS_KEM_ExecutionFamily*)Z_Param__Result=P_THIS->GetExecutionFamily();
	P_NATIVE_END;
}
// ********** End Class ASOTS_KEMExecutionAnchor Function GetExecutionFamily ***********************

// ********** Begin Class ASOTS_KEMExecutionAnchor Function GetPositionTag *************************
struct Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetPositionTag_Statics
{
	struct SOTS_KEMExecutionAnchor_eventGetPositionTag_Parms
	{
		FGameplayTag ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|KEM|Anchor" },
		{ "ModuleRelativePath", "Public/SOTS_KEMExecutionAnchor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPositionTag constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPositionTag constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPositionTag Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetPositionTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEMExecutionAnchor_eventGetPositionTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetPositionTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetPositionTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetPositionTag_Statics::PropPointers) < 2048);
// ********** End Function GetPositionTag Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetPositionTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASOTS_KEMExecutionAnchor, nullptr, "GetPositionTag", 	Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetPositionTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetPositionTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetPositionTag_Statics::SOTS_KEMExecutionAnchor_eventGetPositionTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetPositionTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetPositionTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetPositionTag_Statics::SOTS_KEMExecutionAnchor_eventGetPositionTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetPositionTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetPositionTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASOTS_KEMExecutionAnchor::execGetPositionTag)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTag*)Z_Param__Result=P_THIS->GetPositionTag();
	P_NATIVE_END;
}
// ********** End Class ASOTS_KEMExecutionAnchor Function GetPositionTag ***************************

// ********** Begin Class ASOTS_KEMExecutionAnchor Function GetPreferredExecutions *****************
struct Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetPreferredExecutions_Statics
{
	struct SOTS_KEMExecutionAnchor_eventGetPreferredExecutions_Parms
	{
		TArray<TSoftObjectPtr<USOTS_KEM_ExecutionDefinition>> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|KEM|Anchor" },
		{ "ModuleRelativePath", "Public/SOTS_KEMExecutionAnchor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPreferredExecutions constinit property declarations ****************
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPreferredExecutions constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPreferredExecutions Property Definitions ***************************
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetPreferredExecutions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetPreferredExecutions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEMExecutionAnchor_eventGetPreferredExecutions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetPreferredExecutions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetPreferredExecutions_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetPreferredExecutions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetPreferredExecutions_Statics::PropPointers) < 2048);
// ********** End Function GetPreferredExecutions Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetPreferredExecutions_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASOTS_KEMExecutionAnchor, nullptr, "GetPreferredExecutions", 	Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetPreferredExecutions_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetPreferredExecutions_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetPreferredExecutions_Statics::SOTS_KEMExecutionAnchor_eventGetPreferredExecutions_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetPreferredExecutions_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetPreferredExecutions_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetPreferredExecutions_Statics::SOTS_KEMExecutionAnchor_eventGetPreferredExecutions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetPreferredExecutions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetPreferredExecutions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASOTS_KEMExecutionAnchor::execGetPreferredExecutions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<TSoftObjectPtr<USOTS_KEM_ExecutionDefinition>>*)Z_Param__Result=P_THIS->GetPreferredExecutions();
	P_NATIVE_END;
}
// ********** End Class ASOTS_KEMExecutionAnchor Function GetPreferredExecutions *******************

// ********** Begin Class ASOTS_KEMExecutionAnchor Function GetUseRadius ***************************
struct Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetUseRadius_Statics
{
	struct SOTS_KEMExecutionAnchor_eventGetUseRadius_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|KEM|Anchor" },
		{ "ModuleRelativePath", "Public/SOTS_KEMExecutionAnchor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetUseRadius constinit property declarations **************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetUseRadius constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetUseRadius Property Definitions *************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetUseRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEMExecutionAnchor_eventGetUseRadius_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetUseRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetUseRadius_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetUseRadius_Statics::PropPointers) < 2048);
// ********** End Function GetUseRadius Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetUseRadius_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASOTS_KEMExecutionAnchor, nullptr, "GetUseRadius", 	Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetUseRadius_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetUseRadius_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetUseRadius_Statics::SOTS_KEMExecutionAnchor_eventGetUseRadius_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetUseRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetUseRadius_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetUseRadius_Statics::SOTS_KEMExecutionAnchor_eventGetUseRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetUseRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetUseRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASOTS_KEMExecutionAnchor::execGetUseRadius)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetUseRadius();
	P_NATIVE_END;
}
// ********** End Class ASOTS_KEMExecutionAnchor Function GetUseRadius *****************************

// ********** Begin Class ASOTS_KEMExecutionAnchor *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ASOTS_KEMExecutionAnchor;
UClass* ASOTS_KEMExecutionAnchor::GetPrivateStaticClass()
{
	using TClass = ASOTS_KEMExecutionAnchor;
	if (!Z_Registration_Info_UClass_ASOTS_KEMExecutionAnchor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_KEMExecutionAnchor"),
			Z_Registration_Info_UClass_ASOTS_KEMExecutionAnchor.InnerSingleton,
			StaticRegisterNativesASOTS_KEMExecutionAnchor,
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
	return Z_Registration_Info_UClass_ASOTS_KEMExecutionAnchor.InnerSingleton;
}
UClass* Z_Construct_UClass_ASOTS_KEMExecutionAnchor_NoRegister()
{
	return ASOTS_KEMExecutionAnchor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASOTS_KEMExecutionAnchor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * DevTools: Python anchor coverage tools scan maps for ASOTS_KEMExecutionAnchor\n * instances to correlate with ExecutionDefinitions and PositionTags.\n */" },
#endif
		{ "IncludePath", "SOTS_KEMExecutionAnchor.h" },
		{ "ModuleRelativePath", "Public/SOTS_KEMExecutionAnchor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DevTools: Python anchor coverage tools scan maps for ASOTS_KEMExecutionAnchor\ninstances to correlate with ExecutionDefinitions and PositionTags." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnchorRoot_MetaData[] = {
		{ "Category", "SOTS|KEM|Anchor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SOTS_KEMExecutionAnchor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[] = {
		{ "Category", "SOTS|KEM|Anchor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SOTS_KEMExecutionAnchor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionTag_MetaData[] = {
		{ "Category", "SOTS|KEM|Anchor" },
		{ "ModuleRelativePath", "Public/SOTS_KEMExecutionAnchor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Match one of the canonical SOTS.KEM.Position.* tags to describe how an execution should approach this spot." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionFamily_MetaData[] = {
		{ "Category", "SOTS|KEM|Anchor" },
		{ "ModuleRelativePath", "Public/SOTS_KEMExecutionAnchor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Select the family that best represents this anchor (GroundRear \xe2\x86\x94 PositionTag Ground.Rear, VerticalAbove \xe2\x86\x94 Vertical.Above, etc.)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreferredExecutions_MetaData[] = {
		{ "Category", "SOTS|KEM|Anchor" },
		{ "ModuleRelativePath", "Public/SOTS_KEMExecutionAnchor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional preferred executions that should run when the player uses this anchor area." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseRadius_MetaData[] = {
		{ "Category", "SOTS|KEM|Anchor" },
		{ "ModuleRelativePath", "Public/SOTS_KEMExecutionAnchor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Radius within which this anchor is considered valid by supporting systems." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnvContextTags_MetaData[] = {
		{ "Category", "SOTS|KEM|Anchor" },
		{ "ModuleRelativePath", "Public/SOTS_KEMExecutionAnchor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Extra tags that describe the surrounding environment (ledge, railing, window, etc.)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class ASOTS_KEMExecutionAnchor constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnchorRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ArrowComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PositionTag;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ExecutionFamily_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ExecutionFamily;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PreferredExecutions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PreferredExecutions;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UseRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EnvContextTags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EnvContextTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ASOTS_KEMExecutionAnchor constinit property declarations *******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetEnvContextTags"), .Pointer = &ASOTS_KEMExecutionAnchor::execGetEnvContextTags },
		{ .NameUTF8 = UTF8TEXT("GetExecutionFamily"), .Pointer = &ASOTS_KEMExecutionAnchor::execGetExecutionFamily },
		{ .NameUTF8 = UTF8TEXT("GetPositionTag"), .Pointer = &ASOTS_KEMExecutionAnchor::execGetPositionTag },
		{ .NameUTF8 = UTF8TEXT("GetPreferredExecutions"), .Pointer = &ASOTS_KEMExecutionAnchor::execGetPreferredExecutions },
		{ .NameUTF8 = UTF8TEXT("GetUseRadius"), .Pointer = &ASOTS_KEMExecutionAnchor::execGetUseRadius },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetEnvContextTags, "GetEnvContextTags" }, // 3208266059
		{ &Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetExecutionFamily, "GetExecutionFamily" }, // 208567550
		{ &Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetPositionTag, "GetPositionTag" }, // 1084595527
		{ &Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetPreferredExecutions, "GetPreferredExecutions" }, // 1527466981
		{ &Z_Construct_UFunction_ASOTS_KEMExecutionAnchor_GetUseRadius, "GetUseRadius" }, // 1752377762
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASOTS_KEMExecutionAnchor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ASOTS_KEMExecutionAnchor_Statics

// ********** Begin Class ASOTS_KEMExecutionAnchor Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASOTS_KEMExecutionAnchor_Statics::NewProp_AnchorRoot = { "AnchorRoot", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASOTS_KEMExecutionAnchor, AnchorRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnchorRoot_MetaData), NewProp_AnchorRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASOTS_KEMExecutionAnchor_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASOTS_KEMExecutionAnchor, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrowComponent_MetaData), NewProp_ArrowComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASOTS_KEMExecutionAnchor_Statics::NewProp_PositionTag = { "PositionTag", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASOTS_KEMExecutionAnchor, PositionTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionTag_MetaData), NewProp_PositionTag_MetaData) }; // 517357616
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASOTS_KEMExecutionAnchor_Statics::NewProp_ExecutionFamily_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASOTS_KEMExecutionAnchor_Statics::NewProp_ExecutionFamily = { "ExecutionFamily", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASOTS_KEMExecutionAnchor, ExecutionFamily), Z_Construct_UEnum_SOTS_KillExecutionManager_ESOTS_KEM_ExecutionFamily, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionFamily_MetaData), NewProp_ExecutionFamily_MetaData) }; // 2142969268
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ASOTS_KEMExecutionAnchor_Statics::NewProp_PreferredExecutions_Inner = { "PreferredExecutions", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASOTS_KEMExecutionAnchor_Statics::NewProp_PreferredExecutions = { "PreferredExecutions", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASOTS_KEMExecutionAnchor, PreferredExecutions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreferredExecutions_MetaData), NewProp_PreferredExecutions_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASOTS_KEMExecutionAnchor_Statics::NewProp_UseRadius = { "UseRadius", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASOTS_KEMExecutionAnchor, UseRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseRadius_MetaData), NewProp_UseRadius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASOTS_KEMExecutionAnchor_Statics::NewProp_EnvContextTags_Inner = { "EnvContextTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASOTS_KEMExecutionAnchor_Statics::NewProp_EnvContextTags = { "EnvContextTags", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASOTS_KEMExecutionAnchor, EnvContextTags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnvContextTags_MetaData), NewProp_EnvContextTags_MetaData) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASOTS_KEMExecutionAnchor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOTS_KEMExecutionAnchor_Statics::NewProp_AnchorRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOTS_KEMExecutionAnchor_Statics::NewProp_ArrowComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOTS_KEMExecutionAnchor_Statics::NewProp_PositionTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOTS_KEMExecutionAnchor_Statics::NewProp_ExecutionFamily_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOTS_KEMExecutionAnchor_Statics::NewProp_ExecutionFamily,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOTS_KEMExecutionAnchor_Statics::NewProp_PreferredExecutions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOTS_KEMExecutionAnchor_Statics::NewProp_PreferredExecutions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOTS_KEMExecutionAnchor_Statics::NewProp_UseRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOTS_KEMExecutionAnchor_Statics::NewProp_EnvContextTags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOTS_KEMExecutionAnchor_Statics::NewProp_EnvContextTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASOTS_KEMExecutionAnchor_Statics::PropPointers) < 2048);
// ********** End Class ASOTS_KEMExecutionAnchor Property Definitions ******************************
UObject* (*const Z_Construct_UClass_ASOTS_KEMExecutionAnchor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_KillExecutionManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASOTS_KEMExecutionAnchor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASOTS_KEMExecutionAnchor_Statics::ClassParams = {
	&ASOTS_KEMExecutionAnchor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASOTS_KEMExecutionAnchor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASOTS_KEMExecutionAnchor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASOTS_KEMExecutionAnchor_Statics::Class_MetaDataParams), Z_Construct_UClass_ASOTS_KEMExecutionAnchor_Statics::Class_MetaDataParams)
};
void ASOTS_KEMExecutionAnchor::StaticRegisterNativesASOTS_KEMExecutionAnchor()
{
	UClass* Class = ASOTS_KEMExecutionAnchor::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_ASOTS_KEMExecutionAnchor_Statics::Funcs));
}
UClass* Z_Construct_UClass_ASOTS_KEMExecutionAnchor()
{
	if (!Z_Registration_Info_UClass_ASOTS_KEMExecutionAnchor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASOTS_KEMExecutionAnchor.OuterSingleton, Z_Construct_UClass_ASOTS_KEMExecutionAnchor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASOTS_KEMExecutionAnchor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ASOTS_KEMExecutionAnchor);
ASOTS_KEMExecutionAnchor::~ASOTS_KEMExecutionAnchor() {}
// ********** End Class ASOTS_KEMExecutionAnchor ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEMExecutionAnchor_h__Script_SOTS_KillExecutionManager_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASOTS_KEMExecutionAnchor, ASOTS_KEMExecutionAnchor::StaticClass, TEXT("ASOTS_KEMExecutionAnchor"), &Z_Registration_Info_UClass_ASOTS_KEMExecutionAnchor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASOTS_KEMExecutionAnchor), 2007978115U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEMExecutionAnchor_h__Script_SOTS_KillExecutionManager_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEMExecutionAnchor_h__Script_SOTS_KillExecutionManager_2543826339{
	TEXT("/Script/SOTS_KillExecutionManager"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEMExecutionAnchor_h__Script_SOTS_KillExecutionManager_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEMExecutionAnchor_h__Script_SOTS_KillExecutionManager_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
