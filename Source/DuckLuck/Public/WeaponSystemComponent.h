// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Pistol.h"
#include "Bullet.h"
#include "WeaponStatsComponent.h"
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WeaponSystemComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DUCKLUCK_API UWeaponSystemComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UWeaponSystemComponent();

public: // ***** VARIABLES *****

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	APistol* m_Pistol;

	UPROPERTY(BlueprintReadOnly)
	int mainWeaponNum;

	UPROPERTY(BlueprintReadOnly)
	int subWeaponNum;

private:

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


public: // ***** METHODS AND FUNCTIONS *****
	UFUNCTION(BlueprintCallable)
	void SetWeapons(APistol* pistol);

	UFUNCTION(BlueprintCallable)
	void PistolCollected();

	UFUNCTION(BlueprintCallable)
	void SetActiveWeapon(int main, int secondary);
		
};
