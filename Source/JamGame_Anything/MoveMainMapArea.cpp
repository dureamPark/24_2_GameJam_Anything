// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveMainMapArea.h"
#include "BusPlayerController.h"

// Sets default values
AMoveMainMapArea::AMoveMainMapArea()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	
	playerCount = 0;
}

// Called when the game starts or when spawned
void AMoveMainMapArea::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMoveMainMapArea::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMoveMainMapArea::IncreasePlayerCount()
{
	playerCount++;
	
	if (playerCount == 2 && HasAuthority()) {
		for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
		{
			ABusPlayerController* PC = Cast<ABusPlayerController>(*It);
			if (PC)
			{
				PC->ClientShowLoadingScreen();
			}
		}
		GetWorld()->ServerTravel(TEXT("/Game/MainContents/Maps/JamMap?listen"));
	}
	else {
		//nothing
	}
}

void AMoveMainMapArea::DecreasePlayerCount()
{
	playerCount--;
}





