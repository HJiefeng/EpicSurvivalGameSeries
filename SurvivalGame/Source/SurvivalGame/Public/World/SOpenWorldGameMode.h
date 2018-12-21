// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "World/SGameMode.h"
#include "SOpenWorldGameMode.generated.h"

/**
 * 
 */
UCLASS(ABSTRACT)
class SURVIVALGAME_API ASOpenWorldGameMode : public ASGameMode
{
	GENERATED_BODY()

	ASOpenWorldGameMode(const FObjectInitializer& ObjectInitializer);
	
	/* Don't allow spectating of other players or bots */
	virtual bool CanSpectate_Implementation(APlayerController* Viewer, APlayerState* ViewTarget) override;

	virtual void SpawnBotHandler() override;

	// ��ʼͶ�Ź�������
	UPROPERTY(EditDefaultsOnly, Category = "Rules")
	int DefaultBotNum;

	// �����������
	UPROPERTY(EditDefaultsOnly, Category = "Rules")
	int MaxBotNum;

public:

	UFUNCTION(BlueprintCallable)
	void SpawnBots();
};
