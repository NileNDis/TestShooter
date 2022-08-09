// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TestShooterGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class TESTSHOOTER_API ATestShooterGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:

	void ActorDied(AActor* DeadActor);//



protected:

	virtual void BeginPlay() override;//

private:

	class AEnemy* Enemy;//

};
