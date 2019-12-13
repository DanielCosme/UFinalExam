// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CubemonWidget.generated.h"

/**
 * 
 */
UCLASS()
class G1213DANI_API UCubemonWidget : public UUserWidget
{
	GENERATED_BODY()

	public:
		UPROPERTY(BlueprintReadWrite) class ACubemon* cubemon;
	
};
