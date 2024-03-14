// Fill out your copyright notice in the Description page of Project Settings.


#include "ChargeVariables.h"

// Sets default values for this component's properties
UChargeVariables::UChargeVariables()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UChargeVariables::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UChargeVariables::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UChargeVariables::SetVariables(int maxChargesi, float chargeTimef, float chargeTimeModf, float damagePerChargef, float velocityModf)
{
	maxCharges = maxChargesi;
	chargeTime = chargeTimef;
	chargeTimeMod = chargeTimeModf;
	bulletDamagePerCharge = damagePerChargef;
	velocityModPerCharge = velocityModf;
}

