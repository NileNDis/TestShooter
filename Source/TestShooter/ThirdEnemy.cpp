// Fill out your copyright notice in the Description page of Project Settings.


#include "ThirdEnemy.h"

void AThirdEnemy::BeginPlay()
{

	Super::BeginPlay();

	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, TEXT("Health3: "));
}