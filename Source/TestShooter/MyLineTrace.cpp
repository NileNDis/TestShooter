// Fill out your copyright notice in the Description page of Project Settings.
#include "MyLineTrace.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "Kismet/KismetSystemLibrary.h"



// Sets default values for this component's properties
UMyLineTrace::UMyLineTrace()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UMyLineTrace::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
	UPhysicsHandleComponent* PhysicsHandle = GetOwner()->FindComponentByClass<UPhysicsHandleComponent>();
	if (PhysicsHandle != nullptr)
	{
		UE_LOG(LogTemp, Display, TEXT("Got Physics Handle: %s"), *PhysicsHandle->GetName());
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No Physics Handle Found!"));
	}

}


// Called every frame
void UMyLineTrace::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	LineTrace();
}


void UMyLineTrace::LineTrace()
{
	FHitResult HitResult;

	FVector Start = GetComponentLocation();
	FVector End = Start + GetForwardVector() * Distance;//FVector(0, -1000, 0);
	DrawDebugLine(GetWorld(), Start, End, FColor::Red);

	//FCollisionQueryParams CollQueryParams;
	//CollQueryParams.AddIgnoredComponent(this);

	bool bHit = GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECC_Visibility);

	if (bHit)
	{
		AActor* HitActor = HitResult.GetActor();
		//UE_LOG(LogTemp, Display, TEXT("Hit actor: %s"), *HitActor->GetActorNameOrLabel());


	}
	else
	{
		//UE_LOG(LogTemp, Display, TEXT("No actor hit"));
	}

}