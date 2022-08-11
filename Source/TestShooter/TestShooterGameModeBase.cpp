// Copyright Epic Games, Inc. All Rights Reserved.


#include "TestShooterGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "Enemy.h"
#include "FirstEnemy.h"
#include "SecondEnemy.h"
#include "ThirdEnemy.h"


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

    UGameplayStatics::GetAllActorsOfClass(this, AEnemy::StaticClass(), Enemies);

    Func();

    FTimerHandle Handle;
    GetWorld()->GetTimerManager().SetTimer(Handle, this, &ATestShooterGameModeBase::Func, 2.05f, true);

}

void ATestShooterGameModeBase::Func()
{
 
    for (int32 i = 0; i < Enemies.Num(); i++)
    {
        if (auto FirstEnemy = Cast<AFirstEnemy>(Enemies[i]))
        {
            //GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, FString::Printf(TEXT("Enemy 1 Health: %f"), Enemy->Health));
            GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, FString::Printf(TEXT("Enemy 1 Health: %f"), 1.0));
        }
        else if (auto SecondEnemy = Cast<ASecondEnemy>(Enemies[i]))
        {
            //GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, FString::Printf(TEXT("Enemy 2 Health: %f"), Enemy->Health));
            GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, FString::Printf(TEXT("Enemy 1 Health: %f"), 3.0));
        }
        else if (auto ThirdEnemy = Cast<AThirdEnemy>(Enemies[i]))
        {
            //GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, FString::Printf(TEXT("Enemy 3 Health: %f"), Enemy->Health));
            GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, FString::Printf(TEXT("Enemy 1 Health: %f"), 2.0));
        }
    }
}