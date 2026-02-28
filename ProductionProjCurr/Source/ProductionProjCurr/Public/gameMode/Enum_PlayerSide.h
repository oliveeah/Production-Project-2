#pragma once
#include "CoreMinimal.h"
#include "Enum_PlayerSide.generated.h"

UENUM(BlueprintType)
enum class EActivePlayerSide : uint8
{
	PlayerA UMETA(DisplayName = "Player A"),
	PlayerB UMETA(DisplayName = "Player B"),
	None	UMETA(DisplayName = "None")
};