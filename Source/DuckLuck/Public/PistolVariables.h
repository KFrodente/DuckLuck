// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PistolVariables.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), BlueprintType)
class DUCKLUCK_API UPistolVariables : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPistolVariables();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
	UPROPERTY(BlueprintReadOnly)
	int burstAmount;

	UPROPERTY(BlueprintReadOnly)
	float burstDelay;

	UPROPERTY(BlueprintReadOnly)
	float burstDelayMod;

	UPROPERTY(BlueprintReadOnly)
	int subBurstAmount;
};
