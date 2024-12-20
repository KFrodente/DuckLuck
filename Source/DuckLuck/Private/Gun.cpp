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
	bulletsPerReload = 0;
	reloadSpeed = 0;
	maxCharges = 0;
	chargeTime = 0;
	chargeTimeMod = 0;
	damagePerCharge = 0;
	velocityModPerCharge = 0;
	additionalBulletSize = 0;
	searchSize = 0;
	searchSpeed = 0;
	maxTargets = 0;
}

void AGun::AddModifier(AGunPart* gunPart)
{

	L_CoatingSlot += std::max(gunPart->coatingSlotsChange, 20);
	L_CasingSlot += gunPart->casingSlotsChange;
	L_ModifierSlot += gunPart->modifierSlotsChange;
	L_FireRate += gunPart->fireRateMod;
	L_BulletDamage += gunPart->bulletDamageMod;
	L_BulletVelocity += gunPart->bulletVelocityMod;
	L_BurstAmount += gunPart->burstAmountMod;
	L_TimeBetweenBursts += gunPart->timeBetweenBurstsMod;
	L_BulletsPerSpread += gunPart->bulletsPerSpreadMod;
	L_SpreadAngle += gunPart->spreadAngleMod;
	L_AdditionalBulletSize += gunPart->additionalBulletSizeMod;
	L_BulletsPerReload += gunPart->bulletsPerReloadMod;
	L_ReloadSpeed += gunPart->reloadSpeedMod;
	L_MaxCharges += gunPart->maxChargesMod;
	L_ChargeTime += gunPart->chargeTime;
	L_ChargeTimeMod += gunPart->chargeTimeMod;
	L_DamagePerCharge += gunPart->damagePerChargeMod;
	L_VelocityModPerCharge += gunPart->velocityModPerChargeMod;
	L_SearchSize += gunPart->searchSize;
	L_SearchSpeed += gunPart->searchSpeed;
	L_MaxTargets += gunPart->maxTargets;

	setVariables();
}

void AGun::RemoveModifier(AGunPart* gunPart)
{
	L_CoatingSlot -= gunPart->coatingSlotsChange;
	L_CasingSlot -= gunPart->casingSlotsChange;
	L_ModifierSlot -= gunPart->modifierSlotsChange;
	L_FireRate -= gunPart->fireRateMod;
	L_BulletDamage -= gunPart->bulletDamageMod;
	L_BulletVelocity -= gunPart->bulletVelocityMod;
	L_BurstAmount -= gunPart->burstAmountMod;
	L_TimeBetweenBursts -= gunPart->timeBetweenBurstsMod;
	L_BulletsPerSpread -= gunPart->bulletsPerSpreadMod;
	L_SpreadAngle -= gunPart->spreadAngleMod;
	L_AdditionalBulletSize -= gunPart->additionalBulletSizeMod;
	L_BulletsPerReload -= gunPart->bulletsPerReloadMod;
	L_ReloadSpeed -= gunPart->reloadSpeedMod;
	L_MaxCharges -= gunPart->maxChargesMod;
	L_ChargeTime -= gunPart->chargeTime;
	L_ChargeTimeMod -= gunPart->chargeTimeMod;
	L_DamagePerCharge -= gunPart->damagePerChargeMod;
	L_VelocityModPerCharge -= gunPart->velocityModPerChargeMod;
	L_SearchSize -= gunPart->searchSize;
	L_SearchSpeed -= gunPart->searchSpeed;
	L_MaxTargets -= gunPart->maxTargets;

	setVariables();
}

void AGun::setVariables()
{
	coatingSlotsAvailable  = S_CoatingSlotsAvailable[std::max(0, std::min(L_CoatingSlot, 20))];
	casingSlotsAvailable = S_CasingSlotsAvailable[std::max(0, std::min(L_CasingSlot, 20))];
	modifierSlotsAvailable = S_ModifierSlotsAvailable[std::max(0, std::min(L_ModifierSlot, 20))];
	fireRate = S_FireRate[std::max(0, std::min(L_FireRate, 20))];
	bulletDamage = S_BulletDamage[std::max(0, std::min(L_BulletDamage, 20))];
	bulletVelocity = S_BulletVelocity[std::max(0, std::min(L_BulletVelocity, 20))];
	burstAmount = S_BurstAmount[std::max(0, std::min(L_BurstAmount, 20))];
	timeBetweenBursts = S_TimeBetweenBursts[std::max(0, std::min(L_TimeBetweenBursts, 20))];
	bulletsPerSpread = S_BulletsPerSpread[std::max(0, std::min(L_BulletsPerSpread, 20))];
	spreadAngle = S_SpreadAngle[std::max(0, std::min(L_SpreadAngle, 20))];
	additionalBulletSize = S_AdditionalBulletSize[std::max(0, std::min(L_AdditionalBulletSize, 20))];
	bulletsPerReload = S_BulletsPerReload[std::max(0, std::min(L_BulletsPerReload, 20))];
	reloadSpeed = S_ReloadSpeed[std::max(0, std::min(L_ReloadSpeed, 20))];
	maxCharges = S_MaxCharges[std::max(0, std::min(L_MaxCharges, 20))];
	chargeTime = S_ChargeTime[std::max(0, std::min(L_ChargeTime, 20))];
	chargeTimeMod = S_ChargeTimeMod[std::max(0, std::min(L_ChargeTimeMod, 20))];
	damagePerCharge = S_DamagePerCharge[std::max(0, std::min(L_DamagePerCharge, 20))];
	velocityModPerCharge = S_VelocityModPerCharge[std::max(0, std::min(L_VelocityModPerCharge, 20))];
	searchSize = S_SearchSize[std::max(0, std::min(L_SearchSize, 20))];
	searchSpeed = S_SearchSpeed[std::max(0, std::min(L_SearchSpeed, 20))];
	maxTargets = S_MaxTargets[std::max(0, std::min(L_MaxTargets, 20))];

}

