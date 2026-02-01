#pragma once
#include "CoreMinimal.h"
#include "TileHighlightState.generated.h"

UENUM(BlueprintType)
enum class ETileHighlightState : uint8
{
	None        UMETA(DisplayName = "None"),
	Standard    UMETA(DisplayName = "Standard"),
	Adjacency   UMETA(DisplayName = "Adjacency"),
	Attack      UMETA(DisplayName = "Attack")
};