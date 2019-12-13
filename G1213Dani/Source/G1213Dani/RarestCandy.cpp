// Fill out your copyright notice in the Description page of Project Settings.


#include "RarestCandy.h"
#include "Components/StaticMeshComponent.h"
#include "G1213DaniCharacter.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ARarestCandy::ARarestCandy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Component"));
	SetRootComponent(MeshComponent);
	MeshComponent->SetCollisionProfileName("OverlapAll");
	SetActorScale3D(FVector(0.3f, 0.3f, 0.3f));
}

// Called when the game starts or when spawned
void ARarestCandy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARarestCandy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	AddActorWorldRotation(FRotator(0, 90.f * DeltaTime, 0));
}

void ARarestCandy::NotifyActorBeginOverlap(AActor* OtherActor)
{
	auto actor = Cast<AG1213DaniCharacter>(OtherActor);
	if (actor != nullptr)
	{
		actor->pickCandy();
		if(PickupSound != nullptr) UGameplayStatics::PlaySoundAtLocation(GetWorld(), PickupSound, GetActorLocation());
		Destroy();
	}
}

