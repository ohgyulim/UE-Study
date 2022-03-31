// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

// Sets default values
AMyActor::AMyActor()
//    : TotalDamage(200), DamageTimeInSeconds(1.0f), CharacterName(TEXT("GyuLim")),bAttackable(true)  // 1
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    
    TotalDamage = 200;
    DamageTimeInSeconds = 1.0f;
    CharacterName = TEXT("GyuLim");
    bAttackable = true; // 2 둘 중 어떤 방법으로 해도 상관 x

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

