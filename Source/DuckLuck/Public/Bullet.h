// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperSpriteActor.h"
#include "Bullet.generated.h"

/**
 * 
 */


UCLASS()
class DUCKLUCK_API ABullet : public APaperSpriteActor
{
	GENERATED_BODY()
	

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float baseDamage;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<float> l_Damage;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float multiplier = 1;


	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int modIndex;
};
