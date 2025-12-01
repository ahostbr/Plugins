// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTS_SkillTreeDefinition.h"
#include "SOTS_SkillTreeTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_SkillTreeDefinition() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
SOTS_SKILLTREE_API UClass* Z_Construct_UClass_USOTS_SkillTreeDefinition();
SOTS_SKILLTREE_API UClass* Z_Construct_UClass_USOTS_SkillTreeDefinition_NoRegister();
SOTS_SKILLTREE_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition();
SOTS_SKILLTREE_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_SkillNodeLink();
UPackage* Z_Construct_UPackage__Script_SOTS_SkillTree();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USOTS_SkillTreeDefinition Function FindNodeDefinition ********************
struct Z_Construct_UFunction_USOTS_SkillTreeDefinition_FindNodeDefinition_Statics
{
	struct SOTS_SkillTreeDefinition_eventFindNodeDefinition_Parms
	{
		FName NodeId;
		FSOTS_SkillNodeDefinition OutDefinition;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SkillTree" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Looks up a node definition by id.\n     * Returns true if found and copies the data into OutDefinition.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Looks up a node definition by id.\nReturns true if found and copies the data into OutDefinition." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function FindNodeDefinition constinit property declarations ********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_NodeId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutDefinition;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FindNodeDefinition constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FindNodeDefinition Property Definitions *******************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USOTS_SkillTreeDefinition_FindNodeDefinition_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_SkillTreeDefinition_eventFindNodeDefinition_Parms, NodeId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USOTS_SkillTreeDefinition_FindNodeDefinition_Statics::NewProp_OutDefinition = { "OutDefinition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_SkillTreeDefinition_eventFindNodeDefinition_Parms, OutDefinition), Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition, METADATA_PARAMS(0, nullptr) }; // 2741794244
void Z_Construct_UFunction_USOTS_SkillTreeDefinition_FindNodeDefinition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SOTS_SkillTreeDefinition_eventFindNodeDefinition_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USOTS_SkillTreeDefinition_FindNodeDefinition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SOTS_SkillTreeDefinition_eventFindNodeDefinition_Parms), &Z_Construct_UFunction_USOTS_SkillTreeDefinition_FindNodeDefinition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_SkillTreeDefinition_FindNodeDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeDefinition_FindNodeDefinition_Statics::NewProp_NodeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeDefinition_FindNodeDefinition_Statics::NewProp_OutDefinition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_SkillTreeDefinition_FindNodeDefinition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeDefinition_FindNodeDefinition_Statics::PropPointers) < 2048);
// ********** End Function FindNodeDefinition Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_SkillTreeDefinition_FindNodeDefinition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_SkillTreeDefinition, nullptr, "FindNodeDefinition", 	Z_Construct_UFunction_USOTS_SkillTreeDefinition_FindNodeDefinition_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeDefinition_FindNodeDefinition_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_SkillTreeDefinition_FindNodeDefinition_Statics::SOTS_SkillTreeDefinition_eventFindNodeDefinition_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_SkillTreeDefinition_FindNodeDefinition_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_SkillTreeDefinition_FindNodeDefinition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_SkillTreeDefinition_FindNodeDefinition_Statics::SOTS_SkillTreeDefinition_eventFindNodeDefinition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_SkillTreeDefinition_FindNodeDefinition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_SkillTreeDefinition_FindNodeDefinition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_SkillTreeDefinition::execFindNodeDefinition)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_NodeId);
	P_GET_STRUCT_REF(FSOTS_SkillNodeDefinition,Z_Param_Out_OutDefinition);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->FindNodeDefinition(Z_Param_NodeId,Z_Param_Out_OutDefinition);
	P_NATIVE_END;
}
// ********** End Class USOTS_SkillTreeDefinition Function FindNodeDefinition **********************

