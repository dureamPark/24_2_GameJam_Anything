// Fill out your copyright notice in the Description page of Project Settings.


#include "BusPlayerController.h"
#include "Blueprint/UserWidget.h"

ABusPlayerController::ABusPlayerController()
{

}

void ABusPlayerController::BeginPlay()
{
    Super::BeginPlay();

    if (LoadingScreen)
    {
        LoadingScreen->RemoveFromParent();
        LoadingScreen = nullptr;
    }
}

void ABusPlayerController::ClientShowLoadingScreen_Implementation()
{
    if (LoadingScreenClass && !LoadingScreen)
    {
        LoadingScreen = CreateWidget<UUserWidget>(this, LoadingScreenClass);
        if (LoadingScreen)
        {
            LoadingScreen->AddToViewport();
        }
    }
}
