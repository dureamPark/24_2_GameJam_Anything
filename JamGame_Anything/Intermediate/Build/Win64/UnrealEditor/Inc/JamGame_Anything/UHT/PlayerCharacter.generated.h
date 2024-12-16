// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef JAMGAME_ANYTHING_PlayerCharacter_generated_h
#error "PlayerCharacter.generated.h already included, missing '#pragma once' in PlayerCharacter.h"
#endif
#define JAMGAME_ANYTHING_PlayerCharacter_generated_h

#define FID_Users_TOP_Documents_GitHub_24_2_GameJam_Anything_JamGame_Anything_Source_JamGame_Anything_PlayerCharacter_h_13_SPARSE_DATA
#define FID_Users_TOP_Documents_GitHub_24_2_GameJam_Anything_JamGame_Anything_Source_JamGame_Anything_PlayerCharacter_h_13_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_TOP_Documents_GitHub_24_2_GameJam_Anything_JamGame_Anything_Source_JamGame_Anything_PlayerCharacter_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_TOP_Documents_GitHub_24_2_GameJam_Anything_JamGame_Anything_Source_JamGame_Anything_PlayerCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_ControlledBus);


#define FID_Users_TOP_Documents_GitHub_24_2_GameJam_Anything_JamGame_Anything_Source_JamGame_Anything_PlayerCharacter_h_13_ACCESSORS
#define FID_Users_TOP_Documents_GitHub_24_2_GameJam_Anything_JamGame_Anything_Source_JamGame_Anything_PlayerCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/JamGame_Anything"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ControlledBus=NETFIELD_REP_START, \
		NETFIELD_REP_END=ControlledBus	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_TOP_Documents_GitHub_24_2_GameJam_Anything_JamGame_Anything_Source_JamGame_Anything_PlayerCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCharacter) \
	NO_API virtual ~APlayerCharacter();


#define FID_Users_TOP_Documents_GitHub_24_2_GameJam_Anything_JamGame_Anything_Source_JamGame_Anything_PlayerCharacter_h_10_PROLOG
#define FID_Users_TOP_Documents_GitHub_24_2_GameJam_Anything_JamGame_Anything_Source_JamGame_Anything_PlayerCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_TOP_Documents_GitHub_24_2_GameJam_Anything_JamGame_Anything_Source_JamGame_Anything_PlayerCharacter_h_13_SPARSE_DATA \
	FID_Users_TOP_Documents_GitHub_24_2_GameJam_Anything_JamGame_Anything_Source_JamGame_Anything_PlayerCharacter_h_13_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_TOP_Documents_GitHub_24_2_GameJam_Anything_JamGame_Anything_Source_JamGame_Anything_PlayerCharacter_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_TOP_Documents_GitHub_24_2_GameJam_Anything_JamGame_Anything_Source_JamGame_Anything_PlayerCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_TOP_Documents_GitHub_24_2_GameJam_Anything_JamGame_Anything_Source_JamGame_Anything_PlayerCharacter_h_13_ACCESSORS \
	FID_Users_TOP_Documents_GitHub_24_2_GameJam_Anything_JamGame_Anything_Source_JamGame_Anything_PlayerCharacter_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_TOP_Documents_GitHub_24_2_GameJam_Anything_JamGame_Anything_Source_JamGame_Anything_PlayerCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JAMGAME_ANYTHING_API UClass* StaticClass<class APlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_TOP_Documents_GitHub_24_2_GameJam_Anything_JamGame_Anything_Source_JamGame_Anything_PlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
