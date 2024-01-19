// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapon.h"
#include "Pistol.generated.h"

/**
 * 
 */
UCLASS()
class DUCKLUCK_API APistol : public AWeapon
{
	GENERATED_BODY()
	
	UFUNCTION(BlueprintCallable)
	void OverrideParentVariables() override;
};
