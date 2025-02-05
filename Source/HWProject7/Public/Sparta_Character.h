#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Sparta_Character.generated.h"

class USprintArmComponent;
class UCameraComponent;

UCLASS()
class HWPROJECT7_API ASparta_Character : public ACharacter
{
	GENERATED_BODY()

public:
	ASparta_Character();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	USprintArmComponent* SpringArmCom;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	UCameraComponent* CameraCom;

protected:
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
