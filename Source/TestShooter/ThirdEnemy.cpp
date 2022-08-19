// Fill out your copyright notice in the Description page of Project Settings.


#include "ThirdEnemy.h"

bool AThirdEnemy::CanShoot(AActor* Hero)
{
	FVector Hero1 = Hero->GetActorLocation();//����� ������
	FVector Enemy = GetActorLocation();//����� �����

	FVector HeroToEnemyVector = Enemy - Hero1;// ������ ����� ������ � �������
	FVector Actor = Hero->GetActorForwardVector();// ������ ������

	HeroToEnemyVector.Normalize();

	float angle = FMath::Acos(FVector::DotProduct(Actor, HeroToEnemyVector));
	float DeegresAngle = FMath::RadiansToDegrees(angle);

	UE_LOG(LogTemp, Warning, TEXT("Angle: %f"), DeegresAngle);

	return DeegresAngle <= 40;
}
