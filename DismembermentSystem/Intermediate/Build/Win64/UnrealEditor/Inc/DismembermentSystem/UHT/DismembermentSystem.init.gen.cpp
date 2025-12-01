// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDismembermentSystem_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	DISMEMBERMENTSYSTEM_API UFunction* Z_Construct_UDelegateFunction_DismembermentSystem_OnPostDismemberment__DelegateSignature();
	DISMEMBERMENTSYSTEM_API UFunction* Z_Construct_UDelegateFunction_DismembermentSystem_OnPreDismemberment__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_DismembermentSystem;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_DismembermentSystem()
	{
		if (!Z_Registration_Info_UPackage__Script_DismembermentSystem.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_DismembermentSystem_OnPostDismemberment__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_DismembermentSystem_OnPreDismemberment__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/DismembermentSystem",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0x8ADC6AB6,
			0xF93A7851,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_DismembermentSystem.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_DismembermentSystem.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_DismembermentSystem(Z_Construct_UPackage__Script_DismembermentSystem, TEXT("/Script/DismembermentSystem"), Z_Registration_Info_UPackage__Script_DismembermentSystem, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x8ADC6AB6, 0xF93A7851));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
