// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSOTS_GAS_Plugin_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	SOTS_GAS_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityActivatedWithContextSignature__DelegateSignature();
	SOTS_GAS_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityFailedSignature__DelegateSignature();
	SOTS_GAS_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityListChangedSignature__DelegateSignature();
	SOTS_GAS_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilitySimpleSignature__DelegateSignature();
	SOTS_GAS_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityStateChangedSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SOTS_GAS_Plugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SOTS_GAS_Plugin()
	{
		if (!Z_Registration_Info_UPackage__Script_SOTS_GAS_Plugin.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityActivatedWithContextSignature__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityFailedSignature__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityListChangedSignature__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilitySimpleSignature__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_SOTS_GAS_Plugin_SOTS_AbilityStateChangedSignature__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/SOTS_GAS_Plugin",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0x234EFADC,
			0xE44817AA,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SOTS_GAS_Plugin.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_SOTS_GAS_Plugin.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SOTS_GAS_Plugin(Z_Construct_UPackage__Script_SOTS_GAS_Plugin, TEXT("/Script/SOTS_GAS_Plugin"), Z_Registration_Info_UPackage__Script_SOTS_GAS_Plugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x234EFADC, 0xE44817AA));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
