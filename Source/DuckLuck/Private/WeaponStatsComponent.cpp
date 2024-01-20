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




void UWeaponStatsComponent::ReCheckWeaponStats(int weaponNumberMain, int weaponNumberSub)
{
	ResetAllWeaponStats();
	if (weaponNumberMain == 1)
	{
		firerate = g_Firerate[pistFireRateLevel];
		bulletVelocity = g_BulletVelocity[pistBulletVelocityLevel];
		bulletVelocityMod = p_BulletVelocityMod[bulletVelocityModLevel];
		burstDelay = p_BurstDelay[burstDelayLevel];
		burstDelayMod = p_BurstDelayMod[burstDelayModLevel];
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

