// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemy.h"
#include "SecondEnemy.generated.h"

/**
 * 
 */
UCLASS()
class TESTSHOOTER_API ASecondEnemy : public AEnemy
{
	GENERATED_BODY()

public:
	virtual bool CanShoot(AActor* Hero) override;

	//virtual void Tick(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction);

	virtual void Tick(float DeltaTime);

	UPROPERTY()
		float Distance = 8000;
};
