// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponStatsComponent.h"

// Sets default values for this component's properties
UWeaponStatsComponent::UWeaponStatsComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}
// Called when the game starts
void UWeaponStatsComponent::BeginPlay()
{
	Super::BeginPlay();
}
// Called every frame
void UWeaponStatsComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UWeaponStatsComponent::SetStatComponents(UPistolVariables* pistol, UShotgunVariables* shotgun, UChargeVariables* charge)
{
	pistolVariables = pistol;
	shotgunVariables = shotgun;
	chargeVariables = charge;
}

//void UWeaponStatsComponent::SetPistolStats(int& burstAmountP, float& burstDelayP, float& burstDelayModP, int& subBurstAmountP)
//{
//	burstAmountP = p_BurstAmount[burstAmountLevel];
//	burstDelayP = p_BurstDelay[burstDelayLevel];
//	burstDelayModP = p_BurstDelayMod[burstDelayModLevel];
//	subBurstAmountP = p_SubBurstAmount[burstAmountLevel];
//}

void UWeaponStatsComponent::SetPistolStats(int& burstAmountP, float& burstDelayP, float& burstDelayModP, int& subBurstAmountP)
{
	pistolVariables->burstAmount = p_BurstAmount[burstAmountLevel];
	pistolVariables->burstDelay = p_BurstDelay[burstDelayLevel];
	pistolVariables->burstDelayMod = p_BurstDelayMod[burstDelayModLevel];
	pistolVariables->subBurstAmount = p_SubBurstAmount[burstAmountLevel];
}
//
//void UWeaponStatsComponent::SetShotgunStats(float& bulletLifespanS, int& bulletsPerSpreadS, float& spreadAngleS, int& subBulletsPerSpreadS, float& subSpreadAngleS)
//{
//	bulletLifespanS = s_BulletLifespan[bulletLifespanLevel];
//	bulletsPerSpreadS = s_BulletsPerSpread[bulletsPerSpreadLevel];
//	spreadAngleS = s_SpreadAngle[spreadAngleLevel];
//	subBulletsPerSpreadS = s_SubBulletsPerSpread[bulletsPerSpreadLevel];
//	subSpreadAngleS = s_SubSpreadAngle[spreadAngleLevel];
//}

void UWeaponStatsComponent::SetShotgunStats(float& bulletLifespanS, int& bulletsPerSpreadS, float& spreadAngleS, int& subBulletsPerSpreadS, float& subSpreadAngleS)
{
	shotgunVariables->bulletLifespan = s_BulletLifespan[bulletLifespanLevel];
	shotgunVariables->bulletsPerSpread = s_BulletsPerSpread[bulletsPerSpreadLevel];
	shotgunVariables->spreadAngle = s_SpreadAngle[spreadAngleLevel];
	shotgunVariables->subBulletsPerSpread = s_SubBulletsPerSpread[bulletsPerSpreadLevel];
	shotgunVariables->subSpreadAngle = s_SubSpreadAngle[spreadAngleLevel];
}


void UWeaponStatsComponent::SetChargeStats(int& maxChargesC, float& chargeTimeC, float& chargeTimeModC, float& damagePerChargeC, float& velocityModC)
{
	maxChargesC = c_MaxCharges[maxChargesLevel];
	chargeTimeC = c_ChargeTime[chargeTimeLevel];
	chargeTimeModC = c_ChargeTimeMod[chargeTimeModLevel];
	damagePerChargeC = c_DamagePerCharge[damagePerChargeLevel];
	velocityModC = c_VelocityModPerCharge[velocityModPerChargeLevel];
}

void UWeaponStatsComponent::ReCheckWeaponStats(const int weaponNumberMain, const int weaponNumberSub)
{
	ResetAllWeaponStats();
	if (weaponNumberMain == 1)
	{
		firerate = g_Firerate[pistFireRateLevel];
		bulletVelocity = g_BulletVelocity[pistBulletVelocityLevel];
	}
	if (weaponNumberMain == 2)
	{
		firerate = g_Firerate[shotgunFireRateLevel];
		bulletVelocity = g_BulletVelocity[shotgunBulletVelocityLevel];
	}
	if (weaponNumberMain == 3)
	{
		firerate = g_Firerate[chargeFireRateLevel];
		bulletVelocity = g_BulletVelocity[chargeBulletVelocityLevel];
	}

	recentMainWeapon = weaponNumberMain;
	recentSubWeapon = weaponNumberSub;
	//if main number is 4 (element gun) reset ALL stats
}

void UWeaponStatsComponent::ReCheckBulletStats(int bulletNumberMain, int bulletNumberSub)
{
}

void UWeaponStatsComponent::ReCheckAllStats(int weaponNumberMain, int weaponNumberSub, int bulletNumberMain, int bulletNumberSub)
{
}

bool UWeaponStatsComponent::WillBulletCauseElementDamage()
{
	//TODO: does a random check based on 
	//the bullet's elemental damage chance.
	// 
	// * returns true if random chance happened, 
	//		causing the bullet to do it's element
	//
	//EVERY BULLET WHEN SPAWNED WILL CALL THIS *ONE* TIME
	//std::uniform_int_distribution<int> dist(1, 100);

	//int check = dist(random);

	//return check <= totalElementChance;
	return false;
}

void UWeaponStatsComponent::BeginSetStats()
{
}

void UWeaponStatsComponent::ResetAllWeaponStats()
{
	firerate = 0;
	bulletVelocity = 0;
}

void UWeaponStatsComponent::ResetAllBulletStats()
{
	damage = 0;
	elementChance = 0;
}

void UWeaponStatsComponent::ResetAllStats()
{
	firerate = 0;
	bulletVelocity = 0;
	damage = 0;
	elementChance = 0;
}

