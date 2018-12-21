// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "SurvivalGame.h"
#include "EntryGameModeBase.h"

AEntryGameModeBase::AEntryGameModeBase()
{
	// 最大机器人数量
	GConfig->GetString(
		TEXT("/Script/Test"),
		TEXT("ServerIP"),
		ServerIP,
		GGameIni
	);
}