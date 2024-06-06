// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GunPart.h"
#include "GunTriggerBase.generated.h"

/**
 * 
 */

UENUM(BlueprintType)
enum e_TriggerType
{
	BASIC UMETA(DisplayName = "Basic"),
	CHARGE UMETA(DisplayName = "Charge")
};

UCLASS()
class DUCKLUCK_API AGunTriggerBase : public AGunPart
{
	GENERATED_BODY()
};
