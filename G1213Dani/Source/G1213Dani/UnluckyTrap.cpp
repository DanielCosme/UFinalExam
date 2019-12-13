// Fill out your copyright notice in the Description page of Project Settings.


#include "UnluckyTrap.h"
#include "Components/StaticMeshComponent.h"
#include "G1213DaniCharacter.h"

// Sets default values
AUnluckyTrap::AUnluckyTrap()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Component"));
	SetRootComponent(StaticMeshComponent);
	StaticMeshComponent->SetSimulatePhysics(true);
	SetActorScale3D(FVector(0.25f, 0.25f, 0.25f));

}

// Called when the game starts or when spawned
void AUnluckyTrap::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AUnluckyTrap::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AUnluckyTrap::NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	auto actor = Cast<AG1213DaniCharacter>(Other);
	if (actor != nullptr)
	{
		actor->looseLevel(unlucky);
		Destroy();
	}
}

