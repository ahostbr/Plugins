#pragma once

#include "CoreMinimal.h"

/**
 * BEP - Blueprint & data exporter.
 *
 * All functions here are editor-only and intended to be used via console commands.
 */

enum class EBEPExportFormat : uint8
{
	Text,
	Json,
	Csv
};

class FBlueprintFlowExporter
{
public:
	/** Export all Blueprint graphs (flows) under the given root (default /Game). */
	static void ExportAllBlueprintFlows(const FString& OutputDirectory, const FString& RootPath, EBEPExportFormat Format);

	/** Export all Input Mapping Contexts (IMCs) under the given root. */
	static void ExportAllInputMappingContexts(const FString& OutputDirectory, const FString& RootPath, EBEPExportFormat Format);

	/** Export all DataAssets and DataTables under the given root (always JSON payload, regardless of format). */
	static void ExportAllDataAssetsAndTables(const FString& OutputDirectory, const FString& RootPath);

	/** Export struct schemas (UScriptStruct and UUserDefinedStruct) to a single text file. */
	static void ExportAllStructSchemas(const FString& OutputFilePath);

	/** Convenience function to export everything to Saved/BEPExport with given root and format. */
	static void ExportAll(const FString& OutputRoot, const FString& RootPath, EBEPExportFormat Format);

	/** Parse a format string ("text", "json", "csv") into EBEPExportFormat, defaulting to Text. */
	static EBEPExportFormat ParseFormat(const FString& InFormatString);
};
