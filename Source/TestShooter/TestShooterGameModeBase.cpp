// Copyright Epic Games, Inc. All Rights Reserved.


#include "TestShooterGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "Enemy.h"

void ATestShooterGameModeBase::ActorDied(AActor* DeadActor)
{
  //  if (DeadActor == Tank)
  //  {
  //      Tank->HandleDestruction();
  //      if (Tank->GetTankPlayerController())
  //      {
  //          Tank->DisableInput(Tank->GetTankPlayerController());
  //          Tank->GetTankPlayerController()->bShowMouseCursor = false;
  //      }
  //  }
    //if (AEnemy* DestroyedEnemy = Cast<AEnemy>(DeadActor))
   // {
   //     DestroyedEnemy->HandleDestruction();
   // }
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

