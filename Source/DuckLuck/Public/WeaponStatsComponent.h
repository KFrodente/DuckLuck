// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <random>
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WeaponStatsComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DUCKLUCK_API UWeaponStatsComponent : public UActorComponent
{
	GENERATED_BODY()

	/// <summary>
	/// If confused about what a variable does, go check the lucid chart
	/// 	[Lore Door > Duck Luck (Capstone) > Checklist]
	/// All of the stat descriptions are in there
	/// </summary>
public:	
	// Sets default values for this component's properties
	UWeaponStatsComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

#pragma region Global Weapon Stats
public: ///GLOBAL GUN STATS

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int pistFireRateLevel = 3;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int pistBulletVelocityLevel = 3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int shotgunFireRateLevel = 3;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int shotgunBulletVelocityLevel = 3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int chargeFireRateLevel = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int chargeBulletVelocityLevel = 3;

private: //Stat levels
	float g_Firerate[6] = { 0, 3, 1, .8f, .5f, .1f };
	float g_BulletVelocity[6] = { 0, 500, 750, 1000, 1250, 1500 };
#pragma endregion

#pragma region Pistol Weapon Stats
public: ///PISTOL ONLY STATS
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool p_Owned;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int burstAmountLevel = 3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int burstDelayLevel = 3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int burstDelayModLevel = 3;

	UFUNCTION(BlueprintCallable)
	void SetPistolStats(int& burstAmountP, float& burstDelayP, float& burstDelayModP, int& subBurstAmountP);

private: // Stat levels
	int p_BurstAmount[6] = { 0, 1, 2, 3, 4, 5 };
	float p_BurstDelay[6] = { 0, .5f, .4f, .3f, .2f, .1f };
	float p_BurstDelayMod[6] = { 0, 1, .75f, .6f, .5f, .25f }; //percentage

	int p_SubBurstAmount[6] = { 0, 1, 2, 2, 3, 4 };

#pragma endregion 

#pragma region Shotgun Weapon Stats
public: ///SHOTGUN ONLY STATS
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool s_Owned;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int bulletLifespanLevel = 3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int bulletsPerSpreadLevel = 3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int spreadAngleLevel = 3;

	UFUNCTION(BlueprintCallable)
	void SetShotgunStats(float& bulletLifespanS, int& bulletsPerSpreadS, float& spreadAngleS, int& subBulletsPerSpreadS, float& subSpreadAngleS);

private:
	float s_BulletLifespan[6] = { 0, 1, 2, 3, 3.5f, 5 };
	int s_BulletsPerSpread[6] = { 0, 3, 4, 5, 6, 7 };
	float s_SpreadAngle[6] = { 0, 60, 50, 40, 30, 20 };

	int s_SubBulletsPerSpread[6] = { 0, 2, 2, 3, 4, 5 };
	float s_SubSpreadAngle[6] = { 0, 60, 50, 40, 30, 20 };
#pragma endregion
	 
#pragma region Charge Weapon Stats
public: ///CHARGE ONLY STATS
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool c_Owned;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int maxChargesLevel = 3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int chargeTimeLevel = 3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int chargeTimeModLevel = 3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int damagePerChargeLevel = 3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int velocityModPerChargeLevel = 3;

	UFUNCTION(BlueprintCallable)
	void SetChargeStats(int& maxChargesC, float& chargeTimeC, float& chargeTimeModC, float& damagePerChargeC, float& velocityModC);

private:
	int c_MaxCharges[6] = { 0, 2, 3, 4, 5, 6 };
	float c_ChargeTime[6] = { 0, 3, 2.5f, 2, 1.5f, 1 };
	float c_ChargeTimeMod[6] = { 0, 1, .8f, .6f, .4f, .2f };
	float c_DamagePerCharge[6] = { 0, .5f, .75f, 1, 1.5f, 2};
	float c_VelocityModPerCharge[6] = { 0, 1.1f, 1.2f, 1.5f, 2, 4};
#pragma endregion

#pragma region My Methods and Functions
public:

	UFUNCTION(BlueprintCallable)
	void ReCheckWeaponStats(int weaponNumberMain = 0, int weaponNumberSub = 0);

	UFUNCTION(BlueprintCallable)
	void ReCheckBulletStats(int bulletNumberMain = 0, int bulletNumberSub = 0);

	UFUNCTION(BlueprintCallable)
	void ReCheckAllStats(int weaponNumberMain = 0, int weaponNumberSub = 0, int bulletNumberMain = 0, int bulletNumberSub = 0);

	UFUNCTION(BlueprintCallable)
	bool WillBulletCauseElementDamage();

	UFUNCTION(BlueprintCallable)
	void BeginSetStats();

private:
	UFUNCTION(BlueprintCallable)
	void ResetAllWeaponStats();

	UFUNCTION(BlueprintCallable)
	void ResetAllBulletStats();
	
	UFUNCTION(BlueprintCallable)
	void ResetAllStats();

#pragma endregion

public:
	std::random_device random;

	UPROPERTY(BlueprintReadOnly)
	int recentMainWeapon;
	UPROPERTY(BlueprintReadOnly)
	int recentSubWeapon;

	UPROPERTY(BlueprintReadOnly)
	int recentMainBullet;
	UPROPERTY(BlueprintReadOnly)
	int recentSubBullet;

public: //Weapon stats
	//Global
	UPROPERTY(BlueprintReadOnly)
	float firerate;
	UPROPERTY(BlueprintReadOnly)
	float bulletVelocity;

public: //Bullet stats
	UPROPERTY(BlueprintReadOnly)
	float damage;
	UPROPERTY(BlueprintReadOnly)
	int elementChance;



};
