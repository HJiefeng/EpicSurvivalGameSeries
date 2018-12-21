// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "SurvivalGame.h"
#include "EntryGameModeBase.h"

AEntryGameModeBase::AEntryGameModeBase()
{
	// ������������
	GConfig->GetString(
		TEXT("/Script/Test"),
		TEXT("ServerIP"),
		ServerIP,
		GGameIni
	);
}