// ********** Begin Class USOTS_SkillTreeDefinition ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_SkillTreeDefinition;
UClass* USOTS_SkillTreeDefinition::GetPrivateStaticClass()
{
	using TClass = USOTS_SkillTreeDefinition;
	if (!Z_Registration_Info_UClass_USOTS_SkillTreeDefinition.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_SkillTreeDefinition"),
			Z_Registration_Info_UClass_USOTS_SkillTreeDefinition.InnerSingleton,
			StaticRegisterNativesUSOTS_SkillTreeDefinition,
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
	return Z_Registration_Info_UClass_USOTS_SkillTreeDefinition.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_SkillTreeDefinition_NoRegister()
{
	return USOTS_SkillTreeDefinition::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_SkillTreeDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Data asset describing a single skill tree and all of its nodes.\n * This is content-only and safe to author entirely in the editor.\n */" },
#endif
		{ "IncludePath", "SOTS_SkillTreeDefinition.h" },
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Data asset describing a single skill tree and all of its nodes.\nThis is content-only and safe to author entirely in the editor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TreeId_MetaData[] = {
		{ "Category", "SkillTree" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional id so multiple trees can be referenced in data\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional id so multiple trees can be referenced in data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Nodes_MetaData[] = {
		{ "Category", "SkillTree" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// All nodes that belong to this tree\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "All nodes that belong to this tree" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Links_MetaData[] = {
		{ "Category", "SkillTree" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional explicit link list for editor tooling. Runtime unlock logic\n// currently uses the per-node ParentNodeIds/PrerequisiteNodeIds fields,\n// but UI may prefer an explicit edge list when drawing the graph.\n" },
#endif
		{ "ModuleRelativePath", "Public/SOTS_SkillTreeDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional explicit link list for editor tooling. Runtime unlock logic\ncurrently uses the per-node ParentNodeIds/PrerequisiteNodeIds fields,\nbut UI may prefer an explicit edge list when drawing the graph." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_SkillTreeDefinition constinit property declarations ****************
	static const UECodeGen_Private::FNamePropertyParams NewProp_TreeId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Nodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Nodes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Links_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Links;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USOTS_SkillTreeDefinition constinit property declarations ******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("FindNodeDefinition"), .Pointer = &USOTS_SkillTreeDefinition::execFindNodeDefinition },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USOTS_SkillTreeDefinition_FindNodeDefinition, "FindNodeDefinition" }, // 2550031818
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_SkillTreeDefinition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_SkillTreeDefinition_Statics

// ********** Begin Class USOTS_SkillTreeDefinition Property Definitions ***************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USOTS_SkillTreeDefinition_Statics::NewProp_TreeId = { "TreeId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_SkillTreeDefinition, TreeId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TreeId_MetaData), NewProp_TreeId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_SkillTreeDefinition_Statics::NewProp_Nodes_Inner = { "Nodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSOTS_SkillNodeDefinition, METADATA_PARAMS(0, nullptr) }; // 2741794244
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USOTS_SkillTreeDefinition_Statics::NewProp_Nodes = { "Nodes", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_SkillTreeDefinition, Nodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Nodes_MetaData), NewProp_Nodes_MetaData) }; // 2741794244
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_SkillTreeDefinition_Statics::NewProp_Links_Inner = { "Links", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSOTS_SkillNodeLink, METADATA_PARAMS(0, nullptr) }; // 157350572
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USOTS_SkillTreeDefinition_Statics::NewProp_Links = { "Links", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_SkillTreeDefinition, Links), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Links_MetaData), NewProp_Links_MetaData) }; // 157350572
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USOTS_SkillTreeDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_SkillTreeDefinition_Statics::NewProp_TreeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_SkillTreeDefinition_Statics::NewProp_Nodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_SkillTreeDefinition_Statics::NewProp_Nodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_SkillTreeDefinition_Statics::NewProp_Links_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_SkillTreeDefinition_Statics::NewProp_Links,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_SkillTreeDefinition_Statics::PropPointers) < 2048);
// ********** End Class USOTS_SkillTreeDefinition Property Definitions *****************************
UObject* (*const Z_Construct_UClass_USOTS_SkillTreeDefinition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_SkillTree,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_SkillTreeDefinition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_SkillTreeDefinition_Statics::ClassParams = {
	&USOTS_SkillTreeDefinition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USOTS_SkillTreeDefinition_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_SkillTreeDefinition_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_SkillTreeDefinition_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_SkillTreeDefinition_Statics::Class_MetaDataParams)
};
void USOTS_SkillTreeDefinition::StaticRegisterNativesUSOTS_SkillTreeDefinition()
{
	UClass* Class = USOTS_SkillTreeDefinition::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USOTS_SkillTreeDefinition_Statics::Funcs));
}
UClass* Z_Construct_UClass_USOTS_SkillTreeDefinition()
{
	if (!Z_Registration_Info_UClass_USOTS_SkillTreeDefinition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_SkillTreeDefinition.OuterSingleton, Z_Construct_UClass_USOTS_SkillTreeDefinition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_SkillTreeDefinition.OuterSingleton;
}
USOTS_SkillTreeDefinition::USOTS_SkillTreeDefinition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_SkillTreeDefinition);
USOTS_SkillTreeDefinition::~USOTS_SkillTreeDefinition() {}
// ********** End Class USOTS_SkillTreeDefinition **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeDefinition_h__Script_SOTS_SkillTree_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_SkillTreeDefinition, USOTS_SkillTreeDefinition::StaticClass, TEXT("USOTS_SkillTreeDefinition"), &Z_Registration_Info_UClass_USOTS_SkillTreeDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_SkillTreeDefinition), 3944755057U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeDefinition_h__Script_SOTS_SkillTree_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeDefinition_h__Script_SOTS_SkillTree_731368582{
	TEXT("/Script/SOTS_SkillTree"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeDefinition_h__Script_SOTS_SkillTree_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_SkillTree_Source_SOTS_SkillTree_Public_SOTS_SkillTreeDefinition_h__Script_SOTS_SkillTree_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
