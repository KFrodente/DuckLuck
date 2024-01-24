// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ShotgunVariables.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DUCKLUCK_API UShotgunVariables : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UShotgunVariables();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	void SetVariables(float bulletLifespanF, int bulletsPerSpreadI, float spreadAngleF);

public:
	UPROPERTY(BlueprintReadOnly)
	float bulletLifespan;
	UPROPERTY(BlueprintReadOnly)
	int bulletsPerSpread;
	UPROPERTY(BlueprintReadOnly)
	float spreadAngle;

};
