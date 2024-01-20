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
	int pistFireRateLevel = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int pistBulletVelocityLevel = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int shotgunFireRateLevel;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int shotgunBulletVelocityLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int chargeFireRateLevel;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int chargeBulletVelocityLevel;

private: //Stat levels
	float g_Firerate[6] = { 0, 3, 1, .8f, .5f, .1f };
	float g_BulletVelocity[6] = { 0, 500, 750, 1000, 1250, 1500 };
#pragma endregion

#pragma region Pistol Weapon Stats
public: ///PISTOL ONLY STATS
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool p_Owned;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int burstAmountLevel = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int burstDelayLevel = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int burstDelayModLevel = 1;

private: // Stat levels
	int p_BurstAmount[6] = { 0, 1, 2, 3, 4, 5 };
	float p_BurstDelay[6] = { 0, .5f, .4f, .3f, .2f, .1f };
	float p_BurstDelayMod[6] = { 0, 1, .75f, .6f, .5f, .25f }; //percentage
#pragma endregion 

#pragma region Shotgun Weapon Stats
public: ///SHOTGUN ONLY STATS
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool s_Owned;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int bulletLifespanLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int bulletsPerSpreadLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int spreadAngleLevel;

private:
	float s_BulletLifespan[6] = { 0, 1, 2, 3, 3.5f, 5 };
	int s_BulletsPerSpread[6] = { 0, 3, 4, 5, 6, 7 };
	float s_SpreadAngle[6] = { 0, 60, 50, 40, 30, 20 };
#pragma endregion
	 
#pragma region Charge Weapon Stats
public: ///CHARGE ONLY STATS
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool c_Owned;
	bool c_EquippedMain;
	bool c_EquippedDub;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int maxChargesLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int chargeTimeLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int chargeTimeModLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int bulletSizeizeperChargeLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int velocityModPerChargeLevel;
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

	//Pistol
	UPROPERTY(BlueprintReadOnly)
	int burstAmount;
	UPROPERTY(BlueprintReadOnly)
	float burstDelay;
	UPROPERTY(BlueprintReadOnly)
	float burstDelayMod;

	//Shotgun
	UPROPERTY(BlueprintReadOnly)
	float bulletLifespan;
	UPROPERTY(BlueprintReadOnly)
	int bulletsPerSpread;
	UPROPERTY(BlueprintReadOnly)
	float spreadAngle;

	//Charge
	UPROPERTY(BlueprintReadOnly)
	float chargeTime;
	UPROPERTY(BlueprintReadOnly)
	float chargeTimeMod;
	UPROPERTY(BlueprintReadOnly)
	float bulletSizePerCharge;
	UPROPERTY(BlueprintReadOnly)
	float velocityModPerCharge;
public: //Bullet stats
	UPROPERTY(BlueprintReadOnly)
	float damage;
	UPROPERTY(BlueprintReadOnly)
	int elementChance;



};
