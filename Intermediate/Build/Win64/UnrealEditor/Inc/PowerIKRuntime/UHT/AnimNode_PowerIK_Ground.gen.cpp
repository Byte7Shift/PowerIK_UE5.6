// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNode_PowerIK_Ground.h"
#include "PowerIK_UnrealCore.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAnimNode_PowerIK_Ground() {}

// ********** Begin Cross Module References ********************************************************
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground();
POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKBodyInertia();
POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKBoneBendDirection();
POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKBoneLimit();
POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKExcludedBone();
POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKGroundCollision();
POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKGroundFoot();
POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKGroundSlope();
UPackage* Z_Construct_UPackage__Script_PowerIKRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPowerIKGroundFoot ************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPowerIKGroundFoot;
class UScriptStruct* FPowerIKGroundFoot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPowerIKGroundFoot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPowerIKGroundFoot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPowerIKGroundFoot, (UObject*)Z_Construct_UPackage__Script_PowerIKRuntime(), TEXT("PowerIKGroundFoot"));
	}
	return Z_Registration_Info_UScriptStruct_FPowerIKGroundFoot.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPowerIKGroundFoot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "Category", "Foot" },
		{ "Comment", "/** Name of foot joint. This will be tip of IK effect. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Name of foot joint. This will be tip of IK effect." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PullWeight_MetaData[] = {
		{ "Category", "Effector" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How much this effector pulls un-affected parts of body. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "How much this effector pulls un-affected parts of body." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalizePulling_MetaData[] = {
		{ "Category", "Effector" },
		{ "Comment", "/** Use normalized PullWeight values in solver. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Use normalized PullWeight values in solver." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositivePullFactor_MetaData[] = {
		{ "Category", "Effector" },
		{ "Comment", "/** Positive direction scale factor for effector weights. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Positive direction scale factor for effector weights." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NegativePullFactor_MetaData[] = {
		{ "Category", "Effector" },
		{ "Comment", "/** Negative direction scale factor for effector weights. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Negative direction scale factor for effector weights." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PullWeight;
	static void NewProp_NormalizePulling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NormalizePulling;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PositivePullFactor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NegativePullFactor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPowerIKGroundFoot>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPowerIKGroundFoot_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKGroundFoot, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundFoot_Statics::NewProp_PullWeight = { "PullWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKGroundFoot, PullWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PullWeight_MetaData), NewProp_PullWeight_MetaData) };
void Z_Construct_UScriptStruct_FPowerIKGroundFoot_Statics::NewProp_NormalizePulling_SetBit(void* Obj)
{
	((FPowerIKGroundFoot*)Obj)->NormalizePulling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundFoot_Statics::NewProp_NormalizePulling = { "NormalizePulling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPowerIKGroundFoot), &Z_Construct_UScriptStruct_FPowerIKGroundFoot_Statics::NewProp_NormalizePulling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalizePulling_MetaData), NewProp_NormalizePulling_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundFoot_Statics::NewProp_PositivePullFactor = { "PositivePullFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKGroundFoot, PositivePullFactor), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositivePullFactor_MetaData), NewProp_PositivePullFactor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundFoot_Statics::NewProp_NegativePullFactor = { "NegativePullFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKGroundFoot, NegativePullFactor), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NegativePullFactor_MetaData), NewProp_NegativePullFactor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPowerIKGroundFoot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundFoot_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundFoot_Statics::NewProp_PullWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundFoot_Statics::NewProp_NormalizePulling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundFoot_Statics::NewProp_PositivePullFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundFoot_Statics::NewProp_NegativePullFactor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKGroundFoot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPowerIKGroundFoot_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PowerIKRuntime,
	nullptr,
	&NewStructOps,
	"PowerIKGroundFoot",
	Z_Construct_UScriptStruct_FPowerIKGroundFoot_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKGroundFoot_Statics::PropPointers),
	sizeof(FPowerIKGroundFoot),
	alignof(FPowerIKGroundFoot),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKGroundFoot_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPowerIKGroundFoot_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPowerIKGroundFoot()
{
	if (!Z_Registration_Info_UScriptStruct_FPowerIKGroundFoot.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPowerIKGroundFoot.InnerSingleton, Z_Construct_UScriptStruct_FPowerIKGroundFoot_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPowerIKGroundFoot.InnerSingleton;
}
// ********** End ScriptStruct FPowerIKGroundFoot **************************************************

// ********** Begin ScriptStruct FPowerIKGroundCollision *******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPowerIKGroundCollision;
class UScriptStruct* FPowerIKGroundCollision::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPowerIKGroundCollision.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPowerIKGroundCollision.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPowerIKGroundCollision, (UObject*)Z_Construct_UPackage__Script_PowerIKRuntime(), TEXT("PowerIKGroundCollision"));
	}
	return Z_Registration_Info_UScriptStruct_FPowerIKGroundCollision.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionChannel_MetaData[] = {
		{ "Category", "GroundSettings" },
		{ "Comment", "/** The collision channel used for \"Grounded\" effectors. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "The collision channel used for \"Grounded\" effectors." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceComplex_MetaData[] = {
		{ "Category", "GroundSettings" },
		{ "Comment", "/** Do you want to cast against complex collision geometry (if mesh has it). */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Do you want to cast against complex collision geometry (if mesh has it)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RayCastUp_MetaData[] = {
		{ "Category", "GroundSettings" },
		{ "ClampMax", "2000" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Maximum height to move Grounded effector UPWARDS. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Maximum height to move Grounded effector UPWARDS." },
		{ "UIMax", "2000" },
		{ "UIMin", "0.1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RayCastDown_MetaData[] = {
		{ "Category", "GroundSettings" },
		{ "ClampMax", "2000" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Maximum height to move Grounded effector DOWNWARDS. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Maximum height to move Grounded effector DOWNWARDS." },
		{ "UIMax", "2000" },
		{ "UIMin", "0.1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableWallCollision_MetaData[] = {
		{ "Category", "GroundSettings" },
		{ "Comment", "/** Will raycast sideways to prevent feet from penetrating walls. Requires twice as many raycasts. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Will raycast sideways to prevent feet from penetrating walls. Requires twice as many raycasts." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WallOffset_MetaData[] = {
		{ "Category", "GroundSettings" },
		{ "ClampMax", "2000" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Distance to push feet away from walls when they collide with a wall. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Distance to push feet away from walls when they collide with a wall." },
		{ "UIMax", "2000" },
		{ "UIMin", "0.1" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionChannel;
	static void NewProp_TraceComplex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_TraceComplex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RayCastUp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RayCastDown;
	static void NewProp_EnableWallCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableWallCollision;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WallOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPowerIKGroundCollision>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::NewProp_CollisionChannel = { "CollisionChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKGroundCollision, CollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionChannel_MetaData), NewProp_CollisionChannel_MetaData) }; // 756624936
void Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::NewProp_TraceComplex_SetBit(void* Obj)
{
	((FPowerIKGroundCollision*)Obj)->TraceComplex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::NewProp_TraceComplex = { "TraceComplex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPowerIKGroundCollision), &Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::NewProp_TraceComplex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceComplex_MetaData), NewProp_TraceComplex_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::NewProp_RayCastUp = { "RayCastUp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKGroundCollision, RayCastUp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RayCastUp_MetaData), NewProp_RayCastUp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::NewProp_RayCastDown = { "RayCastDown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKGroundCollision, RayCastDown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RayCastDown_MetaData), NewProp_RayCastDown_MetaData) };
void Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::NewProp_EnableWallCollision_SetBit(void* Obj)
{
	((FPowerIKGroundCollision*)Obj)->EnableWallCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::NewProp_EnableWallCollision = { "EnableWallCollision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPowerIKGroundCollision), &Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::NewProp_EnableWallCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableWallCollision_MetaData), NewProp_EnableWallCollision_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::NewProp_WallOffset = { "WallOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKGroundCollision, WallOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WallOffset_MetaData), NewProp_WallOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::NewProp_CollisionChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::NewProp_TraceComplex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::NewProp_RayCastUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::NewProp_RayCastDown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::NewProp_EnableWallCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::NewProp_WallOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PowerIKRuntime,
	nullptr,
	&NewStructOps,
	"PowerIKGroundCollision",
	Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::PropPointers),
	sizeof(FPowerIKGroundCollision),
	alignof(FPowerIKGroundCollision),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPowerIKGroundCollision()
{
	if (!Z_Registration_Info_UScriptStruct_FPowerIKGroundCollision.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPowerIKGroundCollision.InnerSingleton, Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPowerIKGroundCollision.InnerSingleton;
}
// ********** End ScriptStruct FPowerIKGroundCollision *********************************************

// ********** Begin ScriptStruct FPowerIKGroundSlope ***********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPowerIKGroundSlope;
class UScriptStruct* FPowerIKGroundSlope::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPowerIKGroundSlope.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPowerIKGroundSlope.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPowerIKGroundSlope, (UObject*)Z_Construct_UPackage__Script_PowerIKRuntime(), TEXT("PowerIKGroundSlope"));
	}
	return Z_Registration_Info_UScriptStruct_FPowerIKGroundSlope.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrideDirection_MetaData[] = {
		{ "Category", "Ground" },
		{ "Comment", "/** Normalized vector that describes the direction of travel. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Normalized vector that describes the direction of travel." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxGroundAngle_MetaData[] = {
		{ "Category", "GroundAngle" },
		{ "ClampMax", "90" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Maximum angle relative to gravity vector to apply leaning and stride scaling. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Maximum angle relative to gravity vector to apply leaning and stride scaling." },
		{ "UIMax", "90" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxNormalAngularSpeed_MetaData[] = {
		{ "Category", "GroundAngle" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Maximum speed, in degrees/second, that body angle will adjust to changing slopes. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Maximum speed, in degrees/second, that body angle will adjust to changing slopes." },
		{ "UIMax", "180" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrientToGround_MetaData[] = {
		{ "Category", "Strude" },
		{ "Comment", "/** If true, entire skeleton is rotated to align to the ground. Useful for quadrupeds.*/" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "If true, entire skeleton is rotated to align to the ground. Useful for quadrupeds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrientToPitch_MetaData[] = {
		{ "Category", "GroundAngle" },
		{ "ClampMax", "1" },
		{ "ClampMin", "-1" },
		{ "Comment", "/** Orient entire skeleton to the PITCH direction of ground angle. Range is -1 to 1. Default 0.9. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Orient entire skeleton to the PITCH direction of ground angle. Range is -1 to 1. Default 0.9." },
		{ "UIMax", "1" },
		{ "UIMin", "-1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrientToRoll_MetaData[] = {
		{ "Category", "GroundAngle" },
		{ "ClampMax", "1" },
		{ "ClampMin", "-1" },
		{ "Comment", "/** Orient entire skeleton to the ROLL direction of ground angle. Range is -1 to 1. Default 0.1. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Orient entire skeleton to the ROLL direction of ground angle. Range is -1 to 1. Default 0.1." },
		{ "UIMax", "1" },
		{ "UIMin", "-1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleStride_MetaData[] = {
		{ "Category", "Strude" },
		{ "Comment", "/** If true, stride of IsGrounded effectors will be scaled in Stride Direction. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "If true, stride of IsGrounded effectors will be scaled in Stride Direction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UphillStrideScale_MetaData[] = {
		{ "Category", "Stride" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Percentage to scale stride when going uphill. Range is 0-1. Default 0.4.*/" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Percentage to scale stride when going uphill. Range is 0-1. Default 0.4." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DownhillStrideScale_MetaData[] = {
		{ "Category", "Stride" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Percentage to scale stride when going downhill. Range is 0-1. Default 0.2.*/" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Percentage to scale stride when going downhill. Range is 0-1. Default 0.2." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SidehillStrideScale_MetaData[] = {
		{ "Category", "Stride" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Percentage to scale stride when on a side-hill. Range is 0-1. Default 1.0.*/" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Percentage to scale stride when on a side-hill. Range is 0-1. Default 1.0." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SidehillPushOuterFeet_MetaData[] = {
		{ "Category", "Stride" },
		{ "Comment", "/** Percentage (in centimeters) to push feet outwards on sidehills. Default is 20cm.*/" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Percentage (in centimeters) to push feet outwards on sidehills. Default is 20cm." },
		{ "UIMax", "1000" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Lean_MetaData[] = {
		{ "Category", "Lean" },
		{ "Comment", "/** If True, character root bone is rotated in opposite direction of ground normal. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "If True, character root bone is rotated in opposite direction of ground normal." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UphillLean_MetaData[] = {
		{ "Category", "Lean" },
		{ "ClampMax", "10" },
		{ "ClampMin", "-10" },
		{ "Comment", "/** Amount to lean forward when going uphill. Range is 0-1. Default 0.3.*/" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Amount to lean forward when going uphill. Range is 0-1. Default 0.3." },
		{ "UIMax", "1" },
		{ "UIMin", "-1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DownhillLean_MetaData[] = {
		{ "Category", "Lean" },
		{ "ClampMax", "10" },
		{ "ClampMin", "-10" },
		{ "Comment", "/** Amount to lean backward when going downhill. Range is 0-1. Default 0.5.*/" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Amount to lean backward when going downhill. Range is 0-1. Default 0.5." },
		{ "UIMax", "1" },
		{ "UIMin", "-1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SidehillLean_MetaData[] = {
		{ "Category", "Lean" },
		{ "ClampMax", "10" },
		{ "ClampMin", "-10" },
		{ "Comment", "/** Amount to lean sideways into side-hills. Range is 0-1. Default 0.0.*/" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Amount to lean sideways into side-hills. Range is 0-1. Default 0.0." },
		{ "UIMax", "1" },
		{ "UIMin", "-1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CounterLean_MetaData[] = {
		{ "Category", "CounterLean" },
		{ "Comment", "/** If True, will counter lean CounterLeanBone. Usually this is the head. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "If True, will counter lean CounterLeanBone. Usually this is the head." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CounterLeanBoneName_MetaData[] = {
		{ "Category", "LeCounterLeanan" },
		{ "Comment", "/** Name of base of counter lean bone. Usually this is the base Head bone.*/" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Name of base of counter lean bone. Usually this is the base Head bone." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UphillCounterLean_MetaData[] = {
		{ "Category", "CounterLean" },
		{ "ClampMax", "10" },
		{ "ClampMin", "-10" },
		{ "Comment", "/** Amount to counter lean backward when going uphill. Range is 0-1. Default 0.8.*/" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Amount to counter lean backward when going uphill. Range is 0-1. Default 0.8." },
		{ "UIMax", "1" },
		{ "UIMin", "-1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DownhillCounterLean_MetaData[] = {
		{ "Category", "CounterLean" },
		{ "ClampMax", "10" },
		{ "ClampMin", "-10" },
		{ "Comment", "/** Amount to counter lean backward when going downhill. Range is 0-1. Default 1.0.*/" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Amount to counter lean backward when going downhill. Range is 0-1. Default 1.0." },
		{ "UIMax", "1" },
		{ "UIMin", "-1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SidehillCounterLean_MetaData[] = {
		{ "Category", "CounterLean" },
		{ "ClampMax", "10" },
		{ "ClampMin", "-10" },
		{ "Comment", "/** Amount to counter lean sideways into side-hills. Range is 0-1. Default 0.0.*/" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Amount to counter lean sideways into side-hills. Range is 0-1. Default 0.0." },
		{ "UIMax", "1" },
		{ "UIMin", "-1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveRoot_MetaData[] = {
		{ "Category", "MoveRoot" },
		{ "Comment", "/** If True, character root bone position is gradually pushed vertically and horizontally. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "If True, character root bone position is gradually pushed vertically and horizontally." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UphillVertOffset_MetaData[] = {
		{ "Category", "MoveRoot" },
		{ "Comment", "/** Amount (in centimeters) to push the character root up/down when going UP hill. Default is 10.0.*/" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Amount (in centimeters) to push the character root up/down when going UP hill. Default is 10.0." },
		{ "UIMax", "100" },
		{ "UIMin", "-100" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UphillHorizOffset_MetaData[] = {
		{ "Category", "MoveRoot" },
		{ "Comment", "/** Amount (in centimeters) to push the character root forward/back when going UP hill. Default is -20.0.*/" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Amount (in centimeters) to push the character root forward/back when going UP hill. Default is -20.0." },
		{ "UIMax", "100" },
		{ "UIMin", "-100" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DownhillVertOffset_MetaData[] = {
		{ "Category", "MoveRoot" },
		{ "Comment", "/** Amount (in centimeters) to push the character root up/down when going DOWN hill. Default is 10.0.*/" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Amount (in centimeters) to push the character root up/down when going DOWN hill. Default is 10.0." },
		{ "UIMax", "100" },
		{ "UIMin", "-100" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DownhillHorizOffset_MetaData[] = {
		{ "Category", "MoveRoot" },
		{ "Comment", "/** Amount (in centimeters) to push the character root forward/back when going DOWN hill. Default is 20.0.*/" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Amount (in centimeters) to push the character root forward/back when going DOWN hill. Default is 20.0." },
		{ "UIMax", "100" },
		{ "UIMin", "-100" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SidehillHorizOffset_MetaData[] = {
		{ "Category", "MoveRoot" },
		{ "Comment", "/** Amount (in centimeters) to push the character root forward/back when on a SIDE hill. Default is -10.0.*/" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Amount (in centimeters) to push the character root forward/back when on a SIDE hill. Default is -10.0." },
		{ "UIMax", "100" },
		{ "UIMin", "-100" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SidehillVertOffset_MetaData[] = {
		{ "Category", "MoveRoot" },
		{ "Comment", "/** Amount (in centimeters) to push the character root up/down when on a SIDE hill. Default is -10.0.*/" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Amount (in centimeters) to push the character root up/down when on a SIDE hill. Default is -10.0." },
		{ "UIMax", "100" },
		{ "UIMin", "-100" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotateFootToGround_MetaData[] = {
		{ "Category", "FootRotation" },
		{ "Comment", "/** If True, feet are oriented to ground normal. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "If True, feet are oriented to ground normal." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchFootAmount_MetaData[] = {
		{ "Category", "FootRotation" },
		{ "ClampMax", "10" },
		{ "ClampMin", "-10" },
		{ "Comment", "/** Amount to pitch foot to orient to up/down hills. Range is 0-1. Default 1.0.*/" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Amount to pitch foot to orient to up/down hills. Range is 0-1. Default 1.0." },
		{ "UIMax", "1" },
		{ "UIMin", "-1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RollFootAmount_MetaData[] = {
		{ "Category", "FootRotation" },
		{ "ClampMax", "10" },
		{ "ClampMin", "-10" },
		{ "Comment", "/** Amount to roll foot to orient to sidehills. Range is 0-1. Default 0.6.*/" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Amount to roll foot to orient to sidehills. Range is 0-1. Default 0.6." },
		{ "UIMax", "1" },
		{ "UIMin", "-1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootAngleDeltaSmoothSpeed_MetaData[] = {
		{ "Category", "Rig" },
		{ "ClampMax", "10000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Speed in degrees per second that feet adjust to changing ground normals. Instant if <= 0.0. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Speed in degrees per second that feet adjust to changing ground normals. Instant if <= 0.0." },
		{ "UIMax", "1000" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetFeetPositions_MetaData[] = {
		{ "Category", "FootOffset" },
		{ "Comment", "/** If True, applies static offset to foot positions along normal direction. Useful for nudging feet into contact with ground. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "If True, applies static offset to foot positions along normal direction. Useful for nudging feet into contact with ground." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticFootOffset_MetaData[] = {
		{ "Category", "FootOffset" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "-1000" },
		{ "Comment", "/** Amount in centimeters to offset the foot in the direction of the foot's ground normal. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Amount in centimeters to offset the foot in the direction of the foot's ground normal." },
		{ "UIMax", "10" },
		{ "UIMin", "-10" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StrideDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxGroundAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxNormalAngularSpeed;
	static void NewProp_OrientToGround_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OrientToGround;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OrientToPitch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OrientToRoll;
	static void NewProp_ScaleStride_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ScaleStride;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UphillStrideScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DownhillStrideScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SidehillStrideScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SidehillPushOuterFeet;
	static void NewProp_Lean_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Lean;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UphillLean;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DownhillLean;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SidehillLean;
	static void NewProp_CounterLean_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CounterLean;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CounterLeanBoneName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UphillCounterLean;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DownhillCounterLean;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SidehillCounterLean;
	static void NewProp_MoveRoot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_MoveRoot;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UphillVertOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UphillHorizOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DownhillVertOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DownhillHorizOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SidehillHorizOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SidehillVertOffset;
	static void NewProp_RotateFootToGround_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RotateFootToGround;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchFootAmount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RollFootAmount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FootAngleDeltaSmoothSpeed;
	static void NewProp_OffsetFeetPositions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OffsetFeetPositions;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StaticFootOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPowerIKGroundSlope>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_StrideDirection = { "StrideDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKGroundSlope, StrideDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrideDirection_MetaData), NewProp_StrideDirection_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_MaxGroundAngle = { "MaxGroundAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKGroundSlope, MaxGroundAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxGroundAngle_MetaData), NewProp_MaxGroundAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_MaxNormalAngularSpeed = { "MaxNormalAngularSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKGroundSlope, MaxNormalAngularSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxNormalAngularSpeed_MetaData), NewProp_MaxNormalAngularSpeed_MetaData) };
void Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_OrientToGround_SetBit(void* Obj)
{
	((FPowerIKGroundSlope*)Obj)->OrientToGround = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_OrientToGround = { "OrientToGround", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPowerIKGroundSlope), &Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_OrientToGround_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrientToGround_MetaData), NewProp_OrientToGround_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_OrientToPitch = { "OrientToPitch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKGroundSlope, OrientToPitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrientToPitch_MetaData), NewProp_OrientToPitch_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_OrientToRoll = { "OrientToRoll", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKGroundSlope, OrientToRoll), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrientToRoll_MetaData), NewProp_OrientToRoll_MetaData) };
void Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_ScaleStride_SetBit(void* Obj)
{
	((FPowerIKGroundSlope*)Obj)->ScaleStride = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_ScaleStride = { "ScaleStride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPowerIKGroundSlope), &Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_ScaleStride_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleStride_MetaData), NewProp_ScaleStride_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_UphillStrideScale = { "UphillStrideScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKGroundSlope, UphillStrideScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UphillStrideScale_MetaData), NewProp_UphillStrideScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_DownhillStrideScale = { "DownhillStrideScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKGroundSlope, DownhillStrideScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DownhillStrideScale_MetaData), NewProp_DownhillStrideScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_SidehillStrideScale = { "SidehillStrideScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKGroundSlope, SidehillStrideScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SidehillStrideScale_MetaData), NewProp_SidehillStrideScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_SidehillPushOuterFeet = { "SidehillPushOuterFeet", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKGroundSlope, SidehillPushOuterFeet), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SidehillPushOuterFeet_MetaData), NewProp_SidehillPushOuterFeet_MetaData) };
void Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_Lean_SetBit(void* Obj)
{
	((FPowerIKGroundSlope*)Obj)->Lean = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_Lean = { "Lean", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPowerIKGroundSlope), &Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_Lean_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Lean_MetaData), NewProp_Lean_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_UphillLean = { "UphillLean", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKGroundSlope, UphillLean), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UphillLean_MetaData), NewProp_UphillLean_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_DownhillLean = { "DownhillLean", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKGroundSlope, DownhillLean), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DownhillLean_MetaData), NewProp_DownhillLean_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_SidehillLean = { "SidehillLean", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKGroundSlope, SidehillLean), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SidehillLean_MetaData), NewProp_SidehillLean_MetaData) };
void Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_CounterLean_SetBit(void* Obj)
{
	((FPowerIKGroundSlope*)Obj)->CounterLean = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_CounterLean = { "CounterLean", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPowerIKGroundSlope), &Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_CounterLean_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CounterLean_MetaData), NewProp_CounterLean_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_CounterLeanBoneName = { "CounterLeanBoneName", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKGroundSlope, CounterLeanBoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CounterLeanBoneName_MetaData), NewProp_CounterLeanBoneName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_UphillCounterLean = { "UphillCounterLean", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKGroundSlope, UphillCounterLean), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UphillCounterLean_MetaData), NewProp_UphillCounterLean_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_DownhillCounterLean = { "DownhillCounterLean", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKGroundSlope, DownhillCounterLean), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DownhillCounterLean_MetaData), NewProp_DownhillCounterLean_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_SidehillCounterLean = { "SidehillCounterLean", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKGroundSlope, SidehillCounterLean), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SidehillCounterLean_MetaData), NewProp_SidehillCounterLean_MetaData) };
void Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_MoveRoot_SetBit(void* Obj)
{
	((FPowerIKGroundSlope*)Obj)->MoveRoot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_MoveRoot = { "MoveRoot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPowerIKGroundSlope), &Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_MoveRoot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveRoot_MetaData), NewProp_MoveRoot_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_UphillVertOffset = { "UphillVertOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKGroundSlope, UphillVertOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UphillVertOffset_MetaData), NewProp_UphillVertOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_UphillHorizOffset = { "UphillHorizOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKGroundSlope, UphillHorizOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UphillHorizOffset_MetaData), NewProp_UphillHorizOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_DownhillVertOffset = { "DownhillVertOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKGroundSlope, DownhillVertOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DownhillVertOffset_MetaData), NewProp_DownhillVertOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_DownhillHorizOffset = { "DownhillHorizOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKGroundSlope, DownhillHorizOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DownhillHorizOffset_MetaData), NewProp_DownhillHorizOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_SidehillHorizOffset = { "SidehillHorizOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKGroundSlope, SidehillHorizOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SidehillHorizOffset_MetaData), NewProp_SidehillHorizOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_SidehillVertOffset = { "SidehillVertOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKGroundSlope, SidehillVertOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SidehillVertOffset_MetaData), NewProp_SidehillVertOffset_MetaData) };
void Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_RotateFootToGround_SetBit(void* Obj)
{
	((FPowerIKGroundSlope*)Obj)->RotateFootToGround = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_RotateFootToGround = { "RotateFootToGround", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPowerIKGroundSlope), &Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_RotateFootToGround_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotateFootToGround_MetaData), NewProp_RotateFootToGround_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_PitchFootAmount = { "PitchFootAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKGroundSlope, PitchFootAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchFootAmount_MetaData), NewProp_PitchFootAmount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_RollFootAmount = { "RollFootAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKGroundSlope, RollFootAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RollFootAmount_MetaData), NewProp_RollFootAmount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_FootAngleDeltaSmoothSpeed = { "FootAngleDeltaSmoothSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKGroundSlope, FootAngleDeltaSmoothSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootAngleDeltaSmoothSpeed_MetaData), NewProp_FootAngleDeltaSmoothSpeed_MetaData) };
void Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_OffsetFeetPositions_SetBit(void* Obj)
{
	((FPowerIKGroundSlope*)Obj)->OffsetFeetPositions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_OffsetFeetPositions = { "OffsetFeetPositions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPowerIKGroundSlope), &Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_OffsetFeetPositions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetFeetPositions_MetaData), NewProp_OffsetFeetPositions_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_StaticFootOffset = { "StaticFootOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKGroundSlope, StaticFootOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticFootOffset_MetaData), NewProp_StaticFootOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_StrideDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_MaxGroundAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_MaxNormalAngularSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_OrientToGround,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_OrientToPitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_OrientToRoll,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_ScaleStride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_UphillStrideScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_DownhillStrideScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_SidehillStrideScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_SidehillPushOuterFeet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_Lean,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_UphillLean,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_DownhillLean,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_SidehillLean,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_CounterLean,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_CounterLeanBoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_UphillCounterLean,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_DownhillCounterLean,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_SidehillCounterLean,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_MoveRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_UphillVertOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_UphillHorizOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_DownhillVertOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_DownhillHorizOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_SidehillHorizOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_SidehillVertOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_RotateFootToGround,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_PitchFootAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_RollFootAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_FootAngleDeltaSmoothSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_OffsetFeetPositions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewProp_StaticFootOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PowerIKRuntime,
	nullptr,
	&NewStructOps,
	"PowerIKGroundSlope",
	Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::PropPointers),
	sizeof(FPowerIKGroundSlope),
	alignof(FPowerIKGroundSlope),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPowerIKGroundSlope()
{
	if (!Z_Registration_Info_UScriptStruct_FPowerIKGroundSlope.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPowerIKGroundSlope.InnerSingleton, Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPowerIKGroundSlope.InnerSingleton;
}
// ********** End ScriptStruct FPowerIKGroundSlope *************************************************

// ********** Begin ScriptStruct FAnimNode_PowerIK_Ground ******************************************
static_assert(std::is_polymorphic<FAnimNode_PowerIK_Ground>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_PowerIK_Ground cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAnimNode_PowerIK_Ground;
class UScriptStruct* FAnimNode_PowerIK_Ground::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAnimNode_PowerIK_Ground.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAnimNode_PowerIK_Ground.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground, (UObject*)Z_Construct_UPackage__Script_PowerIKRuntime(), TEXT("AnimNode_PowerIK_Ground"));
	}
	return Z_Registration_Info_UScriptStruct_FAnimNode_PowerIK_Ground.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterRoot_MetaData[] = {
		{ "Category", "Rig" },
		{ "Comment", "/** Name of joint that acts as the root of the solve. All effectors must be on children of this bone. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Name of joint that acts as the root of the solve. All effectors must be on children of this bone." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyInertia_MetaData[] = {
		{ "Category", "Rig" },
		{ "Comment", "/** Apply inertial damping to character body. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Apply inertial damping to character body." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Feet_MetaData[] = {
		{ "Category", "Rig" },
		{ "Comment", "/** List of feet that are grounded. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "List of feet that are grounded." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FeetDeltaSmoothSpeed_MetaData[] = {
		{ "Category", "Rig" },
		{ "ClampMax", "10000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Speed in centimeters per second that feet adjust to changing positions. Ignored if <= 0.0. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Speed in centimeters per second that feet adjust to changing positions. Ignored if <= 0.0." },
		{ "UIMax", "1000" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootRotationMultiplier_MetaData[] = {
		{ "Category", "Rig" },
		{ "Comment", "/** How much to rotate root towards neighboring effectors. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "How much to rotate root towards neighboring effectors." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundCollision_MetaData[] = {
		{ "Category", "GroundSettings" },
		{ "Comment", "/** Settings for ray-casting to place feet on ground. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Settings for ray-casting to place feet on ground." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundSlope_MetaData[] = {
		{ "Category", "GroundSettings" },
		{ "Comment", "/** Settings for leaning on slopes and scaling stride lengths. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Settings for leaning on slopes and scaling stride lengths." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BendDirections_MetaData[] = {
		{ "Category", "Constraints" },
		{ "Comment", "/** List of custom directions for bones to bend in. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "List of custom directions for bones to bend in." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExcludedBones_MetaData[] = {
		{ "Category", "Constraints" },
		{ "Comment", "/** List of excluded bones. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "List of excluded bones." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JointLimits_MetaData[] = {
		{ "Category", "Constraints" },
		{ "Comment", "/** List of rotation limits for joints. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "List of rotation limits for joints." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSquashIterations_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Number of iterations to improve squashing poses. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Number of iterations to improve squashing poses." },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStretchIterations_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Number of iterations to improve stretching poses. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Number of iterations to improve stretching poses." },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxFinalIterations_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Number of iterations to cleanup final pose. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Number of iterations to cleanup final pose." },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowBoneTranslation_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "Comment", "/** If true, bone lengths will be updated each frame based on the input pose. This allows bone chains to 'stretch' but has a small additional cost to support.*/" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "If true, bone lengths will be updated each frame based on the input pose. This allows bone chains to 'stretch' but has a small additional cost to support." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SolverAlpha_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Global alpha to blend effector of solver on/off from 0 to 1. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Global alpha to blend effector of solver on/off from 0 to 1." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugDrawSize_MetaData[] = {
		{ "Category", "Debug" },
		{ "ClampMax", "2000" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Adjust size of debug gizmos. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Ground.h" },
		{ "ToolTip", "Adjust size of debug gizmos." },
		{ "UIMax", "100" },
		{ "UIMin", "1" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterRoot;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BodyInertia;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Feet_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Feet;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FeetDeltaSmoothSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RootRotationMultiplier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroundCollision;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroundSlope;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BendDirections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BendDirections;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExcludedBones_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludedBones;
	static const UECodeGen_Private::FStructPropertyParams NewProp_JointLimits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_JointLimits;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSquashIterations;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxStretchIterations;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxFinalIterations;
	static void NewProp_AllowBoneTranslation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AllowBoneTranslation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SolverAlpha;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugDrawSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_PowerIK_Ground>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_CharacterRoot = { "CharacterRoot", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Ground, CharacterRoot), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterRoot_MetaData), NewProp_CharacterRoot_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_BodyInertia = { "BodyInertia", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Ground, BodyInertia), Z_Construct_UScriptStruct_FPowerIKBodyInertia, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyInertia_MetaData), NewProp_BodyInertia_MetaData) }; // 1762818926
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_Feet_Inner = { "Feet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPowerIKGroundFoot, METADATA_PARAMS(0, nullptr) }; // 2155197441
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_Feet = { "Feet", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Ground, Feet), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Feet_MetaData), NewProp_Feet_MetaData) }; // 2155197441
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_FeetDeltaSmoothSpeed = { "FeetDeltaSmoothSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Ground, FeetDeltaSmoothSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FeetDeltaSmoothSpeed_MetaData), NewProp_FeetDeltaSmoothSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_RootRotationMultiplier = { "RootRotationMultiplier", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Ground, RootRotationMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootRotationMultiplier_MetaData), NewProp_RootRotationMultiplier_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_GroundCollision = { "GroundCollision", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Ground, GroundCollision), Z_Construct_UScriptStruct_FPowerIKGroundCollision, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundCollision_MetaData), NewProp_GroundCollision_MetaData) }; // 3381987496
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_GroundSlope = { "GroundSlope", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Ground, GroundSlope), Z_Construct_UScriptStruct_FPowerIKGroundSlope, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundSlope_MetaData), NewProp_GroundSlope_MetaData) }; // 1015974066
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_BendDirections_Inner = { "BendDirections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPowerIKBoneBendDirection, METADATA_PARAMS(0, nullptr) }; // 2760720664
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_BendDirections = { "BendDirections", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Ground, BendDirections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BendDirections_MetaData), NewProp_BendDirections_MetaData) }; // 2760720664
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_ExcludedBones_Inner = { "ExcludedBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPowerIKExcludedBone, METADATA_PARAMS(0, nullptr) }; // 2227159558
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_ExcludedBones = { "ExcludedBones", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Ground, ExcludedBones), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExcludedBones_MetaData), NewProp_ExcludedBones_MetaData) }; // 2227159558
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_JointLimits_Inner = { "JointLimits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPowerIKBoneLimit, METADATA_PARAMS(0, nullptr) }; // 1520110841
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_JointLimits = { "JointLimits", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Ground, JointLimits), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JointLimits_MetaData), NewProp_JointLimits_MetaData) }; // 1520110841
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_MaxSquashIterations = { "MaxSquashIterations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Ground, MaxSquashIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSquashIterations_MetaData), NewProp_MaxSquashIterations_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_MaxStretchIterations = { "MaxStretchIterations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Ground, MaxStretchIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStretchIterations_MetaData), NewProp_MaxStretchIterations_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_MaxFinalIterations = { "MaxFinalIterations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Ground, MaxFinalIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxFinalIterations_MetaData), NewProp_MaxFinalIterations_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_AllowBoneTranslation_SetBit(void* Obj)
{
	((FAnimNode_PowerIK_Ground*)Obj)->AllowBoneTranslation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_AllowBoneTranslation = { "AllowBoneTranslation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_PowerIK_Ground), &Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_AllowBoneTranslation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowBoneTranslation_MetaData), NewProp_AllowBoneTranslation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_SolverAlpha = { "SolverAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Ground, SolverAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SolverAlpha_MetaData), NewProp_SolverAlpha_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_DebugDrawSize = { "DebugDrawSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Ground, DebugDrawSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugDrawSize_MetaData), NewProp_DebugDrawSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_CharacterRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_BodyInertia,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_Feet_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_Feet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_FeetDeltaSmoothSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_RootRotationMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_GroundCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_GroundSlope,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_BendDirections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_BendDirections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_ExcludedBones_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_ExcludedBones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_JointLimits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_JointLimits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_MaxSquashIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_MaxStretchIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_MaxFinalIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_AllowBoneTranslation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_SolverAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewProp_DebugDrawSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PowerIKRuntime,
	Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
	&NewStructOps,
	"AnimNode_PowerIK_Ground",
	Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::PropPointers),
	sizeof(FAnimNode_PowerIK_Ground),
	alignof(FAnimNode_PowerIK_Ground),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground()
{
	if (!Z_Registration_Info_UScriptStruct_FAnimNode_PowerIK_Ground.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAnimNode_PowerIK_Ground.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAnimNode_PowerIK_Ground.InnerSingleton;
}
// ********** End ScriptStruct FAnimNode_PowerIK_Ground ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Plugins_HostProject_Plugins_PowerIK_Source_PowerIKRuntime_Public_AnimNode_PowerIK_Ground_h__Script_PowerIKRuntime_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPowerIKGroundFoot::StaticStruct, Z_Construct_UScriptStruct_FPowerIKGroundFoot_Statics::NewStructOps, TEXT("PowerIKGroundFoot"), &Z_Registration_Info_UScriptStruct_FPowerIKGroundFoot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPowerIKGroundFoot), 2155197441U) },
		{ FPowerIKGroundCollision::StaticStruct, Z_Construct_UScriptStruct_FPowerIKGroundCollision_Statics::NewStructOps, TEXT("PowerIKGroundCollision"), &Z_Registration_Info_UScriptStruct_FPowerIKGroundCollision, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPowerIKGroundCollision), 3381987496U) },
		{ FPowerIKGroundSlope::StaticStruct, Z_Construct_UScriptStruct_FPowerIKGroundSlope_Statics::NewStructOps, TEXT("PowerIKGroundSlope"), &Z_Registration_Info_UScriptStruct_FPowerIKGroundSlope, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPowerIKGroundSlope), 1015974066U) },
		{ FAnimNode_PowerIK_Ground::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground_Statics::NewStructOps, TEXT("AnimNode_PowerIK_Ground"), &Z_Registration_Info_UScriptStruct_FAnimNode_PowerIK_Ground, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_PowerIK_Ground), 2258382652U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Plugins_HostProject_Plugins_PowerIK_Source_PowerIKRuntime_Public_AnimNode_PowerIK_Ground_h__Script_PowerIKRuntime_45423686(TEXT("/Script/PowerIKRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Plugins_HostProject_Plugins_PowerIK_Source_PowerIKRuntime_Public_AnimNode_PowerIK_Ground_h__Script_PowerIKRuntime_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Plugins_HostProject_Plugins_PowerIK_Source_PowerIKRuntime_Public_AnimNode_PowerIK_Ground_h__Script_PowerIKRuntime_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
