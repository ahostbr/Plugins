// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interfaces/SOTS_AbilityInterfaces.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_AbilityInterfaces() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_UBPI_SOTS_InventoryAccess();
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_UBPI_SOTS_InventoryAccess_NoRegister();
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_UBPI_SOTS_SkillTreeAccess();
SOTS_GAS_PLUGIN_API UClass* Z_Construct_UClass_UBPI_SOTS_SkillTreeAccess_NoRegister();
UPackage* Z_Construct_UPackage__Script_SOTS_GAS_Plugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UBPI_SOTS_InventoryAccess Function ConsumeInventoryItemsByTags *******
struct BPI_SOTS_InventoryAccess_eventConsumeInventoryItemsByTags_Parms
{
	FGameplayTagContainer ItemTags;
	int32 Count;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	BPI_SOTS_InventoryAccess_eventConsumeInventoryItemsByTags_Parms()
		: ReturnValue(false)
	{
	}
};
bool IBPI_SOTS_InventoryAccess::ConsumeInventoryItemsByTags(FGameplayTagContainer const& ItemTags, int32 Count)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ConsumeInventoryItemsByTags instead.");
	BPI_SOTS_InventoryAccess_eventConsumeInventoryItemsByTags_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UBPI_SOTS_InventoryAccess_ConsumeInventoryItemsByTags = FName(TEXT("ConsumeInventoryItemsByTags"));
bool IBPI_SOTS_InventoryAccess::Execute_ConsumeInventoryItemsByTags(UObject* O, FGameplayTagContainer const& ItemTags, int32 Count)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UBPI_SOTS_InventoryAccess::StaticClass()));
	BPI_SOTS_InventoryAccess_eventConsumeInventoryItemsByTags_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UBPI_SOTS_InventoryAccess_ConsumeInventoryItemsByTags);
	if (Func)
	{
		Parms.ItemTags=std::move(ItemTags);
		Parms.Count=std::move(Count);
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IBPI_SOTS_InventoryAccess*)(O->GetNativeInterfaceAddress(UBPI_SOTS_InventoryAccess::StaticClass())))
	{
		Parms.ReturnValue = I->ConsumeInventoryItemsByTags_Implementation(ItemTags,Count);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UBPI_SOTS_InventoryAccess_ConsumeInventoryItemsByTags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS Inventory" },
		{ "ModuleRelativePath", "Public/Interfaces/SOTS_AbilityInterfaces.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ConsumeInventoryItemsByTags constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemTags;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ConsumeInventoryItemsByTags constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ConsumeInventoryItemsByTags Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBPI_SOTS_InventoryAccess_ConsumeInventoryItemsByTags_Statics::NewProp_ItemTags = { "ItemTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BPI_SOTS_InventoryAccess_eventConsumeInventoryItemsByTags_Parms, ItemTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemTags_MetaData), NewProp_ItemTags_MetaData) }; // 3438578166
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBPI_SOTS_InventoryAccess_ConsumeInventoryItemsByTags_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BPI_SOTS_InventoryAccess_eventConsumeInventoryItemsByTags_Parms, Count), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UBPI_SOTS_InventoryAccess_ConsumeInventoryItemsByTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BPI_SOTS_InventoryAccess_eventConsumeInventoryItemsByTags_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBPI_SOTS_InventoryAccess_ConsumeInventoryItemsByTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BPI_SOTS_InventoryAccess_eventConsumeInventoryItemsByTags_Parms), &Z_Construct_UFunction_UBPI_SOTS_InventoryAccess_ConsumeInventoryItemsByTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPI_SOTS_InventoryAccess_ConsumeInventoryItemsByTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPI_SOTS_InventoryAccess_ConsumeInventoryItemsByTags_Statics::NewProp_ItemTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPI_SOTS_InventoryAccess_ConsumeInventoryItemsByTags_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPI_SOTS_InventoryAccess_ConsumeInventoryItemsByTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_SOTS_InventoryAccess_ConsumeInventoryItemsByTags_Statics::PropPointers) < 2048);
// ********** End Function ConsumeInventoryItemsByTags Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPI_SOTS_InventoryAccess_ConsumeInventoryItemsByTags_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBPI_SOTS_InventoryAccess, nullptr, "ConsumeInventoryItemsByTags", 	Z_Construct_UFunction_UBPI_SOTS_InventoryAccess_ConsumeInventoryItemsByTags_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_SOTS_InventoryAccess_ConsumeInventoryItemsByTags_Statics::PropPointers), 
sizeof(BPI_SOTS_InventoryAccess_eventConsumeInventoryItemsByTags_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_SOTS_InventoryAccess_ConsumeInventoryItemsByTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBPI_SOTS_InventoryAccess_ConsumeInventoryItemsByTags_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BPI_SOTS_InventoryAccess_eventConsumeInventoryItemsByTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBPI_SOTS_InventoryAccess_ConsumeInventoryItemsByTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBPI_SOTS_InventoryAccess_ConsumeInventoryItemsByTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IBPI_SOTS_InventoryAccess::execConsumeInventoryItemsByTags)
{
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_ItemTags);
	P_GET_PROPERTY(FIntProperty,Z_Param_Count);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ConsumeInventoryItemsByTags_Implementation(Z_Param_Out_ItemTags,Z_Param_Count);
	P_NATIVE_END;
}
// ********** End Interface UBPI_SOTS_InventoryAccess Function ConsumeInventoryItemsByTags *********

