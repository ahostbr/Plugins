// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/SOTS_KEM_GlobalDebugWidget.h"
#include "SOTS_KEM_Types.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_KEM_GlobalDebugWidget() {}

// ********** Begin Cross Module References ********************************************************
SOTS_GAS_PLUGIN_API UEnum* Z_Construct_UEnum_SOTS_GAS_Plugin_ESOTSStealthDebugMode();
SOTS_KILLEXECUTIONMANAGER_API UClass* Z_Construct_UClass_USOTS_KEM_GlobalDebugWidget();
SOTS_KILLEXECUTIONMANAGER_API UClass* Z_Construct_UClass_USOTS_KEM_GlobalDebugWidget_NoRegister();
SOTS_KILLEXECUTIONMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_KEMDebugRecord();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_SOTS_KillExecutionManager();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USOTS_KEM_GlobalDebugWidget Function OnKEMDebugRecordsUpdated ************
static FName NAME_USOTS_KEM_GlobalDebugWidget_OnKEMDebugRecordsUpdated = FName(TEXT("OnKEMDebugRecordsUpdated"));
void USOTS_KEM_GlobalDebugWidget::OnKEMDebugRecordsUpdated()
{
	UFunction* Func = FindFunctionChecked(NAME_USOTS_KEM_GlobalDebugWidget_OnKEMDebugRecordsUpdated);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_USOTS_KEM_GlobalDebugWidget_OnKEMDebugRecordsUpdated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KEM|Debug" },
		{ "ModuleRelativePath", "Public/UI/SOTS_KEM_GlobalDebugWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnKEMDebugRecordsUpdated constinit property declarations **************
// ********** End Function OnKEMDebugRecordsUpdated constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_KEM_GlobalDebugWidget_OnKEMDebugRecordsUpdated_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_KEM_GlobalDebugWidget, nullptr, "OnKEMDebugRecordsUpdated", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEM_GlobalDebugWidget_OnKEMDebugRecordsUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_KEM_GlobalDebugWidget_OnKEMDebugRecordsUpdated_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USOTS_KEM_GlobalDebugWidget_OnKEMDebugRecordsUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_KEM_GlobalDebugWidget_OnKEMDebugRecordsUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class USOTS_KEM_GlobalDebugWidget Function OnKEMDebugRecordsUpdated **************

// ********** Begin Class USOTS_KEM_GlobalDebugWidget **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_KEM_GlobalDebugWidget;
UClass* USOTS_KEM_GlobalDebugWidget::GetPrivateStaticClass()
{
	using TClass = USOTS_KEM_GlobalDebugWidget;
	if (!Z_Registration_Info_UClass_USOTS_KEM_GlobalDebugWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_KEM_GlobalDebugWidget"),
			Z_Registration_Info_UClass_USOTS_KEM_GlobalDebugWidget.InnerSingleton,
			StaticRegisterNativesUSOTS_KEM_GlobalDebugWidget,
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
	return Z_Registration_Info_UClass_USOTS_KEM_GlobalDebugWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_KEM_GlobalDebugWidget_NoRegister()
{
	return USOTS_KEM_GlobalDebugWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_KEM_GlobalDebugWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Screen-space widget that shows recent KEM executions for debug purposes.\n * Blueprint widgets (e.g., WBP_SOTS_KEM_GlobalDebug) should subclass this\n * and bind to CachedRecords in OnKEMDebugRecordsUpdated.\n */" },
#endif
		{ "IncludePath", "UI/SOTS_KEM_GlobalDebugWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/SOTS_KEM_GlobalDebugWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Screen-space widget that shows recent KEM executions for debug purposes.\nBlueprint widgets (e.g., WBP_SOTS_KEM_GlobalDebug) should subclass this\nand bind to CachedRecords in OnKEMDebugRecordsUpdated." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedRecords_MetaData[] = {
		{ "Category", "KEM|Debug" },
		{ "ModuleRelativePath", "Public/UI/SOTS_KEM_GlobalDebugWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDebugMode_MetaData[] = {
		{ "Category", "KEM|Debug" },
		{ "ModuleRelativePath", "Public/UI/SOTS_KEM_GlobalDebugWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_KEM_GlobalDebugWidget constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedRecords_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedRecords;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentDebugMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentDebugMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USOTS_KEM_GlobalDebugWidget constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USOTS_KEM_GlobalDebugWidget_OnKEMDebugRecordsUpdated, "OnKEMDebugRecordsUpdated" }, // 2166590864
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_KEM_GlobalDebugWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_KEM_GlobalDebugWidget_Statics

// ********** Begin Class USOTS_KEM_GlobalDebugWidget Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_KEM_GlobalDebugWidget_Statics::NewProp_CachedRecords_Inner = { "CachedRecords", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSOTS_KEMDebugRecord, METADATA_PARAMS(0, nullptr) }; // 3971782719
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USOTS_KEM_GlobalDebugWidget_Statics::NewProp_CachedRecords = { "CachedRecords", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEM_GlobalDebugWidget, CachedRecords), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedRecords_MetaData), NewProp_CachedRecords_MetaData) }; // 3971782719
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USOTS_KEM_GlobalDebugWidget_Statics::NewProp_CurrentDebugMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USOTS_KEM_GlobalDebugWidget_Statics::NewProp_CurrentDebugMode = { "CurrentDebugMode", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEM_GlobalDebugWidget, CurrentDebugMode), Z_Construct_UEnum_SOTS_GAS_Plugin_ESOTSStealthDebugMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentDebugMode_MetaData), NewProp_CurrentDebugMode_MetaData) }; // 4255647318
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USOTS_KEM_GlobalDebugWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEM_GlobalDebugWidget_Statics::NewProp_CachedRecords_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEM_GlobalDebugWidget_Statics::NewProp_CachedRecords,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEM_GlobalDebugWidget_Statics::NewProp_CurrentDebugMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEM_GlobalDebugWidget_Statics::NewProp_CurrentDebugMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_KEM_GlobalDebugWidget_Statics::PropPointers) < 2048);
// ********** End Class USOTS_KEM_GlobalDebugWidget Property Definitions ***************************
UObject* (*const Z_Construct_UClass_USOTS_KEM_GlobalDebugWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_KillExecutionManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_KEM_GlobalDebugWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_KEM_GlobalDebugWidget_Statics::ClassParams = {
	&USOTS_KEM_GlobalDebugWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USOTS_KEM_GlobalDebugWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_KEM_GlobalDebugWidget_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_KEM_GlobalDebugWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_KEM_GlobalDebugWidget_Statics::Class_MetaDataParams)
};
void USOTS_KEM_GlobalDebugWidget::StaticRegisterNativesUSOTS_KEM_GlobalDebugWidget()
{
}
UClass* Z_Construct_UClass_USOTS_KEM_GlobalDebugWidget()
{
	if (!Z_Registration_Info_UClass_USOTS_KEM_GlobalDebugWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_KEM_GlobalDebugWidget.OuterSingleton, Z_Construct_UClass_USOTS_KEM_GlobalDebugWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_KEM_GlobalDebugWidget.OuterSingleton;
}
USOTS_KEM_GlobalDebugWidget::USOTS_KEM_GlobalDebugWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_KEM_GlobalDebugWidget);
USOTS_KEM_GlobalDebugWidget::~USOTS_KEM_GlobalDebugWidget() {}
// ********** End Class USOTS_KEM_GlobalDebugWidget ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_UI_SOTS_KEM_GlobalDebugWidget_h__Script_SOTS_KillExecutionManager_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_KEM_GlobalDebugWidget, USOTS_KEM_GlobalDebugWidget::StaticClass, TEXT("USOTS_KEM_GlobalDebugWidget"), &Z_Registration_Info_UClass_USOTS_KEM_GlobalDebugWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_KEM_GlobalDebugWidget), 3664026896U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_UI_SOTS_KEM_GlobalDebugWidget_h__Script_SOTS_KillExecutionManager_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_UI_SOTS_KEM_GlobalDebugWidget_h__Script_SOTS_KillExecutionManager_3554652281{
	TEXT("/Script/SOTS_KillExecutionManager"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_UI_SOTS_KEM_GlobalDebugWidget_h__Script_SOTS_KillExecutionManager_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_UI_SOTS_KEM_GlobalDebugWidget_h__Script_SOTS_KillExecutionManager_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
