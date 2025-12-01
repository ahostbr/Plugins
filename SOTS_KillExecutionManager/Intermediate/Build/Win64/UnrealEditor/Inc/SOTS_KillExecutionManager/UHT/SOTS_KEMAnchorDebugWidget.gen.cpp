// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTS_KEMAnchorDebugWidget.h"
#include "SOTS_KEM_ManagerSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_KEMAnchorDebugWidget() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
SOTS_KILLEXECUTIONMANAGER_API UClass* Z_Construct_UClass_USOTS_KEMAnchorDebugWidget();
SOTS_KILLEXECUTIONMANAGER_API UClass* Z_Construct_UClass_USOTS_KEMAnchorDebugWidget_NoRegister();
SOTS_KILLEXECUTIONMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_KEMAnchorDebugInfo();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_SOTS_KillExecutionManager();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USOTS_KEMAnchorDebugWidget Function GetAnchorInfos ***********************
struct Z_Construct_UFunction_USOTS_KEMAnchorDebugWidget_GetAnchorInfos_Statics
{
	struct SOTS_KEMAnchorDebugWidget_eventGetAnchorInfos_Parms
	{
		TArray<FSOTS_KEMAnchorDebugInfo> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|KEM|Debug" },
		{ "ModuleRelativePath", "Public/SOTS_KEMAnchorDebugWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAnchorInfos constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAnchorInfos constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAnchorInfos Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_KEMAnchorDebugWidget_GetAnchorInfos_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSOTS_KEMAnchorDebugInfo, METADATA_PARAMS(0, nullptr) }; // 1105416849
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USOTS_KEMAnchorDebugWidget_GetAnchorInfos_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEMAnchorDebugWidget_eventGetAnchorInfos_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1105416849
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_KEMAnchorDebugWidget_GetAnchorInfos_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEMAnchorDebugWidget_GetAnchorInfos_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEMAnchorDebugWidget_GetAnchorInfos_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMAnchorDebugWidget_GetAnchorInfos_Statics::PropPointers) < 2048);
// ********** End Function GetAnchorInfos Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_KEMAnchorDebugWidget_GetAnchorInfos_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_KEMAnchorDebugWidget, nullptr, "GetAnchorInfos", 	Z_Construct_UFunction_USOTS_KEMAnchorDebugWidget_GetAnchorInfos_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMAnchorDebugWidget_GetAnchorInfos_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_KEMAnchorDebugWidget_GetAnchorInfos_Statics::SOTS_KEMAnchorDebugWidget_eventGetAnchorInfos_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMAnchorDebugWidget_GetAnchorInfos_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_KEMAnchorDebugWidget_GetAnchorInfos_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_KEMAnchorDebugWidget_GetAnchorInfos_Statics::SOTS_KEMAnchorDebugWidget_eventGetAnchorInfos_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_KEMAnchorDebugWidget_GetAnchorInfos()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_KEMAnchorDebugWidget_GetAnchorInfos_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_KEMAnchorDebugWidget::execGetAnchorInfos)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FSOTS_KEMAnchorDebugInfo>*)Z_Param__Result=P_THIS->GetAnchorInfos();
	P_NATIVE_END;
}
// ********** End Class USOTS_KEMAnchorDebugWidget Function GetAnchorInfos *************************

