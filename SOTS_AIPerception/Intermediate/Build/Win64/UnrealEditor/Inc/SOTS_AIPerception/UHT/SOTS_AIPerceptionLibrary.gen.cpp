// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTS_AIPerceptionLibrary.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_AIPerceptionLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
SOTS_AIPERCEPTION_API UClass* Z_Construct_UClass_USOTS_AIPerceptionLibrary();
SOTS_AIPERCEPTION_API UClass* Z_Construct_UClass_USOTS_AIPerceptionLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_SOTS_AIPerception();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USOTS_AIPerceptionLibrary Function SOTS_ReportNoise **********************
struct Z_Construct_UFunction_USOTS_AIPerceptionLibrary_SOTS_ReportNoise_Statics
{
	struct SOTS_AIPerceptionLibrary_eventSOTS_ReportNoise_Parms
	{
		UObject* WorldContextObject;
		AActor* Instigator;
		FVector Location;
		float Loudness;
		FGameplayTag NoiseTag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Perception" },
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function SOTS_ReportNoise constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Loudness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NoiseTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SOTS_ReportNoise constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SOTS_ReportNoise Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_AIPerceptionLibrary_SOTS_ReportNoise_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AIPerceptionLibrary_eventSOTS_ReportNoise_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_AIPerceptionLibrary_SOTS_ReportNoise_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AIPerceptionLibrary_eventSOTS_ReportNoise_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_AIPerceptionLibrary_SOTS_ReportNoise_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AIPerceptionLibrary_eventSOTS_ReportNoise_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USOTS_AIPerceptionLibrary_SOTS_ReportNoise_Statics::NewProp_Loudness = { "Loudness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AIPerceptionLibrary_eventSOTS_ReportNoise_Parms, Loudness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_AIPerceptionLibrary_SOTS_ReportNoise_Statics::NewProp_NoiseTag = { "NoiseTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_AIPerceptionLibrary_eventSOTS_ReportNoise_Parms, NoiseTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_AIPerceptionLibrary_SOTS_ReportNoise_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AIPerceptionLibrary_SOTS_ReportNoise_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AIPerceptionLibrary_SOTS_ReportNoise_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AIPerceptionLibrary_SOTS_ReportNoise_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AIPerceptionLibrary_SOTS_ReportNoise_Statics::NewProp_Loudness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_AIPerceptionLibrary_SOTS_ReportNoise_Statics::NewProp_NoiseTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AIPerceptionLibrary_SOTS_ReportNoise_Statics::PropPointers) < 2048);
// ********** End Function SOTS_ReportNoise Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_AIPerceptionLibrary_SOTS_ReportNoise_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_AIPerceptionLibrary, nullptr, "SOTS_ReportNoise", 	Z_Construct_UFunction_USOTS_AIPerceptionLibrary_SOTS_ReportNoise_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AIPerceptionLibrary_SOTS_ReportNoise_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_AIPerceptionLibrary_SOTS_ReportNoise_Statics::SOTS_AIPerceptionLibrary_eventSOTS_ReportNoise_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_AIPerceptionLibrary_SOTS_ReportNoise_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_AIPerceptionLibrary_SOTS_ReportNoise_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_AIPerceptionLibrary_SOTS_ReportNoise_Statics::SOTS_AIPerceptionLibrary_eventSOTS_ReportNoise_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_AIPerceptionLibrary_SOTS_ReportNoise()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_AIPerceptionLibrary_SOTS_ReportNoise_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_AIPerceptionLibrary::execSOTS_ReportNoise)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(AActor,Z_Param_Instigator);
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Loudness);
	P_GET_STRUCT(FGameplayTag,Z_Param_NoiseTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	USOTS_AIPerceptionLibrary::SOTS_ReportNoise(Z_Param_WorldContextObject,Z_Param_Instigator,Z_Param_Location,Z_Param_Loudness,Z_Param_NoiseTag);
	P_NATIVE_END;
}
// ********** End Class USOTS_AIPerceptionLibrary Function SOTS_ReportNoise ************************

// ********** Begin Class USOTS_AIPerceptionLibrary ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_AIPerceptionLibrary;
UClass* USOTS_AIPerceptionLibrary::GetPrivateStaticClass()
{
	using TClass = USOTS_AIPerceptionLibrary;
	if (!Z_Registration_Info_UClass_USOTS_AIPerceptionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_AIPerceptionLibrary"),
			Z_Registration_Info_UClass_USOTS_AIPerceptionLibrary.InnerSingleton,
			StaticRegisterNativesUSOTS_AIPerceptionLibrary,
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
	return Z_Registration_Info_UClass_USOTS_AIPerceptionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_AIPerceptionLibrary_NoRegister()
{
	return USOTS_AIPerceptionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_AIPerceptionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SOTS_AIPerceptionLibrary.h" },
		{ "ModuleRelativePath", "Public/SOTS_AIPerceptionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_AIPerceptionLibrary constinit property declarations ****************
// ********** End Class USOTS_AIPerceptionLibrary constinit property declarations ******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("SOTS_ReportNoise"), .Pointer = &USOTS_AIPerceptionLibrary::execSOTS_ReportNoise },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USOTS_AIPerceptionLibrary_SOTS_ReportNoise, "SOTS_ReportNoise" }, // 3391903153
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_AIPerceptionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_AIPerceptionLibrary_Statics
UObject* (*const Z_Construct_UClass_USOTS_AIPerceptionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_AIPerception,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AIPerceptionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_AIPerceptionLibrary_Statics::ClassParams = {
	&USOTS_AIPerceptionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_AIPerceptionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_AIPerceptionLibrary_Statics::Class_MetaDataParams)
};
void USOTS_AIPerceptionLibrary::StaticRegisterNativesUSOTS_AIPerceptionLibrary()
{
	UClass* Class = USOTS_AIPerceptionLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USOTS_AIPerceptionLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_USOTS_AIPerceptionLibrary()
{
	if (!Z_Registration_Info_UClass_USOTS_AIPerceptionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_AIPerceptionLibrary.OuterSingleton, Z_Construct_UClass_USOTS_AIPerceptionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_AIPerceptionLibrary.OuterSingleton;
}
USOTS_AIPerceptionLibrary::USOTS_AIPerceptionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_AIPerceptionLibrary);
USOTS_AIPerceptionLibrary::~USOTS_AIPerceptionLibrary() {}
// ********** End Class USOTS_AIPerceptionLibrary **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_AIPerception_Source_SOTS_AIPerception_Public_SOTS_AIPerceptionLibrary_h__Script_SOTS_AIPerception_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_AIPerceptionLibrary, USOTS_AIPerceptionLibrary::StaticClass, TEXT("USOTS_AIPerceptionLibrary"), &Z_Registration_Info_UClass_USOTS_AIPerceptionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_AIPerceptionLibrary), 2753794117U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_AIPerception_Source_SOTS_AIPerception_Public_SOTS_AIPerceptionLibrary_h__Script_SOTS_AIPerception_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_AIPerception_Source_SOTS_AIPerception_Public_SOTS_AIPerceptionLibrary_h__Script_SOTS_AIPerception_2727298057{
	TEXT("/Script/SOTS_AIPerception"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_AIPerception_Source_SOTS_AIPerception_Public_SOTS_AIPerceptionLibrary_h__Script_SOTS_AIPerception_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_AIPerception_Source_SOTS_AIPerception_Public_SOTS_AIPerceptionLibrary_h__Script_SOTS_AIPerception_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
