// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LimbMap.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeLimbMap() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
DISMEMBERMENTSYSTEM_API UClass* Z_Construct_UClass_ULimbMap();
DISMEMBERMENTSYSTEM_API UClass* Z_Construct_UClass_ULimbMap_NoRegister();
DISMEMBERMENTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FLimb();
DISMEMBERMENTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FLimbKey();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_DismembermentSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FLimb *************************************************************
struct Z_Construct_UScriptStruct_FLimb_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FLimb); }
	static inline consteval int16 GetStructAlignment() { return alignof(FLimb); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\x09""FLimb is an array of a specific bone and all of its child bones. */" },
#endif
		{ "ModuleRelativePath", "Public/LimbMap.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FLimb is an array of a specific bone and all of its child bones." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "Category", "LimbMap" },
		{ "ModuleRelativePath", "Public/LimbMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Limb_MetaData[] = {
		{ "Category", "LimbMap" },
		{ "ModuleRelativePath", "Public/LimbMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneIndex_MetaData[] = {
		{ "Category", "LimbMap" },
		{ "ModuleRelativePath", "Public/LimbMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildBones_MetaData[] = {
		{ "Category", "LimbMap" },
		{ "ModuleRelativePath", "Public/LimbMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceBoneTransform_MetaData[] = {
		{ "Category", "LimbMap" },
		{ "ModuleRelativePath", "Public/LimbMap.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FLimb constinit property declarations *****************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Limb_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Limb;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BoneIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChildBones_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildBones;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReferenceBoneTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FLimb constinit property declarations *******************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLimb>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FLimb_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLimb;
class UScriptStruct* FLimb::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLimb.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLimb.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLimb, (UObject*)Z_Construct_UPackage__Script_DismembermentSystem(), TEXT("Limb"));
	}
	return Z_Registration_Info_UScriptStruct_FLimb.OuterSingleton;
	}

// ********** Begin ScriptStruct FLimb Property Definitions ****************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLimb_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLimb, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLimb_Statics::NewProp_Limb_Inner = { "Limb", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLimb_Statics::NewProp_Limb = { "Limb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLimb, Limb), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Limb_MetaData), NewProp_Limb_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLimb_Statics::NewProp_BoneIndex = { "BoneIndex", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLimb, BoneIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneIndex_MetaData), NewProp_BoneIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLimb_Statics::NewProp_ChildBones_Inner = { "ChildBones", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLimb_Statics::NewProp_ChildBones = { "ChildBones", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLimb, ChildBones), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildBones_MetaData), NewProp_ChildBones_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLimb_Statics::NewProp_ReferenceBoneTransform = { "ReferenceBoneTransform", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLimb, ReferenceBoneTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferenceBoneTransform_MetaData), NewProp_ReferenceBoneTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLimb_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLimb_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLimb_Statics::NewProp_Limb_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLimb_Statics::NewProp_Limb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLimb_Statics::NewProp_BoneIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLimb_Statics::NewProp_ChildBones_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLimb_Statics::NewProp_ChildBones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLimb_Statics::NewProp_ReferenceBoneTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLimb_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FLimb Property Definitions ******************************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLimb_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DismembermentSystem,
	nullptr,
	&NewStructOps,
	"Limb",
	Z_Construct_UScriptStruct_FLimb_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLimb_Statics::PropPointers),
	sizeof(FLimb),
	alignof(FLimb),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLimb_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLimb_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLimb()
{
	if (!Z_Registration_Info_UScriptStruct_FLimb.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLimb.InnerSingleton, Z_Construct_UScriptStruct_FLimb_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FLimb.InnerSingleton);
}
// ********** End ScriptStruct FLimb ***************************************************************

// ********** Begin ScriptStruct FLimbKey **********************************************************
struct Z_Construct_UScriptStruct_FLimbKey_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FLimbKey); }
	static inline consteval int16 GetStructAlignment() { return alignof(FLimbKey); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LimbMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Limbs_MetaData[] = {
		{ "Category", "LimbMap" },
		{ "ModuleRelativePath", "Public/LimbMap.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FLimbKey constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Limbs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Limbs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FLimbKey constinit property declarations ****************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLimbKey>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FLimbKey_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLimbKey;
class UScriptStruct* FLimbKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLimbKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLimbKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLimbKey, (UObject*)Z_Construct_UPackage__Script_DismembermentSystem(), TEXT("LimbKey"));
	}
	return Z_Registration_Info_UScriptStruct_FLimbKey.OuterSingleton;
	}

// ********** Begin ScriptStruct FLimbKey Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLimbKey_Statics::NewProp_Limbs_Inner = { "Limbs", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLimb, METADATA_PARAMS(0, nullptr) }; // 1019839350
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLimbKey_Statics::NewProp_Limbs = { "Limbs", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLimbKey, Limbs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Limbs_MetaData), NewProp_Limbs_MetaData) }; // 1019839350
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLimbKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLimbKey_Statics::NewProp_Limbs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLimbKey_Statics::NewProp_Limbs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLimbKey_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FLimbKey Property Definitions ***************************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLimbKey_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DismembermentSystem,
	nullptr,
	&NewStructOps,
	"LimbKey",
	Z_Construct_UScriptStruct_FLimbKey_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLimbKey_Statics::PropPointers),
	sizeof(FLimbKey),
	alignof(FLimbKey),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLimbKey_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLimbKey_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLimbKey()
{
	if (!Z_Registration_Info_UScriptStruct_FLimbKey.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLimbKey.InnerSingleton, Z_Construct_UScriptStruct_FLimbKey_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FLimbKey.InnerSingleton);
}
// ********** End ScriptStruct FLimbKey ************************************************************

