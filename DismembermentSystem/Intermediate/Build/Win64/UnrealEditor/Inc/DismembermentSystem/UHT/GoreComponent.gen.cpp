// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Gore/GoreComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeGoreComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DISMEMBERMENTSYSTEM_API UClass* Z_Construct_UClass_UDismembermentComponent();
DISMEMBERMENTSYSTEM_API UClass* Z_Construct_UClass_UGoreComponent();
DISMEMBERMENTSYSTEM_API UClass* Z_Construct_UClass_UGoreComponent_NoRegister();
DISMEMBERMENTSYSTEM_API UEnum* Z_Construct_UEnum_DismembermentSystem_EDismemberColorChannel();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_DismembermentSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGoreComponent Function ApplyBlood ***************************************
struct Z_Construct_UFunction_UGoreComponent_ApplyBlood_Statics
{
	struct GoreComponent_eventApplyBlood_Parms
	{
		FName BoneName;
		float Radius;
		float Hardness;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dismemberment" },
		{ "CPP_Default_Hardness", "0.200000" },
		{ "CPP_Default_Radius", "75.000000" },
		{ "Keywords", "Add" },
		{ "ModuleRelativePath", "Public/Gore/GoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Applies blood to the Owning Characters Mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hardness_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ApplyBlood constinit property declarations ****************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Hardness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ApplyBlood constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ApplyBlood Property Definitions ***************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGoreComponent_ApplyBlood_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GoreComponent_eventApplyBlood_Parms, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGoreComponent_ApplyBlood_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GoreComponent_eventApplyBlood_Parms, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGoreComponent_ApplyBlood_Statics::NewProp_Hardness = { "Hardness", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GoreComponent_eventApplyBlood_Parms, Hardness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hardness_MetaData), NewProp_Hardness_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoreComponent_ApplyBlood_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_ApplyBlood_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_ApplyBlood_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_ApplyBlood_Statics::NewProp_Hardness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGoreComponent_ApplyBlood_Statics::PropPointers) < 2048);
// ********** End Function ApplyBlood Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoreComponent_ApplyBlood_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGoreComponent, nullptr, "ApplyBlood", 	Z_Construct_UFunction_UGoreComponent_ApplyBlood_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UGoreComponent_ApplyBlood_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UGoreComponent_ApplyBlood_Statics::GoreComponent_eventApplyBlood_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGoreComponent_ApplyBlood_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGoreComponent_ApplyBlood_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGoreComponent_ApplyBlood_Statics::GoreComponent_eventApplyBlood_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGoreComponent_ApplyBlood()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoreComponent_ApplyBlood_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGoreComponent::execApplyBlood)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Hardness);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyBlood(Z_Param_BoneName,Z_Param_Radius,Z_Param_Hardness);
	P_NATIVE_END;
}
// ********** End Class UGoreComponent Function ApplyBlood *****************************************

// ********** Begin Class UGoreComponent Function ApplyBloodToMesh *********************************
struct Z_Construct_UFunction_UGoreComponent_ApplyBloodToMesh_Statics
{
	struct GoreComponent_eventApplyBloodToMesh_Parms
	{
		USkeletalMeshComponent* Mesh;
		FName BoneName;
		float Radius;
		float Hardness;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dismemberment" },
		{ "CPP_Default_Hardness", "0.200000" },
		{ "CPP_Default_Radius", "75.000000" },
		{ "Keywords", "Add" },
		{ "ModuleRelativePath", "Public/Gore/GoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Applies blood to a specified Skeletal Mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hardness_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ApplyBloodToMesh constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Hardness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ApplyBloodToMesh constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ApplyBloodToMesh Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGoreComponent_ApplyBloodToMesh_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GoreComponent_eventApplyBloodToMesh_Parms, Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGoreComponent_ApplyBloodToMesh_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GoreComponent_eventApplyBloodToMesh_Parms, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGoreComponent_ApplyBloodToMesh_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GoreComponent_eventApplyBloodToMesh_Parms, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGoreComponent_ApplyBloodToMesh_Statics::NewProp_Hardness = { "Hardness", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GoreComponent_eventApplyBloodToMesh_Parms, Hardness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hardness_MetaData), NewProp_Hardness_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoreComponent_ApplyBloodToMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_ApplyBloodToMesh_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_ApplyBloodToMesh_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_ApplyBloodToMesh_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_ApplyBloodToMesh_Statics::NewProp_Hardness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGoreComponent_ApplyBloodToMesh_Statics::PropPointers) < 2048);
// ********** End Function ApplyBloodToMesh Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoreComponent_ApplyBloodToMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGoreComponent, nullptr, "ApplyBloodToMesh", 	Z_Construct_UFunction_UGoreComponent_ApplyBloodToMesh_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UGoreComponent_ApplyBloodToMesh_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UGoreComponent_ApplyBloodToMesh_Statics::GoreComponent_eventApplyBloodToMesh_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGoreComponent_ApplyBloodToMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGoreComponent_ApplyBloodToMesh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGoreComponent_ApplyBloodToMesh_Statics::GoreComponent_eventApplyBloodToMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGoreComponent_ApplyBloodToMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoreComponent_ApplyBloodToMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGoreComponent::execApplyBloodToMesh)
{
	P_GET_OBJECT(USkeletalMeshComponent,Z_Param_Mesh);
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Hardness);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyBloodToMesh(Z_Param_Mesh,Z_Param_BoneName,Z_Param_Radius,Z_Param_Hardness);
	P_NATIVE_END;
}
// ********** End Class UGoreComponent Function ApplyBloodToMesh ***********************************

// ********** Begin Class UGoreComponent Function ApplyBloodToStaticMesh ***************************
struct Z_Construct_UFunction_UGoreComponent_ApplyBloodToStaticMesh_Statics
{
	struct GoreComponent_eventApplyBloodToStaticMesh_Parms
	{
		UStaticMeshComponent* StaticMeshComponent;
		FVector WorldLocation;
		float Radius;
		float Hardness;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dismemberment" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *\x09""Applies blood to a specified Static Mesh. Used for weapons and other attached objects\n\x09 *\x09NOTE: This is currently an experimental feature as static meshes dont have vertex color overrides in the same way that skeletal meshes do.\n\x09 */" },
#endif
		{ "CPP_Default_Hardness", "0.200000" },
		{ "CPP_Default_Radius", "75.000000" },
		{ "Keywords", "Add" },
		{ "ModuleRelativePath", "Public/Gore/GoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Applies blood to a specified Static Mesh. Used for weapons and other attached objects\nNOTE: This is currently an experimental feature as static meshes dont have vertex color overrides in the same way that skeletal meshes do." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hardness_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ApplyBloodToStaticMesh constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Hardness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ApplyBloodToStaticMesh constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ApplyBloodToStaticMesh Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGoreComponent_ApplyBloodToStaticMesh_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GoreComponent_eventApplyBloodToStaticMesh_Parms, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComponent_MetaData), NewProp_StaticMeshComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGoreComponent_ApplyBloodToStaticMesh_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GoreComponent_eventApplyBloodToStaticMesh_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGoreComponent_ApplyBloodToStaticMesh_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GoreComponent_eventApplyBloodToStaticMesh_Parms, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGoreComponent_ApplyBloodToStaticMesh_Statics::NewProp_Hardness = { "Hardness", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GoreComponent_eventApplyBloodToStaticMesh_Parms, Hardness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hardness_MetaData), NewProp_Hardness_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoreComponent_ApplyBloodToStaticMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_ApplyBloodToStaticMesh_Statics::NewProp_StaticMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_ApplyBloodToStaticMesh_Statics::NewProp_WorldLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_ApplyBloodToStaticMesh_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_ApplyBloodToStaticMesh_Statics::NewProp_Hardness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGoreComponent_ApplyBloodToStaticMesh_Statics::PropPointers) < 2048);
// ********** End Function ApplyBloodToStaticMesh Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoreComponent_ApplyBloodToStaticMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGoreComponent, nullptr, "ApplyBloodToStaticMesh", 	Z_Construct_UFunction_UGoreComponent_ApplyBloodToStaticMesh_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UGoreComponent_ApplyBloodToStaticMesh_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UGoreComponent_ApplyBloodToStaticMesh_Statics::GoreComponent_eventApplyBloodToStaticMesh_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04840401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGoreComponent_ApplyBloodToStaticMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGoreComponent_ApplyBloodToStaticMesh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGoreComponent_ApplyBloodToStaticMesh_Statics::GoreComponent_eventApplyBloodToStaticMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGoreComponent_ApplyBloodToStaticMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoreComponent_ApplyBloodToStaticMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGoreComponent::execApplyBloodToStaticMesh)
{
	P_GET_OBJECT(UStaticMeshComponent,Z_Param_StaticMeshComponent);
	P_GET_STRUCT(FVector,Z_Param_WorldLocation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Hardness);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyBloodToStaticMesh(Z_Param_StaticMeshComponent,Z_Param_WorldLocation,Z_Param_Radius,Z_Param_Hardness);
	P_NATIVE_END;
}
// ********** End Class UGoreComponent Function ApplyBloodToStaticMesh *****************************

// ********** Begin Class UGoreComponent Function BeginBloodAnimation ******************************
struct Z_Construct_UFunction_UGoreComponent_BeginBloodAnimation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n*\x09Material\n*/" },
#endif
		{ "ModuleRelativePath", "Public/Gore/GoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "*      Material" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function BeginBloodAnimation constinit property declarations *******************
// ********** End Function BeginBloodAnimation constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoreComponent_BeginBloodAnimation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGoreComponent, nullptr, "BeginBloodAnimation", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGoreComponent_BeginBloodAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGoreComponent_BeginBloodAnimation_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UGoreComponent_BeginBloodAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoreComponent_BeginBloodAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGoreComponent::execBeginBloodAnimation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BeginBloodAnimation();
	P_NATIVE_END;
}
// ********** End Class UGoreComponent Function BeginBloodAnimation ********************************

// ********** Begin Class UGoreComponent Function RemoveBloodFromStaticMesh ************************
struct Z_Construct_UFunction_UGoreComponent_RemoveBloodFromStaticMesh_Statics
{
	struct GoreComponent_eventRemoveBloodFromStaticMesh_Parms
	{
		UStaticMeshComponent* StaticMeshComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dismemberment" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *\x09Remove all blood from the specified Static Mesh.\n\x09 *\x09NOTE: This is currently an experimental feature as static meshes dont have vertex color overrides in the same way that skeletal meshes do.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Gore/GoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove all blood from the specified Static Mesh.\nNOTE: This is currently an experimental feature as static meshes dont have vertex color overrides in the same way that skeletal meshes do." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveBloodFromStaticMesh constinit property declarations *************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveBloodFromStaticMesh constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveBloodFromStaticMesh Property Definitions ************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGoreComponent_RemoveBloodFromStaticMesh_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GoreComponent_eventRemoveBloodFromStaticMesh_Parms, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComponent_MetaData), NewProp_StaticMeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoreComponent_RemoveBloodFromStaticMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_RemoveBloodFromStaticMesh_Statics::NewProp_StaticMeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGoreComponent_RemoveBloodFromStaticMesh_Statics::PropPointers) < 2048);
// ********** End Function RemoveBloodFromStaticMesh Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoreComponent_RemoveBloodFromStaticMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGoreComponent, nullptr, "RemoveBloodFromStaticMesh", 	Z_Construct_UFunction_UGoreComponent_RemoveBloodFromStaticMesh_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UGoreComponent_RemoveBloodFromStaticMesh_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UGoreComponent_RemoveBloodFromStaticMesh_Statics::GoreComponent_eventRemoveBloodFromStaticMesh_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGoreComponent_RemoveBloodFromStaticMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGoreComponent_RemoveBloodFromStaticMesh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGoreComponent_RemoveBloodFromStaticMesh_Statics::GoreComponent_eventRemoveBloodFromStaticMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGoreComponent_RemoveBloodFromStaticMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoreComponent_RemoveBloodFromStaticMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGoreComponent::execRemoveBloodFromStaticMesh)
{
	P_GET_OBJECT(UStaticMeshComponent,Z_Param_StaticMeshComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveBloodFromStaticMesh(Z_Param_StaticMeshComponent);
	P_NATIVE_END;
}
// ********** End Class UGoreComponent Function RemoveBloodFromStaticMesh **************************

// ********** Begin Class UGoreComponent Function SpawnBloodFX *************************************
struct Z_Construct_UFunction_UGoreComponent_SpawnBloodFX_Statics
{
	struct GoreComponent_eventSpawnBloodFX_Parms
	{
		FVector Location;
		FVector Direction;
		FName HitBone;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Dismemberment" },
		{ "CPP_Default_HitBone", "None" },
		{ "ModuleRelativePath", "Public/Gore/GoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spawns all the Blood FX without dismembering a bone" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SpawnBloodFX constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HitBone;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SpawnBloodFX constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SpawnBloodFX Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGoreComponent_SpawnBloodFX_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GoreComponent_eventSpawnBloodFX_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGoreComponent_SpawnBloodFX_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GoreComponent_eventSpawnBloodFX_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGoreComponent_SpawnBloodFX_Statics::NewProp_HitBone = { "HitBone", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GoreComponent_eventSpawnBloodFX_Parms, HitBone), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoreComponent_SpawnBloodFX_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_SpawnBloodFX_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_SpawnBloodFX_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_SpawnBloodFX_Statics::NewProp_HitBone,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGoreComponent_SpawnBloodFX_Statics::PropPointers) < 2048);
// ********** End Function SpawnBloodFX Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoreComponent_SpawnBloodFX_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGoreComponent, nullptr, "SpawnBloodFX", 	Z_Construct_UFunction_UGoreComponent_SpawnBloodFX_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UGoreComponent_SpawnBloodFX_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UGoreComponent_SpawnBloodFX_Statics::GoreComponent_eventSpawnBloodFX_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04840401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGoreComponent_SpawnBloodFX_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGoreComponent_SpawnBloodFX_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGoreComponent_SpawnBloodFX_Statics::GoreComponent_eventSpawnBloodFX_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGoreComponent_SpawnBloodFX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoreComponent_SpawnBloodFX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGoreComponent::execSpawnBloodFX)
{
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_GET_STRUCT(FVector,Z_Param_Direction);
	P_GET_PROPERTY(FNameProperty,Z_Param_HitBone);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnBloodFX(Z_Param_Location,Z_Param_Direction,Z_Param_HitBone);
	P_NATIVE_END;
}
// ********** End Class UGoreComponent Function SpawnBloodFX ***************************************

// ********** Begin Class UGoreComponent Function SpawnBloodParticles ******************************
struct Z_Construct_UFunction_UGoreComponent_SpawnBloodParticles_Statics
{
	struct GoreComponent_eventSpawnBloodParticles_Parms
	{
		FVector Location;
		FRotator Rotation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dismemberment" },
		{ "ModuleRelativePath", "Public/Gore/GoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spawns the Blood Particle at a specified location" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SpawnBloodParticles constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SpawnBloodParticles constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SpawnBloodParticles Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGoreComponent_SpawnBloodParticles_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GoreComponent_eventSpawnBloodParticles_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGoreComponent_SpawnBloodParticles_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GoreComponent_eventSpawnBloodParticles_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoreComponent_SpawnBloodParticles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_SpawnBloodParticles_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_SpawnBloodParticles_Statics::NewProp_Rotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGoreComponent_SpawnBloodParticles_Statics::PropPointers) < 2048);
// ********** End Function SpawnBloodParticles Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoreComponent_SpawnBloodParticles_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGoreComponent, nullptr, "SpawnBloodParticles", 	Z_Construct_UFunction_UGoreComponent_SpawnBloodParticles_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UGoreComponent_SpawnBloodParticles_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UGoreComponent_SpawnBloodParticles_Statics::GoreComponent_eventSpawnBloodParticles_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04840401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGoreComponent_SpawnBloodParticles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGoreComponent_SpawnBloodParticles_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGoreComponent_SpawnBloodParticles_Statics::GoreComponent_eventSpawnBloodParticles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGoreComponent_SpawnBloodParticles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoreComponent_SpawnBloodParticles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGoreComponent::execSpawnBloodParticles)
{
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_GET_STRUCT(FRotator,Z_Param_Rotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnBloodParticles(Z_Param_Location,Z_Param_Rotation);
	P_NATIVE_END;
}
// ********** End Class UGoreComponent Function SpawnBloodParticles ********************************

// ********** Begin Class UGoreComponent Function SpawnBoolDecal ***********************************
struct Z_Construct_UFunction_UGoreComponent_SpawnBoolDecal_Statics
{
	struct GoreComponent_eventSpawnBoolDecal_Parms
	{
		FVector Location;
		FVector Normal;
		USceneComponent* Attachment;
		FVector SplatterDirection;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Dismemberment" },
		{ "CPP_Default_Attachment", "None" },
		{ "CPP_Default_SplatterDirection", "0.000000,0.000000,1.000000" },
		{ "ModuleRelativePath", "Public/Gore/GoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spawns a Blood Decal at the specified location" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attachment_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function SpawnBoolDecal constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Attachment;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SplatterDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SpawnBoolDecal constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SpawnBoolDecal Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGoreComponent_SpawnBoolDecal_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GoreComponent_eventSpawnBoolDecal_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGoreComponent_SpawnBoolDecal_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GoreComponent_eventSpawnBoolDecal_Parms, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGoreComponent_SpawnBoolDecal_Statics::NewProp_Attachment = { "Attachment", nullptr, (EPropertyFlags)0x0010040000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GoreComponent_eventSpawnBoolDecal_Parms, Attachment), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attachment_MetaData), NewProp_Attachment_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGoreComponent_SpawnBoolDecal_Statics::NewProp_SplatterDirection = { "SplatterDirection", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GoreComponent_eventSpawnBoolDecal_Parms, SplatterDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoreComponent_SpawnBoolDecal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_SpawnBoolDecal_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_SpawnBoolDecal_Statics::NewProp_Normal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_SpawnBoolDecal_Statics::NewProp_Attachment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoreComponent_SpawnBoolDecal_Statics::NewProp_SplatterDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGoreComponent_SpawnBoolDecal_Statics::PropPointers) < 2048);
// ********** End Function SpawnBoolDecal Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoreComponent_SpawnBoolDecal_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGoreComponent, nullptr, "SpawnBoolDecal", 	Z_Construct_UFunction_UGoreComponent_SpawnBoolDecal_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UGoreComponent_SpawnBoolDecal_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UGoreComponent_SpawnBoolDecal_Statics::GoreComponent_eventSpawnBoolDecal_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04840401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGoreComponent_SpawnBoolDecal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGoreComponent_SpawnBoolDecal_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGoreComponent_SpawnBoolDecal_Statics::GoreComponent_eventSpawnBoolDecal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGoreComponent_SpawnBoolDecal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoreComponent_SpawnBoolDecal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGoreComponent::execSpawnBoolDecal)
{
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_GET_STRUCT(FVector,Z_Param_Normal);
	P_GET_OBJECT(USceneComponent,Z_Param_Attachment);
	P_GET_STRUCT(FVector,Z_Param_SplatterDirection);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnBoolDecal(Z_Param_Location,Z_Param_Normal,Z_Param_Attachment,Z_Param_SplatterDirection);
	P_NATIVE_END;
}
// ********** End Class UGoreComponent Function SpawnBoolDecal *************************************

// ********** Begin Class UGoreComponent Function TickBloodAnimation *******************************
struct Z_Construct_UFunction_UGoreComponent_TickBloodAnimation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gore/GoreComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function TickBloodAnimation constinit property declarations ********************
// ********** End Function TickBloodAnimation constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoreComponent_TickBloodAnimation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGoreComponent, nullptr, "TickBloodAnimation", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGoreComponent_TickBloodAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGoreComponent_TickBloodAnimation_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UGoreComponent_TickBloodAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoreComponent_TickBloodAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGoreComponent::execTickBloodAnimation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TickBloodAnimation();
	P_NATIVE_END;
}
// ********** End Class UGoreComponent Function TickBloodAnimation *********************************

// ********** Begin Class UGoreComponent ***********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UGoreComponent;
UClass* UGoreComponent::GetPrivateStaticClass()
{
	using TClass = UGoreComponent;
	if (!Z_Registration_Info_UClass_UGoreComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("GoreComponent"),
			Z_Registration_Info_UClass_UGoreComponent.InnerSingleton,
			StaticRegisterNativesUGoreComponent,
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
	return Z_Registration_Info_UClass_UGoreComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UGoreComponent_NoRegister()
{
	return UGoreComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGoreComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "Gore Component" },
		{ "IncludePath", "Gore/GoreComponent.h" },
		{ "ModuleRelativePath", "Public/Gore/GoreComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableBloodPoolDecal_MetaData[] = {
		{ "Category", "Dismemberment|FX" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enables/Disables the Blood Pool Decal from spawning after dismembering a limb */" },
#endif
		{ "ModuleRelativePath", "Public/Gore/GoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables/Disables the Blood Pool Decal from spawning after dismembering a limb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableBloodParticles_MetaData[] = {
		{ "Category", "Dismemberment|FX" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enables/Disables the Blood Particle FX from spawning after dismembering a limb */" },
#endif
		{ "ModuleRelativePath", "Public/Gore/GoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables/Disables the Blood Particle FX from spawning after dismembering a limb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableBloodSkinPainting_MetaData[] = {
		{ "Category", "Dismemberment|FX" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enables/Disables the Blood being Painted on the Skin after dismembering a limb */" },
#endif
		{ "ModuleRelativePath", "Public/Gore/GoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables/Disables the Blood being Painted on the Skin after dismembering a limb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BloodPoolScale_MetaData[] = {
		{ "Category", "Dismemberment|FX|Decal" },
		{ "ModuleRelativePath", "Public/Gore/GoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scales the Size of the Blood Pool Decal." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BloodDecalLifetime_MetaData[] = {
		{ "Category", "Dismemberment|FX|Decal" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The Duration that the Blood Pool Decal will exist for */" },
#endif
		{ "ModuleRelativePath", "Public/Gore/GoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Duration that the Blood Pool Decal will exist for" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideBloodDecal_MetaData[] = {
		{ "Category", "Dismemberment|FX|Decal" },
		{ "ModuleRelativePath", "Public/Gore/GoreComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BloodDecal_MetaData[] = {
		{ "Category", "Dismemberment|FX|Decal" },
		{ "EditCondition", "bOverrideBloodDecal" },
		{ "EditConditionHides", "true" },
		{ "ModuleRelativePath", "Public/Gore/GoreComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideBloodDecalTexture_MetaData[] = {
		{ "Category", "Dismemberment|FX|Decal" },
		{ "ModuleRelativePath", "Public/Gore/GoreComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BloodDecalTexture_MetaData[] = {
		{ "Category", "Dismemberment|FX|Decal" },
		{ "EditCondition", "bOverrideBloodDecalTexture" },
		{ "EditConditionHides", "true" },
		{ "ModuleRelativePath", "Public/Gore/GoreComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BloodDecalTileSize_MetaData[] = {
		{ "Category", "Dismemberment|FX|Decal" },
		{ "EditCondition", "bOverrideBloodDecalTexture" },
		{ "EditConditionHides", "true" },
		{ "ModuleRelativePath", "Public/Gore/GoreComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseWorldSpaceTiling_MetaData[] = {
		{ "Category", "Dismemberment|FX|Decal" },
		{ "EditCondition", "bOverrideBloodDecalTexture" },
		{ "EditConditionHides", "true" },
		{ "ModuleRelativePath", "Public/Gore/GoreComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowedSurfaceTypesForBloodDecals_MetaData[] = {
		{ "Category", "Dismemberment|FX|Decal" },
		{ "ModuleRelativePath", "Public/Gore/GoreComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideBloodParticles_MetaData[] = {
		{ "Category", "Dismemberment|FX|Particles" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n *\x09Particles\n */" },
#endif
		{ "ModuleRelativePath", "Public/Gore/GoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "*     Particles" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FX_BloodBurst_MetaData[] = {
		{ "Category", "Dismemberment|FX|Particles" },
		{ "EditCondition", "bOverrideBloodParticles" },
		{ "EditConditionHides", "true" },
		{ "ModuleRelativePath", "Public/Gore/GoreComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BloodParticleScale_MetaData[] = {
		{ "Category", "Dismemberment|FX|Particles" },
		{ "ModuleRelativePath", "Public/Gore/GoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scales the Size of the Blood Pool Niagara Particles." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BloodPaintScale_MetaData[] = {
		{ "Category", "Dismemberment|FX|BloodPaint" },
		{ "ModuleRelativePath", "Public/Gore/GoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scales the Amount of blood that gets painted on the Skeletal Mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BloodPaintRadius_MetaData[] = {
		{ "Category", "Dismemberment|FX|BloodPaint" },
		{ "ModuleRelativePath", "Public/Gore/GoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Size in, Unreal Units, of the area that the blood paints of the Skeletal Mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BloodPaintLimbRadius_MetaData[] = {
		{ "Category", "Dismemberment|FX|BloodPaint" },
		{ "ModuleRelativePath", "Public/Gore/GoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Size in, Unreal Units, of the area that the blood paints on the Dismembered Limbs" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BloodPaintFalloff_MetaData[] = {
		{ "Category", "Dismemberment|FX|BloodPaint" },
		{ "ModuleRelativePath", "Public/Gore/GoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Falloff of the blood that gets painted on the Skeletal Mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BloodVertexChannel_MetaData[] = {
		{ "Category", "Dismemberment|FX|BloodPaint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The Vertex Channel used when painting blood on the characters skin */" },
#endif
		{ "ModuleRelativePath", "Public/Gore/GoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Vertex Channel used when painting blood on the characters skin" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BloodAnimationPrimitiveIndex_MetaData[] = {
		{ "Category", "Dismemberment|FX|BloodPaint|Advanced" },
		{ "ModuleRelativePath", "Public/Gore/GoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Custom Primitive Index for the Blood Animation Scalar Parameter in the MF_DIS_ApplyBlood function" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BloodAnimationTime_MetaData[] = {
		{ "Category", "Dismemberment|FX|BloodPaint" },
		{ "ModuleRelativePath", "Public/Gore/GoreComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Amount of time it takes for blood to apply to a Mesh" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UGoreComponent constinit property declarations ***************************
	static void NewProp_bEnableBloodPoolDecal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableBloodPoolDecal;
	static void NewProp_bEnableBloodParticles_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableBloodParticles;
	static void NewProp_bEnableBloodSkinPainting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableBloodSkinPainting;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BloodPoolScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BloodDecalLifetime;
	static void NewProp_bOverrideBloodDecal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideBloodDecal;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BloodDecal;
	static void NewProp_bOverrideBloodDecalTexture_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideBloodDecalTexture;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_BloodDecalTexture;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BloodDecalTileSize;
	static void NewProp_bUseWorldSpaceTiling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseWorldSpaceTiling;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AllowedSurfaceTypesForBloodDecals_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedSurfaceTypesForBloodDecals;
	static void NewProp_bOverrideBloodParticles_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideBloodParticles;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FX_BloodBurst;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BloodParticleScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BloodPaintScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BloodPaintRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BloodPaintLimbRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BloodPaintFalloff;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BloodVertexChannel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BloodVertexChannel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BloodAnimationPrimitiveIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BloodAnimationTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UGoreComponent constinit property declarations *****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ApplyBlood"), .Pointer = &UGoreComponent::execApplyBlood },
		{ .NameUTF8 = UTF8TEXT("ApplyBloodToMesh"), .Pointer = &UGoreComponent::execApplyBloodToMesh },
		{ .NameUTF8 = UTF8TEXT("ApplyBloodToStaticMesh"), .Pointer = &UGoreComponent::execApplyBloodToStaticMesh },
		{ .NameUTF8 = UTF8TEXT("BeginBloodAnimation"), .Pointer = &UGoreComponent::execBeginBloodAnimation },
		{ .NameUTF8 = UTF8TEXT("RemoveBloodFromStaticMesh"), .Pointer = &UGoreComponent::execRemoveBloodFromStaticMesh },
		{ .NameUTF8 = UTF8TEXT("SpawnBloodFX"), .Pointer = &UGoreComponent::execSpawnBloodFX },
		{ .NameUTF8 = UTF8TEXT("SpawnBloodParticles"), .Pointer = &UGoreComponent::execSpawnBloodParticles },
		{ .NameUTF8 = UTF8TEXT("SpawnBoolDecal"), .Pointer = &UGoreComponent::execSpawnBoolDecal },
		{ .NameUTF8 = UTF8TEXT("TickBloodAnimation"), .Pointer = &UGoreComponent::execTickBloodAnimation },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGoreComponent_ApplyBlood, "ApplyBlood" }, // 2281565107
		{ &Z_Construct_UFunction_UGoreComponent_ApplyBloodToMesh, "ApplyBloodToMesh" }, // 2233565648
		{ &Z_Construct_UFunction_UGoreComponent_ApplyBloodToStaticMesh, "ApplyBloodToStaticMesh" }, // 1141794742
		{ &Z_Construct_UFunction_UGoreComponent_BeginBloodAnimation, "BeginBloodAnimation" }, // 1441701754
		{ &Z_Construct_UFunction_UGoreComponent_RemoveBloodFromStaticMesh, "RemoveBloodFromStaticMesh" }, // 1082992174
		{ &Z_Construct_UFunction_UGoreComponent_SpawnBloodFX, "SpawnBloodFX" }, // 2152619015
		{ &Z_Construct_UFunction_UGoreComponent_SpawnBloodParticles, "SpawnBloodParticles" }, // 3866681013
		{ &Z_Construct_UFunction_UGoreComponent_SpawnBoolDecal, "SpawnBoolDecal" }, // 76605389
		{ &Z_Construct_UFunction_UGoreComponent_TickBloodAnimation, "TickBloodAnimation" }, // 3396991985
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGoreComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UGoreComponent_Statics

// ********** Begin Class UGoreComponent Property Definitions **************************************
void Z_Construct_UClass_UGoreComponent_Statics::NewProp_bEnableBloodPoolDecal_SetBit(void* Obj)
{
	((UGoreComponent*)Obj)->bEnableBloodPoolDecal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_bEnableBloodPoolDecal = { "bEnableBloodPoolDecal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGoreComponent), &Z_Construct_UClass_UGoreComponent_Statics::NewProp_bEnableBloodPoolDecal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableBloodPoolDecal_MetaData), NewProp_bEnableBloodPoolDecal_MetaData) };
void Z_Construct_UClass_UGoreComponent_Statics::NewProp_bEnableBloodParticles_SetBit(void* Obj)
{
	((UGoreComponent*)Obj)->bEnableBloodParticles = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_bEnableBloodParticles = { "bEnableBloodParticles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGoreComponent), &Z_Construct_UClass_UGoreComponent_Statics::NewProp_bEnableBloodParticles_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableBloodParticles_MetaData), NewProp_bEnableBloodParticles_MetaData) };
void Z_Construct_UClass_UGoreComponent_Statics::NewProp_bEnableBloodSkinPainting_SetBit(void* Obj)
{
	((UGoreComponent*)Obj)->bEnableBloodSkinPainting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_bEnableBloodSkinPainting = { "bEnableBloodSkinPainting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGoreComponent), &Z_Construct_UClass_UGoreComponent_Statics::NewProp_bEnableBloodSkinPainting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableBloodSkinPainting_MetaData), NewProp_bEnableBloodSkinPainting_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_BloodPoolScale = { "BloodPoolScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGoreComponent, BloodPoolScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BloodPoolScale_MetaData), NewProp_BloodPoolScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_BloodDecalLifetime = { "BloodDecalLifetime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGoreComponent, BloodDecalLifetime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BloodDecalLifetime_MetaData), NewProp_BloodDecalLifetime_MetaData) };
void Z_Construct_UClass_UGoreComponent_Statics::NewProp_bOverrideBloodDecal_SetBit(void* Obj)
{
	((UGoreComponent*)Obj)->bOverrideBloodDecal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_bOverrideBloodDecal = { "bOverrideBloodDecal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGoreComponent), &Z_Construct_UClass_UGoreComponent_Statics::NewProp_bOverrideBloodDecal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideBloodDecal_MetaData), NewProp_bOverrideBloodDecal_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_BloodDecal = { "BloodDecal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGoreComponent, BloodDecal), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BloodDecal_MetaData), NewProp_BloodDecal_MetaData) };
void Z_Construct_UClass_UGoreComponent_Statics::NewProp_bOverrideBloodDecalTexture_SetBit(void* Obj)
{
	((UGoreComponent*)Obj)->bOverrideBloodDecalTexture = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_bOverrideBloodDecalTexture = { "bOverrideBloodDecalTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGoreComponent), &Z_Construct_UClass_UGoreComponent_Statics::NewProp_bOverrideBloodDecalTexture_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideBloodDecalTexture_MetaData), NewProp_bOverrideBloodDecalTexture_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_BloodDecalTexture = { "BloodDecalTexture", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGoreComponent, BloodDecalTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BloodDecalTexture_MetaData), NewProp_BloodDecalTexture_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_BloodDecalTileSize = { "BloodDecalTileSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGoreComponent, BloodDecalTileSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BloodDecalTileSize_MetaData), NewProp_BloodDecalTileSize_MetaData) };
void Z_Construct_UClass_UGoreComponent_Statics::NewProp_bUseWorldSpaceTiling_SetBit(void* Obj)
{
	((UGoreComponent*)Obj)->bUseWorldSpaceTiling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_bUseWorldSpaceTiling = { "bUseWorldSpaceTiling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGoreComponent), &Z_Construct_UClass_UGoreComponent_Statics::NewProp_bUseWorldSpaceTiling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseWorldSpaceTiling_MetaData), NewProp_bUseWorldSpaceTiling_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_AllowedSurfaceTypesForBloodDecals_Inner = { "AllowedSurfaceTypesForBloodDecals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 2482564233
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_AllowedSurfaceTypesForBloodDecals = { "AllowedSurfaceTypesForBloodDecals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGoreComponent, AllowedSurfaceTypesForBloodDecals), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowedSurfaceTypesForBloodDecals_MetaData), NewProp_AllowedSurfaceTypesForBloodDecals_MetaData) }; // 2482564233
void Z_Construct_UClass_UGoreComponent_Statics::NewProp_bOverrideBloodParticles_SetBit(void* Obj)
{
	((UGoreComponent*)Obj)->bOverrideBloodParticles = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_bOverrideBloodParticles = { "bOverrideBloodParticles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGoreComponent), &Z_Construct_UClass_UGoreComponent_Statics::NewProp_bOverrideBloodParticles_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideBloodParticles_MetaData), NewProp_bOverrideBloodParticles_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_FX_BloodBurst = { "FX_BloodBurst", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGoreComponent, FX_BloodBurst), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FX_BloodBurst_MetaData), NewProp_FX_BloodBurst_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_BloodParticleScale = { "BloodParticleScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGoreComponent, BloodParticleScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BloodParticleScale_MetaData), NewProp_BloodParticleScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_BloodPaintScale = { "BloodPaintScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGoreComponent, BloodPaintScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BloodPaintScale_MetaData), NewProp_BloodPaintScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_BloodPaintRadius = { "BloodPaintRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGoreComponent, BloodPaintRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BloodPaintRadius_MetaData), NewProp_BloodPaintRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_BloodPaintLimbRadius = { "BloodPaintLimbRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGoreComponent, BloodPaintLimbRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BloodPaintLimbRadius_MetaData), NewProp_BloodPaintLimbRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_BloodPaintFalloff = { "BloodPaintFalloff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGoreComponent, BloodPaintFalloff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BloodPaintFalloff_MetaData), NewProp_BloodPaintFalloff_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_BloodVertexChannel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_BloodVertexChannel = { "BloodVertexChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGoreComponent, BloodVertexChannel), Z_Construct_UEnum_DismembermentSystem_EDismemberColorChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BloodVertexChannel_MetaData), NewProp_BloodVertexChannel_MetaData) }; // 4159718130
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_BloodAnimationPrimitiveIndex = { "BloodAnimationPrimitiveIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGoreComponent, BloodAnimationPrimitiveIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BloodAnimationPrimitiveIndex_MetaData), NewProp_BloodAnimationPrimitiveIndex_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGoreComponent_Statics::NewProp_BloodAnimationTime = { "BloodAnimationTime", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGoreComponent, BloodAnimationTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BloodAnimationTime_MetaData), NewProp_BloodAnimationTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGoreComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_bEnableBloodPoolDecal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_bEnableBloodParticles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_bEnableBloodSkinPainting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_BloodPoolScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_BloodDecalLifetime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_bOverrideBloodDecal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_BloodDecal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_bOverrideBloodDecalTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_BloodDecalTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_BloodDecalTileSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_bUseWorldSpaceTiling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_AllowedSurfaceTypesForBloodDecals_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_AllowedSurfaceTypesForBloodDecals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_bOverrideBloodParticles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_FX_BloodBurst,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_BloodParticleScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_BloodPaintScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_BloodPaintRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_BloodPaintLimbRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_BloodPaintFalloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_BloodVertexChannel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_BloodVertexChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_BloodAnimationPrimitiveIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoreComponent_Statics::NewProp_BloodAnimationTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGoreComponent_Statics::PropPointers) < 2048);
// ********** End Class UGoreComponent Property Definitions ****************************************
UObject* (*const Z_Construct_UClass_UGoreComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDismembermentComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DismembermentSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGoreComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGoreComponent_Statics::ClassParams = {
	&UGoreComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGoreComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGoreComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGoreComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGoreComponent_Statics::Class_MetaDataParams)
};
void UGoreComponent::StaticRegisterNativesUGoreComponent()
{
	UClass* Class = UGoreComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UGoreComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_UGoreComponent()
{
	if (!Z_Registration_Info_UClass_UGoreComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGoreComponent.OuterSingleton, Z_Construct_UClass_UGoreComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGoreComponent.OuterSingleton;
}
UGoreComponent::UGoreComponent() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UGoreComponent);
UGoreComponent::~UGoreComponent() {}
// ********** End Class UGoreComponent *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_Gore_GoreComponent_h__Script_DismembermentSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGoreComponent, UGoreComponent::StaticClass, TEXT("UGoreComponent"), &Z_Registration_Info_UClass_UGoreComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGoreComponent), 614740883U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_Gore_GoreComponent_h__Script_DismembermentSystem_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_Gore_GoreComponent_h__Script_DismembermentSystem_2581208140{
	TEXT("/Script/DismembermentSystem"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_Gore_GoreComponent_h__Script_DismembermentSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_Gore_GoreComponent_h__Script_DismembermentSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
