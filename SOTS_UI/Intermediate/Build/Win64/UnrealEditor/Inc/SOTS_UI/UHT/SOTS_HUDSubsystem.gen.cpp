// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTS_HUDSubsystem.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_HUDSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
SOTS_UI_API UClass* Z_Construct_UClass_USOTS_HUDSubsystem();
SOTS_UI_API UClass* Z_Construct_UClass_USOTS_HUDSubsystem_NoRegister();
SOTS_UI_API UFunction* Z_Construct_UDelegateFunction_SOTS_UI_SOTS_OnHudFloatChanged__DelegateSignature();
SOTS_UI_API UFunction* Z_Construct_UDelegateFunction_SOTS_UI_SOTS_OnHudTextChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SOTS_UI();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FSOTS_OnHudFloatChanged ***********************************************
struct Z_Construct_UDelegateFunction_SOTS_UI_SOTS_OnHudFloatChanged__DelegateSignature_Statics
{
	struct _Script_SOTS_UI_eventSOTS_OnHudFloatChanged_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SOTS_HUDSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FSOTS_OnHudFloatChanged constinit property declarations ***************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FSOTS_OnHudFloatChanged constinit property declarations *****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FSOTS_OnHudFloatChanged Property Definitions **************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_SOTS_UI_SOTS_OnHudFloatChanged__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SOTS_UI_eventSOTS_OnHudFloatChanged_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SOTS_UI_SOTS_OnHudFloatChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SOTS_UI_SOTS_OnHudFloatChanged__DelegateSignature_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_UI_SOTS_OnHudFloatChanged__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FSOTS_OnHudFloatChanged Property Definitions ****************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SOTS_UI_SOTS_OnHudFloatChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SOTS_UI, nullptr, "SOTS_OnHudFloatChanged__DelegateSignature", 	Z_Construct_UDelegateFunction_SOTS_UI_SOTS_OnHudFloatChanged__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_UI_SOTS_OnHudFloatChanged__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SOTS_UI_SOTS_OnHudFloatChanged__DelegateSignature_Statics::_Script_SOTS_UI_eventSOTS_OnHudFloatChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_UI_SOTS_OnHudFloatChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SOTS_UI_SOTS_OnHudFloatChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SOTS_UI_SOTS_OnHudFloatChanged__DelegateSignature_Statics::_Script_SOTS_UI_eventSOTS_OnHudFloatChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SOTS_UI_SOTS_OnHudFloatChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SOTS_UI_SOTS_OnHudFloatChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSOTS_OnHudFloatChanged_DelegateWrapper(const FMulticastScriptDelegate& SOTS_OnHudFloatChanged, float NewValue)
{
	struct _Script_SOTS_UI_eventSOTS_OnHudFloatChanged_Parms
	{
		float NewValue;
	};
	_Script_SOTS_UI_eventSOTS_OnHudFloatChanged_Parms Parms;
	Parms.NewValue=NewValue;
	SOTS_OnHudFloatChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FSOTS_OnHudFloatChanged *************************************************

// ********** Begin Delegate FSOTS_OnHudTextChanged ************************************************
struct Z_Construct_UDelegateFunction_SOTS_UI_SOTS_OnHudTextChanged__DelegateSignature_Statics
{
	struct _Script_SOTS_UI_eventSOTS_OnHudTextChanged_Parms
	{
		FString NewText;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SOTS_HUDSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FSOTS_OnHudTextChanged constinit property declarations ****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_NewText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FSOTS_OnHudTextChanged constinit property declarations ******************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FSOTS_OnHudTextChanged Property Definitions ***************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SOTS_UI_SOTS_OnHudTextChanged__DelegateSignature_Statics::NewProp_NewText = { "NewText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SOTS_UI_eventSOTS_OnHudTextChanged_Parms, NewText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewText_MetaData), NewProp_NewText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SOTS_UI_SOTS_OnHudTextChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SOTS_UI_SOTS_OnHudTextChanged__DelegateSignature_Statics::NewProp_NewText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_UI_SOTS_OnHudTextChanged__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FSOTS_OnHudTextChanged Property Definitions *****************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SOTS_UI_SOTS_OnHudTextChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SOTS_UI, nullptr, "SOTS_OnHudTextChanged__DelegateSignature", 	Z_Construct_UDelegateFunction_SOTS_UI_SOTS_OnHudTextChanged__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_UI_SOTS_OnHudTextChanged__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_SOTS_UI_SOTS_OnHudTextChanged__DelegateSignature_Statics::_Script_SOTS_UI_eventSOTS_OnHudTextChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SOTS_UI_SOTS_OnHudTextChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SOTS_UI_SOTS_OnHudTextChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SOTS_UI_SOTS_OnHudTextChanged__DelegateSignature_Statics::_Script_SOTS_UI_eventSOTS_OnHudTextChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SOTS_UI_SOTS_OnHudTextChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SOTS_UI_SOTS_OnHudTextChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSOTS_OnHudTextChanged_DelegateWrapper(const FMulticastScriptDelegate& SOTS_OnHudTextChanged, const FString& NewText)
{
	struct _Script_SOTS_UI_eventSOTS_OnHudTextChanged_Parms
	{
		FString NewText;
	};
	_Script_SOTS_UI_eventSOTS_OnHudTextChanged_Parms Parms;
	Parms.NewText=NewText;
	SOTS_OnHudTextChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FSOTS_OnHudTextChanged **************************************************

// ********** Begin Class USOTS_HUDSubsystem Function GetDetectionLevel ****************************
struct Z_Construct_UFunction_USOTS_HUDSubsystem_GetDetectionLevel_Statics
{
	struct SOTS_HUDSubsystem_eventGetDetectionLevel_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|HUD" },
		{ "ModuleRelativePath", "Public/SOTS_HUDSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDetectionLevel constinit property declarations *********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDetectionLevel constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDetectionLevel Property Definitions ********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USOTS_HUDSubsystem_GetDetectionLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_HUDSubsystem_eventGetDetectionLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_HUDSubsystem_GetDetectionLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_HUDSubsystem_GetDetectionLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_HUDSubsystem_GetDetectionLevel_Statics::PropPointers) < 2048);
// ********** End Function GetDetectionLevel Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_HUDSubsystem_GetDetectionLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_HUDSubsystem, nullptr, "GetDetectionLevel", 	Z_Construct_UFunction_USOTS_HUDSubsystem_GetDetectionLevel_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_HUDSubsystem_GetDetectionLevel_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_HUDSubsystem_GetDetectionLevel_Statics::SOTS_HUDSubsystem_eventGetDetectionLevel_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_HUDSubsystem_GetDetectionLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_HUDSubsystem_GetDetectionLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_HUDSubsystem_GetDetectionLevel_Statics::SOTS_HUDSubsystem_eventGetDetectionLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_HUDSubsystem_GetDetectionLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_HUDSubsystem_GetDetectionLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_HUDSubsystem::execGetDetectionLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDetectionLevel();
	P_NATIVE_END;
}
// ********** End Class USOTS_HUDSubsystem Function GetDetectionLevel ******************************

// ********** Begin Class USOTS_HUDSubsystem Function GetHealthPercent *****************************
struct Z_Construct_UFunction_USOTS_HUDSubsystem_GetHealthPercent_Statics
{
	struct SOTS_HUDSubsystem_eventGetHealthPercent_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|HUD" },
		{ "ModuleRelativePath", "Public/SOTS_HUDSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetHealthPercent constinit property declarations **********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetHealthPercent constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetHealthPercent Property Definitions *********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USOTS_HUDSubsystem_GetHealthPercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_HUDSubsystem_eventGetHealthPercent_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_HUDSubsystem_GetHealthPercent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_HUDSubsystem_GetHealthPercent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_HUDSubsystem_GetHealthPercent_Statics::PropPointers) < 2048);
// ********** End Function GetHealthPercent Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_HUDSubsystem_GetHealthPercent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_HUDSubsystem, nullptr, "GetHealthPercent", 	Z_Construct_UFunction_USOTS_HUDSubsystem_GetHealthPercent_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_HUDSubsystem_GetHealthPercent_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_HUDSubsystem_GetHealthPercent_Statics::SOTS_HUDSubsystem_eventGetHealthPercent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_HUDSubsystem_GetHealthPercent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_HUDSubsystem_GetHealthPercent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_HUDSubsystem_GetHealthPercent_Statics::SOTS_HUDSubsystem_eventGetHealthPercent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_HUDSubsystem_GetHealthPercent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_HUDSubsystem_GetHealthPercent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_HUDSubsystem::execGetHealthPercent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHealthPercent();
	P_NATIVE_END;
}
// ********** End Class USOTS_HUDSubsystem Function GetHealthPercent *******************************

// ********** Begin Class USOTS_HUDSubsystem Function GetObjectiveText *****************************
struct Z_Construct_UFunction_USOTS_HUDSubsystem_GetObjectiveText_Statics
{
	struct SOTS_HUDSubsystem_eventGetObjectiveText_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|HUD" },
		{ "ModuleRelativePath", "Public/SOTS_HUDSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetObjectiveText constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetObjectiveText constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetObjectiveText Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USOTS_HUDSubsystem_GetObjectiveText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_HUDSubsystem_eventGetObjectiveText_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_HUDSubsystem_GetObjectiveText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_HUDSubsystem_GetObjectiveText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_HUDSubsystem_GetObjectiveText_Statics::PropPointers) < 2048);
// ********** End Function GetObjectiveText Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_HUDSubsystem_GetObjectiveText_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_HUDSubsystem, nullptr, "GetObjectiveText", 	Z_Construct_UFunction_USOTS_HUDSubsystem_GetObjectiveText_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_HUDSubsystem_GetObjectiveText_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_HUDSubsystem_GetObjectiveText_Statics::SOTS_HUDSubsystem_eventGetObjectiveText_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_HUDSubsystem_GetObjectiveText_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_HUDSubsystem_GetObjectiveText_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_HUDSubsystem_GetObjectiveText_Statics::SOTS_HUDSubsystem_eventGetObjectiveText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_HUDSubsystem_GetObjectiveText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_HUDSubsystem_GetObjectiveText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_HUDSubsystem::execGetObjectiveText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetObjectiveText();
	P_NATIVE_END;
}
// ********** End Class USOTS_HUDSubsystem Function GetObjectiveText *******************************

// ********** Begin Class USOTS_HUDSubsystem Function SetDetectionLevel ****************************
struct Z_Construct_UFunction_USOTS_HUDSubsystem_SetDetectionLevel_Statics
{
	struct SOTS_HUDSubsystem_eventSetDetectionLevel_Parms
	{
		float InLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|HUD" },
		{ "ModuleRelativePath", "Public/SOTS_HUDSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetDetectionLevel constinit property declarations *********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetDetectionLevel constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetDetectionLevel Property Definitions ********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USOTS_HUDSubsystem_SetDetectionLevel_Statics::NewProp_InLevel = { "InLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_HUDSubsystem_eventSetDetectionLevel_Parms, InLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_HUDSubsystem_SetDetectionLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_HUDSubsystem_SetDetectionLevel_Statics::NewProp_InLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_HUDSubsystem_SetDetectionLevel_Statics::PropPointers) < 2048);
// ********** End Function SetDetectionLevel Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_HUDSubsystem_SetDetectionLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_HUDSubsystem, nullptr, "SetDetectionLevel", 	Z_Construct_UFunction_USOTS_HUDSubsystem_SetDetectionLevel_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_HUDSubsystem_SetDetectionLevel_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_HUDSubsystem_SetDetectionLevel_Statics::SOTS_HUDSubsystem_eventSetDetectionLevel_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_HUDSubsystem_SetDetectionLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_HUDSubsystem_SetDetectionLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_HUDSubsystem_SetDetectionLevel_Statics::SOTS_HUDSubsystem_eventSetDetectionLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_HUDSubsystem_SetDetectionLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_HUDSubsystem_SetDetectionLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_HUDSubsystem::execSetDetectionLevel)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDetectionLevel(Z_Param_InLevel);
	P_NATIVE_END;
}
// ********** End Class USOTS_HUDSubsystem Function SetDetectionLevel ******************************

// ********** Begin Class USOTS_HUDSubsystem Function SetHealthPercent *****************************
struct Z_Construct_UFunction_USOTS_HUDSubsystem_SetHealthPercent_Statics
{
	struct SOTS_HUDSubsystem_eventSetHealthPercent_Parms
	{
		float InPercent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|HUD" },
		{ "ModuleRelativePath", "Public/SOTS_HUDSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetHealthPercent constinit property declarations **********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InPercent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetHealthPercent constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetHealthPercent Property Definitions *********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USOTS_HUDSubsystem_SetHealthPercent_Statics::NewProp_InPercent = { "InPercent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_HUDSubsystem_eventSetHealthPercent_Parms, InPercent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_HUDSubsystem_SetHealthPercent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_HUDSubsystem_SetHealthPercent_Statics::NewProp_InPercent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_HUDSubsystem_SetHealthPercent_Statics::PropPointers) < 2048);
// ********** End Function SetHealthPercent Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_HUDSubsystem_SetHealthPercent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_HUDSubsystem, nullptr, "SetHealthPercent", 	Z_Construct_UFunction_USOTS_HUDSubsystem_SetHealthPercent_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_HUDSubsystem_SetHealthPercent_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_HUDSubsystem_SetHealthPercent_Statics::SOTS_HUDSubsystem_eventSetHealthPercent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_HUDSubsystem_SetHealthPercent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_HUDSubsystem_SetHealthPercent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_HUDSubsystem_SetHealthPercent_Statics::SOTS_HUDSubsystem_eventSetHealthPercent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_HUDSubsystem_SetHealthPercent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_HUDSubsystem_SetHealthPercent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_HUDSubsystem::execSetHealthPercent)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InPercent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHealthPercent(Z_Param_InPercent);
	P_NATIVE_END;
}
// ********** End Class USOTS_HUDSubsystem Function SetHealthPercent *******************************

// ********** Begin Class USOTS_HUDSubsystem Function SetObjectiveText *****************************
struct Z_Construct_UFunction_USOTS_HUDSubsystem_SetObjectiveText_Statics
{
	struct SOTS_HUDSubsystem_eventSetObjectiveText_Parms
	{
		FString InText;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|HUD" },
		{ "ModuleRelativePath", "Public/SOTS_HUDSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetObjectiveText constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_InText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetObjectiveText constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetObjectiveText Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USOTS_HUDSubsystem_SetObjectiveText_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_HUDSubsystem_eventSetObjectiveText_Parms, InText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InText_MetaData), NewProp_InText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_HUDSubsystem_SetObjectiveText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_HUDSubsystem_SetObjectiveText_Statics::NewProp_InText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_HUDSubsystem_SetObjectiveText_Statics::PropPointers) < 2048);
// ********** End Function SetObjectiveText Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_HUDSubsystem_SetObjectiveText_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_HUDSubsystem, nullptr, "SetObjectiveText", 	Z_Construct_UFunction_USOTS_HUDSubsystem_SetObjectiveText_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_HUDSubsystem_SetObjectiveText_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_HUDSubsystem_SetObjectiveText_Statics::SOTS_HUDSubsystem_eventSetObjectiveText_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_HUDSubsystem_SetObjectiveText_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_HUDSubsystem_SetObjectiveText_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_HUDSubsystem_SetObjectiveText_Statics::SOTS_HUDSubsystem_eventSetObjectiveText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_HUDSubsystem_SetObjectiveText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_HUDSubsystem_SetObjectiveText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_HUDSubsystem::execSetObjectiveText)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InText);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetObjectiveText(Z_Param_InText);
	P_NATIVE_END;
}
// ********** End Class USOTS_HUDSubsystem Function SetObjectiveText *******************************

// ********** Begin Class USOTS_HUDSubsystem *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_HUDSubsystem;
UClass* USOTS_HUDSubsystem::GetPrivateStaticClass()
{
	using TClass = USOTS_HUDSubsystem;
	if (!Z_Registration_Info_UClass_USOTS_HUDSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_HUDSubsystem"),
			Z_Registration_Info_UClass_USOTS_HUDSubsystem.InnerSingleton,
			StaticRegisterNativesUSOTS_HUDSubsystem,
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
	return Z_Registration_Info_UClass_USOTS_HUDSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_HUDSubsystem_NoRegister()
{
	return USOTS_HUDSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_HUDSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SOTS_HUDSubsystem.h" },
		{ "ModuleRelativePath", "Public/SOTS_HUDSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthPercentChanged_MetaData[] = {
		{ "Category", "SOTS|HUD" },
		{ "ModuleRelativePath", "Public/SOTS_HUDSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDetectionLevelChanged_MetaData[] = {
		{ "Category", "SOTS|HUD" },
		{ "ModuleRelativePath", "Public/SOTS_HUDSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnObjectiveTextChanged_MetaData[] = {
		{ "Category", "SOTS|HUD" },
		{ "ModuleRelativePath", "Public/SOTS_HUDSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthPercent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SOTS|HUD" },
		{ "ModuleRelativePath", "Public/SOTS_HUDSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetectionLevel_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SOTS|HUD" },
		{ "ModuleRelativePath", "Public/SOTS_HUDSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectiveText_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SOTS|HUD" },
		{ "ModuleRelativePath", "Public/SOTS_HUDSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_HUDSubsystem constinit property declarations ***********************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthPercentChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDetectionLevelChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnObjectiveTextChanged;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthPercent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DetectionLevel;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ObjectiveText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USOTS_HUDSubsystem constinit property declarations *************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetDetectionLevel"), .Pointer = &USOTS_HUDSubsystem::execGetDetectionLevel },
		{ .NameUTF8 = UTF8TEXT("GetHealthPercent"), .Pointer = &USOTS_HUDSubsystem::execGetHealthPercent },
		{ .NameUTF8 = UTF8TEXT("GetObjectiveText"), .Pointer = &USOTS_HUDSubsystem::execGetObjectiveText },
		{ .NameUTF8 = UTF8TEXT("SetDetectionLevel"), .Pointer = &USOTS_HUDSubsystem::execSetDetectionLevel },
		{ .NameUTF8 = UTF8TEXT("SetHealthPercent"), .Pointer = &USOTS_HUDSubsystem::execSetHealthPercent },
		{ .NameUTF8 = UTF8TEXT("SetObjectiveText"), .Pointer = &USOTS_HUDSubsystem::execSetObjectiveText },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USOTS_HUDSubsystem_GetDetectionLevel, "GetDetectionLevel" }, // 1252132675
		{ &Z_Construct_UFunction_USOTS_HUDSubsystem_GetHealthPercent, "GetHealthPercent" }, // 1717509267
		{ &Z_Construct_UFunction_USOTS_HUDSubsystem_GetObjectiveText, "GetObjectiveText" }, // 753520059
		{ &Z_Construct_UFunction_USOTS_HUDSubsystem_SetDetectionLevel, "SetDetectionLevel" }, // 2542493904
		{ &Z_Construct_UFunction_USOTS_HUDSubsystem_SetHealthPercent, "SetHealthPercent" }, // 442275438
		{ &Z_Construct_UFunction_USOTS_HUDSubsystem_SetObjectiveText, "SetObjectiveText" }, // 490254258
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_HUDSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_HUDSubsystem_Statics

// ********** Begin Class USOTS_HUDSubsystem Property Definitions **********************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USOTS_HUDSubsystem_Statics::NewProp_OnHealthPercentChanged = { "OnHealthPercentChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_HUDSubsystem, OnHealthPercentChanged), Z_Construct_UDelegateFunction_SOTS_UI_SOTS_OnHudFloatChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHealthPercentChanged_MetaData), NewProp_OnHealthPercentChanged_MetaData) }; // 269119929
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USOTS_HUDSubsystem_Statics::NewProp_OnDetectionLevelChanged = { "OnDetectionLevelChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_HUDSubsystem, OnDetectionLevelChanged), Z_Construct_UDelegateFunction_SOTS_UI_SOTS_OnHudFloatChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDetectionLevelChanged_MetaData), NewProp_OnDetectionLevelChanged_MetaData) }; // 269119929
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USOTS_HUDSubsystem_Statics::NewProp_OnObjectiveTextChanged = { "OnObjectiveTextChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_HUDSubsystem, OnObjectiveTextChanged), Z_Construct_UDelegateFunction_SOTS_UI_SOTS_OnHudTextChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnObjectiveTextChanged_MetaData), NewProp_OnObjectiveTextChanged_MetaData) }; // 2206509680
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USOTS_HUDSubsystem_Statics::NewProp_HealthPercent = { "HealthPercent", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_HUDSubsystem, HealthPercent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthPercent_MetaData), NewProp_HealthPercent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USOTS_HUDSubsystem_Statics::NewProp_DetectionLevel = { "DetectionLevel", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_HUDSubsystem, DetectionLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetectionLevel_MetaData), NewProp_DetectionLevel_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USOTS_HUDSubsystem_Statics::NewProp_ObjectiveText = { "ObjectiveText", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_HUDSubsystem, ObjectiveText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectiveText_MetaData), NewProp_ObjectiveText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USOTS_HUDSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_HUDSubsystem_Statics::NewProp_OnHealthPercentChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_HUDSubsystem_Statics::NewProp_OnDetectionLevelChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_HUDSubsystem_Statics::NewProp_OnObjectiveTextChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_HUDSubsystem_Statics::NewProp_HealthPercent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_HUDSubsystem_Statics::NewProp_DetectionLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_HUDSubsystem_Statics::NewProp_ObjectiveText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_HUDSubsystem_Statics::PropPointers) < 2048);
// ********** End Class USOTS_HUDSubsystem Property Definitions ************************************
UObject* (*const Z_Construct_UClass_USOTS_HUDSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_UI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_HUDSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_HUDSubsystem_Statics::ClassParams = {
	&USOTS_HUDSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USOTS_HUDSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_HUDSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_HUDSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_HUDSubsystem_Statics::Class_MetaDataParams)
};
void USOTS_HUDSubsystem::StaticRegisterNativesUSOTS_HUDSubsystem()
{
	UClass* Class = USOTS_HUDSubsystem::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USOTS_HUDSubsystem_Statics::Funcs));
}
UClass* Z_Construct_UClass_USOTS_HUDSubsystem()
{
	if (!Z_Registration_Info_UClass_USOTS_HUDSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_HUDSubsystem.OuterSingleton, Z_Construct_UClass_USOTS_HUDSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_HUDSubsystem.OuterSingleton;
}
USOTS_HUDSubsystem::USOTS_HUDSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_HUDSubsystem);
USOTS_HUDSubsystem::~USOTS_HUDSubsystem() {}
// ********** End Class USOTS_HUDSubsystem *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_HUDSubsystem_h__Script_SOTS_UI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_HUDSubsystem, USOTS_HUDSubsystem::StaticClass, TEXT("USOTS_HUDSubsystem"), &Z_Registration_Info_UClass_USOTS_HUDSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_HUDSubsystem), 944114003U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_HUDSubsystem_h__Script_SOTS_UI_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_HUDSubsystem_h__Script_SOTS_UI_3481382909{
	TEXT("/Script/SOTS_UI"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_HUDSubsystem_h__Script_SOTS_UI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_HUDSubsystem_h__Script_SOTS_UI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
