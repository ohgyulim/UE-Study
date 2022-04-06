// Copyright Epic Games, Inc. All Rights Reserved.

#include "LevelProjectGameMode.h"
#include "LevelProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALevelProjectGameMode::ALevelProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
