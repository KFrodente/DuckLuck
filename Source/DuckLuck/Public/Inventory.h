// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "WeaponStatsComponent.h"
#include "BulletStats.h"
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Inventory.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DUCKLUCK_API UInventory : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInventory();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


public:
	UFUNCTION(BlueprintCallable)
	void SetVars(UWeaponStatsComponent* stats);

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UWeaponStatsComponent* weaponStats;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int ModifierSlots = 1;
};
