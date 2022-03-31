// Copyright Epic Games, Inc. All Rights Reserved.


#include "ue4_15GameModeBase.h"
#include <Blueprint/UserWidget.h>


void Aue4_15_GameModeBase::BeginPlay(){
    Super::BeginPlay();
    ChangeMenuWidget(StartingWidgetClass);
}

void Aue4_15_GameModeBase::ChangeMenuWidget(TSubclassOf<UUserWidget> NewWidgetClass){
    if (CurrentWidget != nullptr){
        CurrentWidget->RemoveFromViewport();
        CurrentWidget = nullptr;
    }

    if (NewWidgetClass != nullptr){
        CurrentWidget = CreateWidget(GetWorld(), NewWidgetClass);
        if (CurrentWidget != nullptr){
            CurrentWidget->AddToViewport();
        }
    }
}