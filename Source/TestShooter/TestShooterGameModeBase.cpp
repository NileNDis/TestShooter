// Copyright Epic Games, Inc. All Rights Reserved.


#include "TestShooterGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "Enemy.h"
#include "FirstEnemy.h"
#include "SecondEnemy.h"
#include "ThirdEnemy.h"
#include "HealthComponent.h"


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

    UGameplayStatics::GetAllActorsOfClass(this, AEnemy::StaticClass(), Enemies);

    Func();

    FTimerHandle Handle;
    GetWorld()->GetTimerManager().SetTimer(Handle, this, &ATestShooterGameModeBase::Func, 2.05f, true);

      Enemy->ShowHP();

     if (Enemy == nullptr)
     {
         return;
     }

   if (Enemy == nullptr)
   {
       return;
   }

}


void ATestShooterGameModeBase::Func()
{
 
    for (int32 i = 0; i < Enemies.Num(); i++)
    {
        Enemy = Cast<AEnemy>(Enemies[i]);
        GEngine->AddOnScreenDebugMessage(-1, 2.0f,
            FColor::Green, FString::Printf(TEXT("%s Enemy Health: %f"), *Enemies[i]->GetName(), Enemy->Health->GetHP()));
    }    
}