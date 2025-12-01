// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/SOTS_KEM_ExecutionWorldDebugWidget.h"
#include "SOTS_KEM_Types.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_KEM_ExecutionWorldDebugWidget() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
SOTS_GAS_PLUGIN_API UEnum* Z_Construct_UEnum_SOTS_GAS_Plugin_ESOTSStealthDebugMode();
SOTS_KILLEXECUTIONMANAGER_API UClass* Z_Construct_UClass_USOTS_KEM_ExecutionWorldDebugWidget();
SOTS_KILLEXECUTIONMANAGER_API UClass* Z_Construct_UClass_USOTS_KEM_ExecutionWorldDebugWidget_NoRegister();
SOTS_KILLEXECUTIONMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_KEMDebugRecord();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_SOTS_KillExecutionManager();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USOTS_KEM_ExecutionWorldDebugWidget Function OnExecutionWorldDebugUpdated 
static FName NAME_USOTS_KEM_ExecutionWorldDebugWidget_OnExecutionWorldDebugUpdated = FName(TEXT("OnExecutionWorldDebugUpdated"));
void USOTS_KEM_ExecutionWorldDebugWidget::OnExecutionWorldDebugUpdated()
{
	UFunction* Func = FindFunctionChecked(NAME_USOTS_KEM_ExecutionWorldDebugWidget_OnExecutionWorldDebugUpdated);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_USOTS_KEM_ExecutionWorldDebugWidget_OnExecutionWorldDebugUpdated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "KEM|Debug" },
		{ "ModuleRelativePath", "Public/UI/SOTS_KEM_ExecutionWorldDebugWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnExecutionWorldDebugUpdated constinit property declarations **********
// ********** End Function OnExecutionWorldDebugUpdated constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_KEM_ExecutionWorldDebugWidget_OnExecutionWorldDebugUpdated_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_KEM_ExecutionWorldDebugWidget, nullptr, "OnExecutionWorldDebugUpdated", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_KEM_ExecutionWorldDebugWidget_OnExecutionWorldDebugUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_KEM_ExecutionWorldDebugWidget_OnExecutionWorldDebugUpdated_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USOTS_KEM_ExecutionWorldDebugWidget_OnExecutionWorldDebugUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_KEM_ExecutionWorldDebugWidget_OnExecutionWorldDebugUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class USOTS_KEM_ExecutionWorldDebugWidget Function OnExecutionWorldDebugUpdated **

// ********** Begin Class USOTS_KEM_ExecutionWorldDebugWidget **************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_KEM_ExecutionWorldDebugWidget;
UClass* USOTS_KEM_ExecutionWorldDebugWidget::GetPrivateStaticClass()
{
	using TClass = USOTS_KEM_ExecutionWorldDebugWidget;
	if (!Z_Registration_Info_UClass_USOTS_KEM_ExecutionWorldDebugWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_KEM_ExecutionWorldDebugWidget"),
			Z_Registration_Info_UClass_USOTS_KEM_ExecutionWorldDebugWidget.InnerSingleton,
			StaticRegisterNativesUSOTS_KEM_ExecutionWorldDebugWidget,
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
	return Z_Registration_Info_UClass_USOTS_KEM_ExecutionWorldDebugWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_KEM_ExecutionWorldDebugWidget_NoRegister()
{
	return USOTS_KEM_ExecutionWorldDebugWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_KEM_ExecutionWorldDebugWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * World-space widget that visualises the current KEM execution state\n * for a given actor (instigator or target). Blueprint widgets like\n * WBP_SOTS_KEM_ExecutionWorldDebug should subclass this and render\n * CachedRecord appropriately.\n */" },
#endif
		{ "IncludePath", "UI/SOTS_KEM_ExecutionWorldDebugWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/SOTS_KEM_ExecutionWorldDebugWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "World-space widget that visualises the current KEM execution state\nfor a given actor (instigator or target). Blueprint widgets like\nWBP_SOTS_KEM_ExecutionWorldDebug should subclass this and render\nCachedRecord appropriately." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObservedActor_MetaData[] = {
		{ "Category", "KEM|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Actor this widget is attached to (instigator or target).\n" },
#endif
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/UI/SOTS_KEM_ExecutionWorldDebugWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actor this widget is attached to (instigator or target)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedRecord_MetaData[] = {
		{ "Category", "KEM|Debug" },
		{ "ModuleRelativePath", "Public/UI/SOTS_KEM_ExecutionWorldDebugWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasValidRecord_MetaData[] = {
		{ "Category", "KEM|Debug" },
		{ "ModuleRelativePath", "Public/UI/SOTS_KEM_ExecutionWorldDebugWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDebugMode_MetaData[] = {
		{ "Category", "KEM|Debug" },
		{ "ModuleRelativePath", "Public/UI/SOTS_KEM_ExecutionWorldDebugWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_KEM_ExecutionWorldDebugWidget constinit property declarations ******
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObservedActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedRecord;
	static void NewProp_bHasValidRecord_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasValidRecord;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentDebugMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentDebugMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USOTS_KEM_ExecutionWorldDebugWidget constinit property declarations ********
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USOTS_KEM_ExecutionWorldDebugWidget_OnExecutionWorldDebugUpdated, "OnExecutionWorldDebugUpdated" }, // 2567521201
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_KEM_ExecutionWorldDebugWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_KEM_ExecutionWorldDebugWidget_Statics

// ********** Begin Class USOTS_KEM_ExecutionWorldDebugWidget Property Definitions *****************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USOTS_KEM_ExecutionWorldDebugWidget_Statics::NewProp_ObservedActor = { "ObservedActor", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEM_ExecutionWorldDebugWidget, ObservedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObservedActor_MetaData), NewProp_ObservedActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_KEM_ExecutionWorldDebugWidget_Statics::NewProp_CachedRecord = { "CachedRecord", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEM_ExecutionWorldDebugWidget, CachedRecord), Z_Construct_UScriptStruct_FSOTS_KEMDebugRecord, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedRecord_MetaData), NewProp_CachedRecord_MetaData) }; // 3971782719
void Z_Construct_UClass_USOTS_KEM_ExecutionWorldDebugWidget_Statics::NewProp_bHasValidRecord_SetBit(void* Obj)
{
	((USOTS_KEM_ExecutionWorldDebugWidget*)Obj)->bHasValidRecord = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USOTS_KEM_ExecutionWorldDebugWidget_Statics::NewProp_bHasValidRecord = { "bHasValidRecord", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USOTS_KEM_ExecutionWorldDebugWidget), &Z_Construct_UClass_USOTS_KEM_ExecutionWorldDebugWidget_Statics::NewProp_bHasValidRecord_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasValidRecord_MetaData), NewProp_bHasValidRecord_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USOTS_KEM_ExecutionWorldDebugWidget_Statics::NewProp_CurrentDebugMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USOTS_KEM_ExecutionWorldDebugWidget_Statics::NewProp_CurrentDebugMode = { "CurrentDebugMode", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_KEM_ExecutionWorldDebugWidget, CurrentDebugMode), Z_Construct_UEnum_SOTS_GAS_Plugin_ESOTSStealthDebugMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentDebugMode_MetaData), NewProp_CurrentDebugMode_MetaData) }; // 4255647318
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USOTS_KEM_ExecutionWorldDebugWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEM_ExecutionWorldDebugWidget_Statics::NewProp_ObservedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEM_ExecutionWorldDebugWidget_Statics::NewProp_CachedRecord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEM_ExecutionWorldDebugWidget_Statics::NewProp_bHasValidRecord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEM_ExecutionWorldDebugWidget_Statics::NewProp_CurrentDebugMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_KEM_ExecutionWorldDebugWidget_Statics::NewProp_CurrentDebugMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_KEM_ExecutionWorldDebugWidget_Statics::PropPointers) < 2048);
// ********** End Class USOTS_KEM_ExecutionWorldDebugWidget Property Definitions *******************
UObject* (*const Z_Construct_UClass_USOTS_KEM_ExecutionWorldDebugWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_KillExecutionManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_KEM_ExecutionWorldDebugWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_KEM_ExecutionWorldDebugWidget_Statics::ClassParams = {
	&USOTS_KEM_ExecutionWorldDebugWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USOTS_KEM_ExecutionWorldDebugWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_KEM_ExecutionWorldDebugWidget_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_KEM_ExecutionWorldDebugWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_KEM_ExecutionWorldDebugWidget_Statics::Class_MetaDataParams)
};
void USOTS_KEM_ExecutionWorldDebugWidget::StaticRegisterNativesUSOTS_KEM_ExecutionWorldDebugWidget()
{
}
UClass* Z_Construct_UClass_USOTS_KEM_ExecutionWorldDebugWidget()
{
	if (!Z_Registration_Info_UClass_USOTS_KEM_ExecutionWorldDebugWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_KEM_ExecutionWorldDebugWidget.OuterSingleton, Z_Construct_UClass_USOTS_KEM_ExecutionWorldDebugWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_KEM_ExecutionWorldDebugWidget.OuterSingleton;
}
USOTS_KEM_ExecutionWorldDebugWidget::USOTS_KEM_ExecutionWorldDebugWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_KEM_ExecutionWorldDebugWidget);
USOTS_KEM_ExecutionWorldDebugWidget::~USOTS_KEM_ExecutionWorldDebugWidget() {}
// ********** End Class USOTS_KEM_ExecutionWorldDebugWidget ****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_UI_SOTS_KEM_ExecutionWorldDebugWidget_h__Script_SOTS_KillExecutionManager_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_KEM_ExecutionWorldDebugWidget, USOTS_KEM_ExecutionWorldDebugWidget::StaticClass, TEXT("USOTS_KEM_ExecutionWorldDebugWidget"), &Z_Registration_Info_UClass_USOTS_KEM_ExecutionWorldDebugWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_KEM_ExecutionWorldDebugWidget), 1090165665U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_UI_SOTS_KEM_ExecutionWorldDebugWidget_h__Script_SOTS_KillExecutionManager_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_UI_SOTS_KEM_ExecutionWorldDebugWidget_h__Script_SOTS_KillExecutionManager_3087723087{
	TEXT("/Script/SOTS_KillExecutionManager"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_UI_SOTS_KEM_ExecutionWorldDebugWidget_h__Script_SOTS_KillExecutionManager_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_KillExecutionManager_Source_SOTS_KillExecutionManager_Public_UI_SOTS_KEM_ExecutionWorldDebugWidget_h__Script_SOTS_KillExecutionManager_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
