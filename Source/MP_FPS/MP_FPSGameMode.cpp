// Copyright Epic Games, Inc. All Rights Reserved.

#include "MP_FPSGameMode.h"
#include "MP_FPSCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMP_FPSGameMode::AMP_FPSGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
