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
	bool m_owned;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int m_BulletLevel = 1;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<float> l_Damage;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<int> l_ElementChance;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<float> l_SubDamage;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<int> l_SubElementChance;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int bulletNumber;
};
