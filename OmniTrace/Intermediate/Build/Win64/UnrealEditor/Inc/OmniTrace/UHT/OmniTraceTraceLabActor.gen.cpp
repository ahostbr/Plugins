// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OmniTraceTraceLabActor.h"
#include "OmniTraceTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeOmniTraceTraceLabActor() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor();
OMNITRACE_API UClass* Z_Construct_UClass_AOmniTraceTraceLabActor();
OMNITRACE_API UClass* Z_Construct_UClass_AOmniTraceTraceLabActor_NoRegister();
OMNITRACE_API UScriptStruct* Z_Construct_UScriptStruct_FOmniTracePatternConfig();
OMNITRACE_API UScriptStruct* Z_Construct_UScriptStruct_FOmniTraceRequest();
UPackage* Z_Construct_UPackage__Script_OmniTrace();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AOmniTraceTraceLabActor Function RunForwardFanTest ***********************
#if WITH_EDITOR
struct Z_Construct_UFunction_AOmniTraceTraceLabActor_RunForwardFanTest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Trace Lab" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Fire a simple forward multi-spread fan from the origin. */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTraceLabActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fire a simple forward multi-spread fan from the origin." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RunForwardFanTest constinit property declarations *********************
// ********** End Function RunForwardFanTest constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOmniTraceTraceLabActor_RunForwardFanTest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AOmniTraceTraceLabActor, nullptr, "RunForwardFanTest", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOmniTraceTraceLabActor_RunForwardFanTest_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOmniTraceTraceLabActor_RunForwardFanTest_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AOmniTraceTraceLabActor_RunForwardFanTest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOmniTraceTraceLabActor_RunForwardFanTest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOmniTraceTraceLabActor::execRunForwardFanTest)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RunForwardFanTest();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// ********** End Class AOmniTraceTraceLabActor Function RunForwardFanTest *************************

// ********** Begin Class AOmniTraceTraceLabActor Function RunOrbitRingTest ************************
#if WITH_EDITOR
struct Z_Construct_UFunction_AOmniTraceTraceLabActor_RunOrbitRingTest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Trace Lab" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Fire an orbit ring of rays around the origin. */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTraceLabActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fire an orbit ring of rays around the origin." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RunOrbitRingTest constinit property declarations **********************
// ********** End Function RunOrbitRingTest constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOmniTraceTraceLabActor_RunOrbitRingTest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AOmniTraceTraceLabActor, nullptr, "RunOrbitRingTest", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOmniTraceTraceLabActor_RunOrbitRingTest_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOmniTraceTraceLabActor_RunOrbitRingTest_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AOmniTraceTraceLabActor_RunOrbitRingTest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOmniTraceTraceLabActor_RunOrbitRingTest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOmniTraceTraceLabActor::execRunOrbitRingTest)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RunOrbitRingTest();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// ********** End Class AOmniTraceTraceLabActor Function RunOrbitRingTest **************************

// ********** Begin Class AOmniTraceTraceLabActor Function RunPatternTraceTest *********************
#if WITH_EDITOR
struct Z_Construct_UFunction_AOmniTraceTraceLabActor_RunPatternTraceTest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Trace Lab" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Build points from PatternConfig and trace along them using PatternTraceTemplate. */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTraceLabActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Build points from PatternConfig and trace along them using PatternTraceTemplate." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RunPatternTraceTest constinit property declarations *******************
// ********** End Function RunPatternTraceTest constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOmniTraceTraceLabActor_RunPatternTraceTest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AOmniTraceTraceLabActor, nullptr, "RunPatternTraceTest", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOmniTraceTraceLabActor_RunPatternTraceTest_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOmniTraceTraceLabActor_RunPatternTraceTest_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AOmniTraceTraceLabActor_RunPatternTraceTest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOmniTraceTraceLabActor_RunPatternTraceTest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOmniTraceTraceLabActor::execRunPatternTraceTest)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RunPatternTraceTest();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// ********** End Class AOmniTraceTraceLabActor Function RunPatternTraceTest ***********************

