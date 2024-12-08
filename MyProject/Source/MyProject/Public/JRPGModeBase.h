// Copyright MJBM

#pragma once

#include "CoreMinimal.h"
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
	virtual void TurnRequest();
	
};
