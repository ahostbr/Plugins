// SOTS_Parkour.Build.cs
// Runtime module for the SOTS Parkour plugin.
// BRIDGE 1: Ensure proper module dependency for USOTS_ParkourSettings (UDeveloperSettings).

using UnrealBuildTool;

public class SOTS_Parkour : ModuleRules
{
    public SOTS_Parkour(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "CoreUObject",
                "Engine",
            }
        );

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                // Required for USOTS_ParkourSettings : UDeveloperSettings.
                "DeveloperSettings",
            }
        );
    }
}
