// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTS_UIAbilityLibrary.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_UIAbilityLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
SOTS_UI_API UClass* Z_Construct_UClass_USOTS_UIAbilityLibrary();
SOTS_UI_API UClass* Z_Construct_UClass_USOTS_UIAbilityLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_SOTS_UI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USOTS_UIAbilityLibrary Function NotifyAbilityEvent ***********************
struct Z_Construct_UFunction_USOTS_UIAbilityLibrary_NotifyAbilityEvent_Statics
{
	struct SOTS_UIAbilityLibrary_eventNotifyAbilityEvent_Parms
	{
		const UObject* WorldContextObject;
		FGameplayTag AbilityTag;
		bool bSuccess;
		FText DetailText;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|UI|Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Notify the HUD/notification systems about an ability event. */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_UIAbilityLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Notify the HUD/notification systems about an ability event." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetailText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function NotifyAbilityEvent constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DetailText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function NotifyAbilityEvent constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function NotifyAbilityEvent Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_UIAbilityLibrary_NotifyAbilityEvent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_UIAbilityLibrary_eventNotifyAbilityEvent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_UIAbilityLibrary_NotifyAbilityEvent_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_UIAbilityLibrary_eventNotifyAbilityEvent_Parms, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
void Z_Construct_UFunction_USOTS_UIAbilityLibrary_NotifyAbilityEvent_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((SOTS_UIAbilityLibrary_eventNotifyAbilityEvent_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_UIAbilityLibrary_NotifyAbilityEvent_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_UIAbilityLibrary_eventNotifyAbilityEvent_Parms), &Z_Construct_UFunction_USOTS_UIAbilityLibrary_NotifyAbilityEvent_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USOTS_UIAbilityLibrary_NotifyAbilityEvent_Statics::NewProp_DetailText = { "DetailText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_UIAbilityLibrary_eventNotifyAbilityEvent_Parms, DetailText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetailText_MetaData), NewProp_DetailText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_UIAbilityLibrary_NotifyAbilityEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_UIAbilityLibrary_NotifyAbilityEvent_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_UIAbilityLibrary_NotifyAbilityEvent_Statics::NewProp_AbilityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_UIAbilityLibrary_NotifyAbilityEvent_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_UIAbilityLibrary_NotifyAbilityEvent_Statics::NewProp_DetailText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_UIAbilityLibrary_NotifyAbilityEvent_Statics::PropPointers) < 2048);
// ********** End Function NotifyAbilityEvent Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_UIAbilityLibrary_NotifyAbilityEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_UIAbilityLibrary, nullptr, "NotifyAbilityEvent", 	Z_Construct_UFunction_USOTS_UIAbilityLibrary_NotifyAbilityEvent_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_UIAbilityLibrary_NotifyAbilityEvent_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_UIAbilityLibrary_NotifyAbilityEvent_Statics::SOTS_UIAbilityLibrary_eventNotifyAbilityEvent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_UIAbilityLibrary_NotifyAbilityEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_UIAbilityLibrary_NotifyAbilityEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_UIAbilityLibrary_NotifyAbilityEvent_Statics::SOTS_UIAbilityLibrary_eventNotifyAbilityEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_UIAbilityLibrary_NotifyAbilityEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_UIAbilityLibrary_NotifyAbilityEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_UIAbilityLibrary::execNotifyAbilityEvent)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FGameplayTag,Z_Param_AbilityTag);
	P_GET_UBOOL(Z_Param_bSuccess);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_DetailText);
	P_FINISH;
	P_NATIVE_BEGIN;
	USOTS_UIAbilityLibrary::NotifyAbilityEvent(Z_Param_WorldContextObject,Z_Param_AbilityTag,Z_Param_bSuccess,Z_Param_Out_DetailText);
	P_NATIVE_END;
}
// ********** End Class USOTS_UIAbilityLibrary Function NotifyAbilityEvent *************************

// ********** Begin Class USOTS_UIAbilityLibrary ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_UIAbilityLibrary;
UClass* USOTS_UIAbilityLibrary::GetPrivateStaticClass()
{
	using TClass = USOTS_UIAbilityLibrary;
	if (!Z_Registration_Info_UClass_USOTS_UIAbilityLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_UIAbilityLibrary"),
			Z_Registration_Info_UClass_USOTS_UIAbilityLibrary.InnerSingleton,
			StaticRegisterNativesUSOTS_UIAbilityLibrary,
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
	return Z_Registration_Info_UClass_USOTS_UIAbilityLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_UIAbilityLibrary_NoRegister()
{
	return USOTS_UIAbilityLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_UIAbilityLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SOTS_UIAbilityLibrary.h" },
		{ "ModuleRelativePath", "Public/SOTS_UIAbilityLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_UIAbilityLibrary constinit property declarations *******************
// ********** End Class USOTS_UIAbilityLibrary constinit property declarations *********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("NotifyAbilityEvent"), .Pointer = &USOTS_UIAbilityLibrary::execNotifyAbilityEvent },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USOTS_UIAbilityLibrary_NotifyAbilityEvent, "NotifyAbilityEvent" }, // 3928458691
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_UIAbilityLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_UIAbilityLibrary_Statics
UObject* (*const Z_Construct_UClass_USOTS_UIAbilityLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_UI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_UIAbilityLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_UIAbilityLibrary_Statics::ClassParams = {
	&USOTS_UIAbilityLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_UIAbilityLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_UIAbilityLibrary_Statics::Class_MetaDataParams)
};
void USOTS_UIAbilityLibrary::StaticRegisterNativesUSOTS_UIAbilityLibrary()
{
	UClass* Class = USOTS_UIAbilityLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USOTS_UIAbilityLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_USOTS_UIAbilityLibrary()
{
	if (!Z_Registration_Info_UClass_USOTS_UIAbilityLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_UIAbilityLibrary.OuterSingleton, Z_Construct_UClass_USOTS_UIAbilityLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_UIAbilityLibrary.OuterSingleton;
}
USOTS_UIAbilityLibrary::USOTS_UIAbilityLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_UIAbilityLibrary);
USOTS_UIAbilityLibrary::~USOTS_UIAbilityLibrary() {}
// ********** End Class USOTS_UIAbilityLibrary *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_UIAbilityLibrary_h__Script_SOTS_UI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_UIAbilityLibrary, USOTS_UIAbilityLibrary::StaticClass, TEXT("USOTS_UIAbilityLibrary"), &Z_Registration_Info_UClass_USOTS_UIAbilityLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_UIAbilityLibrary), 1587987902U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_UIAbilityLibrary_h__Script_SOTS_UI_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_UIAbilityLibrary_h__Script_SOTS_UI_2122566755{
	TEXT("/Script/SOTS_UI"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_UIAbilityLibrary_h__Script_SOTS_UI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_UI_Source_SOTS_UI_Public_SOTS_UIAbilityLibrary_h__Script_SOTS_UI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