// ********** Begin Interface UBPI_SOTS_InventoryAccess Function GetInventoryItemCountByTags *******
struct BPI_SOTS_InventoryAccess_eventGetInventoryItemCountByTags_Parms
{
	FGameplayTagContainer ItemTags;
	int32 ReturnValue;

	/** Constructor, initializes return property only **/
	BPI_SOTS_InventoryAccess_eventGetInventoryItemCountByTags_Parms()
		: ReturnValue(0)
	{
	}
};
int32 IBPI_SOTS_InventoryAccess::GetInventoryItemCountByTags(FGameplayTagContainer const& ItemTags) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetInventoryItemCountByTags instead.");
	BPI_SOTS_InventoryAccess_eventGetInventoryItemCountByTags_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UBPI_SOTS_InventoryAccess_GetInventoryItemCountByTags = FName(TEXT("GetInventoryItemCountByTags"));
int32 IBPI_SOTS_InventoryAccess::Execute_GetInventoryItemCountByTags(const UObject* O, FGameplayTagContainer const& ItemTags)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UBPI_SOTS_InventoryAccess::StaticClass()));
	BPI_SOTS_InventoryAccess_eventGetInventoryItemCountByTags_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UBPI_SOTS_InventoryAccess_GetInventoryItemCountByTags);
	if (Func)
	{
		Parms.ItemTags=std::move(ItemTags);
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IBPI_SOTS_InventoryAccess*)(O->GetNativeInterfaceAddress(UBPI_SOTS_InventoryAccess::StaticClass())))
	{
		Parms.ReturnValue = I->GetInventoryItemCountByTags_Implementation(ItemTags);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UBPI_SOTS_InventoryAccess_GetInventoryItemCountByTags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS Inventory" },
		{ "ModuleRelativePath", "Public/Interfaces/SOTS_AbilityInterfaces.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetInventoryItemCountByTags constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemTags;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetInventoryItemCountByTags constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetInventoryItemCountByTags Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBPI_SOTS_InventoryAccess_GetInventoryItemCountByTags_Statics::NewProp_ItemTags = { "ItemTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BPI_SOTS_InventoryAccess_eventGetInventoryItemCountByTags_Parms, ItemTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemTags_MetaData), NewProp_ItemTags_MetaData) }; // 3438578166
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBPI_SOTS_InventoryAccess_GetInventoryItemCountByTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BPI_SOTS_InventoryAccess_eventGetInventoryItemCountByTags_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPI_SOTS_InventoryAccess_GetInventoryItemCountByTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPI_SOTS_InventoryAccess_GetInventoryItemCountByTags_Statics::NewProp_ItemTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPI_SOTS_InventoryAccess_GetInventoryItemCountByTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_SOTS_InventoryAccess_GetInventoryItemCountByTags_Statics::PropPointers) < 2048);
// ********** End Function GetInventoryItemCountByTags Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPI_SOTS_InventoryAccess_GetInventoryItemCountByTags_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBPI_SOTS_InventoryAccess, nullptr, "GetInventoryItemCountByTags", 	Z_Construct_UFunction_UBPI_SOTS_InventoryAccess_GetInventoryItemCountByTags_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_SOTS_InventoryAccess_GetInventoryItemCountByTags_Statics::PropPointers), 
sizeof(BPI_SOTS_InventoryAccess_eventGetInventoryItemCountByTags_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_SOTS_InventoryAccess_GetInventoryItemCountByTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBPI_SOTS_InventoryAccess_GetInventoryItemCountByTags_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BPI_SOTS_InventoryAccess_eventGetInventoryItemCountByTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBPI_SOTS_InventoryAccess_GetInventoryItemCountByTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBPI_SOTS_InventoryAccess_GetInventoryItemCountByTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IBPI_SOTS_InventoryAccess::execGetInventoryItemCountByTags)
{
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_ItemTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetInventoryItemCountByTags_Implementation(Z_Param_Out_ItemTags);
	P_NATIVE_END;
}
// ********** End Interface UBPI_SOTS_InventoryAccess Function GetInventoryItemCountByTags *********

