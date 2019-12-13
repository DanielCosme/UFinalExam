// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "G1213DaniGameMode.h"
#include "G1213DaniHUD.h"
#include "G1213DaniCharacter.h"
#include "UObject/ConstructorHelpers.h"

AG1213DaniGameMode::AG1213DaniGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AG1213DaniHUD::StaticClass();
}
