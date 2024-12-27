// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JamGame_Anything/PBus.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePBus() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	JAMGAME_ANYTHING_API UClass* Z_Construct_UClass_APBus();
	JAMGAME_ANYTHING_API UClass* Z_Construct_UClass_APBus_NoRegister();
	UPackage* Z_Construct_UPackage__Script_JamGame_Anything();
// End Cross Module References
	void APBus::StaticRegisterNativesAPBus()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APBus);
	UClass* Z_Construct_UClass_APBus_NoRegister()
	{
		return APBus::StaticClass();
	}
	struct Z_Construct_UClass_APBus_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APBus_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_JamGame_Anything,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APBus_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APBus_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PBus.h" },
		{ "ModuleRelativePath", "PBus.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APBus_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APBus>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APBus_Statics::ClassParams = {
		&APBus::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APBus_Statics::Class_MetaDataParams), Z_Construct_UClass_APBus_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_APBus()
	{
		if (!Z_Registration_Info_UClass_APBus.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APBus.OuterSingleton, Z_Construct_UClass_APBus_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APBus.OuterSingleton;
	}
	template<> JAMGAME_ANYTHING_API UClass* StaticClass<APBus>()
	{
		return APBus::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APBus);
	APBus::~APBus() {}
	struct Z_CompiledInDeferFile_FID_Users_Develop_Unreal_Project_24_2_GameJam_Anything_JamGame_Anything_Source_JamGame_Anything_PBus_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Develop_Unreal_Project_24_2_GameJam_Anything_JamGame_Anything_Source_JamGame_Anything_PBus_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APBus, APBus::StaticClass, TEXT("APBus"), &Z_Registration_Info_UClass_APBus, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APBus), 3901558973U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Develop_Unreal_Project_24_2_GameJam_Anything_JamGame_Anything_Source_JamGame_Anything_PBus_h_2683902435(TEXT("/Script/JamGame_Anything"),
		Z_CompiledInDeferFile_FID_Users_Develop_Unreal_Project_24_2_GameJam_Anything_JamGame_Anything_Source_JamGame_Anything_PBus_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Develop_Unreal_Project_24_2_GameJam_Anything_JamGame_Anything_Source_JamGame_Anything_PBus_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
