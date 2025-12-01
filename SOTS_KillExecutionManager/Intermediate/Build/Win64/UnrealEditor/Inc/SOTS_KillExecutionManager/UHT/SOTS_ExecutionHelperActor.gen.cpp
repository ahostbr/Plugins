// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTS_ExecutionHelperActor.h"
#include "SOTS_KEM_Types.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_ExecutionHelperActor() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor();
SOTS_KILLEXECUTIONMANAGER_API UClass* Z_Construct_UClass_ASOTS_ExecutionHelperActor();
SOTS_KILLEXECUTIONMANAGER_API UClass* Z_Construct_UClass_ASOTS_ExecutionHelperActor_NoRegister();
SOTS_KILLEXECUTIONMANAGER_API UClass* Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_NoRegister();
SOTS_KILLEXECUTIONMANAGER_API UClass* Z_Construct_UClass_USOTS_SpawnExecutionData_NoRegister();
SOTS_KILLEXECUTIONMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_ExecutionContext();
SOTS_KILLEXECUTIONMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_KEM_OmniTraceWarpResult();
UPackage* Z_Construct_UPackage__Script_SOTS_KillExecutionManager();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASOTS_ExecutionHelperActor Function GetSpawnTransform ********************
struct Z_Construct_UFunction_ASOTS_ExecutionHelperActor_GetSpawnTransform_Statics
{
	struct SOTS_ExecutionHelperActor_eventGetSpawnTransform_Parms
	{
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|KEM|Debug" },
		{ "ModuleRelativePath", "Public/SOTS_ExecutionHelperActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSpawnTransform constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSpawnTransform constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSpawnTransform Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASOTS_ExecutionHelperActor_GetSpawnTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_ExecutionHelperActor_eventGetSpawnTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASOTS_ExecutionHelperActor_GetSpawnTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASOTS_ExecutionHelperActor_GetSpawnTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASOTS_ExecutionHelperActor_GetSpawnTransform_Statics::PropPointers) < 2048);
// ********** End Function GetSpawnTransform Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASOTS_ExecutionHelperActor_GetSpawnTransform_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASOTS_ExecutionHelperActor, nullptr, "GetSpawnTransform", 	Z_Construct_UFunction_ASOTS_ExecutionHelperActor_GetSpawnTransform_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ASOTS_ExecutionHelperActor_GetSpawnTransform_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ASOTS_ExecutionHelperActor_GetSpawnTransform_Statics::SOTS_ExecutionHelperActor_eventGetSpawnTransform_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASOTS_ExecutionHelperActor_GetSpawnTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASOTS_ExecutionHelperActor_GetSpawnTransform_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASOTS_ExecutionHelperActor_GetSpawnTransform_Statics::SOTS_ExecutionHelperActor_eventGetSpawnTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASOTS_ExecutionHelperActor_GetSpawnTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASOTS_ExecutionHelperActor_GetSpawnTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASOTS_ExecutionHelperActor::execGetSpawnTransform)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetSpawnTransform();
	P_NATIVE_END;
}
// ********** End Class ASOTS_ExecutionHelperActor Function GetSpawnTransform **********************

// ********** Begin Class ASOTS_ExecutionHelperActor Function GetWarpResult ************************
struct Z_Construct_UFunction_ASOTS_ExecutionHelperActor_GetWarpResult_Statics
{
	struct SOTS_ExecutionHelperActor_eventGetWarpResult_Parms
	{
		FSOTS_KEM_OmniTraceWarpResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|KEM|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Debug-only accessors used by warp visualisation widgets.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_ExecutionHelperActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Debug-only accessors used by warp visualisation widgets." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetWarpResult constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetWarpResult constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetWarpResult Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASOTS_ExecutionHelperActor_GetWarpResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_ExecutionHelperActor_eventGetWarpResult_Parms, ReturnValue), Z_Construct_UScriptStruct_FSOTS_KEM_OmniTraceWarpResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 708898929
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASOTS_ExecutionHelperActor_GetWarpResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASOTS_ExecutionHelperActor_GetWarpResult_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASOTS_ExecutionHelperActor_GetWarpResult_Statics::PropPointers) < 2048);
// ********** End Function GetWarpResult Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASOTS_ExecutionHelperActor_GetWarpResult_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASOTS_ExecutionHelperActor, nullptr, "GetWarpResult", 	Z_Construct_UFunction_ASOTS_ExecutionHelperActor_GetWarpResult_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ASOTS_ExecutionHelperActor_GetWarpResult_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ASOTS_ExecutionHelperActor_GetWarpResult_Statics::SOTS_ExecutionHelperActor_eventGetWarpResult_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASOTS_ExecutionHelperActor_GetWarpResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASOTS_ExecutionHelperActor_GetWarpResult_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASOTS_ExecutionHelperActor_GetWarpResult_Statics::SOTS_ExecutionHelperActor_eventGetWarpResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASOTS_ExecutionHelperActor_GetWarpResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASOTS_ExecutionHelperActor_GetWarpResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASOTS_ExecutionHelperActor::execGetWarpResult)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSOTS_KEM_OmniTraceWarpResult*)Z_Param__Result=P_THIS->GetWarpResult();
	P_NATIVE_END;
}
// ********** End Class ASOTS_ExecutionHelperActor Function GetWarpResult **************************

// ********** Begin Class ASOTS_ExecutionHelperActor Function NotifyExecutionEnded *****************
struct Z_Construct_UFunction_ASOTS_ExecutionHelperActor_NotifyExecutionEnded_Statics
{
	struct SOTS_ExecutionHelperActor_eventNotifyExecutionEnded_Parms
	{
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|KEM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Signals to KEM that this execution has fully ended. Intended to be\n// called from Blueprint (e.g., via montage notifies) when the helper\n// has finished its work.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_ExecutionHelperActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Signals to KEM that this execution has fully ended. Intended to be\ncalled from Blueprint (e.g., via montage notifies) when the helper\nhas finished its work." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function NotifyExecutionEnded constinit property declarations ******************
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function NotifyExecutionEnded constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function NotifyExecutionEnded Property Definitions *****************************
void Z_Construct_UFunction_ASOTS_ExecutionHelperActor_NotifyExecutionEnded_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SOTS_ExecutionHelperActor_eventNotifyExecutionEnded_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASOTS_ExecutionHelperActor_NotifyExecutionEnded_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_ExecutionHelperActor_eventNotifyExecutionEnded_Parms), &Z_Construct_UFunction_ASOTS_ExecutionHelperActor_NotifyExecutionEnded_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASOTS_ExecutionHelperActor_NotifyExecutionEnded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASOTS_ExecutionHelperActor_NotifyExecutionEnded_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASOTS_ExecutionHelperActor_NotifyExecutionEnded_Statics::PropPointers) < 2048);
// ********** End Function NotifyExecutionEnded Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASOTS_ExecutionHelperActor_NotifyExecutionEnded_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASOTS_ExecutionHelperActor, nullptr, "NotifyExecutionEnded", 	Z_Construct_UFunction_ASOTS_ExecutionHelperActor_NotifyExecutionEnded_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ASOTS_ExecutionHelperActor_NotifyExecutionEnded_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ASOTS_ExecutionHelperActor_NotifyExecutionEnded_Statics::SOTS_ExecutionHelperActor_eventNotifyExecutionEnded_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASOTS_ExecutionHelperActor_NotifyExecutionEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASOTS_ExecutionHelperActor_NotifyExecutionEnded_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASOTS_ExecutionHelperActor_NotifyExecutionEnded_Statics::SOTS_ExecutionHelperActor_eventNotifyExecutionEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASOTS_ExecutionHelperActor_NotifyExecutionEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASOTS_ExecutionHelperActor_NotifyExecutionEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASOTS_ExecutionHelperActor::execNotifyExecutionEnded)
{
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NotifyExecutionEnded(Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// ********** End Class ASOTS_ExecutionHelperActor Function NotifyExecutionEnded *******************

// ********** Begin Class ASOTS_ExecutionHelperActor Function PrePlaySpawnMontages *****************
static FName NAME_ASOTS_ExecutionHelperActor_PrePlaySpawnMontages = FName(TEXT("PrePlaySpawnMontages"));
void ASOTS_ExecutionHelperActor::PrePlaySpawnMontages()
{
	UFunction* Func = FindFunctionChecked(NAME_ASOTS_ExecutionHelperActor_PrePlaySpawnMontages);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		PrePlaySpawnMontages_Implementation();
	}
}
struct Z_Construct_UFunction_ASOTS_ExecutionHelperActor_PrePlaySpawnMontages_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KEM|Spawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Blueprint extension point: runs before any montages are played.\n// The default implementation applies OmniTrace or authored warp point data\n// before the montages start; override in Blueprint only when you need\n// custom spatial logic beyond the builtin behavior.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_ExecutionHelperActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint extension point: runs before any montages are played.\nThe default implementation applies OmniTrace or authored warp point data\nbefore the montages start; override in Blueprint only when you need\ncustom spatial logic beyond the builtin behavior." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function PrePlaySpawnMontages constinit property declarations ******************
// ********** End Function PrePlaySpawnMontages constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASOTS_ExecutionHelperActor_PrePlaySpawnMontages_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASOTS_ExecutionHelperActor, nullptr, "PrePlaySpawnMontages", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASOTS_ExecutionHelperActor_PrePlaySpawnMontages_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASOTS_ExecutionHelperActor_PrePlaySpawnMontages_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASOTS_ExecutionHelperActor_PrePlaySpawnMontages()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASOTS_ExecutionHelperActor_PrePlaySpawnMontages_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASOTS_ExecutionHelperActor::execPrePlaySpawnMontages)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PrePlaySpawnMontages_Implementation();
	P_NATIVE_END;
}
// ********** End Class ASOTS_ExecutionHelperActor Function PrePlaySpawnMontages *******************

