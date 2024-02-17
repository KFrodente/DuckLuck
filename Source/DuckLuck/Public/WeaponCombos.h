// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WeaponCombo.h"
#include "Components/ActorComponent.h"
#include "WeaponCombos.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DUCKLUCK_API UWeaponCombos : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UWeaponCombos();

	/*UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<AWeaponCombo*> Combos;*/

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<AWeaponCombo*> pistolCombos;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<AWeaponCombo*> shotgunCombos;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	int CheckForCombo(const int MainWeaponNum, const int SubWeaponNum);
};
