// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTS_TagLibrary.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_TagLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
SOTS_TAGMANAGER_API UClass* Z_Construct_UClass_USOTS_TagLibrary();
SOTS_TAGMANAGER_API UClass* Z_Construct_UClass_USOTS_TagLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_SOTS_TagManager();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USOTS_TagLibrary Function ActorHasAllTags ********************************
struct Z_Construct_UFunction_USOTS_TagLibrary_ActorHasAllTags_Statics
{
	struct SOTS_TagLibrary_eventActorHasAllTags_Parms
	{
		const UObject* WorldContextObject;
		const AActor* Target;
		FGameplayTagContainer Tags;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns true if the actor has all tags in the given container. */" },
#endif
		{ "ModuleRelativePath", "SOTS_TagManager/Public/SOTS_TagLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if the actor has all tags in the given container." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ActorHasAllTags constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tags;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ActorHasAllTags constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ActorHasAllTags Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_TagLibrary_ActorHasAllTags_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_TagLibrary_eventActorHasAllTags_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_TagLibrary_ActorHasAllTags_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_TagLibrary_eventActorHasAllTags_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_TagLibrary_ActorHasAllTags_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_TagLibrary_eventActorHasAllTags_Parms, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) }; // 3438578166
void Z_Construct_UFunction_USOTS_TagLibrary_ActorHasAllTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_TagLibrary_eventActorHasAllTags_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_TagLibrary_ActorHasAllTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_TagLibrary_eventActorHasAllTags_Parms), &Z_Construct_UFunction_USOTS_TagLibrary_ActorHasAllTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_TagLibrary_ActorHasAllTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_TagLibrary_ActorHasAllTags_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_TagLibrary_ActorHasAllTags_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_TagLibrary_ActorHasAllTags_Statics::NewProp_Tags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_TagLibrary_ActorHasAllTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_TagLibrary_ActorHasAllTags_Statics::PropPointers) < 2048);
// ********** End Function ActorHasAllTags Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_TagLibrary_ActorHasAllTags_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_TagLibrary, nullptr, "ActorHasAllTags", 	Z_Construct_UFunction_USOTS_TagLibrary_ActorHasAllTags_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_TagLibrary_ActorHasAllTags_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_TagLibrary_ActorHasAllTags_Statics::SOTS_TagLibrary_eventActorHasAllTags_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_TagLibrary_ActorHasAllTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_TagLibrary_ActorHasAllTags_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_TagLibrary_ActorHasAllTags_Statics::SOTS_TagLibrary_eventActorHasAllTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_TagLibrary_ActorHasAllTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_TagLibrary_ActorHasAllTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_TagLibrary::execActorHasAllTags)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_Tags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USOTS_TagLibrary::ActorHasAllTags(Z_Param_WorldContextObject,Z_Param_Target,Z_Param_Out_Tags);
	P_NATIVE_END;
}
// ********** End Class USOTS_TagLibrary Function ActorHasAllTags **********************************

