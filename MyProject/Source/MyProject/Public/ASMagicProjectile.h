// Copyright MJBM

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ASMagicProjectile.generated.h"
class USphereComponent;
class UProjectileMovementComponent;
class UParticleSystemComponent;

UCLASS()
class MYPROJECT_API AASMagicProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AASMagicProjectile();

protected:

	// The collision part.
	UPROPERTY(VisibleAnywhere)
	USphereComponent* SphereComp;

	// The movement part.
	UPROPERTY(VisibleAnywhere)
	UProjectileMovementComponent* MovementComp;

	// The visual part
	UPROPERTY(VisibleAnywhere)
	UParticleSystemComponent* EffectComp;
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
