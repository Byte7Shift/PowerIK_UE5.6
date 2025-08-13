// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigUnit_PowerIK.h"
#include "PowerIK_UnrealCore.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRigUnit_PowerIK() {}

// ********** Begin Cross Module References ********************************************************
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnitMutable();
POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKBodyInertia();
POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKBoneBendDirection();
POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKBoneLimit();
POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKCenterOfGravity();
POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKCore();
POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKEffector();
POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKExcludedBone();
POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PowerIK();
UPackage* Z_Construct_UPackage__Script_PowerIKRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FRigUnit_PowerIK **************************************************
static_assert(std::is_polymorphic<FRigUnit_PowerIK>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_PowerIK cannot be polymorphic unless super FRigUnitMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRigUnit_PowerIK;
class UScriptStruct* FRigUnit_PowerIK::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRigUnit_PowerIK.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRigUnit_PowerIK.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_PowerIK, (UObject*)Z_Construct_UPackage__Script_PowerIKRuntime(), TEXT("RigUnit_PowerIK"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_PowerIK_Execute;
		Arguments_FRigUnit_PowerIK_Execute.Emplace(TEXT("bInitialized"), TEXT("bool"));
		Arguments_FRigUnit_PowerIK_Execute.Emplace(TEXT("CharacterRoot"), TEXT("FName"));
		Arguments_FRigUnit_PowerIK_Execute.Emplace(TEXT("RootRotationMultiplier"), TEXT("float"));
		Arguments_FRigUnit_PowerIK_Execute.Emplace(TEXT("Effectors"), TEXT("TArray<FPowerIKEffector>"));
		Arguments_FRigUnit_PowerIK_Execute.Emplace(TEXT("BendDirections"), TEXT("TArray<FPowerIKBoneBendDirection>"));
		Arguments_FRigUnit_PowerIK_Execute.Emplace(TEXT("ExcludedBones"), TEXT("TArray<FPowerIKExcludedBone>"));
		Arguments_FRigUnit_PowerIK_Execute.Emplace(TEXT("JointLimits"), TEXT("TArray<FPowerIKBoneLimit>"));
		Arguments_FRigUnit_PowerIK_Execute.Emplace(TEXT("CenterOfGravityConstraint"), TEXT("FPowerIKCenterOfGravity"));
		Arguments_FRigUnit_PowerIK_Execute.Emplace(TEXT("Inertia"), TEXT("FPowerIKBodyInertia"));
		Arguments_FRigUnit_PowerIK_Execute.Emplace(TEXT("MaxSquashIterations"), TEXT("int32"));
		Arguments_FRigUnit_PowerIK_Execute.Emplace(TEXT("MaxStretchIterations"), TEXT("int32"));
		Arguments_FRigUnit_PowerIK_Execute.Emplace(TEXT("MaxFinalIterations"), TEXT("int32"));
		Arguments_FRigUnit_PowerIK_Execute.Emplace(TEXT("AllowBoneTranslation"), TEXT("bool"));
		Arguments_FRigUnit_PowerIK_Execute.Emplace(TEXT("SolverAlpha"), TEXT("float"));
		Arguments_FRigUnit_PowerIK_Execute.Emplace(TEXT("Core"), TEXT("FPowerIKCore"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_PowerIK::Execute"), &FRigUnit_PowerIK::RigVMExecute, Z_Registration_Info_UScriptStruct_FRigUnit_PowerIK.OuterSingleton, Arguments_FRigUnit_PowerIK_Execute);
	}
	return Z_Registration_Info_UScriptStruct_FRigUnit_PowerIK.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * Power IK Solver Control Rig Node\n */" },
		{ "DisplayName", "PowerIK Solver" },
		{ "Keywords", "IK,Solver,Power" },
		{ "ModuleRelativePath", "Public/RigUnit_PowerIK.h" },
		{ "ToolTip", "Power IK Solver Control Rig Node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigUnit_PowerIK.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterRoot_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** Name of joint that acts as the root of the solve. All effectors must be on children of this bone. */" },
		{ "Constant", "" },
		{ "CustomWidget", "BoneName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_PowerIK.h" },
		{ "ToolTip", "Name of joint that acts as the root of the solve. All effectors must be on children of this bone." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootRotationMultiplier_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** How much to rotate root towards neighboring effectors. */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_PowerIK.h" },
		{ "ToolTip", "How much to rotate root towards neighboring effectors." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Effectors_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** List of effectors to pull the rig. */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_PowerIK.h" },
		{ "ToolTip", "List of effectors to pull the rig." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BendDirections_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** List of custom directions for bones to bend in. */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_PowerIK.h" },
		{ "ToolTip", "List of custom directions for bones to bend in." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExcludedBones_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** List of excluded bones. */" },
		{ "Constant", "" },
		{ "CustomWidget", "BoneName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_PowerIK.h" },
		{ "ToolTip", "List of excluded bones." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JointLimits_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** List of rotation limits for joints. */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_PowerIK.h" },
		{ "ToolTip", "List of rotation limits for joints." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CenterOfGravityConstraint_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** Center of Gravity Constraint, applied to Character Root bone. */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_PowerIK.h" },
		{ "ToolTip", "Center of Gravity Constraint, applied to Character Root bone." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inertia_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** Apply inertial damping to Character body. */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_PowerIK.h" },
		{ "ToolTip", "Apply inertial damping to Character body." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSquashIterations_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** Number of iterations to improve squashing poses. */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_PowerIK.h" },
		{ "ToolTip", "Number of iterations to improve squashing poses." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStretchIterations_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** Number of iterations to improve stretching poses. */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_PowerIK.h" },
		{ "ToolTip", "Number of iterations to improve stretching poses." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxFinalIterations_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** Number of iterations to improve final pose. */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_PowerIK.h" },
		{ "ToolTip", "Number of iterations to improve final pose." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowBoneTranslation_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** If true, bone lengths will be updated each frame based on the input pose. This allows bone chains to 'stretch' but has a small additional cost to support.*/" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_PowerIK.h" },
		{ "ToolTip", "If true, bone lengths will be updated each frame based on the input pose. This allows bone chains to 'stretch' but has a small additional cost to support." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SolverAlpha_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** Global alpha to blend effector of solver on/off from 0 to 1. */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_PowerIK.h" },
		{ "ToolTip", "Global alpha to blend effector of solver on/off from 0 to 1." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Core_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigUnit_PowerIK.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bInitialized_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitialized;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterRoot;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RootRotationMultiplier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Effectors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Effectors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BendDirections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BendDirections;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExcludedBones_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludedBones;
	static const UECodeGen_Private::FStructPropertyParams NewProp_JointLimits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_JointLimits;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CenterOfGravityConstraint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Inertia;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSquashIterations;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxStretchIterations;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxFinalIterations;
	static void NewProp_AllowBoneTranslation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AllowBoneTranslation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SolverAlpha;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Core;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_PowerIK>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_bInitialized_SetBit(void* Obj)
{
	((FRigUnit_PowerIK*)Obj)->bInitialized = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_bInitialized = { "bInitialized", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_PowerIK), &Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_bInitialized_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInitialized_MetaData), NewProp_bInitialized_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_CharacterRoot = { "CharacterRoot", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PowerIK, CharacterRoot), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterRoot_MetaData), NewProp_CharacterRoot_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_RootRotationMultiplier = { "RootRotationMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PowerIK, RootRotationMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootRotationMultiplier_MetaData), NewProp_RootRotationMultiplier_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_Effectors_Inner = { "Effectors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPowerIKEffector, METADATA_PARAMS(0, nullptr) }; // 793941899
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_Effectors = { "Effectors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PowerIK, Effectors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Effectors_MetaData), NewProp_Effectors_MetaData) }; // 793941899
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_BendDirections_Inner = { "BendDirections", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPowerIKBoneBendDirection, METADATA_PARAMS(0, nullptr) }; // 2760720664
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_BendDirections = { "BendDirections", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PowerIK, BendDirections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BendDirections_MetaData), NewProp_BendDirections_MetaData) }; // 2760720664
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_ExcludedBones_Inner = { "ExcludedBones", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPowerIKExcludedBone, METADATA_PARAMS(0, nullptr) }; // 2227159558
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_ExcludedBones = { "ExcludedBones", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PowerIK, ExcludedBones), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExcludedBones_MetaData), NewProp_ExcludedBones_MetaData) }; // 2227159558
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_JointLimits_Inner = { "JointLimits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPowerIKBoneLimit, METADATA_PARAMS(0, nullptr) }; // 1520110841
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_JointLimits = { "JointLimits", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PowerIK, JointLimits), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JointLimits_MetaData), NewProp_JointLimits_MetaData) }; // 1520110841
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_CenterOfGravityConstraint = { "CenterOfGravityConstraint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PowerIK, CenterOfGravityConstraint), Z_Construct_UScriptStruct_FPowerIKCenterOfGravity, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CenterOfGravityConstraint_MetaData), NewProp_CenterOfGravityConstraint_MetaData) }; // 1512727556
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_Inertia = { "Inertia", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PowerIK, Inertia), Z_Construct_UScriptStruct_FPowerIKBodyInertia, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inertia_MetaData), NewProp_Inertia_MetaData) }; // 1762818926
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_MaxSquashIterations = { "MaxSquashIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PowerIK, MaxSquashIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSquashIterations_MetaData), NewProp_MaxSquashIterations_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_MaxStretchIterations = { "MaxStretchIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PowerIK, MaxStretchIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStretchIterations_MetaData), NewProp_MaxStretchIterations_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_MaxFinalIterations = { "MaxFinalIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PowerIK, MaxFinalIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxFinalIterations_MetaData), NewProp_MaxFinalIterations_MetaData) };
void Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_AllowBoneTranslation_SetBit(void* Obj)
{
	((FRigUnit_PowerIK*)Obj)->AllowBoneTranslation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_AllowBoneTranslation = { "AllowBoneTranslation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_PowerIK), &Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_AllowBoneTranslation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowBoneTranslation_MetaData), NewProp_AllowBoneTranslation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_SolverAlpha = { "SolverAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PowerIK, SolverAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SolverAlpha_MetaData), NewProp_SolverAlpha_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_Core = { "Core", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_PowerIK, Core), Z_Construct_UScriptStruct_FPowerIKCore, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Core_MetaData), NewProp_Core_MetaData) }; // 1787368951
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_bInitialized,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_CharacterRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_RootRotationMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_Effectors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_Effectors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_BendDirections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_BendDirections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_ExcludedBones_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_ExcludedBones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_JointLimits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_JointLimits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_CenterOfGravityConstraint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_Inertia,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_MaxSquashIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_MaxStretchIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_MaxFinalIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_AllowBoneTranslation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_SolverAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_Core,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PowerIKRuntime,
	Z_Construct_UScriptStruct_FRigUnitMutable,
	&NewStructOps,
	"RigUnit_PowerIK",
	Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::PropPointers),
	sizeof(FRigUnit_PowerIK),
	alignof(FRigUnit_PowerIK),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PowerIK()
{
	if (!Z_Registration_Info_UScriptStruct_FRigUnit_PowerIK.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRigUnit_PowerIK.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FRigUnit_PowerIK.InnerSingleton;
}
void FRigUnit_PowerIK::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_PowerIK::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FPowerIKEffector> Effectors_3_Array(Effectors);
	TArrayView<const FPowerIKBoneBendDirection> BendDirections_4_Array(BendDirections);
	TArrayView<const FPowerIKExcludedBone> ExcludedBones_5_Array(ExcludedBones);
	TArrayView<const FPowerIKBoneLimit> JointLimits_6_Array(JointLimits);
	StaticExecute(
		InExecuteContext,
		bInitialized,
		CharacterRoot,
		RootRotationMultiplier,
		Effectors_3_Array,
		BendDirections_4_Array,
		ExcludedBones_5_Array,
		JointLimits_6_Array,
		CenterOfGravityConstraint,
		Inertia,
		MaxSquashIterations,
		MaxStretchIterations,
		MaxFinalIterations,
		AllowBoneTranslation,
		SolverAlpha,
		Core
	);
}
// ********** End ScriptStruct FRigUnit_PowerIK ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Plugins_HostProject_Plugins_PowerIK_Source_PowerIKRuntime_Public_RigUnit_PowerIK_h__Script_PowerIKRuntime_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRigUnit_PowerIK::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewStructOps, TEXT("RigUnit_PowerIK"), &Z_Registration_Info_UScriptStruct_FRigUnit_PowerIK, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_PowerIK), 347501614U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Plugins_HostProject_Plugins_PowerIK_Source_PowerIKRuntime_Public_RigUnit_PowerIK_h__Script_PowerIKRuntime_632818931(TEXT("/Script/PowerIKRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Plugins_HostProject_Plugins_PowerIK_Source_PowerIKRuntime_Public_RigUnit_PowerIK_h__Script_PowerIKRuntime_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Plugins_HostProject_Plugins_PowerIK_Source_PowerIKRuntime_Public_RigUnit_PowerIK_h__Script_PowerIKRuntime_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
