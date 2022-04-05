// Copyright Epic Games, Inc. All Rights Reserved.


#include "UE4_17GameModeBase.h"

void AUE4_17GameModeBase::StartPlay()
{
    Super::StartPlay();

    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Hello World, this is FPSGameMode!"));
    }
}
