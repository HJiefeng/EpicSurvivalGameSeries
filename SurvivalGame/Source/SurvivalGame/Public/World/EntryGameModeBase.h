// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "EntryGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class SURVIVALGAME_API AEntryGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

	AEntryGameModeBase();

public:
	// ≥ı ºªØIPµÿ÷∑
	UPROPERTY(BlueprintReadOnly, Category = "Rules")
	FString ServerIP;
};
