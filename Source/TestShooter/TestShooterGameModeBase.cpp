// Copyright Epic Games, Inc. All Rights Reserved.


#include "TestShooterGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "Enemy.h"

void ATestShooterGameModeBase::ActorDied(AActor* DeadActor)
{
    if (DeadActor == Enemy)
    {
        Enemy->HandleDestruction();
    }
}

void ATestShooterGameModeBase::BeginPlay()
{
    Super::BeginPlay();

    Enemy = Cast<AEnemy>(UGameplayStatics::GetPlayerPawn(this, 0));
}

