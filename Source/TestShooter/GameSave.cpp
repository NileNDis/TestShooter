// Fill out your copyright notice in the Description page of Project Settings.


#include "GameSave.h"
#include "FPSCharacter.h"
#include "HealthComponent.h"

UGameSave::UGameSave()
{
	FPSCharacter = CreateDefaultSubobject<AFPSCharacter>(TEXT("FPSCharacter"));

	HealthComp = CreateDefaultSubobject<UHealthComponent>(TEXT("Health"));

	EnemyHp = CreateDefaultSubobject<AEnemy>(TEXT("EnemyHp"));

	//HP = HealthComp->Health;

	PlayerLocation = FPSCharacter->GetActorLocation();

	//EnemyHealth = EnemyHp->Health;

}