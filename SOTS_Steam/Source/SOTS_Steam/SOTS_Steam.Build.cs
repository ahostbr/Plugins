using UnrealBuildTool;

public class SOTS_Steam : ModuleRules
{
    public SOTS_Steam(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "CoreUObject",
                "Engine"
            }
        );

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "DeveloperSettings",
                "GameplayTags",
                "OnlineSubsystem",
                "OnlineSubsystemUtils"
            }
        );

        DynamicallyLoadedModuleNames.AddRange(
            new string[]
            {
                "OnlineSubsystemSteam"
            }
        );
    }
}
