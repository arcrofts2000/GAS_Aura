// Copyright Adam Crofts

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "AuraCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;

/**
 * 
 */
UCLASS()
class AURA_API AAuraCharacter : public AAuraCharacterBase
{
	GENERATED_BODY()

public:
	AAuraCharacter();

	//~ Begin AActor Interface
	virtual void PossessedBy(AController* Controller) override;
	virtual void OnRep_PlayerState() override;
	//~ End AActor Interface
	
protected:
	UPROPERTY(EditAnywhere, Category = "Components")
	TObjectPtr<USpringArmComponent> SpringArm;

	UPROPERTY(EditAnywhere, Category = "Components")
	TObjectPtr<UCameraComponent> Camera;

private:
	void InitAbilityActorInfo();
};
