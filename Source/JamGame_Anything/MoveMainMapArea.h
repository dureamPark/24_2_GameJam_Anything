// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MoveMainMapArea.generated.h"

UCLASS()
class JAMGAME_ANYTHING_API AMoveMainMapArea : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMoveMainMapArea();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintReadWrite)
	int playerCount;

	UFUNCTION(BlueprintCallable)
	void IncreasePlayerCount();

	UFUNCTION(BlueprintCallable)
	void DecreasePlayerCount();
};
