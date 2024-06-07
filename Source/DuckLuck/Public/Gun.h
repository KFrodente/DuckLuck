// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GunPart.h"
#include "CoreMinimal.h"
#include "PaperSpriteActor.h"
#include "Gun.generated.h"


UCLASS()
class DUCKLUCK_API AGun : public APaperSpriteActor
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int gunLevel;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int triggerSlotsAvailable = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int coatingSlotsAvailable;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int> coatingSlotsLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int casingSlotsAvailable;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int> casingSlotsLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int modifierSlotsAvailable;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int> modifierSlotsLevel;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float fireRate;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float bulletDamage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float bulletVelocity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int burstAmount;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float timeBetweenBursts;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int bulletsPerSpread;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float spreadAngle;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float additionalBulletSize;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int maxCharges;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float chargeTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float chargeTimeMod;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float damagePerCharge;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float velocityModPerCharge;
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<int> S_CoatingSlotsAvailable;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<int> S_CasingSlotsAvailable;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<int> S_ModifierSlotsAvailable;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<float> S_FireRate;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<float> S_BulletDamage;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<float> S_BulletVelocity;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<int> S_BurstAmount;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<float> S_TimeBetweenBursts;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<int> S_BulletsPerSpread;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<float> S_SpreadAngle;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<float> S_AdditionalBulletSize;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<int> S_MaxCharges;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<float> S_ChargeTime;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<float> S_ChargeTimeMod;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<float> S_DamagePerCharge;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<float> S_VelocityModPerCharge;

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int L_CoatingSlot = 11;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int L_CasingSlot = 11;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int L_ModifierSlot = 11;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int L_FireRate = 11;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int L_BulletDamage = 11;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int L_BulletVelocity = 11;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int L_BurstAmount = 11;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int L_TimeBetweenBursts = 11;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int L_BulletsPerSpread = 11;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int L_SpreadAngle = 11;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int L_AdditionalBulletSize = 11;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int L_MaxCharges = 11;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int L_ChargeTime = 11;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int L_ChargeTimeMod = 11;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int L_DamagePerCharge = 11;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int L_VelocityModPerCharge = 11;



public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FVector rFirePoint{ 50, 0, -8 };
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FVector lFirePoint{ -50, 0, -8 };
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FVector uFirePoint{ 0, 0, 50 };
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FVector dFirePoint{ 0, 0, -50 };

public:
	UFUNCTION(BlueprintCallable)
	void ResetVariables();

	UFUNCTION(BlueprintCallable)
	void AddModifier(AGunPart* gunPart);
	UFUNCTION(BlueprintCallable)
	void RemoveModifier(AGunPart* gunPart);

	UFUNCTION(BlueprintCallable)
	void setVariables();

};