// ********** Begin Class ULimbMap Function GetAllBonesOfLimb **************************************
struct Z_Construct_UFunction_ULimbMap_GetAllBonesOfLimb_Statics
{
	struct LimbMap_eventGetAllBonesOfLimb_Parms
	{
		ULimbMap* InLimbMap;
		FName BoneName;
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LimbMap" },
		{ "ModuleRelativePath", "Public/LimbMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAllBonesOfLimb constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InLimbMap;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAllBonesOfLimb constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAllBonesOfLimb Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULimbMap_GetAllBonesOfLimb_Statics::NewProp_InLimbMap = { "InLimbMap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LimbMap_eventGetAllBonesOfLimb_Parms, InLimbMap), Z_Construct_UClass_ULimbMap_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULimbMap_GetAllBonesOfLimb_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LimbMap_eventGetAllBonesOfLimb_Parms, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULimbMap_GetAllBonesOfLimb_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULimbMap_GetAllBonesOfLimb_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LimbMap_eventGetAllBonesOfLimb_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULimbMap_GetAllBonesOfLimb_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULimbMap_GetAllBonesOfLimb_Statics::NewProp_InLimbMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULimbMap_GetAllBonesOfLimb_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULimbMap_GetAllBonesOfLimb_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULimbMap_GetAllBonesOfLimb_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULimbMap_GetAllBonesOfLimb_Statics::PropPointers) < 2048);
// ********** End Function GetAllBonesOfLimb Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULimbMap_GetAllBonesOfLimb_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULimbMap, nullptr, "GetAllBonesOfLimb", 	Z_Construct_UFunction_ULimbMap_GetAllBonesOfLimb_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULimbMap_GetAllBonesOfLimb_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULimbMap_GetAllBonesOfLimb_Statics::LimbMap_eventGetAllBonesOfLimb_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULimbMap_GetAllBonesOfLimb_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULimbMap_GetAllBonesOfLimb_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULimbMap_GetAllBonesOfLimb_Statics::LimbMap_eventGetAllBonesOfLimb_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULimbMap_GetAllBonesOfLimb()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULimbMap_GetAllBonesOfLimb_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULimbMap::execGetAllBonesOfLimb)
{
	P_GET_OBJECT(ULimbMap,Z_Param_InLimbMap);
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=P_THIS->GetAllBonesOfLimb(Z_Param_InLimbMap,Z_Param_BoneName);
	P_NATIVE_END;
}
// ********** End Class ULimbMap Function GetAllBonesOfLimb ****************************************

