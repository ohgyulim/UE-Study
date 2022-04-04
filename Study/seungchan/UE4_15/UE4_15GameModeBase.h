// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "UE4_15GameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class UE4_15_API AUE4_15GameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "UMG_Gmae")
	void ChangeMenuWidget(TSubclassOf<UUserWidget> NewWidgetClass);

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UMG_Game")
		TSubclassOf<UUserWidget> StartingWidgetClass;

	UPROPERTY()
		UUserWidget* CurrentWidget;
};
