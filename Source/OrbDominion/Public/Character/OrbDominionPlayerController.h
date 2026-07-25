// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "OrbDominionPlayerController.generated.h"

/**
 *  Base PlayerController for OrbDominion.
 *  Input Mapping Contexts and all other setup are done entirely in the child Blueprint.
 */
UCLASS(abstract)
class AOrbDominionPlayerController : public APlayerController
{
	GENERATED_BODY()
};
