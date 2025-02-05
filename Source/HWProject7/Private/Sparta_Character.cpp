#include "Sparta_Character.h"

ASparta_Character::ASparta_Character()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ASparta_Character::BeginPlay()
{
	Super::BeginPlay();
	
}

void ASparta_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASparta_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}