// ********** Begin Interface UBPI_SOTS_InventoryAccess ********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UBPI_SOTS_InventoryAccess;
UClass* UBPI_SOTS_InventoryAccess::GetPrivateStaticClass()
{
	using TClass = UBPI_SOTS_InventoryAccess;
	if (!Z_Registration_Info_UClass_UBPI_SOTS_InventoryAccess.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BPI_SOTS_InventoryAccess"),
			Z_Registration_Info_UClass_UBPI_SOTS_InventoryAccess.InnerSingleton,
			StaticRegisterNativesUBPI_SOTS_InventoryAccess,
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
	return Z_Registration_Info_UClass_UBPI_SOTS_InventoryAccess.InnerSingleton;
}
UClass* Z_Construct_UClass_UBPI_SOTS_InventoryAccess_NoRegister()
{
	return UBPI_SOTS_InventoryAccess::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBPI_SOTS_InventoryAccess_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Interfaces/SOTS_AbilityInterfaces.h" },
	};
#endif // WITH_METADATA

// ********** Begin Interface UBPI_SOTS_InventoryAccess constinit property declarations ************
// ********** End Interface UBPI_SOTS_InventoryAccess constinit property declarations **************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ConsumeInventoryItemsByTags"), .Pointer = &IBPI_SOTS_InventoryAccess::execConsumeInventoryItemsByTags },
		{ .NameUTF8 = UTF8TEXT("GetInventoryItemCountByTags"), .Pointer = &IBPI_SOTS_InventoryAccess::execGetInventoryItemCountByTags },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBPI_SOTS_InventoryAccess_ConsumeInventoryItemsByTags, "ConsumeInventoryItemsByTags" }, // 4262304772
		{ &Z_Construct_UFunction_UBPI_SOTS_InventoryAccess_GetInventoryItemCountByTags, "GetInventoryItemCountByTags" }, // 3068938342
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBPI_SOTS_InventoryAccess>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UBPI_SOTS_InventoryAccess_Statics
UObject* (*const Z_Construct_UClass_UBPI_SOTS_InventoryAccess_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_GAS_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBPI_SOTS_InventoryAccess_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBPI_SOTS_InventoryAccess_Statics::ClassParams = {
	&UBPI_SOTS_InventoryAccess::StaticClass,
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
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBPI_SOTS_InventoryAccess_Statics::Class_MetaDataParams), Z_Construct_UClass_UBPI_SOTS_InventoryAccess_Statics::Class_MetaDataParams)
};
void UBPI_SOTS_InventoryAccess::StaticRegisterNativesUBPI_SOTS_InventoryAccess()
{
	UClass* Class = UBPI_SOTS_InventoryAccess::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UBPI_SOTS_InventoryAccess_Statics::Funcs));
}
UClass* Z_Construct_UClass_UBPI_SOTS_InventoryAccess()
{
	if (!Z_Registration_Info_UClass_UBPI_SOTS_InventoryAccess.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBPI_SOTS_InventoryAccess.OuterSingleton, Z_Construct_UClass_UBPI_SOTS_InventoryAccess_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBPI_SOTS_InventoryAccess.OuterSingleton;
}
UBPI_SOTS_InventoryAccess::UBPI_SOTS_InventoryAccess(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBPI_SOTS_InventoryAccess);
// ********** End Interface UBPI_SOTS_InventoryAccess **********************************************

// ********** Begin Interface UBPI_SOTS_SkillTreeAccess Function GetSkillLevel *********************
struct BPI_SOTS_SkillTreeAccess_eventGetSkillLevel_Parms
{
	FGameplayTag SkillTag;
	int32 ReturnValue;

	/** Constructor, initializes return property only **/
	BPI_SOTS_SkillTreeAccess_eventGetSkillLevel_Parms()
		: ReturnValue(0)
	{
	}
};
int32 IBPI_SOTS_SkillTreeAccess::GetSkillLevel(FGameplayTag SkillTag) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetSkillLevel instead.");
	BPI_SOTS_SkillTreeAccess_eventGetSkillLevel_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UBPI_SOTS_SkillTreeAccess_GetSkillLevel = FName(TEXT("GetSkillLevel"));
int32 IBPI_SOTS_SkillTreeAccess::Execute_GetSkillLevel(const UObject* O, FGameplayTag SkillTag)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UBPI_SOTS_SkillTreeAccess::StaticClass()));
	BPI_SOTS_SkillTreeAccess_eventGetSkillLevel_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UBPI_SOTS_SkillTreeAccess_GetSkillLevel);
	if (Func)
	{
		Parms.SkillTag=std::move(SkillTag);
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IBPI_SOTS_SkillTreeAccess*)(O->GetNativeInterfaceAddress(UBPI_SOTS_SkillTreeAccess::StaticClass())))
	{
		Parms.ReturnValue = I->GetSkillLevel_Implementation(SkillTag);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UBPI_SOTS_SkillTreeAccess_GetSkillLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS SkillTree" },
		{ "ModuleRelativePath", "Public/Interfaces/SOTS_AbilityInterfaces.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSkillLevel constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SkillTag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSkillLevel constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSkillLevel Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBPI_SOTS_SkillTreeAccess_GetSkillLevel_Statics::NewProp_SkillTag = { "SkillTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BPI_SOTS_SkillTreeAccess_eventGetSkillLevel_Parms, SkillTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBPI_SOTS_SkillTreeAccess_GetSkillLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BPI_SOTS_SkillTreeAccess_eventGetSkillLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPI_SOTS_SkillTreeAccess_GetSkillLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPI_SOTS_SkillTreeAccess_GetSkillLevel_Statics::NewProp_SkillTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPI_SOTS_SkillTreeAccess_GetSkillLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_SOTS_SkillTreeAccess_GetSkillLevel_Statics::PropPointers) < 2048);
