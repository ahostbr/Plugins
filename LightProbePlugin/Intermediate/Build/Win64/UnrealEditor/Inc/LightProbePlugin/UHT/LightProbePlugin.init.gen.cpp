// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightProbePlugin_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_LightProbePlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_LightProbePlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_LightProbePlugin.OuterSingleton)
		{
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/LightProbePlugin",
			nullptr,
			0,
			PKG_CompiledIn | 0x00000000,
			0x6EF9ADE0,
			0xE9089BDD,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_LightProbePlugin.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_LightProbePlugin.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_LightProbePlugin(Z_Construct_UPackage__Script_LightProbePlugin, TEXT("/Script/LightProbePlugin"), Z_Registration_Info_UPackage__Script_LightProbePlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x6EF9ADE0, 0xE9089BDD));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
