// Copyright Epic Games, Inc. All Rights Reserved.

#include "material_experimentsGameMode.h"
#include "material_experimentsCharacter.h"
#include "UObject/ConstructorHelpers.h"

Amaterial_experimentsGameMode::Amaterial_experimentsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
