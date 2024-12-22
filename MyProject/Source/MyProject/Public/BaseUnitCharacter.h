// Copyright MJBM

#pragma once

#include "CoreMinimal.h"
#include "CombatActorComponent.h"
#include "GameFramework/Character.h"
#include "BaseUnitCharacter.generated.h"

UCLASS()
class MYPROJECT_API ABaseUnitCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseUnitCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere)
	UCombatActorComponent* CombatActorComponent;

};
