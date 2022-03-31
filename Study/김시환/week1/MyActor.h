// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class FIRST_STUDY_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();

	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Damage") //변수 선정
	int32 TotalDamage;
	UPROPERTY(EditAnywhere/*아키타입과 레벨에 배치된 인스턴스 양쪽 모두의 프로퍼티창에서 편집가믕*/, BlueprintReadWrite/*블루프린트에서 읽기쓰기 가능*/, Category = "Damage"/*데미지라는 카테고리로 묶어줌*/)
	float DamageTimeInSeconds;
	UPROPERTY(BlueprintReadOnly/*블루프린트에서 읽기만 가능*/, VisibleAnywhere/*편집불가*/, Transient/*휘발성아님*/, Category = "Damage") //변수 선정
	float DamagePerSecond;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString CharacterName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) 
	bool bAttackable;
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category = "Damage")
	FString str;
	/*
	int8 i8; //정수
	int16 i16;
	int32 i32;
	int64 i64;
	 
	uint8 ui8; //양수만
	uint16 ui16;
	uint32 ui32;
	uint64 ui64;

	float f;
	double d;

	FString str; // TEXT 메크로 사용

	bool b;
	*/

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UFUNCTION(BlueprintCallable, Category = "Damage")//블루프린트에서 사용가능
	void CalculateDPS();
	/*UFUNCTION(BlueprintImplementableEvent, Category = "Damage")//블루프린트에서 함수의 전반적 내용 구현
	void CallFromCpp();*/
	UFUNCTION(BlueprintNativeEvent, Category = "Damage")//블루프린트에서 구현이 안되었을 경우 cpp함수로 구현됨
	void CallFromCPP2();
	virtual void CallFromCpp2_Implementation();

	virtual void PostInitProperties() override; 
	//virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override; //왜 오류나지...
};
