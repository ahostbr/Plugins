// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTS_OmniTraceSearchLibrary.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_OmniTraceSearchLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
OMNITRACE_API UClass* Z_Construct_UClass_USOTS_OmniTraceSearchLibrary();
OMNITRACE_API UClass* Z_Construct_UClass_USOTS_OmniTraceSearchLibrary_NoRegister();
OMNITRACE_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_SearchPatternResult();
UPackage* Z_Construct_UPackage__Script_OmniTrace();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FSOTS_SearchPatternResult *****************************************
struct Z_Construct_UScriptStruct_FSOTS_SearchPatternResult_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FSOTS_SearchPatternResult); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSOTS_SearchPatternResult); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SOTS_OmniTraceSearchLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Waypoints_MetaData[] = {
		{ "Category", "OmniTrace" },
		{ "ModuleRelativePath", "Public/SOTS_OmniTraceSearchLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSOTS_SearchPatternResult constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Waypoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Waypoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSOTS_SearchPatternResult constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSOTS_SearchPatternResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FSOTS_SearchPatternResult_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSOTS_SearchPatternResult;
class UScriptStruct* FSOTS_SearchPatternResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_SearchPatternResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSOTS_SearchPatternResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSOTS_SearchPatternResult, (UObject*)Z_Construct_UPackage__Script_OmniTrace(), TEXT("SOTS_SearchPatternResult"));
	}
	return Z_Registration_Info_UScriptStruct_FSOTS_SearchPatternResult.OuterSingleton;
	}

