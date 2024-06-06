// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "StaticFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class DUCKLUCK_API UStaticFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	UFUNCTION(BlueprintCallable)
	static float MinusTimer(float timer, float dt);

	UFUNCTION(BlueprintCallable)
	static float PlusTimer(float timer, float dt);
};
