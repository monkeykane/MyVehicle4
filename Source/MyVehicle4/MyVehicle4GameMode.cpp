// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyVehicle4GameMode.h"
#include "MyVehicle4Pawn.h"
#include "MyVehicle4Hud.h"

AMyVehicle4GameMode::AMyVehicle4GameMode()
{
	DefaultPawnClass = AMyVehicle4Pawn::StaticClass();
	HUDClass = AMyVehicle4Hud::StaticClass();
}
