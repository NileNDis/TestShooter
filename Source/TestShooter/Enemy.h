// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"//Actor.h
#include "Enemy.generated.h"

UCLASS()
class TESTSHOOTER_API AEnemy : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's propertiess
	AEnemy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
		UStaticMeshComponent* Target;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = HP)
		class UHealthComponent* Health;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void HandleDestruction();//
};
