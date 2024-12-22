// Copyright MJBM

#pragma once

#include "CoreMinimal.h"
#include "BaseUnitCharacter.h"
#include "GameFramework/GameModeBase.h"
#include "JRPGModeBase.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API AJRPGModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:

	AJRPGModeBase();
	
	UFUNCTION(BlueprintNativeEvent)
	void TurnRequest(ABaseUnitCharacter* Character);

	UFUNCTION(BlueprintNativeEvent)
	void StartTurn();

	UPROPERTY(EditAnywhere)
	ABaseUnitCharacter* BaseUnitCharacter;

	UPROPERTY(BlueprintReadWrite)
	TArray<ABaseUnitCharacter*> TurnOrder;

	UPROPERTY(EditAnywhere)
	bool bOngoingTurn;

private:

};
