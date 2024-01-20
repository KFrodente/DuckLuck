// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperSpriteActor.h"
#include "Weapon.generated.h"

UCLASS()
class DUCKLUCK_API AWeapon : public APaperSpriteActor
{
	GENERATED_BODY()

public:
	virtual void OverrideParentVariables();

public: ///GLOBAL WEAPON VARIABLES

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool owned;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool active;

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float fireRate;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float bulletVelocity;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector m_RFirePoint{ 0, 0, 0 };
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector m_LFirePoint{ 0, 0, 0 };

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector m_UFirePoint{ 0, 0, 0 };

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector m_DFirePoint{ 0, 0, 0 };

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int m_WeaponNumber;
};
