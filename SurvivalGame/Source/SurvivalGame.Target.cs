// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class SurvivalGameTarget : TargetRules
{
	public SurvivalGameTarget(TargetInfo Target) : base(Target)
    {
		Type = TargetType.Game;
        ExtraModuleNames.AddRange(new string[] { "SurvivalGame" });
        DisablePlugins.AddRange(
            new string[] {
            "ImgMedia",
            "LinearTimecode",
            "MediaCompositing",
            "TcpMessaging",
            "UdpMessaging",
            "SteamVR",
            "AppleImageUtils",
            "AppleVision",
            "AvfMedia",
            "WmfMedia",
            "MfMedia",
            "OculusVR",
            "OnlineSubsystem",
            "OnlineSubsystemNull"
        });
    }
}
