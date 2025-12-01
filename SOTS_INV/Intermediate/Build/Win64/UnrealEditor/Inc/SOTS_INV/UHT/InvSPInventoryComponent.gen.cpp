// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InvSPInventoryComponent.h"
#include "SOTS_ProfileTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeInvSPInventoryComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
SOTS_INV_API UClass* Z_Construct_UClass_UInvSP_InventoryComponent();
SOTS_INV_API UClass* Z_Construct_UClass_UInvSP_InventoryComponent_NoRegister();
SOTS_PROFILESHARED_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_ItemSlotBinding();
SOTS_PROFILESHARED_API UScriptStruct* Z_Construct_UScriptStruct_FSOTS_SerializedItem();
UPackage* Z_Construct_UPackage__Script_SOTS_INV();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInvSP_InventoryComponent ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UInvSP_InventoryComponent;
UClass* UInvSP_InventoryComponent::GetPrivateStaticClass()
{
	using TClass = UInvSP_InventoryComponent;
	if (!Z_Registration_Info_UClass_UInvSP_InventoryComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("InvSP_InventoryComponent"),
			Z_Registration_Info_UClass_UInvSP_InventoryComponent.InnerSingleton,
			StaticRegisterNativesUInvSP_InventoryComponent,
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
	return Z_Registration_Info_UClass_UInvSP_InventoryComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UInvSP_InventoryComponent_NoRegister()
{
	return UInvSP_InventoryComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInvSP_InventoryComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "SOTS" },
		{ "IncludePath", "InvSPInventoryComponent.h" },
		{ "ModuleRelativePath", "Public/InvSPInventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CarriedItems_MetaData[] = {
		{ "ModuleRelativePath", "Public/InvSPInventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StashItems_MetaData[] = {
		{ "ModuleRelativePath", "Public/InvSPInventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuickSlots_MetaData[] = {
		{ "ModuleRelativePath", "Public/InvSPInventoryComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UInvSP_InventoryComponent constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_CarriedItems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CarriedItems;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StashItems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StashItems;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QuickSlots_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_QuickSlots;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UInvSP_InventoryComponent constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInvSP_InventoryComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UInvSP_InventoryComponent_Statics

// ********** Begin Class UInvSP_InventoryComponent Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInvSP_InventoryComponent_Statics::NewProp_CarriedItems_Inner = { "CarriedItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSOTS_SerializedItem, METADATA_PARAMS(0, nullptr) }; // 767104650
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInvSP_InventoryComponent_Statics::NewProp_CarriedItems = { "CarriedItems", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInvSP_InventoryComponent, CarriedItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CarriedItems_MetaData), NewProp_CarriedItems_MetaData) }; // 767104650
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInvSP_InventoryComponent_Statics::NewProp_StashItems_Inner = { "StashItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSOTS_SerializedItem, METADATA_PARAMS(0, nullptr) }; // 767104650
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInvSP_InventoryComponent_Statics::NewProp_StashItems = { "StashItems", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInvSP_InventoryComponent, StashItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StashItems_MetaData), NewProp_StashItems_MetaData) }; // 767104650
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInvSP_InventoryComponent_Statics::NewProp_QuickSlots_Inner = { "QuickSlots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSOTS_ItemSlotBinding, METADATA_PARAMS(0, nullptr) }; // 3298278532
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInvSP_InventoryComponent_Statics::NewProp_QuickSlots = { "QuickSlots", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInvSP_InventoryComponent, QuickSlots), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuickSlots_MetaData), NewProp_QuickSlots_MetaData) }; // 3298278532
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInvSP_InventoryComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInvSP_InventoryComponent_Statics::NewProp_CarriedItems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInvSP_InventoryComponent_Statics::NewProp_CarriedItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInvSP_InventoryComponent_Statics::NewProp_StashItems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInvSP_InventoryComponent_Statics::NewProp_StashItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInvSP_InventoryComponent_Statics::NewProp_QuickSlots_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInvSP_InventoryComponent_Statics::NewProp_QuickSlots,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInvSP_InventoryComponent_Statics::PropPointers) < 2048);
// ********** End Class UInvSP_InventoryComponent Property Definitions *****************************
UObject* (*const Z_Construct_UClass_UInvSP_InventoryComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTS_INV,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInvSP_InventoryComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInvSP_InventoryComponent_Statics::ClassParams = {
	&UInvSP_InventoryComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInvSP_InventoryComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInvSP_InventoryComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInvSP_InventoryComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UInvSP_InventoryComponent_Statics::Class_MetaDataParams)
};
void UInvSP_InventoryComponent::StaticRegisterNativesUInvSP_InventoryComponent()
{
}
UClass* Z_Construct_UClass_UInvSP_InventoryComponent()
{
	if (!Z_Registration_Info_UClass_UInvSP_InventoryComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInvSP_InventoryComponent.OuterSingleton, Z_Construct_UClass_UInvSP_InventoryComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInvSP_InventoryComponent.OuterSingleton;
}
UInvSP_InventoryComponent::UInvSP_InventoryComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UInvSP_InventoryComponent);
UInvSP_InventoryComponent::~UInvSP_InventoryComponent() {}
// ********** End Class UInvSP_InventoryComponent **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_INV_Source_SOTS_INV_Public_InvSPInventoryComponent_h__Script_SOTS_INV_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInvSP_InventoryComponent, UInvSP_InventoryComponent::StaticClass, TEXT("UInvSP_InventoryComponent"), &Z_Registration_Info_UClass_UInvSP_InventoryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInvSP_InventoryComponent), 3921903597U) },
	};
}; // Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_INV_Source_SOTS_INV_Public_InvSPInventoryComponent_h__Script_SOTS_INV_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_INV_Source_SOTS_INV_Public_InvSPInventoryComponent_h__Script_SOTS_INV_3852919463{
	TEXT("/Script/SOTS_INV"),
	Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_INV_Source_SOTS_INV_Public_InvSPInventoryComponent_h__Script_SOTS_INV_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SAS_ShadowsAndShurikens_Plugins_SOTS_INV_Source_SOTS_INV_Public_InvSPInventoryComponent_h__Script_SOTS_INV_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
