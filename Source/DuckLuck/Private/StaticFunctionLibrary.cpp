// Fill out your copyright notice in the Description page of Project Settings.


#include "StaticFunctionLibrary.h"

float UStaticFunctionLibrary::MinusTimer(float timer, float dt)
{
	return timer - dt;
}

float UStaticFunctionLibrary::PlusTimer(float timer, float dt)
{
	return timer + dt;
}
