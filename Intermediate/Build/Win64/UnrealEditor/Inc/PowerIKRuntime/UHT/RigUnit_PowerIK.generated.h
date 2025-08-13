// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigUnit_PowerIK.h"

#ifdef POWERIKRUNTIME_RigUnit_PowerIK_generated_h
#error "RigUnit_PowerIK.generated.h already included, missing '#pragma once' in RigUnit_PowerIK.h"
#endif
#define POWERIKRUNTIME_RigUnit_PowerIK_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRigUnit_PowerIK **************************************************

#define FRigUnit_PowerIK_Execute() \
	void FRigUnit_PowerIK::StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		bool& bInitialized, \
		const FName& CharacterRoot, \
		const float RootRotationMultiplier, \
		const TArrayView<const FPowerIKEffector>& Effectors, \
		const TArrayView<const FPowerIKBoneBendDirection>& BendDirections, \
		const TArrayView<const FPowerIKExcludedBone>& ExcludedBones, \
		const TArrayView<const FPowerIKBoneLimit>& JointLimits, \
		const FPowerIKCenterOfGravity& CenterOfGravityConstraint, \
		const FPowerIKBodyInertia& Inertia, \
		const int32 MaxSquashIterations, \
		const int32 MaxStretchIterations, \
		const int32 MaxFinalIterations, \
		const bool AllowBoneTranslation, \
		const float SolverAlpha, \
		FPowerIKCore& Core \
	)

#define FID_Plugins_HostProject_Plugins_PowerIK_Source_PowerIKRuntime_Public_RigUnit_PowerIK_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics; \
	POWERIKRUNTIME_API static class UScriptStruct* StaticStruct(); \
	POWERIKRUNTIME_API virtual const UScriptStruct* GetExecuteContextStruct() const override { return FControlRigExecuteContext::StaticStruct(); } \
	void Execute(FControlRigExecuteContext& InExecuteContext); \
	static void StaticExecute( \
		FControlRigExecuteContext& ExecuteContext, \
		bool& bInitialized, \
		const FName& CharacterRoot, \
		const float RootRotationMultiplier, \
		const TArrayView<const FPowerIKEffector>& Effectors, \
		const TArrayView<const FPowerIKBoneBendDirection>& BendDirections, \
		const TArrayView<const FPowerIKExcludedBone>& ExcludedBones, \
		const TArrayView<const FPowerIKBoneLimit>& JointLimits, \
		const FPowerIKCenterOfGravity& CenterOfGravityConstraint, \
		const FPowerIKBodyInertia& Inertia, \
		const int32 MaxSquashIterations, \
		const int32 MaxStretchIterations, \
		const int32 MaxFinalIterations, \
		const bool AllowBoneTranslation, \
		const float SolverAlpha, \
		FPowerIKCore& Core \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExtendedExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles, \
		FRigVMPredicateBranchArray RigVMBranches \
	) \
	{ \
		bool& bInitialized = *(bool*)RigVMMemoryHandles[0].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		const FName& CharacterRoot = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		const float RootRotationMultiplier = *(float*)RigVMMemoryHandles[2].GetData(false); \
		TArray<FPowerIKEffector>& Effectors = *(TArray<FPowerIKEffector>*)RigVMMemoryHandles[3].GetData(false); \
		TArray<FPowerIKBoneBendDirection>& BendDirections = *(TArray<FPowerIKBoneBendDirection>*)RigVMMemoryHandles[4].GetData(false); \
		TArray<FPowerIKExcludedBone>& ExcludedBones = *(TArray<FPowerIKExcludedBone>*)RigVMMemoryHandles[5].GetData(false); \
		TArray<FPowerIKBoneLimit>& JointLimits = *(TArray<FPowerIKBoneLimit>*)RigVMMemoryHandles[6].GetData(false); \
		const FPowerIKCenterOfGravity& CenterOfGravityConstraint = *(FPowerIKCenterOfGravity*)RigVMMemoryHandles[7].GetData(false); \
		const FPowerIKBodyInertia& Inertia = *(FPowerIKBodyInertia*)RigVMMemoryHandles[8].GetData(false); \
		const int32 MaxSquashIterations = *(int32*)RigVMMemoryHandles[9].GetData(false); \
		const int32 MaxStretchIterations = *(int32*)RigVMMemoryHandles[10].GetData(false); \
		const int32 MaxFinalIterations = *(int32*)RigVMMemoryHandles[11].GetData(false); \
		const bool AllowBoneTranslation = *(bool*)RigVMMemoryHandles[12].GetData(false); \
		const float SolverAlpha = *(float*)RigVMMemoryHandles[13].GetData(false); \
		FPowerIKCore& Core = *(FPowerIKCore*)RigVMMemoryHandles[14].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext.GetPublicData<FControlRigExecuteContext>(), \
			bInitialized, \
			CharacterRoot, \
			RootRotationMultiplier, \
			Effectors, \
			BendDirections, \
			ExcludedBones, \
			JointLimits, \
			CenterOfGravityConstraint, \
			Inertia, \
			MaxSquashIterations, \
			MaxStretchIterations, \
			MaxFinalIterations, \
			AllowBoneTranslation, \
			SolverAlpha, \
			Core \
		); \
	} \
	typedef FRigUnitMutable Super;


struct FRigUnit_PowerIK;
// ********** End ScriptStruct FRigUnit_PowerIK ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Plugins_HostProject_Plugins_PowerIK_Source_PowerIKRuntime_Public_RigUnit_PowerIK_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
