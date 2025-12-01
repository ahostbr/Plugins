// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTS_GAS_SkillTreeLibrary.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_GAS_SkillTreeLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_USOTS_GAS_SkillTreeLibrary();
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_USOTS_GAS_SkillTreeLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_SOTS_GAS_Plugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USOTS_GAS_SkillTreeLibrary Function GetAllSkillTags **********************
struct Z_Construct_UFunction_USOTS_GAS_SkillTreeLibrary_GetAllSkillTags_Statics
{
	struct SOTS_GAS_SkillTreeLibrary_eventGetAllSkillTags_Parms
	{
		const UObject* WorldContextObject;
		FGameplayTagContainer ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|GAS|SkillTree" },
		{ "ModuleRelativePath", "Public/SOTS_GAS_SkillTreeLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAllSkillTags constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAllSkillTags constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAllSkillTags Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_GAS_SkillTreeLibrary_GetAllSkillTags_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_SkillTreeLibrary_eventGetAllSkillTags_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_GAS_SkillTreeLibrary_GetAllSkillTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_SkillTreeLibrary_eventGetAllSkillTags_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3438578166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GAS_SkillTreeLibrary_GetAllSkillTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_SkillTreeLibrary_GetAllSkillTags_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_SkillTreeLibrary_GetAllSkillTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_SkillTreeLibrary_GetAllSkillTags_Statics::PropPointers) < 2048);
// ********** End Function GetAllSkillTags Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GAS_SkillTreeLibrary_GetAllSkillTags_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GAS_SkillTreeLibrary, nullptr, "GetAllSkillTags", 	Z_Construct_UFunction_USOTS_GAS_SkillTreeLibrary_GetAllSkillTags_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_SkillTreeLibrary_GetAllSkillTags_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GAS_SkillTreeLibrary_GetAllSkillTags_Statics::SOTS_GAS_SkillTreeLibrary_eventGetAllSkillTags_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_SkillTreeLibrary_GetAllSkillTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GAS_SkillTreeLibrary_GetAllSkillTags_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GAS_SkillTreeLibrary_GetAllSkillTags_Statics::SOTS_GAS_SkillTreeLibrary_eventGetAllSkillTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GAS_SkillTreeLibrary_GetAllSkillTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GAS_SkillTreeLibrary_GetAllSkillTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GAS_SkillTreeLibrary::execGetAllSkillTags)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTagContainer*)Z_Param__Result=USOTS_GAS_SkillTreeLibrary::GetAllSkillTags(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class USOTS_GAS_SkillTreeLibrary Function GetAllSkillTags ************************

// ********** Begin Class USOTS_GAS_SkillTreeLibrary Function GetAllSkillTagsForTree ***************
struct Z_Construct_UFunction_USOTS_GAS_SkillTreeLibrary_GetAllSkillTagsForTree_Statics
{
	struct SOTS_GAS_SkillTreeLibrary_eventGetAllSkillTagsForTree_Parms
	{
		const UObject* WorldContextObject;
		FName TreeId;
		FGameplayTagContainer ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|GAS|SkillTree" },
		{ "ModuleRelativePath", "Public/SOTS_GAS_SkillTreeLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAllSkillTagsForTree constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TreeId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAllSkillTagsForTree constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAllSkillTagsForTree Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_GAS_SkillTreeLibrary_GetAllSkillTagsForTree_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_SkillTreeLibrary_eventGetAllSkillTagsForTree_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USOTS_GAS_SkillTreeLibrary_GetAllSkillTagsForTree_Statics::NewProp_TreeId = { "TreeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_SkillTreeLibrary_eventGetAllSkillTagsForTree_Parms, TreeId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_GAS_SkillTreeLibrary_GetAllSkillTagsForTree_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_SkillTreeLibrary_eventGetAllSkillTagsForTree_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3438578166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GAS_SkillTreeLibrary_GetAllSkillTagsForTree_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_SkillTreeLibrary_GetAllSkillTagsForTree_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_SkillTreeLibrary_GetAllSkillTagsForTree_Statics::NewProp_TreeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_SkillTreeLibrary_GetAllSkillTagsForTree_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_SkillTreeLibrary_GetAllSkillTagsForTree_Statics::PropPointers) < 2048);
// ********** End Function GetAllSkillTagsForTree Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GAS_SkillTreeLibrary_GetAllSkillTagsForTree_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GAS_SkillTreeLibrary, nullptr, "GetAllSkillTagsForTree", 	Z_Construct_UFunction_USOTS_GAS_SkillTreeLibrary_GetAllSkillTagsForTree_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_SkillTreeLibrary_GetAllSkillTagsForTree_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GAS_SkillTreeLibrary_GetAllSkillTagsForTree_Statics::SOTS_GAS_SkillTreeLibrary_eventGetAllSkillTagsForTree_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_SkillTreeLibrary_GetAllSkillTagsForTree_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GAS_SkillTreeLibrary_GetAllSkillTagsForTree_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GAS_SkillTreeLibrary_GetAllSkillTagsForTree_Statics::SOTS_GAS_SkillTreeLibrary_eventGetAllSkillTagsForTree_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GAS_SkillTreeLibrary_GetAllSkillTagsForTree()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GAS_SkillTreeLibrary_GetAllSkillTagsForTree_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GAS_SkillTreeLibrary::execGetAllSkillTagsForTree)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_TreeId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTagContainer*)Z_Param__Result=USOTS_GAS_SkillTreeLibrary::GetAllSkillTagsForTree(Z_Param_WorldContextObject,Z_Param_TreeId);
	P_NATIVE_END;
}
// ********** End Class USOTS_GAS_SkillTreeLibrary Function GetAllSkillTagsForTree *****************

// ********** Begin Class USOTS_GAS_SkillTreeLibrary Function HasSkillTagOnTree ********************
struct Z_Construct_UFunction_USOTS_GAS_SkillTreeLibrary_HasSkillTagOnTree_Statics
{
	struct SOTS_GAS_SkillTreeLibrary_eventHasSkillTagOnTree_Parms
	{
		const UObject* WorldContextObject;
		FName TreeId;
		FGameplayTag SkillTag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|GAS|SkillTree" },
		{ "ModuleRelativePath", "Public/SOTS_GAS_SkillTreeLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HasSkillTagOnTree constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TreeId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SkillTag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasSkillTagOnTree constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasSkillTagOnTree Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_GAS_SkillTreeLibrary_HasSkillTagOnTree_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_SkillTreeLibrary_eventHasSkillTagOnTree_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USOTS_GAS_SkillTreeLibrary_HasSkillTagOnTree_Statics::NewProp_TreeId = { "TreeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_SkillTreeLibrary_eventHasSkillTagOnTree_Parms, TreeId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_GAS_SkillTreeLibrary_HasSkillTagOnTree_Statics::NewProp_SkillTag = { "SkillTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_GAS_SkillTreeLibrary_eventHasSkillTagOnTree_Parms, SkillTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
void Z_Construct_UFunction_USOTS_GAS_SkillTreeLibrary_HasSkillTagOnTree_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_GAS_SkillTreeLibrary_eventHasSkillTagOnTree_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_GAS_SkillTreeLibrary_HasSkillTagOnTree_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_GAS_SkillTreeLibrary_eventHasSkillTagOnTree_Parms), &Z_Construct_UFunction_USOTS_GAS_SkillTreeLibrary_HasSkillTagOnTree_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_GAS_SkillTreeLibrary_HasSkillTagOnTree_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_SkillTreeLibrary_HasSkillTagOnTree_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_SkillTreeLibrary_HasSkillTagOnTree_Statics::NewProp_TreeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_SkillTreeLibrary_HasSkillTagOnTree_Statics::NewProp_SkillTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_GAS_SkillTreeLibrary_HasSkillTagOnTree_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_SkillTreeLibrary_HasSkillTagOnTree_Statics::PropPointers) < 2048);
// ********** End Function HasSkillTagOnTree Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_GAS_SkillTreeLibrary_HasSkillTagOnTree_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_GAS_SkillTreeLibrary, nullptr, "HasSkillTagOnTree", 	Z_Construct_UFunction_USOTS_GAS_SkillTreeLibrary_HasSkillTagOnTree_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_SkillTreeLibrary_HasSkillTagOnTree_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_GAS_SkillTreeLibrary_HasSkillTagOnTree_Statics::SOTS_GAS_SkillTreeLibrary_eventHasSkillTagOnTree_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_GAS_SkillTreeLibrary_HasSkillTagOnTree_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_GAS_SkillTreeLibrary_HasSkillTagOnTree_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_GAS_SkillTreeLibrary_HasSkillTagOnTree_Statics::SOTS_GAS_SkillTreeLibrary_eventHasSkillTagOnTree_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_GAS_SkillTreeLibrary_HasSkillTagOnTree()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_GAS_SkillTreeLibrary_HasSkillTagOnTree_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_GAS_SkillTreeLibrary::execHasSkillTagOnTree)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_TreeId);
	P_GET_STRUCT(FGameplayTag,Z_Param_SkillTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USOTS_GAS_SkillTreeLibrary::HasSkillTagOnTree(Z_Param_WorldContextObject,Z_Param_TreeId,Z_Param_SkillTag);
	P_NATIVE_END;
}
// ********** End Class USOTS_GAS_SkillTreeLibrary Function HasSkillTagOnTree **********************

// ********** Begin Class USOTS_GAS_SkillTreeLibrary ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_GAS_SkillTreeLibrary;
UClass* USOTS_GAS_SkillTreeLibrary::GetPrivateStaticClass()
{
	using TClass = USOTS_GAS_SkillTreeLibrary;
	if (!Z_Registration_Info_UClass_USOTS_GAS_SkillTreeLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_GAS_SkillTreeLibrary"),
			Z_Registration_Info_UClass_USOTS_GAS_SkillTreeLibrary.InnerSingleton,
			StaticRegisterNativesUSOTS_GAS_SkillTreeLibrary,
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
	return Z_Registration_Info_UClass_USOTS_GAS_SkillTreeLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_GAS_SkillTreeLibrary_NoRegister()
{
	return USOTS_GAS_SkillTreeLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_GAS_SkillTreeLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SOTS_GAS_SkillTreeLibrary.h" },
		{ "ModuleRelativePath", "Public/SOTS_GAS_SkillTreeLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_GAS_SkillTreeLibrary constinit property declarations ***************
// ********** End Class USOTS_GAS_SkillTreeLibrary constinit property declarations *****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetAllSkillTags"), .Pointer = &USOTS_GAS_SkillTreeLibrary::execGetAllSkillTags },
		{ .NameUTF8 = UTF8TEXT("GetAllSkillTagsForTree"), .Pointer = &USOTS_GAS_SkillTreeLibrary::execGetAllSkillTagsForTree },
		{ .NameUTF8 = UTF8TEXT("HasSkillTagOnTree"), .Pointer = &USOTS_GAS_SkillTreeLibrary::execHasSkillTagOnTree },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USOTS_GAS_SkillTreeLibrary_GetAllSkillTags, "GetAllSkillTags" }, // 3011225843
		{ &Z_Construct_UFunction_USOTS_GAS_SkillTreeLibrary_GetAllSkillTagsForTree, "GetAllSkillTagsForTree" }, // 1043482722
		{ &Z_Construct_UFunction_USOTS_GAS_SkillTreeLibrary_HasSkillTagOnTree, "HasSkillTagOnTree" }, // 2854780369
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_GAS_SkillTreeLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_GAS_SkillTreeLibrary_Statics
UObject* (*const Z_Construct_UClass_USOTS_GAS_SkillTreeLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_GAS_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_GAS_SkillTreeLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_GAS_SkillTreeLibrary_Statics::ClassParams = {
	&USOTS_GAS_SkillTreeLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_GAS_SkillTreeLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_GAS_SkillTreeLibrary_Statics::Class_MetaDataParams)
};
void USOTS_GAS_SkillTreeLibrary::StaticRegisterNativesUSOTS_GAS_SkillTreeLibrary()
{
	UClass* Class = USOTS_GAS_SkillTreeLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USOTS_GAS_SkillTreeLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_USOTS_GAS_SkillTreeLibrary()
{
	if (!Z_Registration_Info_UClass_USOTS_GAS_SkillTreeLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_GAS_SkillTreeLibrary.OuterSingleton, Z_Construct_UClass_USOTS_GAS_SkillTreeLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_GAS_SkillTreeLibrary.OuterSingleton;
}
USOTS_GAS_SkillTreeLibrary::USOTS_GAS_SkillTreeLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_GAS_SkillTreeLibrary);
USOTS_GAS_SkillTreeLibrary::~USOTS_GAS_SkillTreeLibrary() {}
// ********** End Class USOTS_GAS_SkillTreeLibrary *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_SkillTreeLibrary_h__Script_SOTS_GAS_Plugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_GAS_SkillTreeLibrary, USOTS_GAS_SkillTreeLibrary::StaticClass, TEXT("USOTS_GAS_SkillTreeLibrary"), &Z_Registration_Info_UClass_USOTS_GAS_SkillTreeLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_GAS_SkillTreeLibrary), 308329110U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_SkillTreeLibrary_h__Script_SOTS_GAS_Plugin_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_SkillTreeLibrary_h__Script_SOTS_GAS_Plugin_4243025992{
	TEXT("/Script/SOTS_GAS_Plugin"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_SkillTreeLibrary_h__Script_SOTS_GAS_Plugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_SOTS_GAS_SkillTreeLibrary_h__Script_SOTS_GAS_Plugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