// ********** End Function GetSkillLevel Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPI_SOTS_SkillTreeAccess_GetSkillLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBPI_SOTS_SkillTreeAccess, nullptr, "GetSkillLevel", 	Z_Construct_UFunction_UBPI_SOTS_SkillTreeAccess_GetSkillLevel_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_SOTS_SkillTreeAccess_GetSkillLevel_Statics::PropPointers), 
sizeof(BPI_SOTS_SkillTreeAccess_eventGetSkillLevel_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_SOTS_SkillTreeAccess_GetSkillLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBPI_SOTS_SkillTreeAccess_GetSkillLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BPI_SOTS_SkillTreeAccess_eventGetSkillLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBPI_SOTS_SkillTreeAccess_GetSkillLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBPI_SOTS_SkillTreeAccess_GetSkillLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IBPI_SOTS_SkillTreeAccess::execGetSkillLevel)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_SkillTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetSkillLevel_Implementation(Z_Param_SkillTag);
	P_NATIVE_END;
}
// ********** End Interface UBPI_SOTS_SkillTreeAccess Function GetSkillLevel ***********************

// ********** Begin Interface UBPI_SOTS_SkillTreeAccess Function IsSkillUnlocked *******************
struct BPI_SOTS_SkillTreeAccess_eventIsSkillUnlocked_Parms
{
	FGameplayTag SkillTag;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	BPI_SOTS_SkillTreeAccess_eventIsSkillUnlocked_Parms()
		: ReturnValue(false)
	{
	}
};
bool IBPI_SOTS_SkillTreeAccess::IsSkillUnlocked(FGameplayTag SkillTag) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsSkillUnlocked instead.");
	BPI_SOTS_SkillTreeAccess_eventIsSkillUnlocked_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UBPI_SOTS_SkillTreeAccess_IsSkillUnlocked = FName(TEXT("IsSkillUnlocked"));
