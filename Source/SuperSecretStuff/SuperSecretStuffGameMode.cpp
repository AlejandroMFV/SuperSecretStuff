// Copyright Epic Games, Inc. All Rights Reserved.

#include "SuperSecretStuffGameMode.h"
#include "SuperSecretStuffCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASuperSecretStuffGameMode::ASuperSecretStuffGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
