// Copyright Epic Games, Inc. All Rights Reserved.

#include "RooftopkoreansGameMode.h"
#include "RooftopkoreansCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARooftopkoreansGameMode::ARooftopkoreansGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
