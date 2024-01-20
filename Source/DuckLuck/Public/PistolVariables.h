// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PistolVariables.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
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
	UFUNCTION(BlueprintCallable)
	void SetVariables(int burstAmounti, float burstDelayf, float burstDelayModf);

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int burstAmount;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float burstDelay;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float burstDelayMod;
		
};
