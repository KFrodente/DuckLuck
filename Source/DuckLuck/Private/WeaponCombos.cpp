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

TSubclassOf<AWeaponCombo> UWeaponCombos::CheckForCombo(const int MainWeaponNum, const int SubWeaponNum)
{
	for (TSubclassOf<AWeaponCombo> combo : Combos)
	{
		if (combo.GetDefaultObject()->mainWeaponNum != MainWeaponNum) continue;
		if (combo.GetDefaultObject()->mainWeaponNum == MainWeaponNum && combo.GetDefaultObject()->subWeaponNum == SubWeaponNum)
			return combo;
	}
	return nullptr;
}

