// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
 	//변수의 기본값을 설정하는데 사용하는 함수(그냥 생성자인듯?)
	TotalDamage = 200;
	DamageTimeInSeconds = 1.0f;
	CharacterName = TEXT("나르");
	bAttackable = true;
	PrimaryActorTick.bCanEverTick = true; // Tick함수를 사용하는지 여부
	str = TEXT("Test");
	UE_LOG(LogTemp, Log, TEXT("constructor"));

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	//Actor가 배치된 월드에서 게임이 시작되거나 월드에 스폰되었을때, 한번 호출되는 함수로 로직을 초기화하는데 사용
	Super::BeginPlay();
	CallFromCPP2();
	UE_LOG(LogTemp, Log, TEXT("BeginPlay"));
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	//매 프레임마다 호출되는 함수(그래서 이름이 Tick인가 ㅋㅋ)
	Super::Tick(DeltaTime); //DeltaTime은 최근에 언제실행되었는지 확인해서 실행
	//Actor가 활성화 되어있는동안 계속 실행되기때문에 로직처리 필요없다면 없애서 성능 증가 가능.

	UE_LOG(LogTemp, Log, TEXT("Tick"));
}

void AMyActor::CalculateDPS() {
	DamagePerSecond = TotalDamage / DamageTimeInSeconds;
}

void AMyActor::CallFromCpp2_Implementation()
{
	str.Append(TEXT("_Implementation"));
}

void AMyActor::PostInitProperties()
{
	Super::PostInitProperties();
	CalculateDPS();
}

/*void AMyActor::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	CalculateDPS();
	Super::PostEditChangeChainProperty(PropertyChangedEvent);
}
*/