// ********** Begin Class USOTS_TagLibrary Function ActorHasAnyTag *********************************
struct Z_Construct_UFunction_USOTS_TagLibrary_ActorHasAnyTag_Statics
{
	struct SOTS_TagLibrary_eventActorHasAnyTag_Parms
	{
		const UObject* WorldContextObject;
		const AActor* Target;
		FGameplayTagContainer Tags;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns true if the actor has any tag in the given container. */" },
#endif
		{ "ModuleRelativePath", "SOTS_TagManager/Public/SOTS_TagLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if the actor has any tag in the given container." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ActorHasAnyTag constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tags;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ActorHasAnyTag constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ActorHasAnyTag Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_TagLibrary_ActorHasAnyTag_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_TagLibrary_eventActorHasAnyTag_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_TagLibrary_ActorHasAnyTag_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_TagLibrary_eventActorHasAnyTag_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_TagLibrary_ActorHasAnyTag_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_TagLibrary_eventActorHasAnyTag_Parms, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) }; // 3438578166
void Z_Construct_UFunction_USOTS_TagLibrary_ActorHasAnyTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_TagLibrary_eventActorHasAnyTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_TagLibrary_ActorHasAnyTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_TagLibrary_eventActorHasAnyTag_Parms), &Z_Construct_UFunction_USOTS_TagLibrary_ActorHasAnyTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_TagLibrary_ActorHasAnyTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_TagLibrary_ActorHasAnyTag_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_TagLibrary_ActorHasAnyTag_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_TagLibrary_ActorHasAnyTag_Statics::NewProp_Tags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_TagLibrary_ActorHasAnyTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_TagLibrary_ActorHasAnyTag_Statics::PropPointers) < 2048);
// ********** End Function ActorHasAnyTag Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_TagLibrary_ActorHasAnyTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_TagLibrary, nullptr, "ActorHasAnyTag", 	Z_Construct_UFunction_USOTS_TagLibrary_ActorHasAnyTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_TagLibrary_ActorHasAnyTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_TagLibrary_ActorHasAnyTag_Statics::SOTS_TagLibrary_eventActorHasAnyTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_TagLibrary_ActorHasAnyTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_TagLibrary_ActorHasAnyTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_TagLibrary_ActorHasAnyTag_Statics::SOTS_TagLibrary_eventActorHasAnyTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_TagLibrary_ActorHasAnyTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_TagLibrary_ActorHasAnyTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_TagLibrary::execActorHasAnyTag)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_Tags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USOTS_TagLibrary::ActorHasAnyTag(Z_Param_WorldContextObject,Z_Param_Target,Z_Param_Out_Tags);
	P_NATIVE_END;
}
// ********** End Class USOTS_TagLibrary Function ActorHasAnyTag ***********************************

// ********** Begin Class USOTS_TagLibrary Function ActorHasTag ************************************
struct Z_Construct_UFunction_USOTS_TagLibrary_ActorHasTag_Statics
{
	struct SOTS_TagLibrary_eventActorHasTag_Parms
	{
		const UObject* WorldContextObject;
		const AActor* Target;
		FGameplayTag Tag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns true if the actor owns the tag. */" },
#endif
		{ "ModuleRelativePath", "SOTS_TagManager/Public/SOTS_TagLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if the actor owns the tag." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ActorHasTag constinit property declarations ***************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ActorHasTag constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ActorHasTag Property Definitions **************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_TagLibrary_ActorHasTag_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_TagLibrary_eventActorHasTag_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_TagLibrary_ActorHasTag_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_TagLibrary_eventActorHasTag_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_TagLibrary_ActorHasTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_TagLibrary_eventActorHasTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
void Z_Construct_UFunction_USOTS_TagLibrary_ActorHasTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_TagLibrary_eventActorHasTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_TagLibrary_ActorHasTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_TagLibrary_eventActorHasTag_Parms), &Z_Construct_UFunction_USOTS_TagLibrary_ActorHasTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_TagLibrary_ActorHasTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_TagLibrary_ActorHasTag_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_TagLibrary_ActorHasTag_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_TagLibrary_ActorHasTag_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_TagLibrary_ActorHasTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_TagLibrary_ActorHasTag_Statics::PropPointers) < 2048);
// ********** End Function ActorHasTag Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_TagLibrary_ActorHasTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_TagLibrary, nullptr, "ActorHasTag", 	Z_Construct_UFunction_USOTS_TagLibrary_ActorHasTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_TagLibrary_ActorHasTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_TagLibrary_ActorHasTag_Statics::SOTS_TagLibrary_eventActorHasTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_TagLibrary_ActorHasTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_TagLibrary_ActorHasTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_TagLibrary_ActorHasTag_Statics::SOTS_TagLibrary_eventActorHasTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_TagLibrary_ActorHasTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_TagLibrary_ActorHasTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_TagLibrary::execActorHasTag)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USOTS_TagLibrary::ActorHasTag(Z_Param_WorldContextObject,Z_Param_Target,Z_Param_Tag);
	P_NATIVE_END;
}
// ********** End Class USOTS_TagLibrary Function ActorHasTag **************************************

