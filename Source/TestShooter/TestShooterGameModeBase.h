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

	TArray <AActor*> Enemies;

	void Func();

	UPROPERTY(EditAnywhere)
	class AEnemy* Enemy;

	UPROPERTY(EditAnywhere)
		class UHealthComponent* Hp;

	UFUNCTION(BlueprintPure)
		TArray <AActor*> GetEnemies() { return Enemies; };

	//for (int i = 0; i < Enemies.Num(); i++)
	//{
	//	Enemies[i]->OnDestroyed.AddDynamic(this, &AFPSCharacter::DestroyDelegate);
	//}
	
	
	//void AFPSCharacter::DestroyDelegate(AActor* DestroyedActor)
	//{
	//	Enemies.Remove(DestroyedActor);
	//}

protected:
	ATestShooterGameModeBase();

	virtual void BeginPlay() override;//

private:


};
