// Copyright Epic Games, Inc. All Rights Reserved.

#include "JamGame_AnythingGameMode.h"
#include "JamGame_AnythingCharacter.h"
#include "UObject/ConstructorHelpers.h"

AJamGame_AnythingGameMode::AJamGame_AnythingGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