bool IBPI_SOTS_SkillTreeAccess::Execute_IsSkillUnlocked(const UObject* O, FGameplayTag SkillTag)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UBPI_SOTS_SkillTreeAccess::StaticClass()));
	BPI_SOTS_SkillTreeAccess_eventIsSkillUnlocked_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UBPI_SOTS_SkillTreeAccess_IsSkillUnlocked);
	if (Func)
	{
		Parms.SkillTag=std::move(SkillTag);
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IBPI_SOTS_SkillTreeAccess*)(O->GetNativeInterfaceAddress(UBPI_SOTS_SkillTreeAccess::StaticClass())))
	{
		Parms.ReturnValue = I->IsSkillUnlocked_Implementation(SkillTag);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UBPI_SOTS_SkillTreeAccess_IsSkillUnlocked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS SkillTree" },
		{ "ModuleRelativePath", "Public/Interfaces/SOTS_AbilityInterfaces.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsSkillUnlocked constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SkillTag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsSkillUnlocked constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsSkillUnlocked Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBPI_SOTS_SkillTreeAccess_IsSkillUnlocked_Statics::NewProp_SkillTag = { "SkillTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BPI_SOTS_SkillTreeAccess_eventIsSkillUnlocked_Parms, SkillTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
void Z_Construct_UFunction_UBPI_SOTS_SkillTreeAccess_IsSkillUnlocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BPI_SOTS_SkillTreeAccess_eventIsSkillUnlocked_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBPI_SOTS_SkillTreeAccess_IsSkillUnlocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BPI_SOTS_SkillTreeAccess_eventIsSkillUnlocked_Parms), &Z_Construct_UFunction_UBPI_SOTS_SkillTreeAccess_IsSkillUnlocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPI_SOTS_SkillTreeAccess_IsSkillUnlocked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPI_SOTS_SkillTreeAccess_IsSkillUnlocked_Statics::NewProp_SkillTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPI_SOTS_SkillTreeAccess_IsSkillUnlocked_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_SOTS_SkillTreeAccess_IsSkillUnlocked_Statics::PropPointers) < 2048);
// ********** End Function IsSkillUnlocked Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPI_SOTS_SkillTreeAccess_IsSkillUnlocked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBPI_SOTS_SkillTreeAccess, nullptr, "IsSkillUnlocked", 	Z_Construct_UFunction_UBPI_SOTS_SkillTreeAccess_IsSkillUnlocked_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_SOTS_SkillTreeAccess_IsSkillUnlocked_Statics::PropPointers), 
sizeof(BPI_SOTS_SkillTreeAccess_eventIsSkillUnlocked_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_SOTS_SkillTreeAccess_IsSkillUnlocked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBPI_SOTS_SkillTreeAccess_IsSkillUnlocked_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BPI_SOTS_SkillTreeAccess_eventIsSkillUnlocked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBPI_SOTS_SkillTreeAccess_IsSkillUnlocked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBPI_SOTS_SkillTreeAccess_IsSkillUnlocked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IBPI_SOTS_SkillTreeAccess::execIsSkillUnlocked)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_SkillTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSkillUnlocked_Implementation(Z_Param_SkillTag);
	P_NATIVE_END;
}
// ********** End Interface UBPI_SOTS_SkillTreeAccess Function IsSkillUnlocked *********************

