// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class SurvivalGameEditorTarget : TargetRules
{
	public SurvivalGameEditorTarget(TargetInfo Target) : base(Target)
    {
        BuildEnvironment = TargetBuildEnvironment.Unique;
        Type = TargetType.Editor;
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
