// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ResetPad.generated.h"

UCLASS()
class G1213DANI_API AResetPad : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AResetPad();
	UPROPERTY(VisibleAnywhere) UStaticMeshComponent* StaticMeshComponent;
	UPROPERTY(EditAnywhere) int speed = 1;
	UPROPERTY(EditAnywhere) float distance = 200.f;

	UPROPERTY(VisibleAnywhere) class AG1213DaniCharacter* player;
	UPROPERTY(VisibleAnywhere) class AG1213DaniCharacter* playerRef;

	FTimerHandle ResetPadTimerHandle;

	void resetLevel();
	void innerResetLevel();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	bool activated;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void NotifyActorBeginOverlap(AActor* OtherActor);
};
