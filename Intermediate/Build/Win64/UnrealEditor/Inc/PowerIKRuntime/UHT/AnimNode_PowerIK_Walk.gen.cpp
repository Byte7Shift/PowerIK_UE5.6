// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNode_PowerIK_Walk.h"
#include "PowerIK_UnrealCore.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAnimNode_PowerIK_Walk() {}

// ********** Begin Cross Module References ********************************************************
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk();
POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPlaneConstraint();
POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKBodyInertia();
POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKBoneBendDirection();
POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKBoneLimit();
POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKExcludedBone();
POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKWalkingLimb();
UPackage* Z_Construct_UPackage__Script_PowerIKRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPlaneConstraint **************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPlaneConstraint;
class UScriptStruct* FPlaneConstraint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPlaneConstraint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPlaneConstraint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlaneConstraint, (UObject*)Z_Construct_UPackage__Script_PowerIKRuntime(), TEXT("PlaneConstraint"));
	}
	return Z_Registration_Info_UScriptStruct_FPlaneConstraint.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPlaneConstraint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/* TODO\n// do second raycast to snap corrected foot position to ground height\n// clamp max stride length (record root transform at last planted location)\n*/" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "ToolTip", "TODO\n// do second raycast to snap corrected foot position to ground height\n// clamp max stride length (record root transform at last planted location)" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlaneConstraint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlaneConstraint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PowerIKRuntime,
	nullptr,
	&NewStructOps,
	"PlaneConstraint",
	nullptr,
	0,
	sizeof(FPlaneConstraint),
	alignof(FPlaneConstraint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneConstraint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlaneConstraint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlaneConstraint()
{
	if (!Z_Registration_Info_UScriptStruct_FPlaneConstraint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPlaneConstraint.InnerSingleton, Z_Construct_UScriptStruct_FPlaneConstraint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPlaneConstraint.InnerSingleton;
}
// ********** End ScriptStruct FPlaneConstraint ****************************************************

// ********** Begin ScriptStruct FPowerIKWalkingLimb ***********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPowerIKWalkingLimb;
class UScriptStruct* FPowerIKWalkingLimb::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPowerIKWalkingLimb.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPowerIKWalkingLimb.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPowerIKWalkingLimb, (UObject*)Z_Construct_UPackage__Script_PowerIKRuntime(), TEXT("PowerIKWalkingLimb"));
	}
	return Z_Registration_Info_UScriptStruct_FPowerIKWalkingLimb.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartBone_MetaData[] = {
		{ "Category", "Limb" },
		{ "Comment", "/** Name of the bone at the start of this limb. This is the origin of the raycast. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "ToolTip", "Name of the bone at the start of this limb. This is the origin of the raycast." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndBone_MetaData[] = {
		{ "Category", "Limb" },
		{ "Comment", "/** Name of foot bone at end of the limb. This will be tip of IK effect. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "ToolTip", "Name of foot bone at end of the limb. This will be tip of IK effect." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LimbMaxLengthMultiplier_MetaData[] = {
		{ "Category", "Limb" },
		{ "Comment", "/** Percentage of maximum length to extend limb to reach new foot position. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Percentage of maximum length to extend limb to reach new foot position." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StepLengthMultiplier_MetaData[] = {
		{ "Category", "Limb" },
		{ "Comment", "/** Squash / stretch the stride of the feet. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Squash / stretch the stride of the feet." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StepDuration_MetaData[] = {
		{ "Category", "Limb" },
		{ "Comment", "/** Time in seconds to take a single step from un-planting to planted. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Time in seconds to take a single step from un-planting to planted." },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StepHeight_MetaData[] = {
		{ "Category", "Limb" },
		{ "Comment", "/** Maximum height in centimeters of foot at center of stride.*/" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Maximum height in centimeters of foot at center of stride." },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelatedLimbs_MetaData[] = {
		{ "Category", "Limb" },
		{ "Comment", "/** Specify the index of limbs that must be planted before this one can be UN-planted.*/" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "ToolTip", "Specify the index of limbs that must be planted before this one can be UN-planted." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotateFootToGround_MetaData[] = {
		{ "Category", "Limb" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** How much to orient the foot bone to the ground normal. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "ToolTip", "How much to orient the foot bone to the ground normal." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootCollisionRadius_MetaData[] = {
		{ "Category", "Limb" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Prevent other feet from colliding with this one.*/" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "ToolTip", "Prevent other feet from colliding with this one." },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.1" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_StartBone;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EndBone;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LimbMaxLengthMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StepLengthMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StepDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StepHeight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RelatedLimbs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RelatedLimbs;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotateFootToGround;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FootCollisionRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPowerIKWalkingLimb>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_StartBone = { "StartBone", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKWalkingLimb, StartBone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartBone_MetaData), NewProp_StartBone_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_EndBone = { "EndBone", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKWalkingLimb, EndBone), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndBone_MetaData), NewProp_EndBone_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_LimbMaxLengthMultiplier = { "LimbMaxLengthMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKWalkingLimb, LimbMaxLengthMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LimbMaxLengthMultiplier_MetaData), NewProp_LimbMaxLengthMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_StepLengthMultiplier = { "StepLengthMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKWalkingLimb, StepLengthMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StepLengthMultiplier_MetaData), NewProp_StepLengthMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_StepDuration = { "StepDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKWalkingLimb, StepDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StepDuration_MetaData), NewProp_StepDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_StepHeight = { "StepHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKWalkingLimb, StepHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StepHeight_MetaData), NewProp_StepHeight_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_RelatedLimbs_Inner = { "RelatedLimbs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_RelatedLimbs = { "RelatedLimbs", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKWalkingLimb, RelatedLimbs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelatedLimbs_MetaData), NewProp_RelatedLimbs_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_RotateFootToGround = { "RotateFootToGround", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKWalkingLimb, RotateFootToGround), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotateFootToGround_MetaData), NewProp_RotateFootToGround_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_FootCollisionRadius = { "FootCollisionRadius", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKWalkingLimb, FootCollisionRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootCollisionRadius_MetaData), NewProp_FootCollisionRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_StartBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_EndBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_LimbMaxLengthMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_StepLengthMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_StepDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_StepHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_RelatedLimbs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_RelatedLimbs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_RotateFootToGround,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_FootCollisionRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PowerIKRuntime,
	nullptr,
	&NewStructOps,
	"PowerIKWalkingLimb",
	Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::PropPointers),
	sizeof(FPowerIKWalkingLimb),
	alignof(FPowerIKWalkingLimb),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPowerIKWalkingLimb()
{
	if (!Z_Registration_Info_UScriptStruct_FPowerIKWalkingLimb.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPowerIKWalkingLimb.InnerSingleton, Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPowerIKWalkingLimb.InnerSingleton;
}
// ********** End ScriptStruct FPowerIKWalkingLimb *************************************************

// ********** Begin ScriptStruct FAnimNode_PowerIK_Walk ********************************************
static_assert(std::is_polymorphic<FAnimNode_PowerIK_Walk>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_PowerIK_Walk cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAnimNode_PowerIK_Walk;
class UScriptStruct* FAnimNode_PowerIK_Walk::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAnimNode_PowerIK_Walk.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAnimNode_PowerIK_Walk.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk, (UObject*)Z_Construct_UPackage__Script_PowerIKRuntime(), TEXT("AnimNode_PowerIK_Walk"));
	}
	return Z_Registration_Info_UScriptStruct_FAnimNode_PowerIK_Walk.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterRoot_MetaData[] = {
		{ "Category", "Rig" },
		{ "Comment", "/** Name of joint that acts as the root of the solve. All effectors must be on children of this bone. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Name of joint that acts as the root of the solve. All effectors must be on children of this bone." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootRotationMultiplier_MetaData[] = {
		{ "Category", "Rig" },
		{ "Comment", "/** How much to rotate root towards neighboring effectors. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "How much to rotate root towards neighboring effectors." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyInertia_MetaData[] = {
		{ "Category", "Rig" },
		{ "Comment", "/** Apply inertial damping to Character Root bone. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Apply inertial damping to Character Root bone." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Limbs_MetaData[] = {
		{ "Category", "Limbs" },
		{ "Comment", "/** List of feet that are grounded. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "List of feet that are grounded." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StepMaxReachDistance_MetaData[] = {
		{ "Category", "Stepping" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Maximum distance that character root can move from previous planted location before being clamped. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Maximum distance that character root can move from previous planted location before being clamped." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StepDurationMultiplier_MetaData[] = {
		{ "Category", "Stepping" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Speed up or slow down stepping speed for all limbs. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Speed up or slow down stepping speed for all limbs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StepHeightMultiplier_MetaData[] = {
		{ "Category", "Stepping" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Raise or lower step height for all limbs. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Raise or lower step height for all limbs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StepHeightCurve_MetaData[] = {
		{ "Category", "Stepping" },
		{ "Comment", "/** Foot height multiplier normalized over the duration of a single step.*/" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "ToolTip", "Foot height multiplier normalized over the duration of a single step." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StepSpeedCurve_MetaData[] = {
		{ "Category", "Stepping" },
		{ "Comment", "/** Foot speed multiplier normalized over the duration of a single step.*/" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "ToolTip", "Foot speed multiplier normalized over the duration of a single step." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeleportDistance_MetaData[] = {
		{ "Category", "Stepping" },
		{ "Comment", "/** Maximum distance in centimeters that feet can get from capsule before character is forcibly teleported. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "ToolTip", "Maximum distance in centimeters that feet can get from capsule before character is forcibly teleported." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrintTeleportWarning_MetaData[] = {
		{ "Category", "Stepping" },
		{ "Comment", "/** Print warning to log when limbs are teleported (debugging). */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "ToolTip", "Print warning to log when limbs are teleported (debugging)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionChannel_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** The collision channel used for \"Grounded\" effectors. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "ToolTip", "The collision channel used for \"Grounded\" effectors." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceComplex_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** Do you want to cast against complex collision geometry (if mesh has it). */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "ToolTip", "Do you want to cast against complex collision geometry (if mesh has it)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BendDirections_MetaData[] = {
		{ "Category", "Constraints" },
		{ "Comment", "/** List of custom directions for bones to bend in. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "ToolTip", "List of custom directions for bones to bend in." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExcludedBones_MetaData[] = {
		{ "Category", "Constraints" },
		{ "Comment", "/** List of excluded bones. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "ToolTip", "List of excluded bones." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JointLimits_MetaData[] = {
		{ "Category", "Constraints" },
		{ "Comment", "/** List of rotation limits for joints. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "ToolTip", "List of rotation limits for joints." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSquashIterations_MetaData[] = {
		{ "Category", "Solver" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Number of iterations to improve squashing poses. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "ToolTip", "Number of iterations to improve squashing poses." },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStretchIterations_MetaData[] = {
		{ "Category", "Solver" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Number of iterations to improve stretching poses. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "ToolTip", "Number of iterations to improve stretching poses." },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxFinalIterations_MetaData[] = {
		{ "Category", "Solver" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Number of iterations to cleanup final pose. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "ToolTip", "Number of iterations to cleanup final pose." },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowBoneTranslation_MetaData[] = {
		{ "Category", "Solver" },
		{ "Comment", "/** If true, bone lengths will be updated each frame based on the input pose. This allows bone chains to 'stretch' but has a small additional cost to support.*/" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "ToolTip", "If true, bone lengths will be updated each frame based on the input pose. This allows bone chains to 'stretch' but has a small additional cost to support." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SolverAlpha_MetaData[] = {
		{ "Category", "Solver" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Global alpha to blend effector of solver on/off from 0 to 1. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
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
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "ToolTip", "Adjust size of debug gizmos." },
		{ "UIMax", "100" },
		{ "UIMin", "1" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterRoot;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RootRotationMultiplier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BodyInertia;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Limbs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Limbs;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StepMaxReachDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StepDurationMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StepHeightMultiplier;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StepHeightCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StepSpeedCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TeleportDistance;
	static void NewProp_PrintTeleportWarning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PrintTeleportWarning;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionChannel;
	static void NewProp_TraceComplex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_TraceComplex;
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
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_PowerIK_Walk>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_CharacterRoot = { "CharacterRoot", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Walk, CharacterRoot), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterRoot_MetaData), NewProp_CharacterRoot_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_RootRotationMultiplier = { "RootRotationMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Walk, RootRotationMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootRotationMultiplier_MetaData), NewProp_RootRotationMultiplier_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_BodyInertia = { "BodyInertia", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Walk, BodyInertia), Z_Construct_UScriptStruct_FPowerIKBodyInertia, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyInertia_MetaData), NewProp_BodyInertia_MetaData) }; // 1762818926
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_Limbs_Inner = { "Limbs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPowerIKWalkingLimb, METADATA_PARAMS(0, nullptr) }; // 110492369
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_Limbs = { "Limbs", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Walk, Limbs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Limbs_MetaData), NewProp_Limbs_MetaData) }; // 110492369
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_StepMaxReachDistance = { "StepMaxReachDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Walk, StepMaxReachDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StepMaxReachDistance_MetaData), NewProp_StepMaxReachDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_StepDurationMultiplier = { "StepDurationMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Walk, StepDurationMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StepDurationMultiplier_MetaData), NewProp_StepDurationMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_StepHeightMultiplier = { "StepHeightMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Walk, StepHeightMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StepHeightMultiplier_MetaData), NewProp_StepHeightMultiplier_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_StepHeightCurve = { "StepHeightCurve", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Walk, StepHeightCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StepHeightCurve_MetaData), NewProp_StepHeightCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_StepSpeedCurve = { "StepSpeedCurve", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Walk, StepSpeedCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StepSpeedCurve_MetaData), NewProp_StepSpeedCurve_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_TeleportDistance = { "TeleportDistance", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Walk, TeleportDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeleportDistance_MetaData), NewProp_TeleportDistance_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_PrintTeleportWarning_SetBit(void* Obj)
{
	((FAnimNode_PowerIK_Walk*)Obj)->PrintTeleportWarning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_PrintTeleportWarning = { "PrintTeleportWarning", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_PowerIK_Walk), &Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_PrintTeleportWarning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrintTeleportWarning_MetaData), NewProp_PrintTeleportWarning_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_CollisionChannel = { "CollisionChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Walk, CollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionChannel_MetaData), NewProp_CollisionChannel_MetaData) }; // 756624936
void Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_TraceComplex_SetBit(void* Obj)
{
	((FAnimNode_PowerIK_Walk*)Obj)->TraceComplex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_TraceComplex = { "TraceComplex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_PowerIK_Walk), &Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_TraceComplex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceComplex_MetaData), NewProp_TraceComplex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_BendDirections_Inner = { "BendDirections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPowerIKBoneBendDirection, METADATA_PARAMS(0, nullptr) }; // 2760720664
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_BendDirections = { "BendDirections", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Walk, BendDirections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BendDirections_MetaData), NewProp_BendDirections_MetaData) }; // 2760720664
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_ExcludedBones_Inner = { "ExcludedBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPowerIKExcludedBone, METADATA_PARAMS(0, nullptr) }; // 2227159558
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_ExcludedBones = { "ExcludedBones", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Walk, ExcludedBones), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExcludedBones_MetaData), NewProp_ExcludedBones_MetaData) }; // 2227159558
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_JointLimits_Inner = { "JointLimits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPowerIKBoneLimit, METADATA_PARAMS(0, nullptr) }; // 1520110841
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_JointLimits = { "JointLimits", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Walk, JointLimits), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JointLimits_MetaData), NewProp_JointLimits_MetaData) }; // 1520110841
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_MaxSquashIterations = { "MaxSquashIterations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Walk, MaxSquashIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSquashIterations_MetaData), NewProp_MaxSquashIterations_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_MaxStretchIterations = { "MaxStretchIterations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Walk, MaxStretchIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStretchIterations_MetaData), NewProp_MaxStretchIterations_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_MaxFinalIterations = { "MaxFinalIterations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Walk, MaxFinalIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxFinalIterations_MetaData), NewProp_MaxFinalIterations_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_AllowBoneTranslation_SetBit(void* Obj)
{
	((FAnimNode_PowerIK_Walk*)Obj)->AllowBoneTranslation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_AllowBoneTranslation = { "AllowBoneTranslation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_PowerIK_Walk), &Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_AllowBoneTranslation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowBoneTranslation_MetaData), NewProp_AllowBoneTranslation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_SolverAlpha = { "SolverAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Walk, SolverAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SolverAlpha_MetaData), NewProp_SolverAlpha_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_DebugDrawSize = { "DebugDrawSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Walk, DebugDrawSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugDrawSize_MetaData), NewProp_DebugDrawSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_CharacterRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_RootRotationMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_BodyInertia,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_Limbs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_Limbs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_StepMaxReachDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_StepDurationMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_StepHeightMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_StepHeightCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_StepSpeedCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_TeleportDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_PrintTeleportWarning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_CollisionChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_TraceComplex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_BendDirections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_BendDirections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_ExcludedBones_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_ExcludedBones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_JointLimits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_JointLimits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_MaxSquashIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_MaxStretchIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_MaxFinalIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_AllowBoneTranslation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_SolverAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_DebugDrawSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PowerIKRuntime,
	Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
	&NewStructOps,
	"AnimNode_PowerIK_Walk",
	Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::PropPointers),
	sizeof(FAnimNode_PowerIK_Walk),
	alignof(FAnimNode_PowerIK_Walk),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk()
{
	if (!Z_Registration_Info_UScriptStruct_FAnimNode_PowerIK_Walk.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAnimNode_PowerIK_Walk.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAnimNode_PowerIK_Walk.InnerSingleton;
}
// ********** End ScriptStruct FAnimNode_PowerIK_Walk **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Plugins_HostProject_Plugins_PowerIK_Source_PowerIKRuntime_Public_AnimNode_PowerIK_Walk_h__Script_PowerIKRuntime_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPlaneConstraint::StaticStruct, Z_Construct_UScriptStruct_FPlaneConstraint_Statics::NewStructOps, TEXT("PlaneConstraint"), &Z_Registration_Info_UScriptStruct_FPlaneConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlaneConstraint), 70691970U) },
		{ FPowerIKWalkingLimb::StaticStruct, Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewStructOps, TEXT("PowerIKWalkingLimb"), &Z_Registration_Info_UScriptStruct_FPowerIKWalkingLimb, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPowerIKWalkingLimb), 110492369U) },
		{ FAnimNode_PowerIK_Walk::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewStructOps, TEXT("AnimNode_PowerIK_Walk"), &Z_Registration_Info_UScriptStruct_FAnimNode_PowerIK_Walk, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_PowerIK_Walk), 3101199045U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Plugins_HostProject_Plugins_PowerIK_Source_PowerIKRuntime_Public_AnimNode_PowerIK_Walk_h__Script_PowerIKRuntime_2954584460(TEXT("/Script/PowerIKRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Plugins_HostProject_Plugins_PowerIK_Source_PowerIKRuntime_Public_AnimNode_PowerIK_Walk_h__Script_PowerIKRuntime_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Plugins_HostProject_Plugins_PowerIK_Source_PowerIKRuntime_Public_AnimNode_PowerIK_Walk_h__Script_PowerIKRuntime_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
