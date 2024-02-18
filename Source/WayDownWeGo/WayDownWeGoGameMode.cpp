// Copyright Epic Games, Inc. All Rights Reserved.

#include "WayDownWeGoGameMode.h"
#include "WayDownWeGoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AWayDownWeGoGameMode::AWayDownWeGoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
