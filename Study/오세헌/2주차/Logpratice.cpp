// Fill out your copyright notice in the Description page of Project Settings.


#include "Logpratice.h"
#include "dcom.h"

// Sets default values
ALogpratice::ALogpratice()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ALogpratice::BeginPlay()
{
	Super::BeginPlay();
	
	UE_LOG(LogTemp,Log,TEXT("Log Message,BeginPlay"));
	//로그상세수준 : 출력된 로그의 중요도를 의미.
	//Fatal			로그로 항상 콘솔 및 로그파일에 출력됨. 로그가 비활성화된 상테에서도 모든 작동을 중단
	//Error			콘솔 및 로그파일에 출력. 빨간색
	//Warning		콘솔 및 로그파일에 출력. 노란색
	//DisPlay		콘솔 및 로그파일에 출력
	//Log			게임내 콘솔출력 x , 로그파일,언리얼에디터의 출력로그 O
	//Verbose		로그파일에는 출력. 게임내의 콘솔에는 출력되지않음. 자세한 로깅 및 디버깅 용
	//VeryVerbose	Verbose과 유사. 대량의 로그를 출력하는 상세한 로깅용

	//로그 카테고리: 출력될 로그가 어떤 시스템에서 발생할 지 알려줌
	//LogTemp		특정한 카데고리에 속하지 않고 임시로 생성된 로그
	//그 외 90개정도가 있지만 그 중에도 원하는 것이 없을 경우 직접 만들어서 쓸 수 있다.
	//DECLARE_LOG_CATEGORY_EXTERN 라는 명령어와 DEFINE_LOG_CATEGORY을 잘 이용해보자.

	UE_LOG(LogTemp, Error, TEXT("Log Message,BeginPlay"));
	UE_LOG(LogTemp, Display, TEXT("Display Massage"));

	UE_LOG(MyLogCategory, Log, TEXT("My Category Log"));

	FString CharacterName = TEXT("Hiwer");
	UE_LOG(LogTemp, Log, TEXT("Character Name = %s"), *CharacterName);
	bool isAttackable = true;
	UE_LOG(LogTemp, Log, TEXT("Is Attackable = %s"), isAttackable ? TEXT("true") : TEXT("false"));
	int hp = 100;
	UE_LOG(LogTemp, Log, TEXT("Hp = %d"), hp);
	float AttackSpeed = 1.0f;
	UE_LOG(LogTemp, Log, TEXT("Attack Speed = %f"), AttackSpeed);
	FVector CP = GetActorLocation();
	UE_LOG(LogTemp, Log, TEXT("Psoition = %s"), *CP.ToString());
	UE_LOG(LogTemp, Log, TEXT("%s, &d, %f"), *CharacterName, hp, AttackSpeed);


}

// Called every frame
void ALogpratice::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

