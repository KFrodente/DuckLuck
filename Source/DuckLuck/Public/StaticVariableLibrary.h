// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "StaticVariableLibrary.generated.h"

/**
 * 
 */
UCLASS()
class DUCKLUCK_API UStaticVariableLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	


	UFUNCTION(BlueprintCallable)
	static bool GetCurrentlyFiring();

	UFUNCTION(BlueprintCallable)
	static void SetCurrentlyFiring(bool isFiring);
};
