// Fill out your copyright notice in the Description page of Project Settings.


#include "ThirdEnemy.h"

bool AThirdEnemy::CanShoot(AActor* Hero)
{
	FVector Hero1 = Hero->GetActorLocation();//точка игрока
	FVector Enemy = GetActorLocation();//точка врага

	FVector HeroToEnemyVector = Enemy - Hero1;// вектор между врагом и игроком
	FVector Actor = Hero->GetActorForwardVector();// вектор игрока

	HeroToEnemyVector.Normalize();

	float angle = FMath::Acos(FVector::DotProduct(Actor, HeroToEnemyVector));
	float DeegresAngle = FMath::RadiansToDegrees(angle);

	UE_LOG(LogTemp, Warning, TEXT("Angle: %f"), DeegresAngle);

	return DeegresAngle <= 40;
}
