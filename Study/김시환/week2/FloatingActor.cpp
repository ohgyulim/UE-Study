// Fill out your copyright notice in the Description page of Project Settings.


#include "FloatingActor.h"
#include "week2.h"
// Sets default values
AFloatingActor::AFloatingActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	FloatingSpeed = FVector(1.0f,1.0f,1.0f);
}

// Called when the game starts or when spawned
void AFloatingActor::BeginPlay()
{
	Super::BeginPlay();
	
	UE_LOG(MyLogCategory, Log, TEXT("Log Message")); //새로만든 카테고리내에서 로그출력
	FString Character = TEXT("ABC");
	int hp = 100;
	float Attack = 1.0f;
	UE_LOG(LogTemp, Log, TEXT("asdfasdf %s"), *Character); //변수랑 합쳐서 사용하기
	FVector CharacterPosition = GetActorLocation();
	UE_LOG(LogTemp, Log, TEXT("name = %s, HP= %d, Attack Speed = %f"), *Character, hp, Attack);

}

// Called every frame
void AFloatingActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVector NewLocation = GetActorLocation(); // 현재 actor에 위치 받기  FVector는 속도나 위치 받는 벡터타입
	/*
	float DeltaHeight = FMath::Sin(runningtime + DeltaTime*FloatingSpeed) - FMath::Sin(runningtime); //얼마나 움직여야하는지 계산
	NewLocation.Z += DeltaHeight * 20.0f;
	runningtime += DeltaTime*FloatingSpeed;*/  // Z축에대한 변경

	float DeltaX= FMath::Sin(runningtime.X + DeltaTime * FloatingSpeed.X) - FMath::Sin(runningtime.X);
	float DeltaY = FMath::Sin(runningtime.Y + DeltaTime * FloatingSpeed.Y) - FMath::Sin(runningtime.Y);
	float DeltaZ = FMath::Sin(runningtime.Z + DeltaTime * FloatingSpeed.Z) - FMath::Sin(runningtime.Z);
	NewLocation += FVector(DeltaX,DeltaY,DeltaZ) * 20.0f;
	runningtime += DeltaTime * FloatingSpeed;
	SetActorLocation(NewLocation);
}

