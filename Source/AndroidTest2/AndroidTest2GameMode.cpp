// Copyright Epic Games, Inc. All Rights Reserved.

#include "AndroidTest2GameMode.h"
#include "AndroidTest2Character.h"
#include "UObject/ConstructorHelpers.h"

AAndroidTest2GameMode::AAndroidTest2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
