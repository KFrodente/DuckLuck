// Fill out your copyright notice in the Description page of Project Settings.


#include "Modifier.h"
#include "Bullet.h"

void AModifier::SetChanceAndTime()
{
	activationChance = l_Chance[level];
	activationTime = l_Time[level];
}

bool AModifier::CheckActivationChance()
{
	int random = FMath::RandRange(1, 100);
	return random <= activationChance;
}