// ********** Begin Class ULimbMap Function GetBoneIndex *******************************************
struct Z_Construct_UFunction_ULimbMap_GetBoneIndex_Statics
{
	struct LimbMap_eventGetBoneIndex_Parms
	{
		FName InName;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LimbMap" },
		{ "ModuleRelativePath", "Public/LimbMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetBoneIndex constinit property declarations **************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetBoneIndex constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetBoneIndex Property Definitions *************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULimbMap_GetBoneIndex_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LimbMap_eventGetBoneIndex_Parms, InName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InName_MetaData), NewProp_InName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULimbMap_GetBoneIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LimbMap_eventGetBoneIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULimbMap_GetBoneIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULimbMap_GetBoneIndex_Statics::NewProp_InName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULimbMap_GetBoneIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULimbMap_GetBoneIndex_Statics::PropPointers) < 2048);
// ********** End Function GetBoneIndex Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULimbMap_GetBoneIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULimbMap, nullptr, "GetBoneIndex", 	Z_Construct_UFunction_ULimbMap_GetBoneIndex_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULimbMap_GetBoneIndex_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULimbMap_GetBoneIndex_Statics::LimbMap_eventGetBoneIndex_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULimbMap_GetBoneIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULimbMap_GetBoneIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULimbMap_GetBoneIndex_Statics::LimbMap_eventGetBoneIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULimbMap_GetBoneIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULimbMap_GetBoneIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULimbMap::execGetBoneIndex)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetBoneIndex(Z_Param_Out_InName);
	P_NATIVE_END;
}
// ********** End Class ULimbMap Function GetBoneIndex *********************************************

// ********** Begin Class ULimbMap Function GetBoneName ********************************************
struct Z_Construct_UFunction_ULimbMap_GetBoneName_Statics
{
	struct LimbMap_eventGetBoneName_Parms
	{
		int32 Index;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LimbMap" },
		{ "ModuleRelativePath", "Public/LimbMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetBoneName constinit property declarations ***************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetBoneName constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetBoneName Property Definitions **************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULimbMap_GetBoneName_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LimbMap_eventGetBoneName_Parms, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULimbMap_GetBoneName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LimbMap_eventGetBoneName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULimbMap_GetBoneName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULimbMap_GetBoneName_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULimbMap_GetBoneName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULimbMap_GetBoneName_Statics::PropPointers) < 2048);
// ********** End Function GetBoneName Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULimbMap_GetBoneName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULimbMap, nullptr, "GetBoneName", 	Z_Construct_UFunction_ULimbMap_GetBoneName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULimbMap_GetBoneName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULimbMap_GetBoneName_Statics::LimbMap_eventGetBoneName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULimbMap_GetBoneName_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULimbMap_GetBoneName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULimbMap_GetBoneName_Statics::LimbMap_eventGetBoneName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULimbMap_GetBoneName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULimbMap_GetBoneName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULimbMap::execGetBoneName)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetBoneName(Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class ULimbMap Function GetBoneName **********************************************

// ********** Begin Class ULimbMap Function GetDirectChildBone *************************************
struct Z_Construct_UFunction_ULimbMap_GetDirectChildBone_Statics
{
	struct LimbMap_eventGetDirectChildBone_Parms
	{
		FName BoneName;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LimbMap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Tries to get the Direct Child of a Bone. This will only return one of the Bones Children */" },
#endif
		{ "ModuleRelativePath", "Public/LimbMap.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tries to get the Direct Child of a Bone. This will only return one of the Bones Children" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDirectChildBone constinit property declarations ********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDirectChildBone constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDirectChildBone Property Definitions *******************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULimbMap_GetDirectChildBone_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LimbMap_eventGetDirectChildBone_Parms, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULimbMap_GetDirectChildBone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LimbMap_eventGetDirectChildBone_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULimbMap_GetDirectChildBone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULimbMap_GetDirectChildBone_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULimbMap_GetDirectChildBone_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULimbMap_GetDirectChildBone_Statics::PropPointers) < 2048);
// ********** End Function GetDirectChildBone Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULimbMap_GetDirectChildBone_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULimbMap, nullptr, "GetDirectChildBone", 	Z_Construct_UFunction_ULimbMap_GetDirectChildBone_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULimbMap_GetDirectChildBone_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULimbMap_GetDirectChildBone_Statics::LimbMap_eventGetDirectChildBone_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULimbMap_GetDirectChildBone_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULimbMap_GetDirectChildBone_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULimbMap_GetDirectChildBone_Statics::LimbMap_eventGetDirectChildBone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULimbMap_GetDirectChildBone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULimbMap_GetDirectChildBone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULimbMap::execGetDirectChildBone)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_BoneName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetDirectChildBone(Z_Param_Out_BoneName);
	P_NATIVE_END;
}
// ********** End Class ULimbMap Function GetDirectChildBone ***************************************

// ********** Begin Class ULimbMap Function GetLimb ************************************************
struct Z_Construct_UFunction_ULimbMap_GetLimb_Statics
{
	struct LimbMap_eventGetLimb_Parms
	{
		FName BoneName;
		FLimb ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LimbMap" },
		{ "ModuleRelativePath", "Public/LimbMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLimb constinit property declarations *******************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLimb constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLimb Property Definitions ******************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULimbMap_GetLimb_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LimbMap_eventGetLimb_Parms, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULimbMap_GetLimb_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LimbMap_eventGetLimb_Parms, ReturnValue), Z_Construct_UScriptStruct_FLimb, METADATA_PARAMS(0, nullptr) }; // 1019839350
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULimbMap_GetLimb_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULimbMap_GetLimb_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULimbMap_GetLimb_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULimbMap_GetLimb_Statics::PropPointers) < 2048);
// ********** End Function GetLimb Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULimbMap_GetLimb_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULimbMap, nullptr, "GetLimb", 	Z_Construct_UFunction_ULimbMap_GetLimb_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULimbMap_GetLimb_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULimbMap_GetLimb_Statics::LimbMap_eventGetLimb_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULimbMap_GetLimb_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULimbMap_GetLimb_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULimbMap_GetLimb_Statics::LimbMap_eventGetLimb_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULimbMap_GetLimb()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULimbMap_GetLimb_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULimbMap::execGetLimb)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLimb*)Z_Param__Result=P_THIS->GetLimb(Z_Param_BoneName);
	P_NATIVE_END;
}
// ********** End Class ULimbMap Function GetLimb **************************************************

// ********** Begin Class ULimbMap Function GetLimbMap *********************************************
struct Z_Construct_UFunction_ULimbMap_GetLimbMap_Statics
{
	struct LimbMap_eventGetLimbMap_Parms
	{
		ULimbMap* Map;
		ULimbMap* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LimbMap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Helpful getter for BPs so they dont have to make a Variable when not needed */" },
#endif
		{ "ModuleRelativePath", "Public/LimbMap.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Helpful getter for BPs so they dont have to make a Variable when not needed" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetLimbMap constinit property declarations ****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Map;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLimbMap constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLimbMap Property Definitions ***************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULimbMap_GetLimbMap_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LimbMap_eventGetLimbMap_Parms, Map), Z_Construct_UClass_ULimbMap_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULimbMap_GetLimbMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LimbMap_eventGetLimbMap_Parms, ReturnValue), Z_Construct_UClass_ULimbMap_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULimbMap_GetLimbMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULimbMap_GetLimbMap_Statics::NewProp_Map,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULimbMap_GetLimbMap_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULimbMap_GetLimbMap_Statics::PropPointers) < 2048);
// ********** End Function GetLimbMap Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULimbMap_GetLimbMap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULimbMap, nullptr, "GetLimbMap", 	Z_Construct_UFunction_ULimbMap_GetLimbMap_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULimbMap_GetLimbMap_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULimbMap_GetLimbMap_Statics::LimbMap_eventGetLimbMap_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULimbMap_GetLimbMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULimbMap_GetLimbMap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULimbMap_GetLimbMap_Statics::LimbMap_eventGetLimbMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULimbMap_GetLimbMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULimbMap_GetLimbMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULimbMap::execGetLimbMap)
{
	P_GET_OBJECT(ULimbMap,Z_Param_Map);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULimbMap**)Z_Param__Result=ULimbMap::GetLimbMap(Z_Param_Map);
	P_NATIVE_END;
}
// ********** End Class ULimbMap Function GetLimbMap ***********************************************

// ********** Begin Class ULimbMap Function GetMaskOfBone ******************************************
struct Z_Construct_UFunction_ULimbMap_GetMaskOfBone_Statics
{
	struct LimbMap_eventGetMaskOfBone_Parms
	{
		FName BoneName;
		float WeightThreshold;
		TArray<float> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LimbMap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Gets a mask of the vertices that are weighted above the threshold */" },
#endif
		{ "CPP_Default_WeightThreshold", "0.250000" },
		{ "ModuleRelativePath", "Public/LimbMap.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets a mask of the vertices that are weighted above the threshold" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetMaskOfBone constinit property declarations *************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeightThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetMaskOfBone constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetMaskOfBone Property Definitions ************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULimbMap_GetMaskOfBone_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LimbMap_eventGetMaskOfBone_Parms, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULimbMap_GetMaskOfBone_Statics::NewProp_WeightThreshold = { "WeightThreshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LimbMap_eventGetMaskOfBone_Parms, WeightThreshold), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULimbMap_GetMaskOfBone_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULimbMap_GetMaskOfBone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LimbMap_eventGetMaskOfBone_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULimbMap_GetMaskOfBone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULimbMap_GetMaskOfBone_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULimbMap_GetMaskOfBone_Statics::NewProp_WeightThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULimbMap_GetMaskOfBone_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULimbMap_GetMaskOfBone_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULimbMap_GetMaskOfBone_Statics::PropPointers) < 2048);
// ********** End Function GetMaskOfBone Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULimbMap_GetMaskOfBone_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULimbMap, nullptr, "GetMaskOfBone", 	Z_Construct_UFunction_ULimbMap_GetMaskOfBone_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULimbMap_GetMaskOfBone_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULimbMap_GetMaskOfBone_Statics::LimbMap_eventGetMaskOfBone_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULimbMap_GetMaskOfBone_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULimbMap_GetMaskOfBone_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULimbMap_GetMaskOfBone_Statics::LimbMap_eventGetMaskOfBone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULimbMap_GetMaskOfBone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULimbMap_GetMaskOfBone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULimbMap::execGetMaskOfBone)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_WeightThreshold);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<float>*)Z_Param__Result=P_THIS->GetMaskOfBone(Z_Param_BoneName,Z_Param_WeightThreshold);
	P_NATIVE_END;
}
// ********** End Class ULimbMap Function GetMaskOfBone ********************************************

// ********** Begin Class ULimbMap Function GetMaskOfImmediateLimb *********************************
struct Z_Construct_UFunction_ULimbMap_GetMaskOfImmediateLimb_Statics
{
	struct LimbMap_eventGetMaskOfImmediateLimb_Parms
	{
		FName BoneName;
		float WeightThreshold;
		bool IncludeBone;
		TArray<float> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LimbMap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Gets a mask of all the vertices that are not weighted to the specified limb. This includes the input bone */" },
#endif
		{ "CPP_Default_IncludeBone", "true" },
		{ "CPP_Default_WeightThreshold", "0.250000" },
		{ "ModuleRelativePath", "Public/LimbMap.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets a mask of all the vertices that are not weighted to the specified limb. This includes the input bone" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetMaskOfImmediateLimb constinit property declarations ****************
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeightThreshold;
	static void NewProp_IncludeBone_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IncludeBone;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetMaskOfImmediateLimb constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetMaskOfImmediateLimb Property Definitions ***************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULimbMap_GetMaskOfImmediateLimb_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LimbMap_eventGetMaskOfImmediateLimb_Parms, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULimbMap_GetMaskOfImmediateLimb_Statics::NewProp_WeightThreshold = { "WeightThreshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LimbMap_eventGetMaskOfImmediateLimb_Parms, WeightThreshold), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ULimbMap_GetMaskOfImmediateLimb_Statics::NewProp_IncludeBone_SetBit(void* Obj)
{
	((LimbMap_eventGetMaskOfImmediateLimb_Parms*)Obj)->IncludeBone = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULimbMap_GetMaskOfImmediateLimb_Statics::NewProp_IncludeBone = { "IncludeBone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LimbMap_eventGetMaskOfImmediateLimb_Parms), &Z_Construct_UFunction_ULimbMap_GetMaskOfImmediateLimb_Statics::NewProp_IncludeBone_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULimbMap_GetMaskOfImmediateLimb_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULimbMap_GetMaskOfImmediateLimb_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LimbMap_eventGetMaskOfImmediateLimb_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULimbMap_GetMaskOfImmediateLimb_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULimbMap_GetMaskOfImmediateLimb_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULimbMap_GetMaskOfImmediateLimb_Statics::NewProp_WeightThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULimbMap_GetMaskOfImmediateLimb_Statics::NewProp_IncludeBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULimbMap_GetMaskOfImmediateLimb_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULimbMap_GetMaskOfImmediateLimb_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULimbMap_GetMaskOfImmediateLimb_Statics::PropPointers) < 2048);
// ********** End Function GetMaskOfImmediateLimb Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULimbMap_GetMaskOfImmediateLimb_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULimbMap, nullptr, "GetMaskOfImmediateLimb", 	Z_Construct_UFunction_ULimbMap_GetMaskOfImmediateLimb_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULimbMap_GetMaskOfImmediateLimb_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULimbMap_GetMaskOfImmediateLimb_Statics::LimbMap_eventGetMaskOfImmediateLimb_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULimbMap_GetMaskOfImmediateLimb_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULimbMap_GetMaskOfImmediateLimb_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULimbMap_GetMaskOfImmediateLimb_Statics::LimbMap_eventGetMaskOfImmediateLimb_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULimbMap_GetMaskOfImmediateLimb()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULimbMap_GetMaskOfImmediateLimb_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULimbMap::execGetMaskOfImmediateLimb)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_WeightThreshold);
	P_GET_UBOOL(Z_Param_IncludeBone);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<float>*)Z_Param__Result=P_THIS->GetMaskOfImmediateLimb(Z_Param_BoneName,Z_Param_WeightThreshold,Z_Param_IncludeBone);
	P_NATIVE_END;
}
// ********** End Class ULimbMap Function GetMaskOfImmediateLimb ***********************************

// ********** Begin Class ULimbMap Function GetMaskOfLimb ******************************************
struct Z_Construct_UFunction_ULimbMap_GetMaskOfLimb_Statics
{
	struct LimbMap_eventGetMaskOfLimb_Parms
	{
		FName BoneName;
		float WeightThreshold;
		TArray<float> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LimbMap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Gets a mask of the vertices that are weighted above the threshold */" },
#endif
		{ "CPP_Default_WeightThreshold", "0.250000" },
		{ "ModuleRelativePath", "Public/LimbMap.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets a mask of the vertices that are weighted above the threshold" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetMaskOfLimb constinit property declarations *************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeightThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetMaskOfLimb constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetMaskOfLimb Property Definitions ************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULimbMap_GetMaskOfLimb_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LimbMap_eventGetMaskOfLimb_Parms, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULimbMap_GetMaskOfLimb_Statics::NewProp_WeightThreshold = { "WeightThreshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LimbMap_eventGetMaskOfLimb_Parms, WeightThreshold), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULimbMap_GetMaskOfLimb_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULimbMap_GetMaskOfLimb_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LimbMap_eventGetMaskOfLimb_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULimbMap_GetMaskOfLimb_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULimbMap_GetMaskOfLimb_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULimbMap_GetMaskOfLimb_Statics::NewProp_WeightThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULimbMap_GetMaskOfLimb_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULimbMap_GetMaskOfLimb_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULimbMap_GetMaskOfLimb_Statics::PropPointers) < 2048);
// ********** End Function GetMaskOfLimb Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULimbMap_GetMaskOfLimb_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULimbMap, nullptr, "GetMaskOfLimb", 	Z_Construct_UFunction_ULimbMap_GetMaskOfLimb_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULimbMap_GetMaskOfLimb_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULimbMap_GetMaskOfLimb_Statics::LimbMap_eventGetMaskOfLimb_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULimbMap_GetMaskOfLimb_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULimbMap_GetMaskOfLimb_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULimbMap_GetMaskOfLimb_Statics::LimbMap_eventGetMaskOfLimb_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULimbMap_GetMaskOfLimb()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULimbMap_GetMaskOfLimb_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULimbMap::execGetMaskOfLimb)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_WeightThreshold);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<float>*)Z_Param__Result=P_THIS->GetMaskOfLimb(Z_Param_BoneName,Z_Param_WeightThreshold);
	P_NATIVE_END;
}
// ********** End Class ULimbMap Function GetMaskOfLimb ********************************************

// ********** Begin Class ULimbMap Function GetVertexWeightColorForBone ****************************
struct Z_Construct_UFunction_ULimbMap_GetVertexWeightColorForBone_Statics
{
	struct LimbMap_eventGetVertexWeightColorForBone_Parms
	{
		FName InBone;
		TArray<float> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LimbMap" },
		{ "ModuleRelativePath", "Public/LimbMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBone_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetVertexWeightColorForBone constinit property declarations ***********
	static const UECodeGen_Private::FNamePropertyParams NewProp_InBone;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetVertexWeightColorForBone constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetVertexWeightColorForBone Property Definitions **********************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULimbMap_GetVertexWeightColorForBone_Statics::NewProp_InBone = { "InBone", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LimbMap_eventGetVertexWeightColorForBone_Parms, InBone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBone_MetaData), NewProp_InBone_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULimbMap_GetVertexWeightColorForBone_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULimbMap_GetVertexWeightColorForBone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LimbMap_eventGetVertexWeightColorForBone_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULimbMap_GetVertexWeightColorForBone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULimbMap_GetVertexWeightColorForBone_Statics::NewProp_InBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULimbMap_GetVertexWeightColorForBone_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULimbMap_GetVertexWeightColorForBone_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULimbMap_GetVertexWeightColorForBone_Statics::PropPointers) < 2048);
// ********** End Function GetVertexWeightColorForBone Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULimbMap_GetVertexWeightColorForBone_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULimbMap, nullptr, "GetVertexWeightColorForBone", 	Z_Construct_UFunction_ULimbMap_GetVertexWeightColorForBone_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULimbMap_GetVertexWeightColorForBone_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULimbMap_GetVertexWeightColorForBone_Statics::LimbMap_eventGetVertexWeightColorForBone_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULimbMap_GetVertexWeightColorForBone_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULimbMap_GetVertexWeightColorForBone_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULimbMap_GetVertexWeightColorForBone_Statics::LimbMap_eventGetVertexWeightColorForBone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULimbMap_GetVertexWeightColorForBone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULimbMap_GetVertexWeightColorForBone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULimbMap::execGetVertexWeightColorForBone)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InBone);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<float>*)Z_Param__Result=P_THIS->GetVertexWeightColorForBone(Z_Param_Out_InBone);
	P_NATIVE_END;
}
// ********** End Class ULimbMap Function GetVertexWeightColorForBone ******************************

// ********** Begin Class ULimbMap Function GetVertexWeightColorForLimb ****************************
struct Z_Construct_UFunction_ULimbMap_GetVertexWeightColorForLimb_Statics
{
	struct LimbMap_eventGetVertexWeightColorForLimb_Parms
	{
		FName InBone;
		float WeightThreshold;
		TArray<float> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LimbMap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\x09Returns the weight of a specified limb for every vertex. NOTE: Weight is from 0->1. */" },
#endif
		{ "CPP_Default_WeightThreshold", "0.500000" },
		{ "ModuleRelativePath", "Public/LimbMap.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the weight of a specified limb for every vertex. NOTE: Weight is from 0->1." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBone_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetVertexWeightColorForLimb constinit property declarations ***********
	static const UECodeGen_Private::FNamePropertyParams NewProp_InBone;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeightThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetVertexWeightColorForLimb constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetVertexWeightColorForLimb Property Definitions **********************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULimbMap_GetVertexWeightColorForLimb_Statics::NewProp_InBone = { "InBone", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LimbMap_eventGetVertexWeightColorForLimb_Parms, InBone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBone_MetaData), NewProp_InBone_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULimbMap_GetVertexWeightColorForLimb_Statics::NewProp_WeightThreshold = { "WeightThreshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LimbMap_eventGetVertexWeightColorForLimb_Parms, WeightThreshold), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULimbMap_GetVertexWeightColorForLimb_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULimbMap_GetVertexWeightColorForLimb_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LimbMap_eventGetVertexWeightColorForLimb_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULimbMap_GetVertexWeightColorForLimb_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULimbMap_GetVertexWeightColorForLimb_Statics::NewProp_InBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULimbMap_GetVertexWeightColorForLimb_Statics::NewProp_WeightThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULimbMap_GetVertexWeightColorForLimb_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULimbMap_GetVertexWeightColorForLimb_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULimbMap_GetVertexWeightColorForLimb_Statics::PropPointers) < 2048);
// ********** End Function GetVertexWeightColorForLimb Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULimbMap_GetVertexWeightColorForLimb_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULimbMap, nullptr, "GetVertexWeightColorForLimb", 	Z_Construct_UFunction_ULimbMap_GetVertexWeightColorForLimb_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULimbMap_GetVertexWeightColorForLimb_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULimbMap_GetVertexWeightColorForLimb_Statics::LimbMap_eventGetVertexWeightColorForLimb_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULimbMap_GetVertexWeightColorForLimb_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULimbMap_GetVertexWeightColorForLimb_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULimbMap_GetVertexWeightColorForLimb_Statics::LimbMap_eventGetVertexWeightColorForLimb_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULimbMap_GetVertexWeightColorForLimb()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULimbMap_GetVertexWeightColorForLimb_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULimbMap::execGetVertexWeightColorForLimb)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InBone);
	P_GET_PROPERTY(FFloatProperty,Z_Param_WeightThreshold);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<float>*)Z_Param__Result=P_THIS->GetVertexWeightColorForLimb(Z_Param_Out_InBone,Z_Param_WeightThreshold);
	P_NATIVE_END;
}
// ********** End Class ULimbMap Function GetVertexWeightColorForLimb ******************************

// ********** Begin Class ULimbMap Function GetWeightsOfBone ***************************************
struct Z_Construct_UFunction_ULimbMap_GetWeightsOfBone_Statics
{
	struct LimbMap_eventGetWeightsOfBone_Parms
	{
		FName BoneName;
		TArray<float> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LimbMap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Gets the vertices that are weighted to a specified bone */" },
#endif
		{ "ModuleRelativePath", "Public/LimbMap.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the vertices that are weighted to a specified bone" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetWeightsOfBone constinit property declarations **********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetWeightsOfBone constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetWeightsOfBone Property Definitions *********************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULimbMap_GetWeightsOfBone_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LimbMap_eventGetWeightsOfBone_Parms, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULimbMap_GetWeightsOfBone_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULimbMap_GetWeightsOfBone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LimbMap_eventGetWeightsOfBone_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULimbMap_GetWeightsOfBone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULimbMap_GetWeightsOfBone_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULimbMap_GetWeightsOfBone_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULimbMap_GetWeightsOfBone_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULimbMap_GetWeightsOfBone_Statics::PropPointers) < 2048);
// ********** End Function GetWeightsOfBone Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULimbMap_GetWeightsOfBone_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULimbMap, nullptr, "GetWeightsOfBone", 	Z_Construct_UFunction_ULimbMap_GetWeightsOfBone_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULimbMap_GetWeightsOfBone_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULimbMap_GetWeightsOfBone_Statics::LimbMap_eventGetWeightsOfBone_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULimbMap_GetWeightsOfBone_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULimbMap_GetWeightsOfBone_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULimbMap_GetWeightsOfBone_Statics::LimbMap_eventGetWeightsOfBone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULimbMap_GetWeightsOfBone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULimbMap_GetWeightsOfBone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULimbMap::execGetWeightsOfBone)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<float>*)Z_Param__Result=P_THIS->GetWeightsOfBone(Z_Param_BoneName);
	P_NATIVE_END;
}
// ********** End Class ULimbMap Function GetWeightsOfBone *****************************************

// ********** Begin Class ULimbMap Function GetWeightsOfLimb ***************************************
struct Z_Construct_UFunction_ULimbMap_GetWeightsOfLimb_Statics
{
	struct LimbMap_eventGetWeightsOfLimb_Parms
	{
		FName BoneName;
		TArray<float> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LimbMap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Gets the vertices that are weighted to a specified limb */" },
#endif
		{ "ModuleRelativePath", "Public/LimbMap.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the vertices that are weighted to a specified limb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetWeightsOfLimb constinit property declarations **********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetWeightsOfLimb constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetWeightsOfLimb Property Definitions *********************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULimbMap_GetWeightsOfLimb_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LimbMap_eventGetWeightsOfLimb_Parms, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULimbMap_GetWeightsOfLimb_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULimbMap_GetWeightsOfLimb_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LimbMap_eventGetWeightsOfLimb_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULimbMap_GetWeightsOfLimb_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULimbMap_GetWeightsOfLimb_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULimbMap_GetWeightsOfLimb_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULimbMap_GetWeightsOfLimb_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULimbMap_GetWeightsOfLimb_Statics::PropPointers) < 2048);
// ********** End Function GetWeightsOfLimb Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULimbMap_GetWeightsOfLimb_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULimbMap, nullptr, "GetWeightsOfLimb", 	Z_Construct_UFunction_ULimbMap_GetWeightsOfLimb_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULimbMap_GetWeightsOfLimb_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULimbMap_GetWeightsOfLimb_Statics::LimbMap_eventGetWeightsOfLimb_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULimbMap_GetWeightsOfLimb_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULimbMap_GetWeightsOfLimb_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULimbMap_GetWeightsOfLimb_Statics::LimbMap_eventGetWeightsOfLimb_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULimbMap_GetWeightsOfLimb()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULimbMap_GetWeightsOfLimb_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULimbMap::execGetWeightsOfLimb)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<float>*)Z_Param__Result=P_THIS->GetWeightsOfLimb(Z_Param_BoneName);
	P_NATIVE_END;
}
// ********** End Class ULimbMap Function GetWeightsOfLimb *****************************************

// ********** Begin Class ULimbMap Function Initialize *********************************************
struct Z_Construct_UFunction_ULimbMap_Initialize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "LimbMap" },
		{ "ModuleRelativePath", "Public/LimbMap.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Initialize constinit property declarations ****************************
// ********** End Function Initialize constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULimbMap_Initialize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULimbMap, nullptr, "Initialize", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULimbMap_Initialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULimbMap_Initialize_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ULimbMap_Initialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULimbMap_Initialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULimbMap::execInitialize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Initialize();
	P_NATIVE_END;
}
// ********** End Class ULimbMap Function Initialize ***********************************************

// ********** Begin Class ULimbMap Function SetLimbWeights *****************************************
struct Z_Construct_UFunction_ULimbMap_SetLimbWeights_Statics
{
	struct LimbMap_eventSetLimbWeights_Parms
	{
		USkeletalMeshComponent* SkeletalMeshComponent;
		FName BoneName;
		float WeightThreshold;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LimbMap" },
		{ "CPP_Default_WeightThreshold", "0.250000" },
		{ "ModuleRelativePath", "Public/LimbMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetLimbWeights constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeightThreshold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetLimbWeights constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetLimbWeights Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULimbMap_SetLimbWeights_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LimbMap_eventSetLimbWeights_Parms, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMeshComponent_MetaData), NewProp_SkeletalMeshComponent_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULimbMap_SetLimbWeights_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LimbMap_eventSetLimbWeights_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULimbMap_SetLimbWeights_Statics::NewProp_WeightThreshold = { "WeightThreshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LimbMap_eventSetLimbWeights_Parms, WeightThreshold), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULimbMap_SetLimbWeights_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULimbMap_SetLimbWeights_Statics::NewProp_SkeletalMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULimbMap_SetLimbWeights_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULimbMap_SetLimbWeights_Statics::NewProp_WeightThreshold,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULimbMap_SetLimbWeights_Statics::PropPointers) < 2048);
// ********** End Function SetLimbWeights Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULimbMap_SetLimbWeights_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULimbMap, nullptr, "SetLimbWeights", 	Z_Construct_UFunction_ULimbMap_SetLimbWeights_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ULimbMap_SetLimbWeights_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ULimbMap_SetLimbWeights_Statics::LimbMap_eventSetLimbWeights_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULimbMap_SetLimbWeights_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULimbMap_SetLimbWeights_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ULimbMap_SetLimbWeights_Statics::LimbMap_eventSetLimbWeights_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULimbMap_SetLimbWeights()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULimbMap_SetLimbWeights_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULimbMap::execSetLimbWeights)
{
	P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkeletalMeshComponent);
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_WeightThreshold);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLimbWeights(Z_Param_SkeletalMeshComponent,Z_Param_BoneName,Z_Param_WeightThreshold);
	P_NATIVE_END;
}
// ********** End Class ULimbMap Function SetLimbWeights *******************************************

// ********** Begin Class ULimbMap *****************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ULimbMap;
UClass* ULimbMap::GetPrivateStaticClass()
{
	using TClass = ULimbMap;
	if (!Z_Registration_Info_UClass_ULimbMap.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("LimbMap"),
			Z_Registration_Info_UClass_ULimbMap.InnerSingleton,
			StaticRegisterNativesULimbMap,
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
	return Z_Registration_Info_UClass_ULimbMap.InnerSingleton;
}
UClass* Z_Construct_UClass_ULimbMap_NoRegister()
{
	return ULimbMap::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULimbMap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n *\x09\x09LimbMaps are in the process of being deprecated by the system. This class was used\n *\x09\x09""during early development to handle dismembering limbs based on weight paints of\n *\x09\x09""each vertex. This system was flawed in many ways and eventually replaced by the\n *\x09\x09""current method of using Control Rig for dismemberment.\n */" },
#endif
		{ "IncludePath", "LimbMap.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LimbMap.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "*             LimbMaps are in the process of being deprecated by the system. This class was used\n*             during early development to handle dismembering limbs based on weight paints of\n*             each vertex. This system was flawed in many ways and eventually replaced by the\n*             current method of using Control Rig for dismemberment." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/LimbMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Exclude_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/LimbMap.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bone containing these Key Words will be excluded from the Limbs. Usually useful for 'ik' or 'twist' bones." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexNum_MetaData[] = {
		{ "Category", "LimbMap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n*\x09""Cached Data\n*/" },
#endif
		{ "ModuleRelativePath", "Public/LimbMap.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "*      Cached Data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexBoneMap_MetaData[] = {
		{ "Category", "LimbMap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Because Unreal separates the bone maps to the material sections. */" },
#endif
		{ "ModuleRelativePath", "Public/LimbMap.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Because Unreal separates the bone maps to the material sections." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LimbMap_MetaData[] = {
		{ "Category", "LimbMap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n *\x09Limb Map\n */" },
#endif
		{ "ModuleRelativePath", "Public/LimbMap.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "*     Limb Map" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class ULimbMap constinit property declarations *********************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Exclude_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Exclude;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VertexNum;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VertexBoneMap_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VertexBoneMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_VertexBoneMap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LimbMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ULimbMap constinit property declarations ***********************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetAllBonesOfLimb"), .Pointer = &ULimbMap::execGetAllBonesOfLimb },
		{ .NameUTF8 = UTF8TEXT("GetBoneIndex"), .Pointer = &ULimbMap::execGetBoneIndex },
		{ .NameUTF8 = UTF8TEXT("GetBoneName"), .Pointer = &ULimbMap::execGetBoneName },
		{ .NameUTF8 = UTF8TEXT("GetDirectChildBone"), .Pointer = &ULimbMap::execGetDirectChildBone },
		{ .NameUTF8 = UTF8TEXT("GetLimb"), .Pointer = &ULimbMap::execGetLimb },
		{ .NameUTF8 = UTF8TEXT("GetLimbMap"), .Pointer = &ULimbMap::execGetLimbMap },
		{ .NameUTF8 = UTF8TEXT("GetMaskOfBone"), .Pointer = &ULimbMap::execGetMaskOfBone },
		{ .NameUTF8 = UTF8TEXT("GetMaskOfImmediateLimb"), .Pointer = &ULimbMap::execGetMaskOfImmediateLimb },
		{ .NameUTF8 = UTF8TEXT("GetMaskOfLimb"), .Pointer = &ULimbMap::execGetMaskOfLimb },
		{ .NameUTF8 = UTF8TEXT("GetVertexWeightColorForBone"), .Pointer = &ULimbMap::execGetVertexWeightColorForBone },
		{ .NameUTF8 = UTF8TEXT("GetVertexWeightColorForLimb"), .Pointer = &ULimbMap::execGetVertexWeightColorForLimb },
		{ .NameUTF8 = UTF8TEXT("GetWeightsOfBone"), .Pointer = &ULimbMap::execGetWeightsOfBone },
		{ .NameUTF8 = UTF8TEXT("GetWeightsOfLimb"), .Pointer = &ULimbMap::execGetWeightsOfLimb },
		{ .NameUTF8 = UTF8TEXT("Initialize"), .Pointer = &ULimbMap::execInitialize },
		{ .NameUTF8 = UTF8TEXT("SetLimbWeights"), .Pointer = &ULimbMap::execSetLimbWeights },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULimbMap_GetAllBonesOfLimb, "GetAllBonesOfLimb" }, // 1866937208
		{ &Z_Construct_UFunction_ULimbMap_GetBoneIndex, "GetBoneIndex" }, // 3771464055
		{ &Z_Construct_UFunction_ULimbMap_GetBoneName, "GetBoneName" }, // 1927083666
		{ &Z_Construct_UFunction_ULimbMap_GetDirectChildBone, "GetDirectChildBone" }, // 1186047933
		{ &Z_Construct_UFunction_ULimbMap_GetLimb, "GetLimb" }, // 2242379901
		{ &Z_Construct_UFunction_ULimbMap_GetLimbMap, "GetLimbMap" }, // 1564967129
		{ &Z_Construct_UFunction_ULimbMap_GetMaskOfBone, "GetMaskOfBone" }, // 1909905024
		{ &Z_Construct_UFunction_ULimbMap_GetMaskOfImmediateLimb, "GetMaskOfImmediateLimb" }, // 3990099713
		{ &Z_Construct_UFunction_ULimbMap_GetMaskOfLimb, "GetMaskOfLimb" }, // 3154800852
		{ &Z_Construct_UFunction_ULimbMap_GetVertexWeightColorForBone, "GetVertexWeightColorForBone" }, // 1325187860
		{ &Z_Construct_UFunction_ULimbMap_GetVertexWeightColorForLimb, "GetVertexWeightColorForLimb" }, // 1635890069
		{ &Z_Construct_UFunction_ULimbMap_GetWeightsOfBone, "GetWeightsOfBone" }, // 2380396719
		{ &Z_Construct_UFunction_ULimbMap_GetWeightsOfLimb, "GetWeightsOfLimb" }, // 3874901249
		{ &Z_Construct_UFunction_ULimbMap_Initialize, "Initialize" }, // 1701272657
		{ &Z_Construct_UFunction_ULimbMap_SetLimbWeights, "SetLimbWeights" }, // 2586261546
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULimbMap>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ULimbMap_Statics

// ********** Begin Class ULimbMap Property Definitions ********************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULimbMap_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULimbMap, Mesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULimbMap_Statics::NewProp_Exclude_Inner = { "Exclude", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULimbMap_Statics::NewProp_Exclude = { "Exclude", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULimbMap, Exclude), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Exclude_MetaData), NewProp_Exclude_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULimbMap_Statics::NewProp_VertexNum = { "VertexNum", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULimbMap, VertexNum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexNum_MetaData), NewProp_VertexNum_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULimbMap_Statics::NewProp_VertexBoneMap_ValueProp = { "VertexBoneMap", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULimbMap_Statics::NewProp_VertexBoneMap_Key_KeyProp = { "VertexBoneMap_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULimbMap_Statics::NewProp_VertexBoneMap = { "VertexBoneMap", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULimbMap, VertexBoneMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexBoneMap_MetaData), NewProp_VertexBoneMap_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULimbMap_Statics::NewProp_LimbMap = { "LimbMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULimbMap, LimbMap), Z_Construct_UScriptStruct_FLimbKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LimbMap_MetaData), NewProp_LimbMap_MetaData) }; // 1658538826
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULimbMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULimbMap_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULimbMap_Statics::NewProp_Exclude_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULimbMap_Statics::NewProp_Exclude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULimbMap_Statics::NewProp_VertexNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULimbMap_Statics::NewProp_VertexBoneMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULimbMap_Statics::NewProp_VertexBoneMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULimbMap_Statics::NewProp_VertexBoneMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULimbMap_Statics::NewProp_LimbMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULimbMap_Statics::PropPointers) < 2048);
// ********** End Class ULimbMap Property Definitions **********************************************
UObject* (*const Z_Construct_UClass_ULimbMap_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DismembermentSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULimbMap_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULimbMap_Statics::ClassParams = {
	&ULimbMap::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULimbMap_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULimbMap_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULimbMap_Statics::Class_MetaDataParams), Z_Construct_UClass_ULimbMap_Statics::Class_MetaDataParams)
};
void ULimbMap::StaticRegisterNativesULimbMap()
{
	UClass* Class = ULimbMap::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_ULimbMap_Statics::Funcs));
}
UClass* Z_Construct_UClass_ULimbMap()
{
	if (!Z_Registration_Info_UClass_ULimbMap.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULimbMap.OuterSingleton, Z_Construct_UClass_ULimbMap_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULimbMap.OuterSingleton;
}
ULimbMap::ULimbMap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ULimbMap);
ULimbMap::~ULimbMap() {}
// ********** End Class ULimbMap *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_LimbMap_h__Script_DismembermentSystem_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLimb::StaticStruct, Z_Construct_UScriptStruct_FLimb_Statics::NewStructOps, TEXT("Limb"),&Z_Registration_Info_UScriptStruct_FLimb, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLimb), 1019839350U) },
		{ FLimbKey::StaticStruct, Z_Construct_UScriptStruct_FLimbKey_Statics::NewStructOps, TEXT("LimbKey"),&Z_Registration_Info_UScriptStruct_FLimbKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLimbKey), 1658538826U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULimbMap, ULimbMap::StaticClass, TEXT("ULimbMap"), &Z_Registration_Info_UClass_ULimbMap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULimbMap), 2851433796U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_LimbMap_h__Script_DismembermentSystem_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_LimbMap_h__Script_DismembermentSystem_1108163191{
	TEXT("/Script/DismembermentSystem"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_LimbMap_h__Script_DismembermentSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_LimbMap_h__Script_DismembermentSystem_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_LimbMap_h__Script_DismembermentSystem_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_DismembermentSystem_Source_DismembermentSystem_Public_LimbMap_h__Script_DismembermentSystem_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
