# Safely remove stale Intermediate/Binaries and the BuildRulesProjects folder that holds the missing csproj,
# then print instructions to regenerate Visual Studio project files / build rules.
Param(
    [string]$ProjectRoot = "e:\SAS\ShadowsAndShurikens"
)

Write-Host "ProjectRoot = $ProjectRoot"

$pathsToRemove = @(
    (Join-Path $ProjectRoot "Intermediate"),
    (Join-Path $ProjectRoot "Binaries"),
    (Join-Path $ProjectRoot "Saved"),
    # Remove plugin-level generated folders if present
    (Join-Path $ProjectRoot "Plugins\*\Intermediate"),
    (Join-Path $ProjectRoot "Plugins\*\Binaries"),
    # Specific folder reported missing
    (Join-Path $ProjectRoot "Intermediate\Build\BuildRulesProjects")
)

foreach ($p in $pathsToRemove) {
    # Expand possible wildcards
    Get-ChildItem -Path $p -Force -ErrorAction SilentlyContinue | ForEach-Object {
        $full = $_.FullName
        if (Test-Path $full) {
            Write-Host "Removing: $full"
            Remove-Item -LiteralPath $full -Recurse -Force -ErrorAction SilentlyContinue
        }
    }
}

Write-Host ""
Write-Host "Cleanup complete. Next steps (run locally):"
Write-Host "1) Regenerate project files:"
Write-Host "   - Option A (recommended): Right-click your .uproject file and select 'Generate Visual Studio project files'"
Write-Host "   - Option B: Run Unreal's GenerateProjectFiles.bat (EngineRoot\GenerateProjectFiles.bat) pointing at the .uproject"
Write-Host ""
Write-Host "2) Alternatively, open the .uproject in Unreal Editor -> it will regenerate missing build files and UHT artifacts."
Write-Host ""
Write-Host "3) If you use CI/command-line: run UnrealBuildTool to generate BuildRules projects, e.g.:"
Write-Host '   "%EngineRoot%\Engine\Binaries\DotNET\UnrealBuildTool.exe" -projectfiles -project="e:\SAS\ShadowsAndShurikens\ShadowsAndShurikens.uproject"'
Write-Host ""
Write-Host "If you still see 'Could not find file ...ShadowsAndShurikensModuleRules.csproj' after regenerating, check:"
Write-Host "  - That the .uproject path is correct"
Write-Host "  - That your engine/editor installation path is available and matches the engine version in the .uproject"
Write-Host "  - That no stale .csproj files remain under Intermediate/Build (this script removed them)"
