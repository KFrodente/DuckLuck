// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperSpriteActor.h"
#include "GunPart.generated.h"

/**
 * 
 */

UCLASS()
class DUCKLUCK_API AGunPart : public APaperSpriteActor
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool unlocked;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool inUse;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int level;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int coatingSlotsChange = 0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int casingSlotsChange = 0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int modifierSlotsChange = 0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int fireRateMod = 0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int bulletDamageMod = 0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int bulletVelocityMod = 0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int burstAmountMod = 0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int timeBetweenBurstsMod = 0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int bulletsPerSpreadMod = 0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int spreadAngleMod = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int additionalBulletSizeMod = 0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int maxChargesMod = 0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int chargeTimeMod = 0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int chargeTimeModMod = 0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int damagePerChargeMod = 0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int velocityModPerChargeMod = 0;
};
