// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RarestCandy.generated.h"

UCLASS()
class G1213DANI_API ARarestCandy : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARarestCandy();

	UPROPERTY(VisibleAnywhere) UStaticMeshComponent* MeshComponent;
	UPROPERTY(EditAnywhere) class USoundBase* PickupSound;

	UPROPERTY(EditAnywhere) float Duration = 5.f;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
};
