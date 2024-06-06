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
	coatingSlotsAvailable  = S_CoatingSlotsAvailable[std::max(0, std::min(L_CoatingSlot, 19))];
	casingSlotsAvailable = S_CasingSlotsAvailable[std::max(0, std::min(L_CasingSlot, 19))];
	modifierSlotsAvailable = S_ModifierSlotsAvailable[std::max(0, std::min(L_ModifierSlot, 19))];
	fireRate = S_FireRate[std::max(0, std::min(L_FireRate, 19))];
	bulletVelocity = S_BulletVelocity[std::max(0, std::min(L_BulletVelocity, 19))];
	burstAmount = S_BurstAmount[std::max(0, std::min(L_BurstAmount, 19))];
	timeBetweenBursts = S_TimeBetweenBursts[std::max(0, std::min(L_TimeBetweenBursts, 19))];
	bulletsPerSpread = S_BulletsPerSpread[std::max(0, std::min(L_BulletsPerSpread, 19))];
	spreadAngle = S_SpreadAngle[std::max(0, std::min(L_SpreadAngle, 19))];
	additionalBulletSize = S_AdditionalBulletSize[std::max(0, std::min(L_AdditionalBulletSize, 19))];
	maxCharges = S_MaxCharges[std::max(0, std::min(L_MaxCharges, 19))];
	chargeTime = S_ChargeTime[std::max(0, std::min(L_ChargeTime, 19))];
	chargeTimeMod = S_ChargeTimeMod[std::max(0, std::min(L_ChargeTimeMod, 19))];
	damagePerCharge = S_DamagePerCharge[std::max(0, std::min(L_DamagePerCharge, 19))];
	velocityModPerCharge = S_VelocityModPerCharge[std::max(0, std::min(L_VelocityModPerCharge, 19))];
}

