// Fill out your copyright notice in the Description page of Project Settings.


#include "Gun.h"

void AGun::ResetVariables()
{
	triggerSlotsAvailable = 1;
	coatingSlotsAvailable = coatingSlotsLevel[gunLevel];
	casingSlotsAvailable = casingSlotsLevel[gunLevel];
	modifierSlotsAvailable = modifierSlotsLevel[gunLevel];
	fireRate = 0;
	bulletVelocity = 0;
	burstAmount = 0;
	timeBetweenBursts = 0;
	bulletsPerSpread = 0;
	spreadAngle = 0;
	maxCharges = 0;
	chargeTime = 0;
	chargeTimeMod = 0;
	damagePerCharge = 0;
	velocityModPerCharge = 0;
	additionalBulletSize = 0;
}

void AGun::AddModifier(AGunPart* gunPart)
{

	L_CoatingSlot += gunPart->coatingSlotsChange;
	L_CasingSlot += gunPart->casingSlotsChange;
	L_ModifierSlot += gunPart->modifierSlotsChange;
	L_FireRate += gunPart->fireRateMod;
	L_BulletVelocity += gunPart->bulletVelocityMod;
	L_BurstAmount += gunPart->burstAmountMod;
	L_TimeBetweenBursts += gunPart->timeBetweenBurstsMod;
	L_BulletsPerSpread += gunPart->bulletsPerSpreadMod;
	L_SpreadAngle += gunPart->spreadAngleMod;
	L_AdditionalBulletSize += gunPart->additionalBulletSizeMod;
	L_MaxCharges += gunPart->maxChargesMod;
	L_ChargeTime += gunPart->chargeTimeMod;
	L_ChargeTimeMod += gunPart->chargeTimeModMod;
	L_DamagePerCharge += gunPart->damagePerChargeMod;
	L_VelocityModPerCharge += gunPart->velocityModPerChargeMod;
	setVariables();
}

void AGun::RemoveModifier(AGunPart* gunPart)
{
	L_CoatingSlot -= gunPart->coatingSlotsChange;
	L_CasingSlot -= gunPart->casingSlotsChange;
	L_ModifierSlot -= gunPart->modifierSlotsChange;
	L_FireRate -= gunPart->fireRateMod;
	L_BulletVelocity -= gunPart->bulletVelocityMod;
	L_BurstAmount -= gunPart->burstAmountMod;
	L_TimeBetweenBursts -= gunPart->timeBetweenBurstsMod;
	L_BulletsPerSpread -= gunPart->bulletsPerSpreadMod;
	L_SpreadAngle -= gunPart->spreadAngleMod;
	L_AdditionalBulletSize -= gunPart->additionalBulletSizeMod;
	L_MaxCharges -= gunPart->maxChargesMod;
	L_ChargeTime -= gunPart->chargeTimeMod;
	L_ChargeTimeMod -= gunPart->chargeTimeModMod;
	L_DamagePerCharge -= gunPart->damagePerChargeMod;
	L_VelocityModPerCharge -= gunPart->velocityModPerChargeMod;
	setVariables();
}

void AGun::setVariables()
{
	coatingSlotsAvailable  = S_CoatingSlotsAvailable[L_CoatingSlot];
	casingSlotsAvailable = S_CasingSlotsAvailable[L_CasingSlot];
	modifierSlotsAvailable = S_ModifierSlotsAvailable[L_ModifierSlot];
	fireRate = S_FireRate[L_FireRate];
	bulletVelocity = S_BulletVelocity[L_BulletVelocity];
	burstAmount = S_BurstAmount[L_BurstAmount];
	timeBetweenBursts = S_TimeBetweenBursts[L_TimeBetweenBursts];
	bulletsPerSpread = S_BulletsPerSpread[L_BulletsPerSpread];
	spreadAngle = S_SpreadAngle[L_SpreadAngle];
	additionalBulletSize = S_AdditionalBulletSize[L_AdditionalBulletSize];
	maxCharges = S_MaxCharges[L_MaxCharges];
	chargeTime = S_ChargeTime[L_ChargeTime];
	chargeTimeMod = S_ChargeTimeMod[L_ChargeTimeMod];
	damagePerCharge = S_DamagePerCharge[L_DamagePerCharge];
	velocityModPerCharge = S_VelocityModPerCharge[L_VelocityModPerCharge];
}

