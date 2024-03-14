// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ChargeVariables.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DUCKLUCK_API UChargeVariables : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UChargeVariables();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
	UFUNCTION(BlueprintCallable)
	void SetVariables(int maxChargesi, float chargeTimef, float chargeTimeModf, float damagePerChargef, float velocityModf);

public:
	UPROPERTY(BlueprintReadOnly)
	int maxCharges;

	UPROPERTY(BlueprintReadOnly)
	float chargeTime;

	UPROPERTY(BlueprintReadOnly)
	float chargeTimeMod;

	UPROPERTY(BlueprintReadOnly)
	float bulletDamagePerCharge;

	UPROPERTY(BlueprintReadOnly)
	float velocityModPerCharge;
};
