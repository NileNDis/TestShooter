// Fill out your copyright notice in the Description page of Project Settings.


#include "FirstEnemy.h"
#include "HealthComponent.h"

void AFirstEnemy::BeginPlay()
{
	
	Super::BeginPlay();

//	FVector EnemyOneLocation = GetActorLocation();

	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::Printf(TEXT("Health1: ")));
}





