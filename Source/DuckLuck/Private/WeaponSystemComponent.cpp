// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponSystemComponent.h"

#include "EngineUtils.h"

// Sets default values for this component's properties
UWeaponSystemComponent::UWeaponSystemComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UWeaponSystemComponent::BeginPlay()
{
	Super::BeginPlay();
	
	// ...
	
}


// Called every frame
void UWeaponSystemComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UWeaponSystemComponent::PistolCollected()
{
	m_Pistol.GetDefaultObject()->owned = true;
	SetActiveWeapon(m_Pistol.GetDefaultObject()->m_WeaponNumber, 0);
}

void UWeaponSystemComponent::SetActiveWeapon(int main, int secondary)
{
	mainWeaponNum = main;
	subWeaponNum = secondary;
}
