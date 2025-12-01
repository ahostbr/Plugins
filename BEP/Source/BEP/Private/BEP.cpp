#include "BEP.h"

#include "BlueprintFlowExporter.h"
#include "Misc/Paths.h"
#include "Misc/OutputDeviceNull.h"
#include "HAL/IConsoleManager.h"

DEFINE_LOG_CATEGORY(LogBEP);

IMPLEMENT_MODULE(FBEPModule, BEP)

void FBEPModule::StartupModule()
{
	// Console command: BEP.ExportAll [RootPath] [OutputDir] [Format]
	// RootPath defaults to /Game
	// OutputDir defaults to <Project>/Saved/BEPExport
	// Format: text, json, csv (defaults to text)
	static FAutoConsoleCommand ExportAllCommand(
		TEXT("BEP.ExportAll"),
		TEXT("Export Blueprint flows, IMCs, DataAssets/DataTables, and struct schemas.\n")
		TEXT("Usage: BEP.ExportAll [RootPath] [OutputDir] [Format]\n")
		TEXT("  RootPath: e.g. /Game, /Game/Abilities (default /Game)\n")
		TEXT("  OutputDir: absolute or relative path (default Saved/BEPExport)\n")
		TEXT("  Format: text | json | csv (default text)"),
		FConsoleCommandWithArgsDelegate::CreateStatic([](const TArray<FString>& Args)
		{
			FString RootPath = TEXT("/Game");
			FString OutputRoot;
			FString FormatStr = TEXT("text");

			if (Args.Num() > 0 && !Args[0].IsEmpty())
			{
				RootPath = Args[0];
			}
			if (Args.Num() > 1 && !Args[1].IsEmpty())
			{
				OutputRoot = Args[1];
			}
			if (Args.Num() > 2 && !Args[2].IsEmpty())
			{
				FormatStr = Args[2];
			}

			if (OutputRoot.IsEmpty())
			{
				OutputRoot = FPaths::ProjectSavedDir() / TEXT("BEPExport");
			}

			const EBEPExportFormat Format = FBlueprintFlowExporter::ParseFormat(FormatStr);
			FBlueprintFlowExporter::ExportAll(OutputRoot, RootPath, Format);
		}));

	// Console command: BEP.ExportFolder <RootPath> [Format] [OutputDir]
	static FAutoConsoleCommand ExportFolderCommand(
		TEXT("BEP.ExportFolder"),
		TEXT("Export Blueprint flows, IMCs, DataAssets/DataTables, and schemas for a specific folder.\n")
		TEXT("Usage: BEP.ExportFolder <RootPath> [Format] [OutputDir]\n")
		TEXT("  RootPath: e.g. /Game/Content/ScanThis\n")
		TEXT("  Format: text | json | csv (default text)\n")
		TEXT("  OutputDir: optional; default Saved/BEPExport/<SanitizedRootPath>"),
		FConsoleCommandWithArgsDelegate::CreateStatic([](const TArray<FString>& Args)
		{
			if (Args.Num() == 0 || Args[0].IsEmpty())
			{
				UE_LOG(LogBEP, Warning, TEXT("BEP.ExportFolder requires at least a RootPath argument."));
				return;
			}

			const FString RootPath = Args[0];

			FString FormatStr = TEXT("text");
			if (Args.Num() > 1 && !Args[1].IsEmpty())
			{
				FormatStr = Args[1];
			}

			FString OutputRoot;
			if (Args.Num() > 2 && !Args[2].IsEmpty())
			{
				OutputRoot = Args[2];
			}
			else
			{
				const FString SanitizedRoot = RootPath.Replace(TEXT("/"), TEXT("_"));
				OutputRoot = FPaths::ProjectSavedDir() / TEXT("BEPExport") / SanitizedRoot;
			}

			const EBEPExportFormat Format = FBlueprintFlowExporter::ParseFormat(FormatStr);
			FBlueprintFlowExporter::ExportAll(OutputRoot, RootPath, Format);
		}));
}

void FBEPModule::ShutdownModule()
{
}
