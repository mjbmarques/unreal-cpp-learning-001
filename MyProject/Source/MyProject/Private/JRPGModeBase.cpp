// Copyright MJBM


#include "JRPGModeBase.h"

AJRPGModeBase::AJRPGModeBase()
{
}

void AJRPGModeBase::StartTurn_Implementation()
{
	if (!bOngoingTurn)
	{
		bOngoingTurn = true;
		while (TurnOrder.Num() != 0)
		{
			if (UCombatActorComponent* CombatComponent = TurnOrder[0]->CombatActorComponent)
			{
				CombatComponent->StartUnitTurn();
				CombatComponent->OnTurnEnded.Broadcast();
			}
			TurnOrder.RemoveAt(0);
		}
		bOngoingTurn = false;
	}
}

/**
 * Tries to add a BaseUnitCharacter to the TurnOrder list if it is not already in the list.
 * @param Character some character that is requesting to take a turn.
 */
void AJRPGModeBase::TurnRequest_Implementation(ABaseUnitCharacter* Character)
{
	if (!TurnOrder.Contains(Character))
	{
		TurnOrder.Add(Character);
	}
	// TODO: huh???
	StartTurn();
}