// ********** Begin Class AOmniTraceTraceLabActor Function RunRadialBurstTest **********************
#if WITH_EDITOR
struct Z_Construct_UFunction_AOmniTraceTraceLabActor_RunRadialBurstTest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Trace Lab" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Fire a 3D radial burst of rays around the origin. */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTraceLabActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fire a 3D radial burst of rays around the origin." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RunRadialBurstTest constinit property declarations ********************
// ********** End Function RunRadialBurstTest constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOmniTraceTraceLabActor_RunRadialBurstTest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AOmniTraceTraceLabActor, nullptr, "RunRadialBurstTest", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOmniTraceTraceLabActor_RunRadialBurstTest_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOmniTraceTraceLabActor_RunRadialBurstTest_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AOmniTraceTraceLabActor_RunRadialBurstTest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOmniTraceTraceLabActor_RunRadialBurstTest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOmniTraceTraceLabActor::execRunRadialBurstTest)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RunRadialBurstTest();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// ********** End Class AOmniTraceTraceLabActor Function RunRadialBurstTest ************************

// ********** Begin Class AOmniTraceTraceLabActor Function RunTargetArcTest ************************
#if WITH_EDITOR
struct Z_Construct_UFunction_AOmniTraceTraceLabActor_RunTargetArcTest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Trace Lab" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Fire a target-centred arc pattern from the origin towards TargetActor/Location. */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTraceLabActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fire a target-centred arc pattern from the origin towards TargetActor/Location." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RunTargetArcTest constinit property declarations **********************
// ********** End Function RunTargetArcTest constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOmniTraceTraceLabActor_RunTargetArcTest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AOmniTraceTraceLabActor, nullptr, "RunTargetArcTest", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AOmniTraceTraceLabActor_RunTargetArcTest_Statics::Function_MetaDataParams), Z_Construct_UFunction_AOmniTraceTraceLabActor_RunTargetArcTest_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AOmniTraceTraceLabActor_RunTargetArcTest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOmniTraceTraceLabActor_RunTargetArcTest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AOmniTraceTraceLabActor::execRunTargetArcTest)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RunTargetArcTest();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// ********** End Class AOmniTraceTraceLabActor Function RunTargetArcTest **************************

