// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DiscordMessengerBPLibrary.h"

#ifdef DISCORDMESSENGER_DiscordMessengerBPLibrary_generated_h
#error "DiscordMessengerBPLibrary.generated.h already included, missing '#pragma once' in DiscordMessengerBPLibrary.h"
#endif
#define DISCORDMESSENGER_DiscordMessengerBPLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDiscordEmbed;

// ********** Begin ScriptStruct FDiscordAuthor ****************************************************
struct Z_Construct_UScriptStruct_FDiscordAuthor_Statics;
#define FID_SAS_ShadowsAndShurikens_Plugins_DiscordMessenger_Source_DiscordMessenger_Public_DiscordMessengerBPLibrary_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDiscordAuthor_Statics; \
	DISCORDMESSENGER_API static class UScriptStruct* StaticStruct();


struct FDiscordAuthor;
// ********** End ScriptStruct FDiscordAuthor ******************************************************

// ********** Begin ScriptStruct FDiscordField *****************************************************
struct Z_Construct_UScriptStruct_FDiscordField_Statics;
#define FID_SAS_ShadowsAndShurikens_Plugins_DiscordMessenger_Source_DiscordMessenger_Public_DiscordMessengerBPLibrary_h_39_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDiscordField_Statics; \
	DISCORDMESSENGER_API static class UScriptStruct* StaticStruct();


struct FDiscordField;
// ********** End ScriptStruct FDiscordField *******************************************************

// ********** Begin ScriptStruct FDiscordEmbed *****************************************************
struct Z_Construct_UScriptStruct_FDiscordEmbed_Statics;
#define FID_SAS_ShadowsAndShurikens_Plugins_DiscordMessenger_Source_DiscordMessenger_Public_DiscordMessengerBPLibrary_h_64_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDiscordEmbed_Statics; \
	DISCORDMESSENGER_API static class UScriptStruct* StaticStruct();


struct FDiscordEmbed;
// ********** End ScriptStruct FDiscordEmbed *******************************************************

// ********** Begin Class UDiscordMessengerBPLibrary ***********************************************
#define FID_SAS_ShadowsAndShurikens_Plugins_DiscordMessenger_Source_DiscordMessenger_Public_DiscordMessengerBPLibrary_h_109_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSendDiscordMessage);


struct Z_Construct_UClass_UDiscordMessengerBPLibrary_Statics;
DISCORDMESSENGER_API UClass* Z_Construct_UClass_UDiscordMessengerBPLibrary_NoRegister();

#define FID_SAS_ShadowsAndShurikens_Plugins_DiscordMessenger_Source_DiscordMessenger_Public_DiscordMessengerBPLibrary_h_109_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDiscordMessengerBPLibrary(); \
	friend struct ::Z_Construct_UClass_UDiscordMessengerBPLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DISCORDMESSENGER_API UClass* ::Z_Construct_UClass_UDiscordMessengerBPLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UDiscordMessengerBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DiscordMessenger"), Z_Construct_UClass_UDiscordMessengerBPLibrary_NoRegister) \
	DECLARE_SERIALIZER(UDiscordMessengerBPLibrary)


#define FID_SAS_ShadowsAndShurikens_Plugins_DiscordMessenger_Source_DiscordMessenger_Public_DiscordMessengerBPLibrary_h_109_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDiscordMessengerBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDiscordMessengerBPLibrary(UDiscordMessengerBPLibrary&&) = delete; \
	UDiscordMessengerBPLibrary(const UDiscordMessengerBPLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDiscordMessengerBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDiscordMessengerBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDiscordMessengerBPLibrary) \
	NO_API virtual ~UDiscordMessengerBPLibrary();


#define FID_SAS_ShadowsAndShurikens_Plugins_DiscordMessenger_Source_DiscordMessenger_Public_DiscordMessengerBPLibrary_h_106_PROLOG
#define FID_SAS_ShadowsAndShurikens_Plugins_DiscordMessenger_Source_DiscordMessenger_Public_DiscordMessengerBPLibrary_h_109_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SAS_ShadowsAndShurikens_Plugins_DiscordMessenger_Source_DiscordMessenger_Public_DiscordMessengerBPLibrary_h_109_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_DiscordMessenger_Source_DiscordMessenger_Public_DiscordMessengerBPLibrary_h_109_INCLASS_NO_PURE_DECLS \
	FID_SAS_ShadowsAndShurikens_Plugins_DiscordMessenger_Source_DiscordMessenger_Public_DiscordMessengerBPLibrary_h_109_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDiscordMessengerBPLibrary;

// ********** End Class UDiscordMessengerBPLibrary *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SAS_ShadowsAndShurikens_Plugins_DiscordMessenger_Source_DiscordMessenger_Public_DiscordMessengerBPLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
