// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPSCharacter.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "TestShooterGameModeBase.h"
#include "FirstEnemy.h"
#include "SecondEnemy.h"
#include "ThirdEnemy.h"
#include "GameSave.h"


// Sets default values
AFPSCharacter::AFPSCharacter()
{

    // Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    // Create a first person camera component.
    //HPComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HPComponent"));

  

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

    GameMode = GetWorld()->GetAuthGameMode<ATestShooterGameModeBase>();

    GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::Printf(TEXT("Press 't' to restart")),true, FVector2D(2.0f, 2.0f));
   

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

   // PlayerInputComponent->BindAction("Restart", IE_Pressed, this, &AFPSCharacter::Restart);
   // PlayerInputComponent->BindAction("Restart", IE_Released, this, &AFPSCharacter::StopRestart);

    PlayerInputComponent->BindAction("Save", IE_Pressed, this, &AFPSCharacter::SaveGame);
    PlayerInputComponent->BindAction("Load", IE_Pressed, this, &AFPSCharacter::LoadGame);


    PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AFPSCharacter::Fire);
}

void AFPSCharacter::MoveForward(float Value)
{
    AddMovementInput(GetActorForwardVector() * Value);
}

void AFPSCharacter::SaveGame()
{
    //create an instance of our savegame class
   UGameSave* SaveGameInstance = Cast<UGameSave>(UGameplayStatics::CreateSaveGameObject(UGameSave::StaticClass()));

    SaveGameInstance->PlayerLocation = GetActorLocation();

 // SaveGameInstance->EnemyHealth = Enemys->Health;
 // if (Enemys == nullptr)
 //      {
 //          return;
 //      }
    //SaveGameInstance->EnemyHealth = Enemys->Health;
    //save game
    UGameplayStatics::SaveGameToSlot(SaveGameInstance, TEXT("MySlot"), 0);

    GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, FString::Printf(TEXT("Game Saved")));
}

void AFPSCharacter::LoadGame()
{
    UGameSave* SaveGameInstance = Cast<UGameSave>(UGameplayStatics::CreateSaveGameObject(UGameSave::StaticClass()));

    SaveGameInstance = Cast<UGameSave>(UGameplayStatics::LoadGameFromSlot("MySlot", 0));

    //Set the players position from the saved game instance
    SetActorLocation(SaveGameInstance->PlayerLocation);

  //  Enemys->Health(SaveGameInstance->EnemyHealth);

    GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, FString::Printf(TEXT("Game Loaded")));
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

//void AFPSCharacter::Restart()
//{        
//    
//}


void AFPSCharacter::Fire()
{
    TArray<AActor*> Enemies = GameMode->GetEnemies();

    for (int32 i = 0; i < Enemies.Num(); i++)
    {
        bool CanShoot = false;

        CanShoot = Cast<AEnemy>(Enemies[i])->CanShoot(this);

        if (CanShoot)
        {
            SpawnProjectile();
            return;
        }
   }
}

void AFPSCharacter::SpawnProjectile()
{

    FActorSpawnParameters SpawnParams;
    SpawnParams.Owner = this;
    SpawnParams.Instigator = GetInstigator();

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
    AFPSProjectile* Projectile = World->SpawnActor<AFPSProjectile>(ProjectileClass, MuzzleLocation, MuzzleRotation, SpawnParams);
    if (Projectile)
    {
        // Set the projectile's initial trajectory.
        FVector LaunchDirection = MuzzleRotation.Vector();
        Projectile->FireInDirection(LaunchDirection);
    }
}