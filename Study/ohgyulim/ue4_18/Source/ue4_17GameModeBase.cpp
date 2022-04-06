// Copyright Epic Games, Inc. All Rights Reserved.


#include "ue4_17GameModeBase.h"

void Aue4_17GameModeBase::StartPlay(){
    Super::StartPlay();

    if(GEngine){
        GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Hello World, this is FPSGameMode!"));
    }
}