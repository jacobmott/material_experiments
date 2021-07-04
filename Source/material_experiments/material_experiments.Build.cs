// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class material_experiments : ModuleRules
{
	public material_experiments(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
