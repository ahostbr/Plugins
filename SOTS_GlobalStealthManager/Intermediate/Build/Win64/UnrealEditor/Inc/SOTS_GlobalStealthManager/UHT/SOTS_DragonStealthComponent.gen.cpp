// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTS_DragonStealthComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_DragonStealthComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
SOTS_GLOBALSTEALTHMANAGER_API UClass* Z_Construct_UClass_USOTS_DragonStealthComponent();
SOTS_GLOBALSTEALTHMANAGER_API UClass* Z_Construct_UClass_USOTS_DragonStealthComponent_NoRegister();
SOTS_GLOBALSTEALTHMANAGER_API UEnum* Z_Construct_UEnum_SOTS_GlobalStealthManager_ESOTS_StealthTier();
UPackage* Z_Construct_UPackage__Script_SOTS_GlobalStealthManager();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USOTS_DragonStealthComponent Function GetGlobalStealthScore01 ************
struct Z_Construct_UFunction_USOTS_DragonStealthComponent_GetGlobalStealthScore01_Statics
{
	struct SOTS_DragonStealthComponent_eventGetGlobalStealthScore01_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stealth" },
		{ "ModuleRelativePath", "Public/SOTS_DragonStealthComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetGlobalStealthScore01 constinit property declarations ***************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetGlobalStealthScore01 constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetGlobalStealthScore01 Property Definitions **************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USOTS_DragonStealthComponent_GetGlobalStealthScore01_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_DragonStealthComponent_eventGetGlobalStealthScore01_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_DragonStealthComponent_GetGlobalStealthScore01_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_DragonStealthComponent_GetGlobalStealthScore01_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_DragonStealthComponent_GetGlobalStealthScore01_Statics::PropPointers) < 2048);
// ********** End Function GetGlobalStealthScore01 Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_DragonStealthComponent_GetGlobalStealthScore01_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_DragonStealthComponent, nullptr, "GetGlobalStealthScore01", 	Z_Construct_UFunction_USOTS_DragonStealthComponent_GetGlobalStealthScore01_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_DragonStealthComponent_GetGlobalStealthScore01_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_DragonStealthComponent_GetGlobalStealthScore01_Statics::SOTS_DragonStealthComponent_eventGetGlobalStealthScore01_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_DragonStealthComponent_GetGlobalStealthScore01_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_DragonStealthComponent_GetGlobalStealthScore01_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_DragonStealthComponent_GetGlobalStealthScore01_Statics::SOTS_DragonStealthComponent_eventGetGlobalStealthScore01_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_DragonStealthComponent_GetGlobalStealthScore01()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_DragonStealthComponent_GetGlobalStealthScore01_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_DragonStealthComponent::execGetGlobalStealthScore01)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetGlobalStealthScore01();
	P_NATIVE_END;
}
// ********** End Class USOTS_DragonStealthComponent Function GetGlobalStealthScore01 **************

// ********** Begin Class USOTS_DragonStealthComponent Function GetLightLevel01 ********************
struct Z_Construct_UFunction_USOTS_DragonStealthComponent_GetLightLevel01_Statics
{
	struct SOTS_DragonStealthComponent_eventGetLightLevel01_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stealth" },
		{ "ModuleRelativePath", "Public/SOTS_DragonStealthComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLightLevel01 constinit property declarations ***********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLightLevel01 constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLightLevel01 Property Definitions **********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USOTS_DragonStealthComponent_GetLightLevel01_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_DragonStealthComponent_eventGetLightLevel01_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_DragonStealthComponent_GetLightLevel01_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_DragonStealthComponent_GetLightLevel01_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_DragonStealthComponent_GetLightLevel01_Statics::PropPointers) < 2048);
// ********** End Function GetLightLevel01 Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_DragonStealthComponent_GetLightLevel01_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_DragonStealthComponent, nullptr, "GetLightLevel01", 	Z_Construct_UFunction_USOTS_DragonStealthComponent_GetLightLevel01_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_DragonStealthComponent_GetLightLevel01_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_DragonStealthComponent_GetLightLevel01_Statics::SOTS_DragonStealthComponent_eventGetLightLevel01_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_DragonStealthComponent_GetLightLevel01_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_DragonStealthComponent_GetLightLevel01_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_DragonStealthComponent_GetLightLevel01_Statics::SOTS_DragonStealthComponent_eventGetLightLevel01_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_DragonStealthComponent_GetLightLevel01()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_DragonStealthComponent_GetLightLevel01_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_DragonStealthComponent::execGetLightLevel01)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetLightLevel01();
	P_NATIVE_END;
}
// ********** End Class USOTS_DragonStealthComponent Function GetLightLevel01 **********************

// ********** Begin Class USOTS_DragonStealthComponent Function GetShadowLevel01 *******************
struct Z_Construct_UFunction_USOTS_DragonStealthComponent_GetShadowLevel01_Statics
{
	struct SOTS_DragonStealthComponent_eventGetShadowLevel01_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stealth" },
		{ "ModuleRelativePath", "Public/SOTS_DragonStealthComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetShadowLevel01 constinit property declarations **********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetShadowLevel01 constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetShadowLevel01 Property Definitions *********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USOTS_DragonStealthComponent_GetShadowLevel01_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_DragonStealthComponent_eventGetShadowLevel01_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_DragonStealthComponent_GetShadowLevel01_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_DragonStealthComponent_GetShadowLevel01_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_DragonStealthComponent_GetShadowLevel01_Statics::PropPointers) < 2048);
// ********** End Function GetShadowLevel01 Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_DragonStealthComponent_GetShadowLevel01_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_DragonStealthComponent, nullptr, "GetShadowLevel01", 	Z_Construct_UFunction_USOTS_DragonStealthComponent_GetShadowLevel01_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_DragonStealthComponent_GetShadowLevel01_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_DragonStealthComponent_GetShadowLevel01_Statics::SOTS_DragonStealthComponent_eventGetShadowLevel01_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_DragonStealthComponent_GetShadowLevel01_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_DragonStealthComponent_GetShadowLevel01_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_DragonStealthComponent_GetShadowLevel01_Statics::SOTS_DragonStealthComponent_eventGetShadowLevel01_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_DragonStealthComponent_GetShadowLevel01()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_DragonStealthComponent_GetShadowLevel01_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_DragonStealthComponent::execGetShadowLevel01)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetShadowLevel01();
	P_NATIVE_END;
}
// ********** End Class USOTS_DragonStealthComponent Function GetShadowLevel01 *********************

// ********** Begin Class USOTS_DragonStealthComponent Function GetStealthTier *********************
struct Z_Construct_UFunction_USOTS_DragonStealthComponent_GetStealthTier_Statics
{
	struct SOTS_DragonStealthComponent_eventGetStealthTier_Parms
	{
		ESOTS_StealthTier ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stealth" },
		{ "ModuleRelativePath", "Public/SOTS_DragonStealthComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetStealthTier constinit property declarations ************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetStealthTier constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetStealthTier Property Definitions ***********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USOTS_DragonStealthComponent_GetStealthTier_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USOTS_DragonStealthComponent_GetStealthTier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_DragonStealthComponent_eventGetStealthTier_Parms, ReturnValue), Z_Construct_UEnum_SOTS_GlobalStealthManager_ESOTS_StealthTier, METADATA_PARAMS(0, nullptr) }; // 3407880652
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_DragonStealthComponent_GetStealthTier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_DragonStealthComponent_GetStealthTier_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_DragonStealthComponent_GetStealthTier_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_DragonStealthComponent_GetStealthTier_Statics::PropPointers) < 2048);
// ********** End Function GetStealthTier Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_DragonStealthComponent_GetStealthTier_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_DragonStealthComponent, nullptr, "GetStealthTier", 	Z_Construct_UFunction_USOTS_DragonStealthComponent_GetStealthTier_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_DragonStealthComponent_GetStealthTier_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_DragonStealthComponent_GetStealthTier_Statics::SOTS_DragonStealthComponent_eventGetStealthTier_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_DragonStealthComponent_GetStealthTier_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_DragonStealthComponent_GetStealthTier_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_DragonStealthComponent_GetStealthTier_Statics::SOTS_DragonStealthComponent_eventGetStealthTier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_DragonStealthComponent_GetStealthTier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_DragonStealthComponent_GetStealthTier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_DragonStealthComponent::execGetStealthTier)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESOTS_StealthTier*)Z_Param__Result=P_THIS->GetStealthTier();
	P_NATIVE_END;
}
// ********** End Class USOTS_DragonStealthComponent Function GetStealthTier ***********************

// ********** Begin Class USOTS_DragonStealthComponent *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_DragonStealthComponent;
UClass* USOTS_DragonStealthComponent::GetPrivateStaticClass()
{
	using TClass = USOTS_DragonStealthComponent;
	if (!Z_Registration_Info_UClass_USOTS_DragonStealthComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_DragonStealthComponent"),
			Z_Registration_Info_UClass_USOTS_DragonStealthComponent.InnerSingleton,
			StaticRegisterNativesUSOTS_DragonStealthComponent,
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
	return Z_Registration_Info_UClass_USOTS_DragonStealthComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_DragonStealthComponent_NoRegister()
{
	return USOTS_DragonStealthComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_DragonStealthComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "SOTS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Lightweight listener component for the dragon companion.\n * It mirrors the latest global stealth state and exposes simple\n * Blueprint getters for VFX / animation graphs to query.\n */" },
#endif
		{ "IncludePath", "SOTS_DragonStealthComponent.h" },
		{ "ModuleRelativePath", "Public/SOTS_DragonStealthComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lightweight listener component for the dragon companion.\nIt mirrors the latest global stealth state and exposes simple\nBlueprint getters for VFX / animation graphs to query." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_DragonStealthComponent constinit property declarations *************
// ********** End Class USOTS_DragonStealthComponent constinit property declarations ***************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetGlobalStealthScore01"), .Pointer = &USOTS_DragonStealthComponent::execGetGlobalStealthScore01 },
		{ .NameUTF8 = UTF8TEXT("GetLightLevel01"), .Pointer = &USOTS_DragonStealthComponent::execGetLightLevel01 },
		{ .NameUTF8 = UTF8TEXT("GetShadowLevel01"), .Pointer = &USOTS_DragonStealthComponent::execGetShadowLevel01 },
		{ .NameUTF8 = UTF8TEXT("GetStealthTier"), .Pointer = &USOTS_DragonStealthComponent::execGetStealthTier },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USOTS_DragonStealthComponent_GetGlobalStealthScore01, "GetGlobalStealthScore01" }, // 3434901335
		{ &Z_Construct_UFunction_USOTS_DragonStealthComponent_GetLightLevel01, "GetLightLevel01" }, // 3227326095
		{ &Z_Construct_UFunction_USOTS_DragonStealthComponent_GetShadowLevel01, "GetShadowLevel01" }, // 1294861303
		{ &Z_Construct_UFunction_USOTS_DragonStealthComponent_GetStealthTier, "GetStealthTier" }, // 2553951768
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_DragonStealthComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_DragonStealthComponent_Statics
UObject* (*const Z_Construct_UClass_USOTS_DragonStealthComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_GlobalStealthManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_DragonStealthComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_DragonStealthComponent_Statics::ClassParams = {
	&USOTS_DragonStealthComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_DragonStealthComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_DragonStealthComponent_Statics::Class_MetaDataParams)
};
void USOTS_DragonStealthComponent::StaticRegisterNativesUSOTS_DragonStealthComponent()
{
	UClass* Class = USOTS_DragonStealthComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USOTS_DragonStealthComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_USOTS_DragonStealthComponent()
{
	if (!Z_Registration_Info_UClass_USOTS_DragonStealthComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_DragonStealthComponent.OuterSingleton, Z_Construct_UClass_USOTS_DragonStealthComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_DragonStealthComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_DragonStealthComponent);
USOTS_DragonStealthComponent::~USOTS_DragonStealthComponent() {}
// ********** End Class USOTS_DragonStealthComponent ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_DragonStealthComponent_h__Script_SOTS_GlobalStealthManager_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_DragonStealthComponent, USOTS_DragonStealthComponent::StaticClass, TEXT("USOTS_DragonStealthComponent"), &Z_Registration_Info_UClass_USOTS_DragonStealthComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_DragonStealthComponent), 1241960475U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_DragonStealthComponent_h__Script_SOTS_GlobalStealthManager_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_DragonStealthComponent_h__Script_SOTS_GlobalStealthManager_2423520060{
	TEXT("/Script/SOTS_GlobalStealthManager"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_DragonStealthComponent_h__Script_SOTS_GlobalStealthManager_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GlobalStealthManager_Source_SOTS_GlobalStealthManager_Public_SOTS_DragonStealthComponent_h__Script_SOTS_GlobalStealthManager_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
