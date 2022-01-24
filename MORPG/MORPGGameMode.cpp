// Copyright Epic Games, Inc. All Rights Reserved.

#include "MORPGGameMode.h"
#include "MORPGCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMORPGGameMode::AMORPGGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
