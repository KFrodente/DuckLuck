// Fill out your copyright notice in the Description page of Project Settings.


#include "BulletStats.h"

// Sets default values for this component's properties
UBulletStats::UBulletStats()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UBulletStats::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UBulletStats::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UBulletStats::ReCheckBulletStats(const ABullet* mainBullet, const ABullet* subBullet = nullptr)
{
	int mainLevel = mainBullet->m_BulletLevel;
	
	totalDamage = mainBullet->l_Damage[mainLevel];
	totalElementChance = mainBullet->l_ElementChance[mainLevel];
	
	if (subBullet != nullptr)
	{
		int subLevel = subBullet->m_BulletLevel;
		totalDamage += subBullet->l_SubDamage[subLevel];
		totalElementChance += subBullet->l_SubElementChance[subLevel];
	}

}

bool UBulletStats::CheckForElement() const
{
	int random = FMath::RandRange(1, 100);

	return random <= totalElementChance;
}

