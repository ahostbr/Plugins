// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTS_SkillTreeLibrary.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_SkillTreeLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
SOTS_SKILLTREE_API UClass* Z_Construct_UClass_USOTS_SkillTreeLibrary();
SOTS_SKILLTREE_API UClass* Z_Construct_UClass_USOTS_SkillTreeLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_SOTS_SkillTree();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USOTS_SkillTreeLibrary Function GetAllSkillTags **************************
struct Z_Construct_UFunction_USOTS_SkillTreeLibrary_GetAllSkillTags_Statics
{
	struct SOTS_SkillTreeLibrary_eventGetAllSkillTags_Parms
	{
		const UObject* WorldContextObject;
		FGameplayTagContainer OutSkillTags;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|SkillTree" },
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAllSkillTags constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutSkillTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAllSkillTags constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAllSkillTags Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_SkillTreeLibrary_GetAllSkillTags_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_SkillTreeLibrary_eventGetAllSkillTags_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_SkillTreeLibrary_GetAllSkillTags_Statics::NewProp_OutSkillTags = { "OutSkillTags", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_SkillTreeLibrary_eventGetAllSkillTags_Parms, OutSkillTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3438578166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_SkillTreeLibrary_GetAllSkillTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeLibrary_GetAllSkillTags_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeLibrary_GetAllSkillTags_Statics::NewProp_OutSkillTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeLibrary_GetAllSkillTags_Statics::PropPointers) < 2048);
// ********** End Function GetAllSkillTags Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_SkillTreeLibrary_GetAllSkillTags_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_SkillTreeLibrary, nullptr, "GetAllSkillTags", 	Z_Construct_UFunction_USOTS_SkillTreeLibrary_GetAllSkillTags_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeLibrary_GetAllSkillTags_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_SkillTreeLibrary_GetAllSkillTags_Statics::SOTS_SkillTreeLibrary_eventGetAllSkillTags_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeLibrary_GetAllSkillTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_SkillTreeLibrary_GetAllSkillTags_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_SkillTreeLibrary_GetAllSkillTags_Statics::SOTS_SkillTreeLibrary_eventGetAllSkillTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_SkillTreeLibrary_GetAllSkillTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_SkillTreeLibrary_GetAllSkillTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_SkillTreeLibrary::execGetAllSkillTags)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_OutSkillTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	USOTS_SkillTreeLibrary::GetAllSkillTags(Z_Param_WorldContextObject,Z_Param_Out_OutSkillTags);
	P_NATIVE_END;
}
// ********** End Class USOTS_SkillTreeLibrary Function GetAllSkillTags ****************************

// ********** Begin Class USOTS_SkillTreeLibrary Function IsSkillUnlocked **************************
struct Z_Construct_UFunction_USOTS_SkillTreeLibrary_IsSkillUnlocked_Statics
{
	struct SOTS_SkillTreeLibrary_eventIsSkillUnlocked_Parms
	{
		const UObject* WorldContextObject;
		FGameplayTag SkillTag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|SkillTree" },
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsSkillUnlocked constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SkillTag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsSkillUnlocked constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsSkillUnlocked Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_SkillTreeLibrary_IsSkillUnlocked_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_SkillTreeLibrary_eventIsSkillUnlocked_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_SkillTreeLibrary_IsSkillUnlocked_Statics::NewProp_SkillTag = { "SkillTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_SkillTreeLibrary_eventIsSkillUnlocked_Parms, SkillTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillTag_MetaData), NewProp_SkillTag_MetaData) }; // 517357616
void Z_Construct_UFunction_USOTS_SkillTreeLibrary_IsSkillUnlocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_SkillTreeLibrary_eventIsSkillUnlocked_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_SkillTreeLibrary_IsSkillUnlocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_SkillTreeLibrary_eventIsSkillUnlocked_Parms), &Z_Construct_UFunction_USOTS_SkillTreeLibrary_IsSkillUnlocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_SkillTreeLibrary_IsSkillUnlocked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeLibrary_IsSkillUnlocked_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeLibrary_IsSkillUnlocked_Statics::NewProp_SkillTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeLibrary_IsSkillUnlocked_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeLibrary_IsSkillUnlocked_Statics::PropPointers) < 2048);
// ********** End Function IsSkillUnlocked Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_SkillTreeLibrary_IsSkillUnlocked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_SkillTreeLibrary, nullptr, "IsSkillUnlocked", 	Z_Construct_UFunction_USOTS_SkillTreeLibrary_IsSkillUnlocked_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeLibrary_IsSkillUnlocked_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_SkillTreeLibrary_IsSkillUnlocked_Statics::SOTS_SkillTreeLibrary_eventIsSkillUnlocked_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeLibrary_IsSkillUnlocked_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_SkillTreeLibrary_IsSkillUnlocked_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_SkillTreeLibrary_IsSkillUnlocked_Statics::SOTS_SkillTreeLibrary_eventIsSkillUnlocked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_SkillTreeLibrary_IsSkillUnlocked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_SkillTreeLibrary_IsSkillUnlocked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_SkillTreeLibrary::execIsSkillUnlocked)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_SkillTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USOTS_SkillTreeLibrary::IsSkillUnlocked(Z_Param_WorldContextObject,Z_Param_Out_SkillTag);
	P_NATIVE_END;
}
// ********** End Class USOTS_SkillTreeLibrary Function IsSkillUnlocked ****************************

