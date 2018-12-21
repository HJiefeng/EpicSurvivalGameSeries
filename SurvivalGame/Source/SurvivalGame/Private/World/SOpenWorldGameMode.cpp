// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "SurvivalGame.h"
#include "SOpenWorldGameMode.h"
#include "SGameState.h"



ASOpenWorldGameMode::ASOpenWorldGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	/* Open world content is free-for-all */
	bAllowFriendlyFireDamage = true;

	// �����������ٶ�
	GConfig->GetFloat(
		TEXT("/Script/Test"),
		TEXT("BotSpawnInterval"),
		BotSpawnInterval,
		GGameIni
	);

	// ��ʼ���ɻ���������
	GConfig->GetInt(
		TEXT("/Script/Test"),
		TEXT("DefaultBotNum"),
		DefaultBotNum,
		GGameIni
	);

	// ������������
	GConfig->GetInt(
		TEXT("/Script/Test"),
		TEXT("MaxBotNum"),
		MaxBotNum,
		GGameIni
	);

}


bool ASOpenWorldGameMode::CanSpectate_Implementation(APlayerController* Viewer, APlayerState* ViewTarget)
{
	return false;
}

// ���ɻ�����
void ASOpenWorldGameMode::SpawnBotHandler()
{
	if (!bSpawnZombiesAtNight)
		return;

	ASGameState* MyGameState = Cast<ASGameState>(GameState);
	if (MyGameState)
	{
		if (GetWorld()->GetNumPawns() < MaxBotNum)
		{
			SpawnNewBot();
		}
	}
}


void ASOpenWorldGameMode::SpawnBots()
{
	for (int i = 0; i < DefaultBotNum; ++i)
	{
		if (GetWorld()->GetNumPawns() < MaxBotNum)
		{
			SpawnNewBot();
		}
	}
}