// ********** Begin ScriptStruct FSOTS_SearchPatternResult Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSOTS_SearchPatternResult_Statics::NewProp_Waypoints_Inner = { "Waypoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSOTS_SearchPatternResult_Statics::NewProp_Waypoints = { "Waypoints", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSOTS_SearchPatternResult, Waypoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Waypoints_MetaData), NewProp_Waypoints_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSOTS_SearchPatternResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_SearchPatternResult_Statics::NewProp_Waypoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSOTS_SearchPatternResult_Statics::NewProp_Waypoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_SearchPatternResult_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FSOTS_SearchPatternResult Property Definitions **********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSOTS_SearchPatternResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OmniTrace,
	nullptr,
	&NewStructOps,
	"SOTS_SearchPatternResult",
	Z_Construct_UScriptStruct_FSOTS_SearchPatternResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_SearchPatternResult_Statics::PropPointers),
	sizeof(FSOTS_SearchPatternResult),
	alignof(FSOTS_SearchPatternResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSOTS_SearchPatternResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSOTS_SearchPatternResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSOTS_SearchPatternResult()
{
	if (!Z_Registration_Info_UScriptStruct_FSOTS_SearchPatternResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSOTS_SearchPatternResult.InnerSingleton, Z_Construct_UScriptStruct_FSOTS_SearchPatternResult_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSOTS_SearchPatternResult.InnerSingleton);
}
// ********** End ScriptStruct FSOTS_SearchPatternResult *******************************************

// ********** Begin Class USOTS_OmniTraceSearchLibrary Function SOTS_RequestSearchPattern **********
struct Z_Construct_UFunction_USOTS_OmniTraceSearchLibrary_SOTS_RequestSearchPattern_Statics
{
	struct SOTS_OmniTraceSearchLibrary_eventSOTS_RequestSearchPattern_Parms
	{
		UObject* WorldContextObject;
		FVector Origin;
		float Radius;
		int32 NumPoints;
		FGameplayTag PatternTag;
		FSOTS_SearchPatternResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|OmniTrace" },
		{ "ModuleRelativePath", "Public/SOTS_OmniTraceSearchLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function SOTS_RequestSearchPattern constinit property declarations *************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumPoints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PatternTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SOTS_RequestSearchPattern constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SOTS_RequestSearchPattern Property Definitions ************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_OmniTraceSearchLibrary_SOTS_RequestSearchPattern_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_OmniTraceSearchLibrary_eventSOTS_RequestSearchPattern_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_OmniTraceSearchLibrary_SOTS_RequestSearchPattern_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_OmniTraceSearchLibrary_eventSOTS_RequestSearchPattern_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USOTS_OmniTraceSearchLibrary_SOTS_RequestSearchPattern_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_OmniTraceSearchLibrary_eventSOTS_RequestSearchPattern_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USOTS_OmniTraceSearchLibrary_SOTS_RequestSearchPattern_Statics::NewProp_NumPoints = { "NumPoints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_OmniTraceSearchLibrary_eventSOTS_RequestSearchPattern_Parms, NumPoints), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_OmniTraceSearchLibrary_SOTS_RequestSearchPattern_Statics::NewProp_PatternTag = { "PatternTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_OmniTraceSearchLibrary_eventSOTS_RequestSearchPattern_Parms, PatternTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_OmniTraceSearchLibrary_SOTS_RequestSearchPattern_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_OmniTraceSearchLibrary_eventSOTS_RequestSearchPattern_Parms, ReturnValue), Z_Construct_UScriptStruct_FSOTS_SearchPatternResult, METADATA_PARAMS(0, nullptr) }; // 2224681984
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_OmniTraceSearchLibrary_SOTS_RequestSearchPattern_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_OmniTraceSearchLibrary_SOTS_RequestSearchPattern_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_OmniTraceSearchLibrary_SOTS_RequestSearchPattern_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_OmniTraceSearchLibrary_SOTS_RequestSearchPattern_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_OmniTraceSearchLibrary_SOTS_RequestSearchPattern_Statics::NewProp_NumPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_OmniTraceSearchLibrary_SOTS_RequestSearchPattern_Statics::NewProp_PatternTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_OmniTraceSearchLibrary_SOTS_RequestSearchPattern_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_OmniTraceSearchLibrary_SOTS_RequestSearchPattern_Statics::PropPointers) < 2048);
// ********** End Function SOTS_RequestSearchPattern Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_OmniTraceSearchLibrary_SOTS_RequestSearchPattern_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_OmniTraceSearchLibrary, nullptr, "SOTS_RequestSearchPattern", 	Z_Construct_UFunction_USOTS_OmniTraceSearchLibrary_SOTS_RequestSearchPattern_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_OmniTraceSearchLibrary_SOTS_RequestSearchPattern_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_OmniTraceSearchLibrary_SOTS_RequestSearchPattern_Statics::SOTS_OmniTraceSearchLibrary_eventSOTS_RequestSearchPattern_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_OmniTraceSearchLibrary_SOTS_RequestSearchPattern_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_OmniTraceSearchLibrary_SOTS_RequestSearchPattern_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_OmniTraceSearchLibrary_SOTS_RequestSearchPattern_Statics::SOTS_OmniTraceSearchLibrary_eventSOTS_RequestSearchPattern_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_OmniTraceSearchLibrary_SOTS_RequestSearchPattern()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_OmniTraceSearchLibrary_SOTS_RequestSearchPattern_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_OmniTraceSearchLibrary::execSOTS_RequestSearchPattern)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FVector,Z_Param_Origin);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumPoints);
	P_GET_STRUCT(FGameplayTag,Z_Param_PatternTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSOTS_SearchPatternResult*)Z_Param__Result=USOTS_OmniTraceSearchLibrary::SOTS_RequestSearchPattern(Z_Param_WorldContextObject,Z_Param_Origin,Z_Param_Radius,Z_Param_NumPoints,Z_Param_PatternTag);
	P_NATIVE_END;
}
// ********** End Class USOTS_OmniTraceSearchLibrary Function SOTS_RequestSearchPattern ************

// ********** Begin Class USOTS_OmniTraceSearchLibrary *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_OmniTraceSearchLibrary;
UClass* USOTS_OmniTraceSearchLibrary::GetPrivateStaticClass()
{
	using TClass = USOTS_OmniTraceSearchLibrary;
	if (!Z_Registration_Info_UClass_USOTS_OmniTraceSearchLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_OmniTraceSearchLibrary"),
			Z_Registration_Info_UClass_USOTS_OmniTraceSearchLibrary.InnerSingleton,
			StaticRegisterNativesUSOTS_OmniTraceSearchLibrary,
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
	return Z_Registration_Info_UClass_USOTS_OmniTraceSearchLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_OmniTraceSearchLibrary_NoRegister()
{
	return USOTS_OmniTraceSearchLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_OmniTraceSearchLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * SOTS-specific helper for requesting simple search patterns from OmniTrace.\n * Phase 1 implementation is intentionally minimal: a basic circle pattern.\n */" },
#endif
		{ "IncludePath", "SOTS_OmniTraceSearchLibrary.h" },
		{ "ModuleRelativePath", "Public/SOTS_OmniTraceSearchLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SOTS-specific helper for requesting simple search patterns from OmniTrace.\nPhase 1 implementation is intentionally minimal: a basic circle pattern." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_OmniTraceSearchLibrary constinit property declarations *************
// ********** End Class USOTS_OmniTraceSearchLibrary constinit property declarations ***************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("SOTS_RequestSearchPattern"), .Pointer = &USOTS_OmniTraceSearchLibrary::execSOTS_RequestSearchPattern },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USOTS_OmniTraceSearchLibrary_SOTS_RequestSearchPattern, "SOTS_RequestSearchPattern" }, // 1781192645
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_OmniTraceSearchLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_OmniTraceSearchLibrary_Statics
UObject* (*const Z_Construct_UClass_USOTS_OmniTraceSearchLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_OmniTrace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_OmniTraceSearchLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_OmniTraceSearchLibrary_Statics::ClassParams = {
	&USOTS_OmniTraceSearchLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_OmniTraceSearchLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_OmniTraceSearchLibrary_Statics::Class_MetaDataParams)
};
void USOTS_OmniTraceSearchLibrary::StaticRegisterNativesUSOTS_OmniTraceSearchLibrary()
{
	UClass* Class = USOTS_OmniTraceSearchLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USOTS_OmniTraceSearchLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_USOTS_OmniTraceSearchLibrary()
{
	if (!Z_Registration_Info_UClass_USOTS_OmniTraceSearchLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_OmniTraceSearchLibrary.OuterSingleton, Z_Construct_UClass_USOTS_OmniTraceSearchLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_OmniTraceSearchLibrary.OuterSingleton;
}
USOTS_OmniTraceSearchLibrary::USOTS_OmniTraceSearchLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_OmniTraceSearchLibrary);
USOTS_OmniTraceSearchLibrary::~USOTS_OmniTraceSearchLibrary() {}
// ********** End Class USOTS_OmniTraceSearchLibrary ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_SOTS_OmniTraceSearchLibrary_h__Script_OmniTrace_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSOTS_SearchPatternResult::StaticStruct, Z_Construct_UScriptStruct_FSOTS_SearchPatternResult_Statics::NewStructOps, TEXT("SOTS_SearchPatternResult"),&Z_Registration_Info_UScriptStruct_FSOTS_SearchPatternResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSOTS_SearchPatternResult), 2224681984U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_OmniTraceSearchLibrary, USOTS_OmniTraceSearchLibrary::StaticClass, TEXT("USOTS_OmniTraceSearchLibrary"), &Z_Registration_Info_UClass_USOTS_OmniTraceSearchLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_OmniTraceSearchLibrary), 1032672491U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_SOTS_OmniTraceSearchLibrary_h__Script_OmniTrace_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_SOTS_OmniTraceSearchLibrary_h__Script_OmniTrace_1743551773{
	TEXT("/Script/OmniTrace"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_SOTS_OmniTraceSearchLibrary_h__Script_OmniTrace_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_SOTS_OmniTraceSearchLibrary_h__Script_OmniTrace_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_SOTS_OmniTraceSearchLibrary_h__Script_OmniTrace_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_SOTS_OmniTraceSearchLibrary_h__Script_OmniTrace_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
