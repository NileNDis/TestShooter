// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPSCharacter.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "FirstEnemy.h"



// Sets default values
AFPSCharacter::AFPSCharacter()
{


    // Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    // Create a first person camera component.
    FPSCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
    check(FPSCameraComponent != nullptr);

    // Attach the camera component to our capsule component.
    FPSCameraComponent->SetupAttachment(CastChecked<USceneComponent>(GetCapsuleComponent()));

    // Position the camera slightly above the eyes.
    FPSCameraComponent->SetRelativeLocation(FVector(0.0f, 0.0f, 50.0f + BaseEyeHeight));

    // Enable the pawn to control camera rotation.
    FPSCameraComponent->bUsePawnControlRotation = true;

    // Create a first person mesh component for the owning player.
    FPSMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FirstPersonMesh"));
    check(FPSMesh != nullptr);

    // Only the owning player sees this mesh.
    FPSMesh->SetOnlyOwnerSee(true);

    // Attach the FPS mesh to the FPS camera.
    FPSMesh->SetupAttachment(FPSCameraComponent);

    // Disable some environmental shadowing to preserve the illusion of having a single mesh.
    FPSMesh->bCastDynamicShadow = false;
    FPSMesh->CastShadow = false;

    // The owning player doesn't see the regular (third-person) body mesh.
    GetMesh()->SetOwnerNoSee(true);
}



// Called when the game starts or when spawned
void AFPSCharacter::BeginPlay()
{
    Super::BeginPlay();

    check(GEngine != nullptr);

    // Display a debug message for five seconds. 
  // The -1 "Key" value argument prevents the message from being updated or refreshed.
    GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("We are using FPSCharacter."));

    UGameplayStatics::GetAllActorsOfClass(this, AEnemy::StaticClass(), Enemies);

}

// Called every frame
void AFPSCharacter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AFPSCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    // Set up "movement" bindings.
    PlayerInputComponent->BindAxis("MoveForward", this, &AFPSCharacter::MoveForward);
    PlayerInputComponent->BindAxis("MoveRight", this, &AFPSCharacter::MoveRight);

    // Set up "look" bindings.
    PlayerInputComponent->BindAxis("Turn", this, &AFPSCharacter::AddControllerYawInput);
    PlayerInputComponent->BindAxis("LookUp", this, &AFPSCharacter::AddControllerPitchInput);

    // Set up "action" bindings.
    PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AFPSCharacter::StartJump);
    PlayerInputComponent->BindAction("Jump", IE_Released, this, &AFPSCharacter::StopJump);

    PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AFPSCharacter::Fire);
}

void AFPSCharacter::MoveForward(float Value)
{
    AddMovementInput(GetActorForwardVector() * Value);
}

void AFPSCharacter::MoveRight(float Value)
{
    AddMovementInput(GetActorRightVector() * Value);
}

void AFPSCharacter::StartJump()
{
    bPressedJump = true;
}

void AFPSCharacter::StopJump()
{
    bPressedJump = false;
}

void AFPSCharacter::Fire()
{

    // Attempt to fire a projectile.
    if (ProjectileClass)
    {
        // Get the camera transform.
        FVector CameraLocation;
        FRotator CameraRotation;
        GetActorEyesViewPoint(CameraLocation, CameraRotation);

        // Set MuzzleOffset to spawn projectiles slightly in front of the camera.
        MuzzleOffset.Set(120.0f, 20.0f, 0.0f);

        // Transform MuzzleOffset from camera space to world space.
        FVector MuzzleLocation = CameraLocation + FTransform(CameraRotation).TransformVector(MuzzleOffset);

        // Skew the aim to be slightly upwards.
        FRotator MuzzleRotation = CameraRotation;


        UWorld* World = GetWorld();
        if (World)
        {
            for (int32 i = 0; i < Enemies.Num(); i++)
            {
               // Cast<AFirstEnemy>(Enemies[i]);
                FVector EnemyLocation = Enemies[i]->GetActorLocation();
                FVector HerosLocation = GetActorLocation();
                Cast<AFirstEnemy>(Enemies[i]);

                FActorSpawnParameters SpawnParams;
                SpawnParams.Owner = this;
                SpawnParams.Instigator = GetInstigator();

                UE_LOG(LogTemp, Warning, TEXT("Distance: %f"), FVector::Dist(HerosLocation, EnemyLocation));
                if (FVector::Dist(HerosLocation, EnemyLocation) <= 1000)
                {
                    AFPSProjectile* Projectile = World->SpawnActor<AFPSProjectile>(ProjectileClass, MuzzleLocation, MuzzleRotation, SpawnParams);
                    if (Projectile)
                    {
                        // Set the projectile's initial trajectory.
                        FVector LaunchDirection = MuzzleRotation.Vector();
                        Projectile->FireInDirection(LaunchDirection);
                        break;

                    }
                }
            }
         

        }
    }
}
