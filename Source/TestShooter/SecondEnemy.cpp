// Fill out your copyright notice in the Description page of Project Settings.


#include "SecondEnemy.h"

void ASecondEnemy::BeginPlay()
{

	Super::BeginPlay();

	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("Health2: "));
}