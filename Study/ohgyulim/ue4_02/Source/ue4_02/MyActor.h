// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class UE4_02_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();
   
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
    int32 TotalDamage;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
    float DamageTimeInSeconds;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Transient, Category = "Damage")
    float DamagePerSecond;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString CharacterName;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bAttackable;
    
//    int8 : 127 ~ -128
//    int16 : 32,767 ~ -32,768
//    int32 : 214,648,647 ~ -214,648,648
//    int64 : 9,223,372,036,854,775,807 ~ 9,223,372,036,854,775,808
    
//    uint8 : 0 ~ 255
//    uint16 : 0 ~ 65,535
//    uint32 : 0 ~ 4,294,967,295
//    uint64 : 0 ~ 18,446,744,073,709,551,615

//    게임의 최적화를 위해 적절한 범위의 데이터타입을 사용하고, 범위가 넘어갈 가능성을 배제할 수 없다면 예외처리함.
    
//    float : 32비트 (소수점 5자리)
//    double : 64비트 (소수점 10자리)
    
//    FString : 저장되는 글자의 숫자에 따라서 변수의 길이가 자동으로 달라지는 타입, 기존 cpp의 std string과 유사하게 동작함.
    
//    bool
    
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
