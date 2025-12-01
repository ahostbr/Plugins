// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSOTS_SkillTree_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	SOTS_SKILLTREE_API UFunction* Z_Construct_UDelegateFunction_SOTS_SkillTree_SOTS_SkillTreeNodeChangedSignature__DelegateSignature();
	SOTS_SKILLTREE_API UFunction* Z_Construct_UDelegateFunction_SOTS_SkillTree_SOTS_SkillTreePointsChangedSignature__DelegateSignature();
	SOTS_SKILLTREE_API UFunction* Z_Construct_UDelegateFunction_USOTS_SkillTreeSubsystem_OnSkillTreeStateChanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SOTS_SkillTree;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SOTS_SkillTree()
	{
		if (!Z_Registration_Info_UPackage__Script_SOTS_SkillTree.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_SOTS_SkillTree_SOTS_SkillTreeNodeChangedSignature__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_SOTS_SkillTree_SOTS_SkillTreePointsChangedSignature__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_USOTS_SkillTreeSubsystem_OnSkillTreeStateChanged__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/SOTS_SkillTree",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0xE233DC76,
			0x841EB08E,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SOTS_SkillTree.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_SOTS_SkillTree.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SOTS_SkillTree(Z_Construct_UPackage__Script_SOTS_SkillTree, TEXT("/Script/SOTS_SkillTree"), Z_Registration_Info_UPackage__Script_SOTS_SkillTree, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE233DC76, 0x841EB08E));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
