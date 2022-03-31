// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ue4_15GameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class UE4_15_API Aue4_15GameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	UFUCTION(BlueprintCallable, Category = "UMG_GAME")
	void ChangeMenuWidget(TSubclassOf<UUserWidget> NewWidgetClass);

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UMG_Game")
		TSubclassOf<UUserWidget> StartingWidgetClass;
	
	UPROPERTY()
		UUserWidget* CurrentWidget;

	
};
