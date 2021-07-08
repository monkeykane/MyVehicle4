// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MyVehicle4Hud.generated.h"

UCLASS(config = Game)
class AMyVehicle4Hud : public AHUD
{
	GENERATED_BODY()

public:
	AMyVehicle4Hud();

	/** Font used to render the vehicle info */
	UPROPERTY()
	UFont* HUDFont;

	// Begin AHUD interface
	virtual void DrawHUD() override;
	// End AHUD interface

};
