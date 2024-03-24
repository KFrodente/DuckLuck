// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperSpriteActor.h"
#include "Modifier.generated.h"

/**
 * 
 */

UCLASS()
class DUCKLUCK_API AModifier : public APaperSpriteActor
{
	GENERATED_BODY()
	

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool owned;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int level;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool usesActivationTime;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int activationChance;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float activationTime;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<int> l_Chance;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<float> l_Time;

public:
	UFUNCTION(BlueprintCallable)
	void SetChanceAndTime();

	UFUNCTION(BlueprintCallable)
	bool CheckActivationChance();
};
