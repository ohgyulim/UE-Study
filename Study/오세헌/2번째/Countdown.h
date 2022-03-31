// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
//"Countdown.generated.h"위에서 선언
#include <Engine/Classes/Components/TextRenderComponent.h>
#include "Countdown.generated.h"

UCLASS()
class DCOM_API ACountdown : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACountdown();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:		
	//set time
	UPROPERTY(EditAnywhere)
	int32 CountdownTime;

	UTextRenderComponent* CountdownText;

	void UpdateTimeDisplay();

	void AdvanceTimer(); //timer가 돌아가면서 호출 될 함수

	//AdvanceTime가 지정된 만큼 작동한 뒤에 마무리 처리를 하기위한 함수
	UFUNCTION(BlueprintNativeEvent)
	void CountdownHasFinished(); 
	virtual void CountdownHasFinished_Implementation();

	FTimerHandle CountdownTimerHandle; //timer를 컨트롤하기위한 구조체
};
