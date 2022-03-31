// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FClassFinder<APawn> BpClass(TEXT("/Game/StarterContent/BP_TestClass"));
	// 프로젝트에 포함된 블루프린트 클래스를 불러오기 위해 ConstructorHelpers::FClassFinder 사용
	// <>안에 블루프린트 클래스가 상속받은 C++클래스의 타입을 넣어주면 됨 + 블루프린트의 경로 넣어줌

	if(BPClass.Succeeded() && BpClass.Class != NULL){ // Succeeded, NULL체크를 통해 블루프린트 클래스가 성공적으로 불러와졌는지 체크하고 사용

	}

	UStaticMeshComponent* MeshComponent = CreateDefaultSubobject<UstaticMeshComponent>(TEXT("MeshComponent"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone"));
	if (MeshAsset.Succeeded() && MeshAsset.Object != NULL){
		MeshComponent->SetStaticMesh(MeshAsset.Object);
	}
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

