// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponCombos.h"

// Sets default values for this component's properties
UWeaponCombos::UWeaponCombos()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UWeaponCombos::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UWeaponCombos::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

int UWeaponCombos::CheckForCombo(const int MainWeaponNum, const int SubWeaponNum)
{
	if (MainWeaponNum == 1) //if main weapon is a pistol it does this for loop
	{
		for (int i = 0; i < pistolCombos.Num(); i++)
		{
			if (pistolCombos[i]->subWeaponNum == SubWeaponNum)
				return i;
		}
	}

	if (MainWeaponNum == 2) //if main weapon is a pistol it does this for loop
	{
		for (int i = 0; i < shotgunCombos.Num(); i++)
		{
			if (shotgunCombos[i]->subWeaponNum == SubWeaponNum)
				return i;
		}
	}

	return -1;
}

