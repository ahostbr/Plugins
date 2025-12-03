#pragma once

#include "CoreMinimal.h"
#include "SOTS_BPGenTypes.generated.h"

/**
 * Direction of a generated pin (input vs output).
 */
UENUM(BlueprintType)
enum class ESOTS_BPGenPinDirection : uint8
{
	Input  UMETA(DisplayName = "Input"),
	Output UMETA(DisplayName = "Output")
};

/**
 * Container type for a generated pin.
 */
UENUM(BlueprintType)
enum class ESOTS_BPGenContainerType : uint8
{
	None  UMETA(DisplayName = "None"),
	Array UMETA(DisplayName = "Array"),
	Set   UMETA(DisplayName = "Set"),
	Map   UMETA(DisplayName = "Map")
};

/**
 * Blueprint generation pin description.
 *
 * This is an abstract description used by DevTools JSON and the
 * USOTS_BPGenBuilder. It does NOT yet map directly to FEdGraphPinType;
 * that will be added in a later pass.
 */
USTRUCT(BlueprintType)
struct FSOTS_BPGenPin
{
	GENERATED_BODY()

	/** Logical name of the pin (e.g. AbilityData, NameText, etc). */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BPGen")
	FName Name;

	/** Main pin category name (e.g. "bool", "int", "float", "struct", "object"). */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BPGen")
	FName Category;

	/** Sub-category (e.g. "byte", "int64", "SoftObject", etc). */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BPGen")
	FName SubCategory;

	/** Optional asset/class path for struct/object types. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BPGen")
	FString SubObjectPath;

	/** Container type (None, Array, Set, Map). */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BPGen")
	ESOTS_BPGenContainerType ContainerType = ESOTS_BPGenContainerType::None;

	/** Pin direction (Input/Output). */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BPGen")
	ESOTS_BPGenPinDirection Direction = ESOTS_BPGenPinDirection::Input;

	/** Optional default value (as text/string representation). */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BPGen")
	FString DefaultValue;
};

/**
 * Definition of a struct asset to generate.
 */
USTRUCT(BlueprintType)
struct FSOTS_BPGenStructDef
{
	GENERATED_BODY()

	/** Package path for the struct asset (e.g. /Game/SOTS/Generated/Structs/F_SOTS_Example). */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BPGen")
	FString AssetPath;

	/** Struct name (usually matches the asset name, e.g. F_SOTS_Example). */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BPGen")
	FName StructName;

	/** Member pins making up this struct. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BPGen")
	TArray<FSOTS_BPGenPin> Members;
};

/**
 * Definition of an enum asset to generate.
 */
USTRUCT(BlueprintType)
struct FSOTS_BPGenEnumDef
{
	GENERATED_BODY()

	/** Package path for the enum asset (e.g. /Game/SOTS/Generated/Enums/E_SOTS_Example). */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BPGen")
	FString AssetPath;

	/** Enum name (usually matches the asset name, e.g. E_SOTS_Example). */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BPGen")
	FName EnumName;

	/** Enum entry display names. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BPGen")
	TArray<FString> Values;
};

/**
 * Definition of a function to generate inside an existing Blueprint.
 *
 * The graph body will be described separately via FSOTS_BPGenGraphSpec.
 */
USTRUCT(BlueprintType)
struct FSOTS_BPGenFunctionDef
{
	GENERATED_BODY()

	/** Content path to the target Blueprint asset. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BPGen")
	FString TargetBlueprintPath;

	/** Function name to create or update. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BPGen")
	FName FunctionName;

	/** Input pins for the function. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BPGen")
	TArray<FSOTS_BPGenPin> Inputs;

	/** Output pins for the function. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BPGen")
	TArray<FSOTS_BPGenPin> Outputs;
};

/**
 * A node inside a generated function graph.
 *
 * DevTools JSON will map directly to this shape.
 */
USTRUCT(BlueprintType)
struct FSOTS_BPGenGraphNode
{
	GENERATED_BODY()

	/** Unique node identifier (within a single graph spec). */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BPGen|Graph")
	FString Id;

	/**
	 * Node type identifier (e.g. "K2Node_CallFunction", "K2Node_VariableGet").
	 * This will be interpreted by the builder to choose the correct UK2Node subclass.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BPGen|Graph")
	FName NodeType;

	/**
	 * Optional function path for call-function nodes
	 * (e.g. "/Script/Engine.KismetMathLibrary:Clamp").
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BPGen|Graph")
	FString FunctionPath;

	/**
	 * Optional variable name for variable nodes
	 * (e.g. "AbilityData", "Health", etc.).
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BPGen|Graph")
	FName VariableName;

	/** 2D position of the node in the graph editor. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BPGen|Graph")
	FVector2D NodePosition = FVector2D::ZeroVector;

	/**
	 * Extra key/value data for this node. This can be used for
	 * specialized settings (timeline lengths, meta flags, etc.).
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BPGen|Graph")
	TMap<FName, FString> ExtraData;
};

/**
 * A directed connection between two node pins.
 */
USTRUCT(BlueprintType)
struct FSOTS_BPGenGraphLink
{
	GENERATED_BODY()

	/** Source node id. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BPGen|Graph")
	FString FromNodeId;

	/** Source pin name. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BPGen|Graph")
	FName FromPinName;

	/** Target node id. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BPGen|Graph")
	FString ToNodeId;

	/** Target pin name. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BPGen|Graph")
	FName ToPinName;
};

/**
 * Full graph specification for a single function body.
 */
USTRUCT(BlueprintType)
struct FSOTS_BPGenGraphSpec
{
	GENERATED_BODY()

	/** Nodes to spawn in the function graph. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BPGen|Graph")
	TArray<FSOTS_BPGenGraphNode> Nodes;

	/** Links between node pins. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BPGen|Graph")
	TArray<FSOTS_BPGenGraphLink> Links;
};

/**
 * Result for asset-creation operations (structs, enums).
 */
USTRUCT(BlueprintType)
struct FSOTS_BPGenAssetResult
{
	GENERATED_BODY()

	/** Whether the operation succeeded. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BPGen|Result")
	bool bSuccess = false;

	/** Path of the asset that was created or modified. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BPGen|Result")
	FString AssetPath;

	/** Optional human-readable error or info message. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BPGen|Result")
	FString Message;
};

/**
 * Result for function/graph-application operations.
 */
USTRUCT(BlueprintType)
struct FSOTS_BPGenApplyResult
{
	GENERATED_BODY()

	/** Whether the operation succeeded. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BPGen|Result")
	bool bSuccess = false;

	/** Target Blueprint path (for logging). */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BPGen|Result")
	FString TargetBlueprintPath;

	/** Name of the function that was affected. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BPGen|Result")
	FName FunctionName;

	/** Optional human-readable error message. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BPGen|Result")
	FString ErrorMessage;

	/** Optional warnings (non-fatal issues). */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BPGen|Result")
	TArray<FString> Warnings;
};
