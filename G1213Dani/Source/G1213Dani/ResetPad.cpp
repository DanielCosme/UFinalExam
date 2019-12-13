// Fill out your copyright notice in the Description page of Project Settings.


#include "ResetPad.h"
#include "Components/StaticMeshComponent.h"
#include "G1213DaniCharacter.h"
#include "TimerManager.h"
#include "Kismet//GameplayStatics.h"

// Sets default values
AResetPad::AResetPad()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MESH"));
	SetRootComponent(StaticMeshComponent);
	StaticMeshComponent->SetCollisionProfileName("OverlapAll");

	SetActorScale3D(FVector(1.0f, 1.0f, 0.1f));
}

void AResetPad::resetLevel()
{
	if (!ResetPadTimerHandle.IsValid())
	{
		GetWorldTimerManager().SetTimer(ResetPadTimerHandle, this, &AResetPad::innerResetLevel, 1.0f, true, speed);
	}
}

void AResetPad::innerResetLevel()
{
	playerRef->resetLevelPlayer();
}

// Called when the game starts or when spawned
void AResetPad::BeginPlay()
{
	Super::BeginPlay();
	playerRef = Cast<AG1213DaniCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
}

// Called every frame
void AResetPad::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (playerRef != nullptr && activated)
	{
		//THE ENGINE CRASHES WHEN RUNNING TE IF STATEMENT - FAILS TO GET THIS.ACTORLOCATION(). MEMORY ACCES VIOLATION.
		//AS FAR AS I CAN TELL THE CODE SHOULD WORK. 
	/*	if (FVector::Distance(player->GetActorLocation(), this->GetActorLocation()) > distance) 
		{
			activated = false;
			GetWorldTimerManager().ClearTimer(ResetPadTimerHandle);
		}*/
	}
	if (activated) resetLevel();
}

void AResetPad::NotifyActorBeginOverlap(AActor* OtherActor)
{
	auto actor = Cast<AG1213DaniCharacter>(OtherActor);
	if (actor != nullptr)
	{
		activated = true;
	}
}