// ********** Begin Class ASOTS_ExecutionHelperActor ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ASOTS_ExecutionHelperActor;
UClass* ASOTS_ExecutionHelperActor::GetPrivateStaticClass()
{
	using TClass = ASOTS_ExecutionHelperActor;
	if (!Z_Registration_Info_UClass_ASOTS_ExecutionHelperActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_ExecutionHelperActor"),
			Z_Registration_Info_UClass_ASOTS_ExecutionHelperActor.InnerSingleton,
			StaticRegisterNativesASOTS_ExecutionHelperActor,
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
	return Z_Registration_Info_UClass_ASOTS_ExecutionHelperActor.InnerSingleton;
}
UClass* Z_Construct_UClass_ASOTS_ExecutionHelperActor_NoRegister()
{
	return ASOTS_ExecutionHelperActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASOTS_ExecutionHelperActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Helper actor spawned by KEM for SpawnActor backend executions.\n * It plays the configured montages on instigator and target, then self-destructs.\n */" },
#endif
		{ "IncludePath", "SOTS_ExecutionHelperActor.h" },
		{ "ModuleRelativePath", "Public/SOTS_ExecutionHelperActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Helper actor spawned by KEM for SpawnActor backend executions.\nIt plays the configured montages on instigator and target, then self-destructs." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "KEM" },
		{ "ModuleRelativePath", "Public/SOTS_ExecutionHelperActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnData_MetaData[] = {
		{ "ModuleRelativePath", "Public/SOTS_ExecutionHelperActor.h" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionDefinition_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "KEM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Owning execution definition for this spawn-based execution.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_ExecutionHelperActor.h" },
		{ "NativeConst", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Owning execution definition for this spawn-based execution." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WarpResult_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "KEM|Warp" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// OmniTrace warp result cached for animation / movement logic.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_ExecutionHelperActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "OmniTrace warp result cached for animation / movement logic." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnTransform_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "KEM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Initial spawn transform chosen by KEM before any warp refinement.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_ExecutionHelperActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initial spawn transform chosen by KEM before any warp refinement." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class ASOTS_ExecutionHelperActor constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExecutionDefinition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WarpResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ASOTS_ExecutionHelperActor constinit property declarations *****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetSpawnTransform"), .Pointer = &ASOTS_ExecutionHelperActor::execGetSpawnTransform },
		{ .NameUTF8 = UTF8TEXT("GetWarpResult"), .Pointer = &ASOTS_ExecutionHelperActor::execGetWarpResult },
		{ .NameUTF8 = UTF8TEXT("NotifyExecutionEnded"), .Pointer = &ASOTS_ExecutionHelperActor::execNotifyExecutionEnded },
		{ .NameUTF8 = UTF8TEXT("PrePlaySpawnMontages"), .Pointer = &ASOTS_ExecutionHelperActor::execPrePlaySpawnMontages },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASOTS_ExecutionHelperActor_GetSpawnTransform, "GetSpawnTransform" }, // 3125286802
		{ &Z_Construct_UFunction_ASOTS_ExecutionHelperActor_GetWarpResult, "GetWarpResult" }, // 3728094372
		{ &Z_Construct_UFunction_ASOTS_ExecutionHelperActor_NotifyExecutionEnded, "NotifyExecutionEnded" }, // 87345537
		{ &Z_Construct_UFunction_ASOTS_ExecutionHelperActor_PrePlaySpawnMontages, "PrePlaySpawnMontages" }, // 2507278693
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASOTS_ExecutionHelperActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ASOTS_ExecutionHelperActor_Statics

// ********** Begin Class ASOTS_ExecutionHelperActor Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASOTS_ExecutionHelperActor_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASOTS_ExecutionHelperActor, Context), Z_Construct_UScriptStruct_FSOTS_ExecutionContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) }; // 3760104617
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASOTS_ExecutionHelperActor_Statics::NewProp_SpawnData = { "SpawnData", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASOTS_ExecutionHelperActor, SpawnData), Z_Construct_UClass_USOTS_SpawnExecutionData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnData_MetaData), NewProp_SpawnData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASOTS_ExecutionHelperActor_Statics::NewProp_ExecutionDefinition = { "ExecutionDefinition", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASOTS_ExecutionHelperActor, ExecutionDefinition), Z_Construct_UClass_USOTS_KEM_ExecutionDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionDefinition_MetaData), NewProp_ExecutionDefinition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASOTS_ExecutionHelperActor_Statics::NewProp_WarpResult = { "WarpResult", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASOTS_ExecutionHelperActor, WarpResult), Z_Construct_UScriptStruct_FSOTS_KEM_OmniTraceWarpResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WarpResult_MetaData), NewProp_WarpResult_MetaData) }; // 708898929
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASOTS_ExecutionHelperActor_Statics::NewProp_SpawnTransform = { "SpawnTransform", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASOTS_ExecutionHelperActor, SpawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnTransform_MetaData), NewProp_SpawnTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASOTS_ExecutionHelperActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOTS_ExecutionHelperActor_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOTS_ExecutionHelperActor_Statics::NewProp_SpawnData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOTS_ExecutionHelperActor_Statics::NewProp_ExecutionDefinition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOTS_ExecutionHelperActor_Statics::NewProp_WarpResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOTS_ExecutionHelperActor_Statics::NewProp_SpawnTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASOTS_ExecutionHelperActor_Statics::PropPointers) < 2048);
// ********** End Class ASOTS_ExecutionHelperActor Property Definitions ****************************
UObject* (*const Z_Construct_UClass_ASOTS_ExecutionHelperActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_KillExecutionManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASOTS_ExecutionHelperActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASOTS_ExecutionHelperActor_Statics::ClassParams = {
	&ASOTS_ExecutionHelperActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASOTS_ExecutionHelperActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASOTS_ExecutionHelperActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASOTS_ExecutionHelperActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ASOTS_ExecutionHelperActor_Statics::Class_MetaDataParams)
};
void ASOTS_ExecutionHelperActor::StaticRegisterNativesASOTS_ExecutionHelperActor()
{
	UClass* Class = ASOTS_ExecutionHelperActor::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_ASOTS_ExecutionHelperActor_Statics::Funcs));
}
UClass* Z_Construct_UClass_ASOTS_ExecutionHelperActor()
{
	if (!Z_Registration_Info_UClass_ASOTS_ExecutionHelperActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASOTS_ExecutionHelperActor.OuterSingleton, Z_Construct_UClass_ASOTS_ExecutionHelperActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASOTS_ExecutionHelperActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ASOTS_ExecutionHelperActor);
ASOTS_ExecutionHelperActor::~ASOTS_ExecutionHelperActor() {}
// ********** End Class ASOTS_ExecutionHelperActor *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_ExecutionHelperActor_h__Script_SOTS_KillExecutionManager_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASOTS_ExecutionHelperActor, ASOTS_ExecutionHelperActor::StaticClass, TEXT("ASOTS_ExecutionHelperActor"), &Z_Registration_Info_UClass_ASOTS_ExecutionHelperActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASOTS_ExecutionHelperActor), 1826039537U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_ExecutionHelperActor_h__Script_SOTS_KillExecutionManager_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_ExecutionHelperActor_h__Script_SOTS_KillExecutionManager_1509246980{
	TEXT("/Script/SOTS_KillExecutionManager"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_ExecutionHelperActor_h__Script_SOTS_KillExecutionManager_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_ExecutionHelperActor_h__Script_SOTS_KillExecutionManager_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