// ********** Begin Class USOTS_SkillTreeLibrary Function SOTS_PlayerHasSkillTag *******************
struct Z_Construct_UFunction_USOTS_SkillTreeLibrary_SOTS_PlayerHasSkillTag_Statics
{
	struct SOTS_SkillTreeLibrary_eventSOTS_PlayerHasSkillTag_Parms
	{
		const UObject* WorldContextObject;
		FGameplayTag SkillTag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|SkillTree" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Convenience helper used by GAS/MissionDirector to ask whether the\n// player currently has a specific skill tag. Internally this now\n// delegates to USOTS_SkillTreeSubsystem / the central tag manager.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convenience helper used by GAS/MissionDirector to ask whether the\nplayer currently has a specific skill tag. Internally this now\ndelegates to USOTS_SkillTreeSubsystem / the central tag manager." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SOTS_PlayerHasSkillTag constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SkillTag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SOTS_PlayerHasSkillTag constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SOTS_PlayerHasSkillTag Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_SkillTreeLibrary_SOTS_PlayerHasSkillTag_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_SkillTreeLibrary_eventSOTS_PlayerHasSkillTag_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_SkillTreeLibrary_SOTS_PlayerHasSkillTag_Statics::NewProp_SkillTag = { "SkillTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_SkillTreeLibrary_eventSOTS_PlayerHasSkillTag_Parms, SkillTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
void Z_Construct_UFunction_USOTS_SkillTreeLibrary_SOTS_PlayerHasSkillTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_SkillTreeLibrary_eventSOTS_PlayerHasSkillTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_SkillTreeLibrary_SOTS_PlayerHasSkillTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_SkillTreeLibrary_eventSOTS_PlayerHasSkillTag_Parms), &Z_Construct_UFunction_USOTS_SkillTreeLibrary_SOTS_PlayerHasSkillTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_SkillTreeLibrary_SOTS_PlayerHasSkillTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeLibrary_SOTS_PlayerHasSkillTag_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeLibrary_SOTS_PlayerHasSkillTag_Statics::NewProp_SkillTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeLibrary_SOTS_PlayerHasSkillTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeLibrary_SOTS_PlayerHasSkillTag_Statics::PropPointers) < 2048);
// ********** End Function SOTS_PlayerHasSkillTag Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_SkillTreeLibrary_SOTS_PlayerHasSkillTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_SkillTreeLibrary, nullptr, "SOTS_PlayerHasSkillTag", 	Z_Construct_UFunction_USOTS_SkillTreeLibrary_SOTS_PlayerHasSkillTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeLibrary_SOTS_PlayerHasSkillTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_SkillTreeLibrary_SOTS_PlayerHasSkillTag_Statics::SOTS_SkillTreeLibrary_eventSOTS_PlayerHasSkillTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeLibrary_SOTS_PlayerHasSkillTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_SkillTreeLibrary_SOTS_PlayerHasSkillTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_SkillTreeLibrary_SOTS_PlayerHasSkillTag_Statics::SOTS_SkillTreeLibrary_eventSOTS_PlayerHasSkillTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_SkillTreeLibrary_SOTS_PlayerHasSkillTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_SkillTreeLibrary_SOTS_PlayerHasSkillTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_SkillTreeLibrary::execSOTS_PlayerHasSkillTag)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FGameplayTag,Z_Param_SkillTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USOTS_SkillTreeLibrary::SOTS_PlayerHasSkillTag(Z_Param_WorldContextObject,Z_Param_SkillTag);
	P_NATIVE_END;
}
// ********** End Class USOTS_SkillTreeLibrary Function SOTS_PlayerHasSkillTag *********************