// ********** Begin Class USOTS_TagLibrary Function ActorHasTagByName ******************************
struct Z_Construct_UFunction_USOTS_TagLibrary_ActorHasTagByName_Statics
{
	struct SOTS_TagLibrary_eventActorHasTagByName_Parms
	{
		const UObject* WorldContextObject;
		const AActor* Actor;
		FName TagName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns true if the actor owns the tag identified by TagName. */" },
#endif
		{ "ModuleRelativePath", "SOTS_TagManager/Public/SOTS_TagLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if the actor owns the tag identified by TagName." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ActorHasTagByName constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TagName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ActorHasTagByName constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ActorHasTagByName Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_TagLibrary_ActorHasTagByName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_TagLibrary_eventActorHasTagByName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_TagLibrary_ActorHasTagByName_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_TagLibrary_eventActorHasTagByName_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USOTS_TagLibrary_ActorHasTagByName_Statics::NewProp_TagName = { "TagName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_TagLibrary_eventActorHasTagByName_Parms, TagName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USOTS_TagLibrary_ActorHasTagByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_TagLibrary_eventActorHasTagByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_TagLibrary_ActorHasTagByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_TagLibrary_eventActorHasTagByName_Parms), &Z_Construct_UFunction_USOTS_TagLibrary_ActorHasTagByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_TagLibrary_ActorHasTagByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_TagLibrary_ActorHasTagByName_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_TagLibrary_ActorHasTagByName_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_TagLibrary_ActorHasTagByName_Statics::NewProp_TagName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_TagLibrary_ActorHasTagByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_TagLibrary_ActorHasTagByName_Statics::PropPointers) < 2048);
// ********** End Function ActorHasTagByName Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_TagLibrary_ActorHasTagByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_TagLibrary, nullptr, "ActorHasTagByName", 	Z_Construct_UFunction_USOTS_TagLibrary_ActorHasTagByName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_TagLibrary_ActorHasTagByName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_TagLibrary_ActorHasTagByName_Statics::SOTS_TagLibrary_eventActorHasTagByName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_TagLibrary_ActorHasTagByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_TagLibrary_ActorHasTagByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_TagLibrary_ActorHasTagByName_Statics::SOTS_TagLibrary_eventActorHasTagByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_TagLibrary_ActorHasTagByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_TagLibrary_ActorHasTagByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_TagLibrary::execActorHasTagByName)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_PROPERTY(FNameProperty,Z_Param_TagName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USOTS_TagLibrary::ActorHasTagByName(Z_Param_WorldContextObject,Z_Param_Actor,Z_Param_TagName);
	P_NATIVE_END;
}
// ********** End Class USOTS_TagLibrary Function ActorHasTagByName ********************************

// ********** Begin Class USOTS_TagLibrary Function AddTagToActor **********************************
struct Z_Construct_UFunction_USOTS_TagLibrary_AddTagToActor_Statics
{
	struct SOTS_TagLibrary_eventAddTagToActor_Parms
	{
		const UObject* WorldContextObject;
		AActor* Target;
		FGameplayTag Tag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Adds a loose gameplay tag to the actor through the tag manager. */" },
#endif
		{ "ModuleRelativePath", "SOTS_TagManager/Public/SOTS_TagLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a loose gameplay tag to the actor through the tag manager." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddTagToActor constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddTagToActor constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddTagToActor Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_TagLibrary_AddTagToActor_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_TagLibrary_eventAddTagToActor_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_TagLibrary_AddTagToActor_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_TagLibrary_eventAddTagToActor_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_TagLibrary_AddTagToActor_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_TagLibrary_eventAddTagToActor_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_TagLibrary_AddTagToActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_TagLibrary_AddTagToActor_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_TagLibrary_AddTagToActor_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_TagLibrary_AddTagToActor_Statics::NewProp_Tag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_TagLibrary_AddTagToActor_Statics::PropPointers) < 2048);
// ********** End Function AddTagToActor Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_TagLibrary_AddTagToActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_TagLibrary, nullptr, "AddTagToActor", 	Z_Construct_UFunction_USOTS_TagLibrary_AddTagToActor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_TagLibrary_AddTagToActor_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_TagLibrary_AddTagToActor_Statics::SOTS_TagLibrary_eventAddTagToActor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_TagLibrary_AddTagToActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_TagLibrary_AddTagToActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_TagLibrary_AddTagToActor_Statics::SOTS_TagLibrary_eventAddTagToActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_TagLibrary_AddTagToActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_TagLibrary_AddTagToActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_TagLibrary::execAddTagToActor)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	USOTS_TagLibrary::AddTagToActor(Z_Param_WorldContextObject,Z_Param_Target,Z_Param_Tag);
	P_NATIVE_END;
}
// ********** End Class USOTS_TagLibrary Function AddTagToActor ************************************

// ********** Begin Class USOTS_TagLibrary Function AddTagToActorByName ****************************
struct Z_Construct_UFunction_USOTS_TagLibrary_AddTagToActorByName_Statics
{
	struct SOTS_TagLibrary_eventAddTagToActorByName_Parms
	{
		const UObject* WorldContextObject;
		AActor* Target;
		FName TagName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Tags" },
		{ "ModuleRelativePath", "SOTS_TagManager/Public/SOTS_TagLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddTagToActorByName constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TagName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddTagToActorByName constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddTagToActorByName Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_TagLibrary_AddTagToActorByName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_TagLibrary_eventAddTagToActorByName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_TagLibrary_AddTagToActorByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_TagLibrary_eventAddTagToActorByName_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USOTS_TagLibrary_AddTagToActorByName_Statics::NewProp_TagName = { "TagName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_TagLibrary_eventAddTagToActorByName_Parms, TagName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_TagLibrary_AddTagToActorByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_TagLibrary_AddTagToActorByName_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_TagLibrary_AddTagToActorByName_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_TagLibrary_AddTagToActorByName_Statics::NewProp_TagName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_TagLibrary_AddTagToActorByName_Statics::PropPointers) < 2048);
// ********** End Function AddTagToActorByName Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_TagLibrary_AddTagToActorByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_TagLibrary, nullptr, "AddTagToActorByName", 	Z_Construct_UFunction_USOTS_TagLibrary_AddTagToActorByName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_TagLibrary_AddTagToActorByName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_TagLibrary_AddTagToActorByName_Statics::SOTS_TagLibrary_eventAddTagToActorByName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_TagLibrary_AddTagToActorByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_TagLibrary_AddTagToActorByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_TagLibrary_AddTagToActorByName_Statics::SOTS_TagLibrary_eventAddTagToActorByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_TagLibrary_AddTagToActorByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_TagLibrary_AddTagToActorByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_TagLibrary::execAddTagToActorByName)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_PROPERTY(FNameProperty,Z_Param_TagName);
	P_FINISH;
	P_NATIVE_BEGIN;
	USOTS_TagLibrary::AddTagToActorByName(Z_Param_WorldContextObject,Z_Param_Target,Z_Param_TagName);
	P_NATIVE_END;
}
// ********** End Class USOTS_TagLibrary Function AddTagToActorByName ******************************

// ********** Begin Class USOTS_TagLibrary Function GetTagByName ***********************************
struct Z_Construct_UFunction_USOTS_TagLibrary_GetTagByName_Statics
{
	struct SOTS_TagLibrary_eventGetTagByName_Parms
	{
		const UObject* WorldContextObject;
		FName TagName;
		FGameplayTag ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Resolve a tag by name using the global SOTS tag manager. */" },
#endif
		{ "ModuleRelativePath", "SOTS_TagManager/Public/SOTS_TagLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resolve a tag by name using the global SOTS tag manager." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetTagByName constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TagName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTagByName constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTagByName Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_TagLibrary_GetTagByName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_TagLibrary_eventGetTagByName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USOTS_TagLibrary_GetTagByName_Statics::NewProp_TagName = { "TagName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_TagLibrary_eventGetTagByName_Parms, TagName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_TagLibrary_GetTagByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_TagLibrary_eventGetTagByName_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_TagLibrary_GetTagByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_TagLibrary_GetTagByName_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_TagLibrary_GetTagByName_Statics::NewProp_TagName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_TagLibrary_GetTagByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_TagLibrary_GetTagByName_Statics::PropPointers) < 2048);
// ********** End Function GetTagByName Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_TagLibrary_GetTagByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_TagLibrary, nullptr, "GetTagByName", 	Z_Construct_UFunction_USOTS_TagLibrary_GetTagByName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_TagLibrary_GetTagByName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_TagLibrary_GetTagByName_Statics::SOTS_TagLibrary_eventGetTagByName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_TagLibrary_GetTagByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_TagLibrary_GetTagByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_TagLibrary_GetTagByName_Statics::SOTS_TagLibrary_eventGetTagByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_TagLibrary_GetTagByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_TagLibrary_GetTagByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_TagLibrary::execGetTagByName)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_TagName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTag*)Z_Param__Result=USOTS_TagLibrary::GetTagByName(Z_Param_WorldContextObject,Z_Param_TagName);
	P_NATIVE_END;
}
// ********** End Class USOTS_TagLibrary Function GetTagByName *************************************

// ********** Begin Class USOTS_TagLibrary Function RemoveTagFromActor *****************************
struct Z_Construct_UFunction_USOTS_TagLibrary_RemoveTagFromActor_Statics
{
	struct SOTS_TagLibrary_eventRemoveTagFromActor_Parms
	{
		const UObject* WorldContextObject;
		AActor* Target;
		FGameplayTag Tag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Removes a loose gameplay tag from the actor through the tag manager. */" },
#endif
		{ "ModuleRelativePath", "SOTS_TagManager/Public/SOTS_TagLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes a loose gameplay tag from the actor through the tag manager." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveTagFromActor constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveTagFromActor constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveTagFromActor Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_TagLibrary_RemoveTagFromActor_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_TagLibrary_eventRemoveTagFromActor_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_TagLibrary_RemoveTagFromActor_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_TagLibrary_eventRemoveTagFromActor_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_TagLibrary_RemoveTagFromActor_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_TagLibrary_eventRemoveTagFromActor_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_TagLibrary_RemoveTagFromActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_TagLibrary_RemoveTagFromActor_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_TagLibrary_RemoveTagFromActor_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_TagLibrary_RemoveTagFromActor_Statics::NewProp_Tag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_TagLibrary_RemoveTagFromActor_Statics::PropPointers) < 2048);
// ********** End Function RemoveTagFromActor Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_TagLibrary_RemoveTagFromActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_TagLibrary, nullptr, "RemoveTagFromActor", 	Z_Construct_UFunction_USOTS_TagLibrary_RemoveTagFromActor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_TagLibrary_RemoveTagFromActor_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_TagLibrary_RemoveTagFromActor_Statics::SOTS_TagLibrary_eventRemoveTagFromActor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_TagLibrary_RemoveTagFromActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_TagLibrary_RemoveTagFromActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_TagLibrary_RemoveTagFromActor_Statics::SOTS_TagLibrary_eventRemoveTagFromActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_TagLibrary_RemoveTagFromActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_TagLibrary_RemoveTagFromActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_TagLibrary::execRemoveTagFromActor)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	USOTS_TagLibrary::RemoveTagFromActor(Z_Param_WorldContextObject,Z_Param_Target,Z_Param_Tag);
	P_NATIVE_END;
}
// ********** End Class USOTS_TagLibrary Function RemoveTagFromActor *******************************

// ********** Begin Class USOTS_TagLibrary Function RemoveTagFromActorByName ***********************
struct Z_Construct_UFunction_USOTS_TagLibrary_RemoveTagFromActorByName_Statics
{
	struct SOTS_TagLibrary_eventRemoveTagFromActorByName_Parms
	{
		const UObject* WorldContextObject;
		AActor* Target;
		FName TagName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Tags" },
		{ "ModuleRelativePath", "SOTS_TagManager/Public/SOTS_TagLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveTagFromActorByName constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TagName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveTagFromActorByName constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveTagFromActorByName Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_TagLibrary_RemoveTagFromActorByName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_TagLibrary_eventRemoveTagFromActorByName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_TagLibrary_RemoveTagFromActorByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_TagLibrary_eventRemoveTagFromActorByName_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USOTS_TagLibrary_RemoveTagFromActorByName_Statics::NewProp_TagName = { "TagName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_TagLibrary_eventRemoveTagFromActorByName_Parms, TagName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_TagLibrary_RemoveTagFromActorByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_TagLibrary_RemoveTagFromActorByName_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_TagLibrary_RemoveTagFromActorByName_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_TagLibrary_RemoveTagFromActorByName_Statics::NewProp_TagName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_TagLibrary_RemoveTagFromActorByName_Statics::PropPointers) < 2048);
// ********** End Function RemoveTagFromActorByName Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_TagLibrary_RemoveTagFromActorByName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_TagLibrary, nullptr, "RemoveTagFromActorByName", 	Z_Construct_UFunction_USOTS_TagLibrary_RemoveTagFromActorByName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_TagLibrary_RemoveTagFromActorByName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_TagLibrary_RemoveTagFromActorByName_Statics::SOTS_TagLibrary_eventRemoveTagFromActorByName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_TagLibrary_RemoveTagFromActorByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_TagLibrary_RemoveTagFromActorByName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_TagLibrary_RemoveTagFromActorByName_Statics::SOTS_TagLibrary_eventRemoveTagFromActorByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_TagLibrary_RemoveTagFromActorByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_TagLibrary_RemoveTagFromActorByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_TagLibrary::execRemoveTagFromActorByName)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_PROPERTY(FNameProperty,Z_Param_TagName);
	P_FINISH;
	P_NATIVE_BEGIN;
	USOTS_TagLibrary::RemoveTagFromActorByName(Z_Param_WorldContextObject,Z_Param_Target,Z_Param_TagName);
	P_NATIVE_END;
}
// ********** End Class USOTS_TagLibrary Function RemoveTagFromActorByName *************************

// ********** Begin Class USOTS_TagLibrary Function RemoveTagsFromActor ****************************
struct Z_Construct_UFunction_USOTS_TagLibrary_RemoveTagsFromActor_Statics
{
	struct SOTS_TagLibrary_eventRemoveTagsFromActor_Parms
	{
		const UObject* WorldContextObject;
		AActor* Target;
		TArray<FGameplayTag> Tags;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Removes a set of loose gameplay tags previously added to the given actor through the tag manager. */" },
#endif
		{ "ModuleRelativePath", "SOTS_TagManager/Public/SOTS_TagLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes a set of loose gameplay tags previously added to the given actor through the tag manager." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveTagsFromActor constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveTagsFromActor constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveTagsFromActor Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_TagLibrary_RemoveTagsFromActor_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_TagLibrary_eventRemoveTagsFromActor_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USOTS_TagLibrary_RemoveTagsFromActor_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_TagLibrary_eventRemoveTagsFromActor_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_TagLibrary_RemoveTagsFromActor_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USOTS_TagLibrary_RemoveTagsFromActor_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_TagLibrary_eventRemoveTagsFromActor_Parms, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) }; // 517357616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_TagLibrary_RemoveTagsFromActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_TagLibrary_RemoveTagsFromActor_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_TagLibrary_RemoveTagsFromActor_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_TagLibrary_RemoveTagsFromActor_Statics::NewProp_Tags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_TagLibrary_RemoveTagsFromActor_Statics::NewProp_Tags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_TagLibrary_RemoveTagsFromActor_Statics::PropPointers) < 2048);
// ********** End Function RemoveTagsFromActor Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_TagLibrary_RemoveTagsFromActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_TagLibrary, nullptr, "RemoveTagsFromActor", 	Z_Construct_UFunction_USOTS_TagLibrary_RemoveTagsFromActor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_TagLibrary_RemoveTagsFromActor_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_TagLibrary_RemoveTagsFromActor_Statics::SOTS_TagLibrary_eventRemoveTagsFromActor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_TagLibrary_RemoveTagsFromActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_TagLibrary_RemoveTagsFromActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_TagLibrary_RemoveTagsFromActor_Statics::SOTS_TagLibrary_eventRemoveTagsFromActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_TagLibrary_RemoveTagsFromActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_TagLibrary_RemoveTagsFromActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_TagLibrary::execRemoveTagsFromActor)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_TARRAY_REF(FGameplayTag,Z_Param_Out_Tags);
	P_FINISH;
	P_NATIVE_BEGIN;
	USOTS_TagLibrary::RemoveTagsFromActor(Z_Param_WorldContextObject,Z_Param_Target,Z_Param_Out_Tags);
	P_NATIVE_END;
}
// ********** End Class USOTS_TagLibrary Function RemoveTagsFromActor ******************************

// ********** Begin Class USOTS_TagLibrary *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_TagLibrary;
UClass* USOTS_TagLibrary::GetPrivateStaticClass()
{
	using TClass = USOTS_TagLibrary;
	if (!Z_Registration_Info_UClass_USOTS_TagLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_TagLibrary"),
			Z_Registration_Info_UClass_USOTS_TagLibrary.InnerSingleton,
			StaticRegisterNativesUSOTS_TagLibrary,
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
	return Z_Registration_Info_UClass_USOTS_TagLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_TagLibrary_NoRegister()
{
	return USOTS_TagLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_TagLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Simple Blueprint-facing helpers that forward into\n * USOTS_GameplayTagManagerSubsystem.\n *\n * SOTS TAG SPINE (V2): This file presents the canonical blueprint API\n * and central routing for loose actor gameplay tags. Prefer the\n * functions in this library instead of manipulating tag containers or\n * local plugin-level tag maps directly.\n */" },
#endif
		{ "IncludePath", "SOTS_TagManager/Public/SOTS_TagLibrary.h" },
		{ "ModuleRelativePath", "SOTS_TagManager/Public/SOTS_TagLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple Blueprint-facing helpers that forward into\nUSOTS_GameplayTagManagerSubsystem.\n\nSOTS TAG SPINE (V2): This file presents the canonical blueprint API\nand central routing for loose actor gameplay tags. Prefer the\nfunctions in this library instead of manipulating tag containers or\nlocal plugin-level tag maps directly." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_TagLibrary constinit property declarations *************************
// ********** End Class USOTS_TagLibrary constinit property declarations ***************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ActorHasAllTags"), .Pointer = &USOTS_TagLibrary::execActorHasAllTags },
		{ .NameUTF8 = UTF8TEXT("ActorHasAnyTag"), .Pointer = &USOTS_TagLibrary::execActorHasAnyTag },
		{ .NameUTF8 = UTF8TEXT("ActorHasTag"), .Pointer = &USOTS_TagLibrary::execActorHasTag },
		{ .NameUTF8 = UTF8TEXT("ActorHasTagByName"), .Pointer = &USOTS_TagLibrary::execActorHasTagByName },
		{ .NameUTF8 = UTF8TEXT("AddTagToActor"), .Pointer = &USOTS_TagLibrary::execAddTagToActor },
		{ .NameUTF8 = UTF8TEXT("AddTagToActorByName"), .Pointer = &USOTS_TagLibrary::execAddTagToActorByName },
		{ .NameUTF8 = UTF8TEXT("GetTagByName"), .Pointer = &USOTS_TagLibrary::execGetTagByName },
		{ .NameUTF8 = UTF8TEXT("RemoveTagFromActor"), .Pointer = &USOTS_TagLibrary::execRemoveTagFromActor },
		{ .NameUTF8 = UTF8TEXT("RemoveTagFromActorByName"), .Pointer = &USOTS_TagLibrary::execRemoveTagFromActorByName },
		{ .NameUTF8 = UTF8TEXT("RemoveTagsFromActor"), .Pointer = &USOTS_TagLibrary::execRemoveTagsFromActor },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USOTS_TagLibrary_ActorHasAllTags, "ActorHasAllTags" }, // 3560517676
		{ &Z_Construct_UFunction_USOTS_TagLibrary_ActorHasAnyTag, "ActorHasAnyTag" }, // 2068644464
		{ &Z_Construct_UFunction_USOTS_TagLibrary_ActorHasTag, "ActorHasTag" }, // 3576542702
		{ &Z_Construct_UFunction_USOTS_TagLibrary_ActorHasTagByName, "ActorHasTagByName" }, // 4255666168
		{ &Z_Construct_UFunction_USOTS_TagLibrary_AddTagToActor, "AddTagToActor" }, // 573785116
		{ &Z_Construct_UFunction_USOTS_TagLibrary_AddTagToActorByName, "AddTagToActorByName" }, // 363255882
		{ &Z_Construct_UFunction_USOTS_TagLibrary_GetTagByName, "GetTagByName" }, // 2604495765
		{ &Z_Construct_UFunction_USOTS_TagLibrary_RemoveTagFromActor, "RemoveTagFromActor" }, // 450939861
		{ &Z_Construct_UFunction_USOTS_TagLibrary_RemoveTagFromActorByName, "RemoveTagFromActorByName" }, // 2369819530
		{ &Z_Construct_UFunction_USOTS_TagLibrary_RemoveTagsFromActor, "RemoveTagsFromActor" }, // 2838939881
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_TagLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_TagLibrary_Statics
UObject* (*const Z_Construct_UClass_USOTS_TagLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_TagManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_TagLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_TagLibrary_Statics::ClassParams = {
	&USOTS_TagLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_TagLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_TagLibrary_Statics::Class_MetaDataParams)
};
void USOTS_TagLibrary::StaticRegisterNativesUSOTS_TagLibrary()
{
	UClass* Class = USOTS_TagLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USOTS_TagLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_USOTS_TagLibrary()
{
	if (!Z_Registration_Info_UClass_USOTS_TagLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_TagLibrary.OuterSingleton, Z_Construct_UClass_USOTS_TagLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_TagLibrary.OuterSingleton;
}
USOTS_TagLibrary::USOTS_TagLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_TagLibrary);
USOTS_TagLibrary::~USOTS_TagLibrary() {}
// ********** End Class USOTS_TagLibrary ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_TagManager_Source_SOTS_TagManager_Public_SOTS_TagLibrary_h__Script_SOTS_TagManager_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_TagLibrary, USOTS_TagLibrary::StaticClass, TEXT("USOTS_TagLibrary"), &Z_Registration_Info_UClass_USOTS_TagLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_TagLibrary), 4265353553U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_TagManager_Source_SOTS_TagManager_Public_SOTS_TagLibrary_h__Script_SOTS_TagManager_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_TagManager_Source_SOTS_TagManager_Public_SOTS_TagLibrary_h__Script_SOTS_TagManager_3228704744{
	TEXT("/Script/SOTS_TagManager"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_TagManager_Source_SOTS_TagManager_Public_SOTS_TagLibrary_h__Script_SOTS_TagManager_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_TagManager_Source_SOTS_TagManager_Public_SOTS_TagLibrary_h__Script_SOTS_TagManager_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
