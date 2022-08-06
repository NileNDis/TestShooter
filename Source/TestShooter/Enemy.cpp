// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy.h"
#include "Engine/World.h"
#include "HealthComponent.h"
#include "GameFramework/Actor.h"

// Sets default values
AEnemy::AEnemy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	Target = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Target"));

	Health = CreateDefaultSubobject<UHealthComponent>(TEXT("Health"));
}

// Called when the game starts or when spawned

void AEnemy::HandleDestruction()
{
	//Super::HandleDestruction();
	GetWorld()->DestroyActor(this);//////////////
	//Destroy();
}

void AEnemy::BeginPlay()
{
	Super::BeginPlay();


}

// Called every frame
void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