// ********** Begin Interface UBPI_SOTS_SkillTreeAccess ********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UBPI_SOTS_SkillTreeAccess;
UClass* UBPI_SOTS_SkillTreeAccess::GetPrivateStaticClass()
{
	using TClass = UBPI_SOTS_SkillTreeAccess;
	if (!Z_Registration_Info_UClass_UBPI_SOTS_SkillTreeAccess.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BPI_SOTS_SkillTreeAccess"),
			Z_Registration_Info_UClass_UBPI_SOTS_SkillTreeAccess.InnerSingleton,
			StaticRegisterNativesUBPI_SOTS_SkillTreeAccess,
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
	return Z_Registration_Info_UClass_UBPI_SOTS_SkillTreeAccess.InnerSingleton;
}
UClass* Z_Construct_UClass_UBPI_SOTS_SkillTreeAccess_NoRegister()
{
	return UBPI_SOTS_SkillTreeAccess::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBPI_SOTS_SkillTreeAccess_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Interfaces/SOTS_AbilityInterfaces.h" },
	};
#endif // WITH_METADATA

// ********** Begin Interface UBPI_SOTS_SkillTreeAccess constinit property declarations ************
// ********** End Interface UBPI_SOTS_SkillTreeAccess constinit property declarations **************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetSkillLevel"), .Pointer = &IBPI_SOTS_SkillTreeAccess::execGetSkillLevel },
		{ .NameUTF8 = UTF8TEXT("IsSkillUnlocked"), .Pointer = &IBPI_SOTS_SkillTreeAccess::execIsSkillUnlocked },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBPI_SOTS_SkillTreeAccess_GetSkillLevel, "GetSkillLevel" }, // 202255394
		{ &Z_Construct_UFunction_UBPI_SOTS_SkillTreeAccess_IsSkillUnlocked, "IsSkillUnlocked" }, // 793313900
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBPI_SOTS_SkillTreeAccess>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UBPI_SOTS_SkillTreeAccess_Statics
UObject* (*const Z_Construct_UClass_UBPI_SOTS_SkillTreeAccess_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_GAS_Plugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBPI_SOTS_SkillTreeAccess_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBPI_SOTS_SkillTreeAccess_Statics::ClassParams = {
	&UBPI_SOTS_SkillTreeAccess::StaticClass,
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
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBPI_SOTS_SkillTreeAccess_Statics::Class_MetaDataParams), Z_Construct_UClass_UBPI_SOTS_SkillTreeAccess_Statics::Class_MetaDataParams)
};
void UBPI_SOTS_SkillTreeAccess::StaticRegisterNativesUBPI_SOTS_SkillTreeAccess()
{
	UClass* Class = UBPI_SOTS_SkillTreeAccess::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UBPI_SOTS_SkillTreeAccess_Statics::Funcs));
}
UClass* Z_Construct_UClass_UBPI_SOTS_SkillTreeAccess()
{
	if (!Z_Registration_Info_UClass_UBPI_SOTS_SkillTreeAccess.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBPI_SOTS_SkillTreeAccess.OuterSingleton, Z_Construct_UClass_UBPI_SOTS_SkillTreeAccess_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBPI_SOTS_SkillTreeAccess.OuterSingleton;
}
UBPI_SOTS_SkillTreeAccess::UBPI_SOTS_SkillTreeAccess(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBPI_SOTS_SkillTreeAccess);
// ********** End Interface UBPI_SOTS_SkillTreeAccess **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Interfaces_SOTS_AbilityInterfaces_h__Script_SOTS_GAS_Plugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBPI_SOTS_InventoryAccess, UBPI_SOTS_InventoryAccess::StaticClass, TEXT("UBPI_SOTS_InventoryAccess"), &Z_Registration_Info_UClass_UBPI_SOTS_InventoryAccess, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBPI_SOTS_InventoryAccess), 2128187934U) },
		{ Z_Construct_UClass_UBPI_SOTS_SkillTreeAccess, UBPI_SOTS_SkillTreeAccess::StaticClass, TEXT("UBPI_SOTS_SkillTreeAccess"), &Z_Registration_Info_UClass_UBPI_SOTS_SkillTreeAccess, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBPI_SOTS_SkillTreeAccess), 953136608U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Interfaces_SOTS_AbilityInterfaces_h__Script_SOTS_GAS_Plugin_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Interfaces_SOTS_AbilityInterfaces_h__Script_SOTS_GAS_Plugin_1566464386{
	TEXT("/Script/SOTS_GAS_Plugin"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Interfaces_SOTS_AbilityInterfaces_h__Script_SOTS_GAS_Plugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_GAS_Plugin_Source_SOTS_GAS_Plugin_Public_Interfaces_SOTS_AbilityInterfaces_h__Script_SOTS_GAS_Plugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
