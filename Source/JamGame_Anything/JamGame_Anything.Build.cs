// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class JamGame_Anything : ModuleRules
{
	public JamGame_Anything(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
