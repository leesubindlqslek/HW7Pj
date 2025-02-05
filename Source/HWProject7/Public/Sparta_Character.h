#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Sparta_Character.generated.h"

UCLASS()
class HWPROJECT7_API ASparta_Character : public ACharacter
{
	GENERATED_BODY()

public:
	ASparta_Character();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
