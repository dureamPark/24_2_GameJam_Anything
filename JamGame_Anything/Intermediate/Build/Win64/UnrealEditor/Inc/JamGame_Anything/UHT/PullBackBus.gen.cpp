// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JamGame_Anything/PullBackBus.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePullBackBus() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	JAMGAME_ANYTHING_API UClass* Z_Construct_UClass_APullBackBus();
	JAMGAME_ANYTHING_API UClass* Z_Construct_UClass_APullBackBus_NoRegister();
	UPackage* Z_Construct_UPackage__Script_JamGame_Anything();
// End Cross Module References
	void APullBackBus::StaticRegisterNativesAPullBackBus()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APullBackBus);
	UClass* Z_Construct_UClass_APullBackBus_NoRegister()
	{
		return APullBackBus::StaticClass();
	}
	struct Z_Construct_UClass_APullBackBus_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APullBackBus_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_JamGame_Anything,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APullBackBus_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APullBackBus_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PullBackBus.h" },
		{ "ModuleRelativePath", "PullBackBus.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APullBackBus_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APullBackBus>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APullBackBus_Statics::ClassParams = {
		&APullBackBus::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APullBackBus_Statics::Class_MetaDataParams), Z_Construct_UClass_APullBackBus_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_APullBackBus()
	{
		if (!Z_Registration_Info_UClass_APullBackBus.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APullBackBus.OuterSingleton, Z_Construct_UClass_APullBackBus_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APullBackBus.OuterSingleton;
	}
	template<> JAMGAME_ANYTHING_API UClass* StaticClass<APullBackBus>()
	{
		return APullBackBus::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APullBackBus);
	APullBackBus::~APullBackBus() {}
	struct Z_CompiledInDeferFile_FID_Users_TOP_Documents_GitHub_24_2_GameJam_Anything_JamGame_Anything_Source_JamGame_Anything_PullBackBus_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_TOP_Documents_GitHub_24_2_GameJam_Anything_JamGame_Anything_Source_JamGame_Anything_PullBackBus_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APullBackBus, APullBackBus::StaticClass, TEXT("APullBackBus"), &Z_Registration_Info_UClass_APullBackBus, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APullBackBus), 468872773U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_TOP_Documents_GitHub_24_2_GameJam_Anything_JamGame_Anything_Source_JamGame_Anything_PullBackBus_h_1949072847(TEXT("/Script/JamGame_Anything"),
		Z_CompiledInDeferFile_FID_Users_TOP_Documents_GitHub_24_2_GameJam_Anything_JamGame_Anything_Source_JamGame_Anything_PullBackBus_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_TOP_Documents_GitHub_24_2_GameJam_Anything_JamGame_Anything_Source_JamGame_Anything_PullBackBus_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
