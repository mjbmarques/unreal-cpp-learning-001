// Copyright MJBM

#pragma once

#include "CoreMinimal.h"
#include "BaseUnitCharacter.h"
#include "Components/ActorComponent.h"
#include "CombatActorComponent.generated.h"

// Declare a delegate for the event dispatcher
// or something like this, to give parameter type and name.
// DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStillCoolDelegate, float,fCoolVariableName)

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTurnEnd);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MYPROJECT_API UCombatActorComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCombatActorComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere)
	ABaseUnitCharacter* Character;

	UPROPERTY(EditAnywhere)
	FTransform BattlePosition;

	UFUNCTION(BlueprintCallable)
	void StartUnitTurn();

	UFUNCTION(BlueprintCallable)
	void EndUnitTurn();

	UFUNCTION(BlueprintCallable)
	void BeginBattle();

	// Event dispatcher
	UPROPERTY(BlueprintAssignable)
	FOnTurnEnd OnTurnEnded;
};
