// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveMainMapArea.h"

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
		GetWorld()->ServerTravel(TEXT("/Game/MainContents/Maps/JamMap?listen"));
		//GetWorld()->ServerTravel(TEXT("/Game/MainContents/Maps/JamMap"));
		//server travel
		//first open widget that ask for start?
	}
	else {
		//nothing
	}
}

void AMoveMainMapArea::DecreasePlayerCount()
{
	playerCount--;
}