// ********** Begin Class USOTS_KEMAnchorDebugWidget Function SetCenterActor ***********************
struct Z_Construct_UFunction_USOTS_KEMAnchorDebugWidget_SetCenterActor_Statics
{
	struct SOTS_KEMAnchorDebugWidget_eventSetCenterActor_Parms
	{
		AActor* Actor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|KEM|Debug" },
		{ "ModuleRelativePath", "Public/SOTS_KEMAnchorDebugWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetCenterActor constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetCenterActor constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetCenterActor Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_KEMAnchorDebugWidget_SetCenterActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEMAnchorDebugWidget_eventSetCenterActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_KEMAnchorDebugWidget_SetCenterActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEMAnchorDebugWidget_SetCenterActor_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMAnchorDebugWidget_SetCenterActor_Statics::PropPointers) < 2048);
// ********** End Function SetCenterActor Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_KEMAnchorDebugWidget_SetCenterActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_KEMAnchorDebugWidget, nullptr, "SetCenterActor", 	Z_Construct_UFunction_USOTS_KEMAnchorDebugWidget_SetCenterActor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMAnchorDebugWidget_SetCenterActor_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_KEMAnchorDebugWidget_SetCenterActor_Statics::SOTS_KEMAnchorDebugWidget_eventSetCenterActor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMAnchorDebugWidget_SetCenterActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_KEMAnchorDebugWidget_SetCenterActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_KEMAnchorDebugWidget_SetCenterActor_Statics::SOTS_KEMAnchorDebugWidget_eventSetCenterActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_KEMAnchorDebugWidget_SetCenterActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_KEMAnchorDebugWidget_SetCenterActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_KEMAnchorDebugWidget::execSetCenterActor)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCenterActor(Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class USOTS_KEMAnchorDebugWidget Function SetCenterActor *************************

// ********** Begin Class USOTS_KEMAnchorDebugWidget Function SetSearchRadius **********************
struct Z_Construct_UFunction_USOTS_KEMAnchorDebugWidget_SetSearchRadius_Statics
{
	struct SOTS_KEMAnchorDebugWidget_eventSetSearchRadius_Parms
	{
		float Radius;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|KEM|Debug" },
		{ "ModuleRelativePath", "Public/SOTS_KEMAnchorDebugWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetSearchRadius constinit property declarations ***********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetSearchRadius constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetSearchRadius Property Definitions **********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USOTS_KEMAnchorDebugWidget_SetSearchRadius_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_KEMAnchorDebugWidget_eventSetSearchRadius_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_KEMAnchorDebugWidget_SetSearchRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_KEMAnchorDebugWidget_SetSearchRadius_Statics::NewProp_Radius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMAnchorDebugWidget_SetSearchRadius_Statics::PropPointers) < 2048);
// ********** End Function SetSearchRadius Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_KEMAnchorDebugWidget_SetSearchRadius_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_KEMAnchorDebugWidget, nullptr, "SetSearchRadius", 	Z_Construct_UFunction_USOTS_KEMAnchorDebugWidget_SetSearchRadius_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMAnchorDebugWidget_SetSearchRadius_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_KEMAnchorDebugWidget_SetSearchRadius_Statics::SOTS_KEMAnchorDebugWidget_eventSetSearchRadius_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEMAnchorDebugWidget_SetSearchRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_KEMAnchorDebugWidget_SetSearchRadius_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_KEMAnchorDebugWidget_SetSearchRadius_Statics::SOTS_KEMAnchorDebugWidget_eventSetSearchRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_KEMAnchorDebugWidget_SetSearchRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_KEMAnchorDebugWidget_SetSearchRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_KEMAnchorDebugWidget::execSetSearchRadius)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSearchRadius(Z_Param_Radius);
	P_NATIVE_END;
}
// ********** End Class USOTS_KEMAnchorDebugWidget Function SetSearchRadius ************************

// ********** Begin Class USOTS_KEMAnchorDebugWidget ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_KEMAnchorDebugWidget;
UClass* USOTS_KEMAnchorDebugWidget::GetPrivateStaticClass()
{
	using TClass = USOTS_KEMAnchorDebugWidget;
	if (!Z_Registration_Info_UClass_USOTS_KEMAnchorDebugWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_KEMAnchorDebugWidget"),
			Z_Registration_Info_UClass_USOTS_KEMAnchorDebugWidget.InnerSingleton,
			StaticRegisterNativesUSOTS_KEMAnchorDebugWidget,
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
	return Z_Registration_Info_UClass_USOTS_KEMAnchorDebugWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_KEMAnchorDebugWidget_NoRegister()
{
	return USOTS_KEMAnchorDebugWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_KEMAnchorDebugWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SOTS_KEMAnchorDebugWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SOTS_KEMAnchorDebugWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnchorInfos_MetaData[] = {
		{ "Category", "SOTS|KEM|Debug" },
		{ "ModuleRelativePath", "Public/SOTS_KEMAnchorDebugWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchRadius_MetaData[] = {
		{ "Category", "SOTS|KEM|Debug" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/SOTS_KEMAnchorDebugWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CenterActor_MetaData[] = {
		{ "Category", "SOTS|KEM|Debug" },
		{ "ModuleRelativePath", "Public/SOTS_KEMAnchorDebugWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_KEMAnchorDebugWidget constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnchorInfos_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AnchorInfos;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SearchRadius;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CenterActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USOTS_KEMAnchorDebugWidget constinit property declarations *****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetAnchorInfos"), .Pointer = &USOTS_KEMAnchorDebugWidget::execGetAnchorInfos },
		{ .NameUTF8 = UTF8TEXT("SetCenterActor"), .Pointer = &USOTS_KEMAnchorDebugWidget::execSetCenterActor },
		{ .NameUTF8 = UTF8TEXT("SetSearchRadius"), .Pointer = &USOTS_KEMAnchorDebugWidget::execSetSearchRadius },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USOTS_KEMAnchorDebugWidget_GetAnchorInfos, "GetAnchorInfos" }, // 3804520799
		{ &Z_Construct_UFunction_USOTS_KEMAnchorDebugWidget_SetCenterActor, "SetCenterActor" }, // 4242764602
		{ &Z_Construct_UFunction_USOTS_KEMAnchorDebugWidget_SetSearchRadius, "SetSearchRadius" }, // 1494541586
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_KEMAnchorDebugWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_KEMAnchorDebugWidget_Statics

// ********** Begin Class USOTS_KEMAnchorDebugWidget Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_KEMAnchorDebugWidget_Statics::NewProp_AnchorInfos_Inner = { "AnchorInfos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSOTS_KEMAnchorDebugInfo, METADATA_PARAMS(0, nullptr) }; // 1105416849
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USOTS_KEMAnchorDebugWidget_Statics::NewProp_AnchorInfos = { "AnchorInfos", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEMAnchorDebugWidget, AnchorInfos), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnchorInfos_MetaData), NewProp_AnchorInfos_MetaData) }; // 1105416849
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USOTS_KEMAnchorDebugWidget_Statics::NewProp_SearchRadius = { "SearchRadius", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEMAnchorDebugWidget, SearchRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchRadius_MetaData), NewProp_SearchRadius_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USOTS_KEMAnchorDebugWidget_Statics::NewProp_CenterActor = { "CenterActor", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEMAnchorDebugWidget, CenterActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CenterActor_MetaData), NewProp_CenterActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USOTS_KEMAnchorDebugWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEMAnchorDebugWidget_Statics::NewProp_AnchorInfos_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEMAnchorDebugWidget_Statics::NewProp_AnchorInfos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEMAnchorDebugWidget_Statics::NewProp_SearchRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEMAnchorDebugWidget_Statics::NewProp_CenterActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_KEMAnchorDebugWidget_Statics::PropPointers) < 2048);
// ********** End Class USOTS_KEMAnchorDebugWidget Property Definitions ****************************
UObject* (*const Z_Construct_UClass_USOTS_KEMAnchorDebugWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_KillExecutionManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_KEMAnchorDebugWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_KEMAnchorDebugWidget_Statics::ClassParams = {
	&USOTS_KEMAnchorDebugWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USOTS_KEMAnchorDebugWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_KEMAnchorDebugWidget_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_KEMAnchorDebugWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_KEMAnchorDebugWidget_Statics::Class_MetaDataParams)
};
void USOTS_KEMAnchorDebugWidget::StaticRegisterNativesUSOTS_KEMAnchorDebugWidget()
{
	UClass* Class = USOTS_KEMAnchorDebugWidget::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USOTS_KEMAnchorDebugWidget_Statics::Funcs));
}
UClass* Z_Construct_UClass_USOTS_KEMAnchorDebugWidget()
{
	if (!Z_Registration_Info_UClass_USOTS_KEMAnchorDebugWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_KEMAnchorDebugWidget.OuterSingleton, Z_Construct_UClass_USOTS_KEMAnchorDebugWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_KEMAnchorDebugWidget.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_KEMAnchorDebugWidget);
USOTS_KEMAnchorDebugWidget::~USOTS_KEMAnchorDebugWidget() {}
// ********** End Class USOTS_KEMAnchorDebugWidget *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEMAnchorDebugWidget_h__Script_SOTS_KillExecutionManager_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_KEMAnchorDebugWidget, USOTS_KEMAnchorDebugWidget::StaticClass, TEXT("USOTS_KEMAnchorDebugWidget"), &Z_Registration_Info_UClass_USOTS_KEMAnchorDebugWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_KEMAnchorDebugWidget), 160942685U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEMAnchorDebugWidget_h__Script_SOTS_KillExecutionManager_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEMAnchorDebugWidget_h__Script_SOTS_KillExecutionManager_2240315116{
	TEXT("/Script/SOTS_KillExecutionManager"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEMAnchorDebugWidget_h__Script_SOTS_KillExecutionManager_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_SOTS_KEMAnchorDebugWidget_h__Script_SOTS_KillExecutionManager_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
