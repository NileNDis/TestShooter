// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "GameFramework/Character.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "FPSProjectile.h"
#include "FPSCharacter.generated.h"

UCLASS()
class TESTSHOOTER_API AFPSCharacter : public ACharacter
{
    GENERATED_BODY()

public:
    // Sets default values for this character's properties
    AFPSCharacter();

    class UMyLineTrace* LineTracer;

    class UHealthComponent* HPComponent;

    class AEnemy* Enemys;
protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

    // Called to bind functionality to input
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

    // Handles input for moving forward and backward.
    UFUNCTION()
        void MoveForward(float Value);

    // Handles input for moving right and left.
    UFUNCTION()
        void MoveRight(float Value);

    // Sets jump flag when key is pressed.
    UFUNCTION()
        void StartJump();

    UFUNCTION()
        void SaveGame();

    UFUNCTION()
        void LoadGame();

    // Clears jump flag when key is released.
    UFUNCTION()
        void StopJump();

    // FPS camera
    UPROPERTY(VisibleAnywhere)
        UCameraComponent* FPSCameraComponent;

    // First-person mesh (arms), visible only to the owning player.
    UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
        USkeletalMeshComponent* FPSMesh;

    UFUNCTION()
        void Fire();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
        FVector MuzzleOffset;

    UPROPERTY(EditDefaultsOnly, Category = Projectile)
        TSubclassOf<class AFPSProjectile> ProjectileClass;

    TArray <AActor*> Enemies;

    UPROPERTY()
        float Distance = 4000;

    UFUNCTION()
        void DestroyDelegate(AActor* DestroyedActor);


    UFUNCTION()
        void SpawnProjectile();

  // UFUNCTION()
  //     void Restart();
};
