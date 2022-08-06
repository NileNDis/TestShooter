// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemy.h"
#include "HealthComponent.h"
#include "FirstEnemy.generated.h"

/**
 * 
 */
UCLASS()
class TESTSHOOTER_API AFirstEnemy : public AEnemy
{
	GENERATED_BODY()
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


};
