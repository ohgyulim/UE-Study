// Fill out your copyright notice in the Description page of Project Settings.


#include "LevelTransferVolume.h"
#include "dcom7Character.h"
#include <Engine/Classes/Components/BoxComponent.h>
#include <Kismet/GameplayStatics.h>


// Sets default values
ALevelTransferVolume::ALevelTransferVolume()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TransferVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("TransferVolume"), true);
	RootComponent = TransferVolume;
	TransferVolume->SetCollisionProfileName(TEXT("OverlapOnlyPawn"));
	

}

// Called when the game starts or when spawned
void ALevelTransferVolume::BeginPlay()
{
	Super::BeginPlay();
	
}

void ALevelTransferVolume::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Adcom7Character* Character = Cast<Adcom7Character>(OtherActor);
	if (Character) {
		UGameplayStatics::OpenLevel(GetWorld(), FName(TransferLevelName));
	}
}

// Called every frame
void ALevelTransferVolume::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

