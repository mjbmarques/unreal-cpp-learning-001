// Copyright MJBM

#pragma once

#include "CoreMinimal.h"
#include "SGameplayInterface.h"
#include "GameFramework/Actor.h"
#include "SItemChest.generated.h"

UCLASS()
class MYPROJECT_API ASItemChest : public AActor, public ISGameplayInterface
{
	GENERATED_BODY()

	void Interact_Implementation(APawn* InstigatorPawn);
	
public:	
	// Sets default values for this actor's properties
	ASItemChest();

protected:

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* BaseMesh;
	
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* LidMesh;
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
