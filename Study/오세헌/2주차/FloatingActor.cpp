// Fill out your copyright notice in the Description page of Project Settings.


#include "FloatingActor.h"

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
	
}

// Called every frame
void AFloatingActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector NewLocation = GetActorLocation();
	//Actor의 현재위치를 벡터타입으로 가져오는 함수
	float DeltaX = (FMath::Sin(RunningTime.X + DeltaTime * FloatingSpeed.X) - FMath::Sin(RunningTime.X));
	float DeltaY = (FMath::Sin(RunningTime.Y + DeltaTime * FloatingSpeed.Y) - FMath::Sin(RunningTime.Y));
	float DeltaZ = (FMath::Sin(RunningTime.Z + DeltaTime * FloatingSpeed.Z) - FMath::Sin(RunningTime.Z));
	//sin함수는 위아래 왔다갔다 하므로 부드러운 모션으로 위아래무빙을 만들 수 있다.
	NewLocation += FVector(DeltaX, DeltaY, DeltaZ) * 20.0f;

	RunningTime += DeltaTime * FloatingSpeed;
	//tick함수가 실행되고 다음 tick까지 걸린시간이 DeltaTime이다.

	SetActorLocation(NewLocation);
}

//월드에 배치된 오브젝트를 인스턴스라고 부른다.
//컴포넌트 추가버튼으로 인스턴스의 형태를 지정할 수 있다. (단순 물체뿐만 아니라 스피커, 광원등등...)
//또한 여러개를 추가할 수 있으며 당연히 다른 프로그램에서 만든 것도 될 수 있다.

//디테일 패널에서 숫자를 바꾼다고 여기서 코드가 바뀌지는 않았다.

//헤더 선언 관련
//언리얼은 일반 c++ 코드와 달리 헤더 선언 위치가 중요하다.
//#include "FloatingActor.generated.h" 헤더를 추가해야한다.
//에디터의 반응속도때문이라네
