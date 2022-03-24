// Fill out your copyright notice in the Description page of Project Settings.


#include "Countdown.h"

// Sets default values
ACountdown::ACountdown()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false; //tick함수를 사용하지 않을 시 false로 지정해놓으면 된다.


	CountdownText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("Countdown text")); //초기화, 언리얼에서 오브젝트 초기화에 자주 쓰이므로 잘 기억해두어야함
	CountdownText->SetHorizontalAlignment(EHTA_Center); // 가운데 정렬
	CountdownText->SetWorldSize(150.0f);//텍스트 크기 조절
	RootComponent = CountdownText;// 이 엑터의 루트 컴포넌트로 설정

	CountdownTime = 3;
}

// Called when the game starts or when spawned
void ACountdown::BeginPlay()
{
	Super::BeginPlay();

	UpdateTimeDisplay();
	GetWorldTimerManager().SetTimer(CountdownTimerHandle, this, &ACountdown::AdvanceTimer, 1.0f, true);
}

void ACountdown::UpdateTimeDisplay()
{
	CountdownText->SetText(FString::FromInt(FMath::Max(CountdownTime, 0)));
}

void ACountdown::AdvanceTimer()
{
	--CountdownTime;
	UpdateTimeDisplay();

	if (CountdownTime < 1) {
		GetWorldTimerManager().ClearTimer(CountdownTimerHandle);
		CountdownHasFinished();
	}
}

void ACountdown::CountdownHasFinished_Implementation()
{
	CountdownText->SetText(TEXT("Go!"));
}
//타이머 : 사용자가 정의한 시간마다 사용자가 지정한 동작이 실행되도록 하는 것이다.
//		   특정한 순간에만 몇번 실행되거나, 지속시간이 1초가 넘는경우 사용하는 것이다.