// ********** Begin Class AOmniTraceTraceLabActor **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AOmniTraceTraceLabActor;
UClass* AOmniTraceTraceLabActor::GetPrivateStaticClass()
{
	using TClass = AOmniTraceTraceLabActor;
	if (!Z_Registration_Info_UClass_AOmniTraceTraceLabActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OmniTraceTraceLabActor"),
			Z_Registration_Info_UClass_AOmniTraceTraceLabActor.InnerSingleton,
			StaticRegisterNativesAOmniTraceTraceLabActor,
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
	return Z_Registration_Info_UClass_AOmniTraceTraceLabActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AOmniTraceTraceLabActor_NoRegister()
{
	return AOmniTraceTraceLabActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AOmniTraceTraceLabActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Dev-only helper actor for experimenting with OmniTrace patterns.\n *\n * Drop this into a test level and use the CallInEditor functions in the Details panel\n * to fire different trace patterns and visualize them.\n */" },
#endif
		{ "IncludePath", "OmniTraceTraceLabActor.h" },
		{ "ModuleRelativePath", "Public/OmniTraceTraceLabActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dev-only helper actor for experimenting with OmniTrace patterns.\n\nDrop this into a test level and use the CallInEditor functions in the Details panel\nto fire different trace patterns and visualize them." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseActorTransformAsOrigin_MetaData[] = {
		{ "Category", "Trace Lab|Origin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, this actor's transform is used as the origin for all tests. */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTraceLabActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, this actor's transform is used as the origin for all tests." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginOverride_MetaData[] = {
		{ "Category", "Trace Lab|Origin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional override origin (used when bUseActorTransformAsOrigin == false). */" },
#endif
		{ "EditCondition", "!bUseActorTransformAsOrigin" },
		{ "ModuleRelativePath", "Public/OmniTraceTraceLabActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional override origin (used when bUseActorTransformAsOrigin == false)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultRayCount_MetaData[] = {
		{ "Category", "Trace Lab|General" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Default ray count used for most tests. */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTraceLabActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default ray count used for most tests." },
#endif
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMaxDistance_MetaData[] = {
		{ "Category", "Trace Lab|General" },
		{ "ClampMin", "10.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Default max distance used for most tests (world units). */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTraceLabActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default max distance used for most tests (world units)." },
#endif
		{ "UIMin", "100.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForwardFanRequest_MetaData[] = {
		{ "Category", "Trace Lab|Requests" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Forward fan request (PatternFamily = Forward). */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTraceLabActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Forward fan request (PatternFamily = Forward)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetArcRequest_MetaData[] = {
		{ "Category", "Trace Lab|Requests" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Target arc request (PatternFamily = Target). */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTraceLabActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Target arc request (PatternFamily = Target)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrbitRequest_MetaData[] = {
		{ "Category", "Trace Lab|Requests" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Orbit ring request (PatternFamily = Orbit). */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTraceLabActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Orbit ring request (PatternFamily = Orbit)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadialBurstRequest_MetaData[] = {
		{ "Category", "Trace Lab|Requests" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Radial 3D burst request (PatternFamily = Radial3D). */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTraceLabActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Radial 3D burst request (PatternFamily = Radial3D)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatternConfig_MetaData[] = {
		{ "Category", "Trace Lab|Patterns" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pattern config used when calling OmniTrace_TraceAlongPatternConfig. */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTraceLabActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pattern config used when calling OmniTrace_TraceAlongPatternConfig." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatternNumPoints_MetaData[] = {
		{ "Category", "Trace Lab|Patterns" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Number of points to generate for PatternConfig. */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTraceLabActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of points to generate for PatternConfig." },
#endif
		{ "UIMin", "4" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatternScale_MetaData[] = {
		{ "Category", "Trace Lab|Patterns" },
		{ "ClampMin", "10.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pattern scale (radius / extent in world units). */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTraceLabActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pattern scale (radius / extent in world units)." },
#endif
		{ "UIMin", "50.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatternTraceTemplate_MetaData[] = {
		{ "Category", "Trace Lab|Patterns" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Template request used when tracing along a pattern config. */" },
#endif
		{ "ModuleRelativePath", "Public/OmniTraceTraceLabActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Template request used when tracing along a pattern config." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AOmniTraceTraceLabActor constinit property declarations ******************
	static void NewProp_bUseActorTransformAsOrigin_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseActorTransformAsOrigin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OriginOverride;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultRayCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultMaxDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ForwardFanRequest;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetArcRequest;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OrbitRequest;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RadialBurstRequest;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PatternConfig;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PatternNumPoints;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PatternScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PatternTraceTemplate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AOmniTraceTraceLabActor constinit property declarations ********************
#if WITH_EDITOR
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("RunForwardFanTest"), .Pointer = &AOmniTraceTraceLabActor::execRunForwardFanTest },
		{ .NameUTF8 = UTF8TEXT("RunOrbitRingTest"), .Pointer = &AOmniTraceTraceLabActor::execRunOrbitRingTest },
		{ .NameUTF8 = UTF8TEXT("RunPatternTraceTest"), .Pointer = &AOmniTraceTraceLabActor::execRunPatternTraceTest },
		{ .NameUTF8 = UTF8TEXT("RunRadialBurstTest"), .Pointer = &AOmniTraceTraceLabActor::execRunRadialBurstTest },
		{ .NameUTF8 = UTF8TEXT("RunTargetArcTest"), .Pointer = &AOmniTraceTraceLabActor::execRunTargetArcTest },
	};
#endif // WITH_EDITOR
	static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AOmniTraceTraceLabActor_RunForwardFanTest, "RunForwardFanTest" }, // 3701499258
		{ &Z_Construct_UFunction_AOmniTraceTraceLabActor_RunOrbitRingTest, "RunOrbitRingTest" }, // 3935950465
		{ &Z_Construct_UFunction_AOmniTraceTraceLabActor_RunPatternTraceTest, "RunPatternTraceTest" }, // 29370460
		{ &Z_Construct_UFunction_AOmniTraceTraceLabActor_RunRadialBurstTest, "RunRadialBurstTest" }, // 2999480937
		{ &Z_Construct_UFunction_AOmniTraceTraceLabActor_RunTargetArcTest, "RunTargetArcTest" }, // 1629782237
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
#endif // WITH_EDITOR
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOmniTraceTraceLabActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AOmniTraceTraceLabActor_Statics

// ********** Begin Class AOmniTraceTraceLabActor Property Definitions *****************************
void Z_Construct_UClass_AOmniTraceTraceLabActor_Statics::NewProp_bUseActorTransformAsOrigin_SetBit(void* Obj)
{
	((AOmniTraceTraceLabActor*)Obj)->bUseActorTransformAsOrigin = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AOmniTraceTraceLabActor_Statics::NewProp_bUseActorTransformAsOrigin = { "bUseActorTransformAsOrigin", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AOmniTraceTraceLabActor), &Z_Construct_UClass_AOmniTraceTraceLabActor_Statics::NewProp_bUseActorTransformAsOrigin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseActorTransformAsOrigin_MetaData), NewProp_bUseActorTransformAsOrigin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOmniTraceTraceLabActor_Statics::NewProp_OriginOverride = { "OriginOverride", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOmniTraceTraceLabActor, OriginOverride), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginOverride_MetaData), NewProp_OriginOverride_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOmniTraceTraceLabActor_Statics::NewProp_DefaultRayCount = { "DefaultRayCount", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOmniTraceTraceLabActor, DefaultRayCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultRayCount_MetaData), NewProp_DefaultRayCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOmniTraceTraceLabActor_Statics::NewProp_DefaultMaxDistance = { "DefaultMaxDistance", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOmniTraceTraceLabActor, DefaultMaxDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMaxDistance_MetaData), NewProp_DefaultMaxDistance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOmniTraceTraceLabActor_Statics::NewProp_ForwardFanRequest = { "ForwardFanRequest", nullptr, (EPropertyFlags)0x0020088000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOmniTraceTraceLabActor, ForwardFanRequest), Z_Construct_UScriptStruct_FOmniTraceRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForwardFanRequest_MetaData), NewProp_ForwardFanRequest_MetaData) }; // 979700793
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOmniTraceTraceLabActor_Statics::NewProp_TargetArcRequest = { "TargetArcRequest", nullptr, (EPropertyFlags)0x0020088000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOmniTraceTraceLabActor, TargetArcRequest), Z_Construct_UScriptStruct_FOmniTraceRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetArcRequest_MetaData), NewProp_TargetArcRequest_MetaData) }; // 979700793
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOmniTraceTraceLabActor_Statics::NewProp_OrbitRequest = { "OrbitRequest", nullptr, (EPropertyFlags)0x0020088000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOmniTraceTraceLabActor, OrbitRequest), Z_Construct_UScriptStruct_FOmniTraceRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrbitRequest_MetaData), NewProp_OrbitRequest_MetaData) }; // 979700793
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOmniTraceTraceLabActor_Statics::NewProp_RadialBurstRequest = { "RadialBurstRequest", nullptr, (EPropertyFlags)0x0020088000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOmniTraceTraceLabActor, RadialBurstRequest), Z_Construct_UScriptStruct_FOmniTraceRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadialBurstRequest_MetaData), NewProp_RadialBurstRequest_MetaData) }; // 979700793
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOmniTraceTraceLabActor_Statics::NewProp_PatternConfig = { "PatternConfig", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOmniTraceTraceLabActor, PatternConfig), Z_Construct_UScriptStruct_FOmniTracePatternConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatternConfig_MetaData), NewProp_PatternConfig_MetaData) }; // 3842959987
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOmniTraceTraceLabActor_Statics::NewProp_PatternNumPoints = { "PatternNumPoints", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOmniTraceTraceLabActor, PatternNumPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatternNumPoints_MetaData), NewProp_PatternNumPoints_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOmniTraceTraceLabActor_Statics::NewProp_PatternScale = { "PatternScale", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOmniTraceTraceLabActor, PatternScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatternScale_MetaData), NewProp_PatternScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AOmniTraceTraceLabActor_Statics::NewProp_PatternTraceTemplate = { "PatternTraceTemplate", nullptr, (EPropertyFlags)0x0020088000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOmniTraceTraceLabActor, PatternTraceTemplate), Z_Construct_UScriptStruct_FOmniTraceRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatternTraceTemplate_MetaData), NewProp_PatternTraceTemplate_MetaData) }; // 979700793
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOmniTraceTraceLabActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOmniTraceTraceLabActor_Statics::NewProp_bUseActorTransformAsOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOmniTraceTraceLabActor_Statics::NewProp_OriginOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOmniTraceTraceLabActor_Statics::NewProp_DefaultRayCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOmniTraceTraceLabActor_Statics::NewProp_DefaultMaxDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOmniTraceTraceLabActor_Statics::NewProp_ForwardFanRequest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOmniTraceTraceLabActor_Statics::NewProp_TargetArcRequest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOmniTraceTraceLabActor_Statics::NewProp_OrbitRequest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOmniTraceTraceLabActor_Statics::NewProp_RadialBurstRequest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOmniTraceTraceLabActor_Statics::NewProp_PatternConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOmniTraceTraceLabActor_Statics::NewProp_PatternNumPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOmniTraceTraceLabActor_Statics::NewProp_PatternScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOmniTraceTraceLabActor_Statics::NewProp_PatternTraceTemplate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOmniTraceTraceLabActor_Statics::PropPointers) < 2048);
// ********** End Class AOmniTraceTraceLabActor Property Definitions *******************************
UObject* (*const Z_Construct_UClass_AOmniTraceTraceLabActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_OmniTrace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOmniTraceTraceLabActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOmniTraceTraceLabActor_Statics::ClassParams = {
	&AOmniTraceTraceLabActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	IF_WITH_EDITOR(FuncInfo, nullptr),
	Z_Construct_UClass_AOmniTraceTraceLabActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
	UE_ARRAY_COUNT(Z_Construct_UClass_AOmniTraceTraceLabActor_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOmniTraceTraceLabActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AOmniTraceTraceLabActor_Statics::Class_MetaDataParams)
};
void AOmniTraceTraceLabActor::StaticRegisterNativesAOmniTraceTraceLabActor()
{
	UClass* Class = AOmniTraceTraceLabActor::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, IF_WITH_EDITOR(MakeConstArrayView(Z_Construct_UClass_AOmniTraceTraceLabActor_Statics::Funcs), {}));
}
UClass* Z_Construct_UClass_AOmniTraceTraceLabActor()
{
	if (!Z_Registration_Info_UClass_AOmniTraceTraceLabActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOmniTraceTraceLabActor.OuterSingleton, Z_Construct_UClass_AOmniTraceTraceLabActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOmniTraceTraceLabActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AOmniTraceTraceLabActor);
AOmniTraceTraceLabActor::~AOmniTraceTraceLabActor() {}
// ********** End Class AOmniTraceTraceLabActor ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceTraceLabActor_h__Script_OmniTrace_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOmniTraceTraceLabActor, AOmniTraceTraceLabActor::StaticClass, TEXT("AOmniTraceTraceLabActor"), &Z_Registration_Info_UClass_AOmniTraceTraceLabActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOmniTraceTraceLabActor), 4121364954U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceTraceLabActor_h__Script_OmniTrace_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceTraceLabActor_h__Script_OmniTrace_8567524{
	TEXT("/Script/OmniTrace"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceTraceLabActor_h__Script_OmniTrace_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_OmniTrace_Source_OmniTrace_Public_OmniTraceTraceLabActor_h__Script_OmniTrace_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
