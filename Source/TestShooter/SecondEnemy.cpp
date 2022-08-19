// Fill out your copyright notice in the Description page of Project Settings.


#include "SecondEnemy.h"   
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "Kismet/KismetSystemLibrary.h"


void ASecondEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


bool ASecondEnemy::CanShoot(AActor* Hero)
{
	FHitResult HitResult;

	FVector Start = Hero->GetActorLocation();
	FVector End = Start + Hero->GetActorForwardVector() * Distance;

	DrawDebugLine(GetWorld(), Start, End, FColor::Red);

	bool bHit = GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECC_Visibility);

	AActor* HitActor = HitResult.GetActor();

	return HitActor == this;
}