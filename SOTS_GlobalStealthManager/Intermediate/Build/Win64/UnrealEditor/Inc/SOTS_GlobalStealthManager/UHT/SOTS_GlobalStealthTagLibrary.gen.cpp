// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTS_GlobalStealthTagLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_GlobalStealthTagLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
SOTS_GLOBALSTEALTHMANAGER_API UClass* Z_Construct_UClass_USOTS_GlobalStealthTagLibrary();
SOTS_GLOBALSTEALTHMANAGER_API UClass* Z_Construct_UClass_USOTS_GlobalStealthTagLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_SOTS_GlobalStealthManager();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USOTS_GlobalStealthTagLibrary Function SOTS_GetStealthTier ***************
struct Z_Construct_UFunction_USOTS_GlobalStealthTagLibrary_SOTS_GetStealthTier_Statics
{
	struct SOTS_GlobalStealthTagLibrary_eventSOTS_GetStealthTier_Parms
	{
		const UObject* WorldContextObject;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Stealth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the current stealth tier as an integer, using GSM if present\n// and falling back to tier tags on the global tag state.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthTagLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current stealth tier as an integer, using GSM if present\nand falling back to tier tags on the global tag state." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SOTS_GetStealthTier constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SOTS_GetStealthTier constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SOTS_GetStealthTier Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_GlobalStealthTagLibrary_SOTS_GetStealthTier_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GlobalStealthTagLibrary_eventSOTS_GetStealthTier_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USOTS_GlobalStealthTagLibrary_SOTS_GetStealthTier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GlobalStealthTagLibrary_eventSOTS_GetStealthTier_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GlobalStealthTagLibrary_SOTS_GetStealthTier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GlobalStealthTagLibrary_SOTS_GetStealthTier_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GlobalStealthTagLibrary_SOTS_GetStealthTier_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GlobalStealthTagLibrary_SOTS_GetStealthTier_Statics::PropPointers) < 2048);
// ********** End Function SOTS_GetStealthTier Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GlobalStealthTagLibrary_SOTS_GetStealthTier_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GlobalStealthTagLibrary, nullptr, "SOTS_GetStealthTier", 	Z_Construct_UFunction_USOTS_GlobalStealthTagLibrary_SOTS_GetStealthTier_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GlobalStealthTagLibrary_SOTS_GetStealthTier_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GlobalStealthTagLibrary_SOTS_GetStealthTier_Statics::SOTS_GlobalStealthTagLibrary_eventSOTS_GetStealthTier_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GlobalStealthTagLibrary_SOTS_GetStealthTier_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GlobalStealthTagLibrary_SOTS_GetStealthTier_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GlobalStealthTagLibrary_SOTS_GetStealthTier_Statics::SOTS_GlobalStealthTagLibrary_eventSOTS_GetStealthTier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GlobalStealthTagLibrary_SOTS_GetStealthTier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GlobalStealthTagLibrary_SOTS_GetStealthTier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GlobalStealthTagLibrary::execSOTS_GetStealthTier)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USOTS_GlobalStealthTagLibrary::SOTS_GetStealthTier(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class USOTS_GlobalStealthTagLibrary Function SOTS_GetStealthTier *****************

// ********** Begin Class USOTS_GlobalStealthTagLibrary Function SOTS_IsPlayerHidden ***************
struct Z_Construct_UFunction_USOTS_GlobalStealthTagLibrary_SOTS_IsPlayerHidden_Statics
{
	struct SOTS_GlobalStealthTagLibrary_eventSOTS_IsPlayerHidden_Parms
	{
		const UObject* WorldContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Stealth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns true when the player is effectively hidden, based on either the\n// current GSM tier or the presence of Player.Stealth.Hidden in the global\n// tag container.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthTagLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true when the player is effectively hidden, based on either the\ncurrent GSM tier or the presence of Player.Stealth.Hidden in the global\ntag container." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SOTS_IsPlayerHidden constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SOTS_IsPlayerHidden constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SOTS_IsPlayerHidden Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_GlobalStealthTagLibrary_SOTS_IsPlayerHidden_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GlobalStealthTagLibrary_eventSOTS_IsPlayerHidden_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
void Z_Construct_UFunction_USOTS_GlobalStealthTagLibrary_SOTS_IsPlayerHidden_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_GlobalStealthTagLibrary_eventSOTS_IsPlayerHidden_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_GlobalStealthTagLibrary_SOTS_IsPlayerHidden_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_GlobalStealthTagLibrary_eventSOTS_IsPlayerHidden_Parms), &Z_Construct_UFunction_USOTS_GlobalStealthTagLibrary_SOTS_IsPlayerHidden_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GlobalStealthTagLibrary_SOTS_IsPlayerHidden_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GlobalStealthTagLibrary_SOTS_IsPlayerHidden_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GlobalStealthTagLibrary_SOTS_IsPlayerHidden_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GlobalStealthTagLibrary_SOTS_IsPlayerHidden_Statics::PropPointers) < 2048);
// ********** End Function SOTS_IsPlayerHidden Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GlobalStealthTagLibrary_SOTS_IsPlayerHidden_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GlobalStealthTagLibrary, nullptr, "SOTS_IsPlayerHidden", 	Z_Construct_UFunction_USOTS_GlobalStealthTagLibrary_SOTS_IsPlayerHidden_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GlobalStealthTagLibrary_SOTS_IsPlayerHidden_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GlobalStealthTagLibrary_SOTS_IsPlayerHidden_Statics::SOTS_GlobalStealthTagLibrary_eventSOTS_IsPlayerHidden_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GlobalStealthTagLibrary_SOTS_IsPlayerHidden_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GlobalStealthTagLibrary_SOTS_IsPlayerHidden_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GlobalStealthTagLibrary_SOTS_IsPlayerHidden_Statics::SOTS_GlobalStealthTagLibrary_eventSOTS_IsPlayerHidden_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GlobalStealthTagLibrary_SOTS_IsPlayerHidden()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GlobalStealthTagLibrary_SOTS_IsPlayerHidden_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GlobalStealthTagLibrary::execSOTS_IsPlayerHidden)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USOTS_GlobalStealthTagLibrary::SOTS_IsPlayerHidden(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class USOTS_GlobalStealthTagLibrary Function SOTS_IsPlayerHidden *****************

// ********** Begin Class USOTS_GlobalStealthTagLibrary ********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_GlobalStealthTagLibrary;
UClass* USOTS_GlobalStealthTagLibrary::GetPrivateStaticClass()
{
	using TClass = USOTS_GlobalStealthTagLibrary;
	if (!Z_Registration_Info_UClass_USOTS_GlobalStealthTagLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_GlobalStealthTagLibrary"),
			Z_Registration_Info_UClass_USOTS_GlobalStealthTagLibrary.InnerSingleton,
			StaticRegisterNativesUSOTS_GlobalStealthTagLibrary,
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
	return Z_Registration_Info_UClass_USOTS_GlobalStealthTagLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_GlobalStealthTagLibrary_NoRegister()
{
	return USOTS_GlobalStealthTagLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_GlobalStealthTagLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Simple helpers for querying stealth-related tags from the global player tag\n * state. These are thin wrappers around GSM + TagManager and are intended\n * primarily for Blueprint usage.\n */" },
#endif
		{ "IncludePath", "SOTS_GlobalStealthTagLibrary.h" },
		{ "ModuleRelativePath", "Public/SOTS_GlobalStealthTagLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple helpers for querying stealth-related tags from the global player tag\nstate. These are thin wrappers around GSM + TagManager and are intended\nprimarily for Blueprint usage." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_GlobalStealthTagLibrary constinit property declarations ************
// ********** End Class USOTS_GlobalStealthTagLibrary constinit property declarations **************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("SOTS_GetStealthTier"), .Pointer = &USOTS_GlobalStealthTagLibrary::execSOTS_GetStealthTier },
		{ .NameUTF8 = UTF8TEXT("SOTS_IsPlayerHidden"), .Pointer = &USOTS_GlobalStealthTagLibrary::execSOTS_IsPlayerHidden },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USOTS_GlobalStealthTagLibrary_SOTS_GetStealthTier, "SOTS_GetStealthTier" }, // 3432292301
		{ &Z_Construct_UFunction_USOTS_GlobalStealthTagLibrary_SOTS_IsPlayerHidden, "SOTS_IsPlayerHidden" }, // 4039687171
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_GlobalStealthTagLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_GlobalStealthTagLibrary_Statics
UObject* (*const Z_Construct_UClass_USOTS_GlobalStealthTagLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_GlobalStealthManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_GlobalStealthTagLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_GlobalStealthTagLibrary_Statics::ClassParams = {
	&USOTS_GlobalStealthTagLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_GlobalStealthTagLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_GlobalStealthTagLibrary_Statics::Class_MetaDataParams)
};
void USOTS_GlobalStealthTagLibrary::StaticRegisterNativesUSOTS_GlobalStealthTagLibrary()
{
	UClass* Class = USOTS_GlobalStealthTagLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USOTS_GlobalStealthTagLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_USOTS_GlobalStealthTagLibrary()
{
	if (!Z_Registration_Info_UClass_USOTS_GlobalStealthTagLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_GlobalStealthTagLibrary.OuterSingleton, Z_Construct_UClass_USOTS_GlobalStealthTagLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_GlobalStealthTagLibrary.OuterSingleton;
}
USOTS_GlobalStealthTagLibrary::USOTS_GlobalStealthTagLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_GlobalStealthTagLibrary);
USOTS_GlobalStealthTagLibrary::~USOTS_GlobalStealthTagLibrary() {}
// ********** End Class USOTS_GlobalStealthTagLibrary **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_GlobalStealthTagLibrary_h__Script_SOTS_GlobalStealthManager_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_GlobalStealthTagLibrary, USOTS_GlobalStealthTagLibrary::StaticClass, TEXT("USOTS_GlobalStealthTagLibrary"), &Z_Registration_Info_UClass_USOTS_GlobalStealthTagLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_GlobalStealthTagLibrary), 1009929600U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_GlobalStealthTagLibrary_h__Script_SOTS_GlobalStealthManager_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_GlobalStealthTagLibrary_h__Script_SOTS_GlobalStealthManager_2177374895{
	TEXT("/Script/SOTS_GlobalStealthManager"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_GlobalStealthTagLibrary_h__Script_SOTS_GlobalStealthManager_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_GlobalStealthTagLibrary_h__Script_SOTS_GlobalStealthManager_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
