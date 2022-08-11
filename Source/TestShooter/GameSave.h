// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "Kismet/GameplayStatics.h"
#include "GameSave.generated.h"

/**
 * 
 */
UCLASS()
class TESTSHOOTER_API UGameSave : public USaveGame
{
	GENERATED_BODY()
	
public:

	UGameSave();

	UPROPERTY(EditAnywhere)
		FVector PlayerLocation;

	UPROPERTY(EditAnywhere)
		float HP;

	UPROPERTY(EditAnywhere)
		float EnemyHealth;

	class AFPSCharacter* FPSCharacter;

	class UHealthComponent* HealthComp;

	class AEnemy* EnemyHp;
};
