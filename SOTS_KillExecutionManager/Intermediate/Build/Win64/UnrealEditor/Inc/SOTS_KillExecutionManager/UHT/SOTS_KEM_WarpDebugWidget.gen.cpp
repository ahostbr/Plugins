// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/SOTS_KEM_WarpDebugWidget.h"
#include "SOTS_KEM_Types.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_KEM_WarpDebugWidget() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
SOTS_GAS_PLUGIN_API UEnum* Z_Construct_UEnum_SOTS_GAS_Plugin_ESOTSStealthDebugMode();
SOTS_KILLEXECUTIONMANAGER_API UClass* Z_Construct_UClass_ASOTS_ExecutionHelperActor_NoRegister();
SOTS_KILLEXECUTIONMANAGER_API UClass* Z_Construct_UClass_USOTS_KEM_WarpDebugWidget();
SOTS_KILLEXECUTIONMANAGER_API UClass* Z_Construct_UClass_USOTS_KEM_WarpDebugWidget_NoRegister();
SOTS_KILLEXECUTIONMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_KEM_OmniTraceWarpResult();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_SOTS_KillExecutionManager();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USOTS_KEM_WarpDebugWidget Function OnWarpDebugUpdated ********************
static FName NAME_USOTS_KEM_WarpDebugWidget_OnWarpDebugUpdated = FName(TEXT("OnWarpDebugUpdated"));
void USOTS_KEM_WarpDebugWidget::OnWarpDebugUpdated()
{
	UFunction* Func = FindFunctionChecked(NAME_USOTS_KEM_WarpDebugWidget_OnWarpDebugUpdated);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_USOTS_KEM_WarpDebugWidget_OnWarpDebugUpdated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KEM|Debug" },
		{ "ModuleRelativePath", "Public/UI/SOTS_KEM_WarpDebugWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnWarpDebugUpdated constinit property declarations ********************
// ********** End Function OnWarpDebugUpdated constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_KEM_WarpDebugWidget_OnWarpDebugUpdated_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_KEM_WarpDebugWidget, nullptr, "OnWarpDebugUpdated", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEM_WarpDebugWidget_OnWarpDebugUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_KEM_WarpDebugWidget_OnWarpDebugUpdated_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USOTS_KEM_WarpDebugWidget_OnWarpDebugUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_KEM_WarpDebugWidget_OnWarpDebugUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class USOTS_KEM_WarpDebugWidget Function OnWarpDebugUpdated **********************

// ********** Begin Class USOTS_KEM_WarpDebugWidget ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_KEM_WarpDebugWidget;
UClass* USOTS_KEM_WarpDebugWidget::GetPrivateStaticClass()
{
	using TClass = USOTS_KEM_WarpDebugWidget;
	if (!Z_Registration_Info_UClass_USOTS_KEM_WarpDebugWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_KEM_WarpDebugWidget"),
			Z_Registration_Info_UClass_USOTS_KEM_WarpDebugWidget.InnerSingleton,
			StaticRegisterNativesUSOTS_KEM_WarpDebugWidget,
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
	return Z_Registration_Info_UClass_USOTS_KEM_WarpDebugWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_KEM_WarpDebugWidget_NoRegister()
{
	return USOTS_KEM_WarpDebugWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_KEM_WarpDebugWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Optional Advanced-mode widget that visualises warp / spawn information\n * for SpawnActor executions. It reads data from an ASOTS_ExecutionHelperActor\n * instance and exposes it to Blueprint.\n */" },
#endif
		{ "IncludePath", "UI/SOTS_KEM_WarpDebugWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/SOTS_KEM_WarpDebugWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional Advanced-mode widget that visualises warp / spawn information\nfor SpawnActor executions. It reads data from an ASOTS_ExecutionHelperActor\ninstance and exposes it to Blueprint." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObservedHelper_MetaData[] = {
		{ "Category", "KEM|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Helper actor to inspect.\n" },
#endif
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/UI/SOTS_KEM_WarpDebugWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Helper actor to inspect." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedWarpResult_MetaData[] = {
		{ "Category", "KEM|Debug" },
		{ "ModuleRelativePath", "Public/UI/SOTS_KEM_WarpDebugWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedSpawnTransform_MetaData[] = {
		{ "Category", "KEM|Debug" },
		{ "ModuleRelativePath", "Public/UI/SOTS_KEM_WarpDebugWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDebugMode_MetaData[] = {
		{ "Category", "KEM|Debug" },
		{ "ModuleRelativePath", "Public/UI/SOTS_KEM_WarpDebugWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_KEM_WarpDebugWidget constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObservedHelper;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedWarpResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedSpawnTransform;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentDebugMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentDebugMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USOTS_KEM_WarpDebugWidget constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USOTS_KEM_WarpDebugWidget_OnWarpDebugUpdated, "OnWarpDebugUpdated" }, // 1484730413
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_KEM_WarpDebugWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_KEM_WarpDebugWidget_Statics

// ********** Begin Class USOTS_KEM_WarpDebugWidget Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USOTS_KEM_WarpDebugWidget_Statics::NewProp_ObservedHelper = { "ObservedHelper", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEM_WarpDebugWidget, ObservedHelper), Z_Construct_UClass_ASOTS_ExecutionHelperActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObservedHelper_MetaData), NewProp_ObservedHelper_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_KEM_WarpDebugWidget_Statics::NewProp_CachedWarpResult = { "CachedWarpResult", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEM_WarpDebugWidget, CachedWarpResult), Z_Construct_UScriptStruct_FSOTS_KEM_OmniTraceWarpResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedWarpResult_MetaData), NewProp_CachedWarpResult_MetaData) }; // 708898929
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_KEM_WarpDebugWidget_Statics::NewProp_CachedSpawnTransform = { "CachedSpawnTransform", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEM_WarpDebugWidget, CachedSpawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedSpawnTransform_MetaData), NewProp_CachedSpawnTransform_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USOTS_KEM_WarpDebugWidget_Statics::NewProp_CurrentDebugMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USOTS_KEM_WarpDebugWidget_Statics::NewProp_CurrentDebugMode = { "CurrentDebugMode", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEM_WarpDebugWidget, CurrentDebugMode), Z_Construct_UEnum_SOTS_GAS_Plugin_ESOTSStealthDebugMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentDebugMode_MetaData), NewProp_CurrentDebugMode_MetaData) }; // 4255647318
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USOTS_KEM_WarpDebugWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEM_WarpDebugWidget_Statics::NewProp_ObservedHelper,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEM_WarpDebugWidget_Statics::NewProp_CachedWarpResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEM_WarpDebugWidget_Statics::NewProp_CachedSpawnTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEM_WarpDebugWidget_Statics::NewProp_CurrentDebugMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEM_WarpDebugWidget_Statics::NewProp_CurrentDebugMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_KEM_WarpDebugWidget_Statics::PropPointers) < 2048);
// ********** End Class USOTS_KEM_WarpDebugWidget Property Definitions *****************************
UObject* (*const Z_Construct_UClass_USOTS_KEM_WarpDebugWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_KillExecutionManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_KEM_WarpDebugWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_KEM_WarpDebugWidget_Statics::ClassParams = {
	&USOTS_KEM_WarpDebugWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USOTS_KEM_WarpDebugWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_KEM_WarpDebugWidget_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_KEM_WarpDebugWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_KEM_WarpDebugWidget_Statics::Class_MetaDataParams)
};
void USOTS_KEM_WarpDebugWidget::StaticRegisterNativesUSOTS_KEM_WarpDebugWidget()
{
}
UClass* Z_Construct_UClass_USOTS_KEM_WarpDebugWidget()
{
	if (!Z_Registration_Info_UClass_USOTS_KEM_WarpDebugWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_KEM_WarpDebugWidget.OuterSingleton, Z_Construct_UClass_USOTS_KEM_WarpDebugWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_KEM_WarpDebugWidget.OuterSingleton;
}
USOTS_KEM_WarpDebugWidget::USOTS_KEM_WarpDebugWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_KEM_WarpDebugWidget);
USOTS_KEM_WarpDebugWidget::~USOTS_KEM_WarpDebugWidget() {}
// ********** End Class USOTS_KEM_WarpDebugWidget **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_UI_SOTS_KEM_WarpDebugWidget_h__Script_SOTS_KillExecutionManager_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_KEM_WarpDebugWidget, USOTS_KEM_WarpDebugWidget::StaticClass, TEXT("USOTS_KEM_WarpDebugWidget"), &Z_Registration_Info_UClass_USOTS_KEM_WarpDebugWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_KEM_WarpDebugWidget), 506164858U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_UI_SOTS_KEM_WarpDebugWidget_h__Script_SOTS_KillExecutionManager_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_UI_SOTS_KEM_WarpDebugWidget_h__Script_SOTS_KillExecutionManager_1882993033{
	TEXT("/Script/SOTS_KillExecutionManager"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_UI_SOTS_KEM_WarpDebugWidget_h__Script_SOTS_KillExecutionManager_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_UI_SOTS_KEM_WarpDebugWidget_h__Script_SOTS_KillExecutionManager_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
