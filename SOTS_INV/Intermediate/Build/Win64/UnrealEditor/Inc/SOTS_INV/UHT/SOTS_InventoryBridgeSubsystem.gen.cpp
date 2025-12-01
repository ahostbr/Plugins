// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTS_InventoryBridgeSubsystem.h"
#include "Engine/GameInstance.h"
#include "SOTS_ProfileTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSOTS_InventoryBridgeSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
SOTS_INV_API UClass* Z_Construct_UClass_USOTS_InventoryBridgeSubsystem();
SOTS_INV_API UClass* Z_Construct_UClass_USOTS_InventoryBridgeSubsystem_NoRegister();
SOTS_PROFILESHARED_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_ItemSlotBinding();
SOTS_PROFILESHARED_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_SerializedItem();
UPackage* Z_Construct_UPackage__Script_SOTS_INV();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USOTS_InventoryBridgeSubsystem Function AddCarriedItemById ***************
struct Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_AddCarriedItemById_Statics
{
	struct SOTS_InventoryBridgeSubsystem_eventAddCarriedItemById_Parms
	{
		FName ItemId;
		int32 Quantity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Inventory" },
		{ "ModuleRelativePath", "Public/SOTS_InventoryBridgeSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddCarriedItemById constinit property declarations ********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddCarriedItemById constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddCarriedItemById Property Definitions *******************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_AddCarriedItemById_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_InventoryBridgeSubsystem_eventAddCarriedItemById_Parms, ItemId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_AddCarriedItemById_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_InventoryBridgeSubsystem_eventAddCarriedItemById_Parms, Quantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_AddCarriedItemById_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_AddCarriedItemById_Statics::NewProp_ItemId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_AddCarriedItemById_Statics::NewProp_Quantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_AddCarriedItemById_Statics::PropPointers) < 2048);
// ********** End Function AddCarriedItemById Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_AddCarriedItemById_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_InventoryBridgeSubsystem, nullptr, "AddCarriedItemById", 	Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_AddCarriedItemById_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_AddCarriedItemById_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_AddCarriedItemById_Statics::SOTS_InventoryBridgeSubsystem_eventAddCarriedItemById_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_AddCarriedItemById_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_AddCarriedItemById_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_AddCarriedItemById_Statics::SOTS_InventoryBridgeSubsystem_eventAddCarriedItemById_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_AddCarriedItemById()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_AddCarriedItemById_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_InventoryBridgeSubsystem::execAddCarriedItemById)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ItemId);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddCarriedItemById(Z_Param_ItemId,Z_Param_Quantity);
	P_NATIVE_END;
}
// ********** End Class USOTS_InventoryBridgeSubsystem Function AddCarriedItemById *****************

// ********** Begin Class USOTS_InventoryBridgeSubsystem Function AddStashItemById *****************
struct Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_AddStashItemById_Statics
{
	struct SOTS_InventoryBridgeSubsystem_eventAddStashItemById_Parms
	{
		FName ItemId;
		int32 Quantity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Inventory" },
		{ "ModuleRelativePath", "Public/SOTS_InventoryBridgeSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddStashItemById constinit property declarations **********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddStashItemById constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddStashItemById Property Definitions *********************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_AddStashItemById_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_InventoryBridgeSubsystem_eventAddStashItemById_Parms, ItemId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_AddStashItemById_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_InventoryBridgeSubsystem_eventAddStashItemById_Parms, Quantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_AddStashItemById_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_AddStashItemById_Statics::NewProp_ItemId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_AddStashItemById_Statics::NewProp_Quantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_AddStashItemById_Statics::PropPointers) < 2048);
// ********** End Function AddStashItemById Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_AddStashItemById_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_InventoryBridgeSubsystem, nullptr, "AddStashItemById", 	Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_AddStashItemById_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_AddStashItemById_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_AddStashItemById_Statics::SOTS_InventoryBridgeSubsystem_eventAddStashItemById_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_AddStashItemById_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_AddStashItemById_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_AddStashItemById_Statics::SOTS_InventoryBridgeSubsystem_eventAddStashItemById_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_AddStashItemById()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_AddStashItemById_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_InventoryBridgeSubsystem::execAddStashItemById)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ItemId);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddStashItemById(Z_Param_ItemId,Z_Param_Quantity);
	P_NATIVE_END;
}
// ********** End Class USOTS_InventoryBridgeSubsystem Function AddStashItemById *******************

// ********** Begin Class USOTS_InventoryBridgeSubsystem Function ClearAllInventory ****************
struct Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_ClearAllInventory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Inventory" },
		{ "ModuleRelativePath", "Public/SOTS_InventoryBridgeSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ClearAllInventory constinit property declarations *********************
// ********** End Function ClearAllInventory constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_ClearAllInventory_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_InventoryBridgeSubsystem, nullptr, "ClearAllInventory", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_ClearAllInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_ClearAllInventory_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_ClearAllInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_ClearAllInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_InventoryBridgeSubsystem::execClearAllInventory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearAllInventory();
	P_NATIVE_END;
}
// ********** End Class USOTS_InventoryBridgeSubsystem Function ClearAllInventory ******************

// ********** Begin Class USOTS_InventoryBridgeSubsystem Function ClearQuickSlots ******************
struct Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_ClearQuickSlots_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Inventory" },
		{ "ModuleRelativePath", "Public/SOTS_InventoryBridgeSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ClearQuickSlots constinit property declarations ***********************
// ********** End Function ClearQuickSlots constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_ClearQuickSlots_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_InventoryBridgeSubsystem, nullptr, "ClearQuickSlots", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_ClearQuickSlots_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_ClearQuickSlots_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_ClearQuickSlots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_ClearQuickSlots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_InventoryBridgeSubsystem::execClearQuickSlots)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearQuickSlots();
	P_NATIVE_END;
}
// ********** End Class USOTS_InventoryBridgeSubsystem Function ClearQuickSlots ********************

// ********** Begin Class USOTS_InventoryBridgeSubsystem Function SetQuickSlotItem *****************
struct Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_SetQuickSlotItem_Statics
{
	struct SOTS_InventoryBridgeSubsystem_eventSetQuickSlotItem_Parms
	{
		int32 SlotIndex;
		FName ItemId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SOTS|Inventory" },
		{ "ModuleRelativePath", "Public/SOTS_InventoryBridgeSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetQuickSlotItem constinit property declarations **********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetQuickSlotItem constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetQuickSlotItem Property Definitions *********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_SetQuickSlotItem_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_InventoryBridgeSubsystem_eventSetQuickSlotItem_Parms, SlotIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_SetQuickSlotItem_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SOTS_InventoryBridgeSubsystem_eventSetQuickSlotItem_Parms, ItemId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_SetQuickSlotItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_SetQuickSlotItem_Statics::NewProp_SlotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_SetQuickSlotItem_Statics::NewProp_ItemId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_SetQuickSlotItem_Statics::PropPointers) < 2048);
// ********** End Function SetQuickSlotItem Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_SetQuickSlotItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USOTS_InventoryBridgeSubsystem, nullptr, "SetQuickSlotItem", 	Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_SetQuickSlotItem_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_SetQuickSlotItem_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_SetQuickSlotItem_Statics::SOTS_InventoryBridgeSubsystem_eventSetQuickSlotItem_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_SetQuickSlotItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_SetQuickSlotItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_SetQuickSlotItem_Statics::SOTS_InventoryBridgeSubsystem_eventSetQuickSlotItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_SetQuickSlotItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_SetQuickSlotItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USOTS_InventoryBridgeSubsystem::execSetQuickSlotItem)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
	P_GET_PROPERTY(FNameProperty,Z_Param_ItemId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetQuickSlotItem(Z_Param_SlotIndex,Z_Param_ItemId);
	P_NATIVE_END;
}
// ********** End Class USOTS_InventoryBridgeSubsystem Function SetQuickSlotItem *******************

// ********** Begin Class USOTS_InventoryBridgeSubsystem *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USOTS_InventoryBridgeSubsystem;
UClass* USOTS_InventoryBridgeSubsystem::GetPrivateStaticClass()
{
	using TClass = USOTS_InventoryBridgeSubsystem;
	if (!Z_Registration_Info_UClass_USOTS_InventoryBridgeSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SOTS_InventoryBridgeSubsystem"),
			Z_Registration_Info_UClass_USOTS_InventoryBridgeSubsystem.InnerSingleton,
			StaticRegisterNativesUSOTS_InventoryBridgeSubsystem,
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
	return Z_Registration_Info_UClass_USOTS_InventoryBridgeSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_USOTS_InventoryBridgeSubsystem_NoRegister()
{
	return USOTS_InventoryBridgeSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USOTS_InventoryBridgeSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SOTS_InventoryBridgeSubsystem.h" },
		{ "ModuleRelativePath", "Public/SOTS_InventoryBridgeSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedCarriedItems_MetaData[] = {
		{ "ModuleRelativePath", "Public/SOTS_InventoryBridgeSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedStashItems_MetaData[] = {
		{ "ModuleRelativePath", "Public/SOTS_InventoryBridgeSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedQuickSlots_MetaData[] = {
		{ "ModuleRelativePath", "Public/SOTS_InventoryBridgeSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USOTS_InventoryBridgeSubsystem constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedCarriedItems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedCarriedItems;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedStashItems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedStashItems;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedQuickSlots_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedQuickSlots;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USOTS_InventoryBridgeSubsystem constinit property declarations *************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddCarriedItemById"), .Pointer = &USOTS_InventoryBridgeSubsystem::execAddCarriedItemById },
		{ .NameUTF8 = UTF8TEXT("AddStashItemById"), .Pointer = &USOTS_InventoryBridgeSubsystem::execAddStashItemById },
		{ .NameUTF8 = UTF8TEXT("ClearAllInventory"), .Pointer = &USOTS_InventoryBridgeSubsystem::execClearAllInventory },
		{ .NameUTF8 = UTF8TEXT("ClearQuickSlots"), .Pointer = &USOTS_InventoryBridgeSubsystem::execClearQuickSlots },
		{ .NameUTF8 = UTF8TEXT("SetQuickSlotItem"), .Pointer = &USOTS_InventoryBridgeSubsystem::execSetQuickSlotItem },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_AddCarriedItemById, "AddCarriedItemById" }, // 3497774043
		{ &Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_AddStashItemById, "AddStashItemById" }, // 1785745723
		{ &Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_ClearAllInventory, "ClearAllInventory" }, // 1230186049
		{ &Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_ClearQuickSlots, "ClearQuickSlots" }, // 2397015033
		{ &Z_Construct_UFunction_USOTS_InventoryBridgeSubsystem_SetQuickSlotItem, "SetQuickSlotItem" }, // 213562964
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOTS_InventoryBridgeSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USOTS_InventoryBridgeSubsystem_Statics

// ********** Begin Class USOTS_InventoryBridgeSubsystem Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_InventoryBridgeSubsystem_Statics::NewProp_CachedCarriedItems_Inner = { "CachedCarriedItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSOTS_SerializedItem, METADATA_PARAMS(0, nullptr) }; // 767104650
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USOTS_InventoryBridgeSubsystem_Statics::NewProp_CachedCarriedItems = { "CachedCarriedItems", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_InventoryBridgeSubsystem, CachedCarriedItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedCarriedItems_MetaData), NewProp_CachedCarriedItems_MetaData) }; // 767104650
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_InventoryBridgeSubsystem_Statics::NewProp_CachedStashItems_Inner = { "CachedStashItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSOTS_SerializedItem, METADATA_PARAMS(0, nullptr) }; // 767104650
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USOTS_InventoryBridgeSubsystem_Statics::NewProp_CachedStashItems = { "CachedStashItems", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_InventoryBridgeSubsystem, CachedStashItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedStashItems_MetaData), NewProp_CachedStashItems_MetaData) }; // 767104650
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USOTS_InventoryBridgeSubsystem_Statics::NewProp_CachedQuickSlots_Inner = { "CachedQuickSlots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSOTS_ItemSlotBinding, METADATA_PARAMS(0, nullptr) }; // 3298278532
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USOTS_InventoryBridgeSubsystem_Statics::NewProp_CachedQuickSlots = { "CachedQuickSlots", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USOTS_InventoryBridgeSubsystem, CachedQuickSlots), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedQuickSlots_MetaData), NewProp_CachedQuickSlots_MetaData) }; // 3298278532
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USOTS_InventoryBridgeSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_InventoryBridgeSubsystem_Statics::NewProp_CachedCarriedItems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_InventoryBridgeSubsystem_Statics::NewProp_CachedCarriedItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_InventoryBridgeSubsystem_Statics::NewProp_CachedStashItems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_InventoryBridgeSubsystem_Statics::NewProp_CachedStashItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_InventoryBridgeSubsystem_Statics::NewProp_CachedQuickSlots_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USOTS_InventoryBridgeSubsystem_Statics::NewProp_CachedQuickSlots,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_InventoryBridgeSubsystem_Statics::PropPointers) < 2048);
// ********** End Class USOTS_InventoryBridgeSubsystem Property Definitions ************************
UObject* (*const Z_Construct_UClass_USOTS_InventoryBridgeSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_INV,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_InventoryBridgeSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOTS_InventoryBridgeSubsystem_Statics::ClassParams = {
	&USOTS_InventoryBridgeSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USOTS_InventoryBridgeSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_InventoryBridgeSubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOTS_InventoryBridgeSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USOTS_InventoryBridgeSubsystem_Statics::Class_MetaDataParams)
};
void USOTS_InventoryBridgeSubsystem::StaticRegisterNativesUSOTS_InventoryBridgeSubsystem()
{
	UClass* Class = USOTS_InventoryBridgeSubsystem::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USOTS_InventoryBridgeSubsystem_Statics::Funcs));
}
UClass* Z_Construct_UClass_USOTS_InventoryBridgeSubsystem()
{
	if (!Z_Registration_Info_UClass_USOTS_InventoryBridgeSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOTS_InventoryBridgeSubsystem.OuterSingleton, Z_Construct_UClass_USOTS_InventoryBridgeSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOTS_InventoryBridgeSubsystem.OuterSingleton;
}
USOTS_InventoryBridgeSubsystem::USOTS_InventoryBridgeSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USOTS_InventoryBridgeSubsystem);
USOTS_InventoryBridgeSubsystem::~USOTS_InventoryBridgeSubsystem() {}
// ********** End Class USOTS_InventoryBridgeSubsystem *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_INV_Source_SOTS_INV_Public_SOTS_InventoryBridgeSubsystem_h__Script_SOTS_INV_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOTS_InventoryBridgeSubsystem, USOTS_InventoryBridgeSubsystem::StaticClass, TEXT("USOTS_InventoryBridgeSubsystem"), &Z_Registration_Info_UClass_USOTS_InventoryBridgeSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOTS_InventoryBridgeSubsystem), 56901466U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_INV_Source_SOTS_INV_Public_SOTS_InventoryBridgeSubsystem_h__Script_SOTS_INV_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_INV_Source_SOTS_INV_Public_SOTS_InventoryBridgeSubsystem_h__Script_SOTS_INV_3131600136{
	TEXT("/Script/SOTS_INV"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_INV_Source_SOTS_INV_Public_SOTS_InventoryBridgeSubsystem_h__Script_SOTS_INV_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_INV_Source_SOTS_INV_Public_SOTS_InventoryBridgeSubsystem_h__Script_SOTS_INV_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
