// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JamGame_Anything/JamGame_AnythingGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJamGame_AnythingGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	JAMGAME_ANYTHING_API UClass* Z_Construct_UClass_AJamGame_AnythingGameMode();
	JAMGAME_ANYTHING_API UClass* Z_Construct_UClass_AJamGame_AnythingGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_JamGame_Anything();
// End Cross Module References
	void AJamGame_AnythingGameMode::StaticRegisterNativesAJamGame_AnythingGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AJamGame_AnythingGameMode);
	UClass* Z_Construct_UClass_AJamGame_AnythingGameMode_NoRegister()
	{
		return AJamGame_AnythingGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AJamGame_AnythingGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AJamGame_AnythingGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_JamGame_Anything,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AJamGame_AnythingGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJamGame_AnythingGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "JamGame_AnythingGameMode.h" },
		{ "ModuleRelativePath", "JamGame_AnythingGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AJamGame_AnythingGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJamGame_AnythingGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AJamGame_AnythingGameMode_Statics::ClassParams = {
		&AJamGame_AnythingGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AJamGame_AnythingGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AJamGame_AnythingGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AJamGame_AnythingGameMode()
	{
		if (!Z_Registration_Info_UClass_AJamGame_AnythingGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AJamGame_AnythingGameMode.OuterSingleton, Z_Construct_UClass_AJamGame_AnythingGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AJamGame_AnythingGameMode.OuterSingleton;
	}
	template<> JAMGAME_ANYTHING_API UClass* StaticClass<AJamGame_AnythingGameMode>()
	{
		return AJamGame_AnythingGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJamGame_AnythingGameMode);
	AJamGame_AnythingGameMode::~AJamGame_AnythingGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_USer_Documents_GitHub_24_2_GameJam_Anything_JamGame_Anything_Source_JamGame_Anything_JamGame_AnythingGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_USer_Documents_GitHub_24_2_GameJam_Anything_JamGame_Anything_Source_JamGame_Anything_JamGame_AnythingGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AJamGame_AnythingGameMode, AJamGame_AnythingGameMode::StaticClass, TEXT("AJamGame_AnythingGameMode"), &Z_Registration_Info_UClass_AJamGame_AnythingGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AJamGame_AnythingGameMode), 3600132213U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_USer_Documents_GitHub_24_2_GameJam_Anything_JamGame_Anything_Source_JamGame_Anything_JamGame_AnythingGameMode_h_1621675823(TEXT("/Script/JamGame_Anything"),
		Z_CompiledInDeferFile_FID_Users_USer_Documents_GitHub_24_2_GameJam_Anything_JamGame_Anything_Source_JamGame_Anything_JamGame_AnythingGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_USer_Documents_GitHub_24_2_GameJam_Anything_JamGame_Anything_Source_JamGame_Anything_JamGame_AnythingGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
