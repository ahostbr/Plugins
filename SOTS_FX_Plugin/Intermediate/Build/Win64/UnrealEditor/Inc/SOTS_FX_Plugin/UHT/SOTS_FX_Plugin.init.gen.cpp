// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSOTS_FX_Plugin_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	SOTS_FX_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_SOTS_FX_Plugin_SOTS_OnFXTriggered__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SOTS_FX_Plugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SOTS_FX_Plugin()
	{
		if (!Z_Registration_Info_UPackage__Script_SOTS_FX_Plugin.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_SOTS_FX_Plugin_SOTS_OnFXTriggered__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/SOTS_FX_Plugin",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0x5B9D08E1,
			0xD3DC1FDC,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SOTS_FX_Plugin.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_SOTS_FX_Plugin.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SOTS_FX_Plugin(Z_Construct_UPackage__Script_SOTS_FX_Plugin, TEXT("/Script/SOTS_FX_Plugin"), Z_Registration_Info_UPackage__Script_SOTS_FX_Plugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x5B9D08E1, 0xD3DC1FDC));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
