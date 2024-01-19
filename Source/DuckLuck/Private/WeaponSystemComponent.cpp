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

void UWeaponSystemComponent::SetWeapons(APistol* pistol)
{
	m_Pistol = pistol;
	///***THIS WONT BE HERE LATER MAKE SURE TO CHANGE THE LINE BELOW***
	m_MainWeapon = m_Pistol;
}

void UWeaponSystemComponent::PistolCollected()
{
	m_Pistol->owned = true;
	SetActiveWeapon(m_Pistol->m_WeaponNumber);
}

void UWeaponSystemComponent::SetActiveWeapon(int main, int secondary)
{
	if (main == m_Pistol->m_WeaponNumber) { 
		//m_Pistol->active = true; 
		m_MainWeapon = m_Pistol; 
	}
	if (secondary == m_Pistol->m_WeaponNumber) {
		//m_Pistol->active = true;
		m_SecondaryWeapon = m_Pistol;
	}
}
