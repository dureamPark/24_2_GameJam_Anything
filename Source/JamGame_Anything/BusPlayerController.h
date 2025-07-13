// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "BusPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class JAMGAME_ANYTHING_API ABusPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ABusPlayerController();

    virtual void BeginPlay() override;
	
    UFUNCTION(Client, Reliable)
    void ClientShowLoadingScreen();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
    UUserWidget* LoadingScreen;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = UI)
    TSubclassOf<UUserWidget> LoadingScreenClass;
};
