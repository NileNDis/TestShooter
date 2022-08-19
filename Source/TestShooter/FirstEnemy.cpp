// Fill out your copyright notice in the Description page of Project Settings.


#include "FirstEnemy.h"

bool AFirstEnemy::CanShoot(AActor* Hero)
{
    FVector HerosLocation = Hero->GetActorLocation();
    FVector EnemyLocation1 = GetActorLocation();
  
    UE_LOG(LogTemp, Warning, TEXT("Distance: %f"), FVector::Dist(HerosLocation, EnemyLocation1));
  
    return FVector::Dist(HerosLocation, EnemyLocation1) <= 500;

}