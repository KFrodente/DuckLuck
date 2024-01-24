// Fill out your copyright notice in the Description page of Project Settings.


#include "ShotgunVariables.h"

// Sets default values for this component's properties
UShotgunVariables::UShotgunVariables()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UShotgunVariables::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UShotgunVariables::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UShotgunVariables::SetVariables(float bulletLifespanF, int bulletsPerSpreadI, float spreadAngleF)
{
	bulletLifespan = bulletLifespanF;
	bulletsPerSpread = bulletsPerSpreadI;
	spreadAngle = spreadAngleF;

}

