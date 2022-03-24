// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CustomStructs.generated.h"
/**
 * 
 */
class DCOM_API CustomStructs
{
public:
	CustomStructs();
	~CustomStructs();
};

USTRUCT(Atomic, EBlueprintType) 
struct FCustomStruct
{
	GENERATED_USTRUCT_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintRedaWrite)
		AActor* actor;
	UPROPERTY(EditAnywhere, BlueprintRedaWrite)
		int32 i;
	UPROPERTY(EditAnywhere, BlueprintRedaWrite)
		float f;
};