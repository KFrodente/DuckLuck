// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperSpriteActor.h"
#include "Bullet.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class eBulletType
{
	NORMAL UMETA(DisplayName = "Normal"),
	BIG UMETA(DisplayName = "Big")
};


UCLASS()
class DUCKLUCK_API ABullet : public APaperSpriteActor
{
	GENERATED_BODY()
	

public:

	UPROPERTY(BlueprintReadWrite)
	int m_DamageLevel;

	UPROPERTY(BlueprintReadWrite)
	int m_ElementChanceLevel;

	UPROPERTY(BlueprintReadWrite)
	eBulletType m_Type;
};