// ********** Begin Class USOTS_SkillTreeLibrary ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_SkillTreeLibrary;
UClass* USOTS_SkillTreeLibrary::GetPrivateStaticClass()
{
	using TClass = USOTS_SkillTreeLibrary;
	if (!Z_Registration_Info_UClass_USOTS_SkillTreeLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_SkillTreeLibrary"),
			Z_Registration_Info_UClass_USOTS_SkillTreeLibrary.InnerSingleton,
			StaticRegisterNativesUSOTS_SkillTreeLibrary,
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
	return Z_Registration_Info_UClass_USOTS_SkillTreeLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_SkillTreeLibrary_NoRegister()
{
	return USOTS_SkillTreeLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_SkillTreeLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Lightweight Blueprint helpers for querying the global skill tree state.\n * This is intentionally backend-only; it does not modify unlock state.\n */" },
#endif
		{ "IncludePath", "SOTS_SkillTreeLibrary.h" },
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lightweight Blueprint helpers for querying the global skill tree state.\nThis is intentionally backend-only; it does not modify unlock state." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_SkillTreeLibrary constinit property declarations *******************
// ********** End Class USOTS_SkillTreeLibrary constinit property declarations *********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetAllSkillTags"), .Pointer = &USOTS_SkillTreeLibrary::execGetAllSkillTags },
		{ .NameUTF8 = UTF8TEXT("IsSkillUnlocked"), .Pointer = &USOTS_SkillTreeLibrary::execIsSkillUnlocked },
		{ .NameUTF8 = UTF8TEXT("SOTS_PlayerHasSkillTag"), .Pointer = &USOTS_SkillTreeLibrary::execSOTS_PlayerHasSkillTag },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USOTS_SkillTreeLibrary_GetAllSkillTags, "GetAllSkillTags" }, // 1217804137
		{ &Z_Construct_UFunction_USOTS_SkillTreeLibrary_IsSkillUnlocked, "IsSkillUnlocked" }, // 1015196205
		{ &Z_Construct_UFunction_USOTS_SkillTreeLibrary_SOTS_PlayerHasSkillTag, "SOTS_PlayerHasSkillTag" }, // 3722483057
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_SkillTreeLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_SkillTreeLibrary_Statics
UObject* (*const Z_Construct_UClass_USOTS_SkillTreeLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_SkillTree,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_SkillTreeLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_SkillTreeLibrary_Statics::ClassParams = {
	&USOTS_SkillTreeLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_SkillTreeLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_SkillTreeLibrary_Statics::Class_MetaDataParams)
};
void USOTS_SkillTreeLibrary::StaticRegisterNativesUSOTS_SkillTreeLibrary()
{
	UClass* Class = USOTS_SkillTreeLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USOTS_SkillTreeLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_USOTS_SkillTreeLibrary()
{
	if (!Z_Registration_Info_UClass_USOTS_SkillTreeLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_SkillTreeLibrary.OuterSingleton, Z_Construct_UClass_USOTS_SkillTreeLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_SkillTreeLibrary.OuterSingleton;
}
USOTS_SkillTreeLibrary::USOTS_SkillTreeLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_SkillTreeLibrary);
USOTS_SkillTreeLibrary::~USOTS_SkillTreeLibrary() {}
// ********** End Class USOTS_SkillTreeLibrary *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeLibrary_h__Script_SOTS_SkillTree_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_SkillTreeLibrary, USOTS_SkillTreeLibrary::StaticClass, TEXT("USOTS_SkillTreeLibrary"), &Z_Registration_Info_UClass_USOTS_SkillTreeLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_SkillTreeLibrary), 2750342825U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeLibrary_h__Script_SOTS_SkillTree_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeLibrary_h__Script_SOTS_SkillTree_3718150800{
	TEXT("/Script/SOTS_SkillTree"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeLibrary_h__Script_SOTS_SkillTree_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeLibrary_h__Script_SOTS_SkillTree_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
