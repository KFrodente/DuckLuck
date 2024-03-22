// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Bullet.h"
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BulletStats.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DUCKLUCK_API UBulletStats : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UBulletStats();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public: //FUNCTIONS
	UFUNCTION(BlueprintCallable)
	void ReCheckBulletStats(const ABullet* mainBullet, const ABullet* subBullet);
		
	//Needs to do this every time a bullet is created
	UFUNCTION(BlueprintCallable)
	bool CheckForElement() const;


public: //VARIABLES

	UPROPERTY(BlueprintReadOnly)
	bool nextBulletHasElement;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float totalDamage;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int totalElementChance;
};
