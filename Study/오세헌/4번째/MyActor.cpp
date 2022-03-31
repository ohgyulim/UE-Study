// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//꺾쇠괄호 안에는 블루프린트의 부모클래스를 사용
	static ConstructorHelpers::FClassFinder<APawn> BpClass(TEXT("/Game/StarterContent/Blueprints"));
	
	// 블루프린트가 성공적으로 불어왔는지 확인하는 함수
	if (BpClass.Succeeded() && BpClass.Class != NULL) {
		//이후 원하는 작업 수행
	}

	//다음과 같이 블루프린트 뿐만 아니라 리소스도 가져올 수 있다.
	UStaticMeshComponent* MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone"));
	if (MeshAsset.Succeeded() && MeshAsset.Object != NULL) {
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

//스크립트을 다른이름으로 저장 버튼을 누르고 인코딩하여 저장을 누른다. 그다음 유니코드를 선택하여 한글을 안깨지가 할 수 있다.
//근데 그냥 영어로 하는게 좋다. 혼나기 싫으면

//처음 생성한 프로젝트는 기본적으로 Core, CoreUObject, Engine, InputCore 라는 모듈을 사용하고 있다.
//강의에서는 UMG, Slatecore, Slate 라는 모듈을 추가하게 될 것임

