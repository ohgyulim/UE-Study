// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "UE4_17GameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class UE4_17_API AUE4_17GameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	virtual void StartPlay() override; 
};
