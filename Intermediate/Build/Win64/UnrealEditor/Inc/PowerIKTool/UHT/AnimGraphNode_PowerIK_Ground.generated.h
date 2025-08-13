// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_PowerIK_Ground.h"

#ifdef POWERIKTOOL_AnimGraphNode_PowerIK_Ground_generated_h
#error "AnimGraphNode_PowerIK_Ground.generated.h already included, missing '#pragma once' in AnimGraphNode_PowerIK_Ground.h"
#endif
#define POWERIKTOOL_AnimGraphNode_PowerIK_Ground_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimGraphNode_PowerIK_Ground ********************************************
POWERIKTOOL_API UClass* Z_Construct_UClass_UAnimGraphNode_PowerIK_Ground_NoRegister();

#define FID_Plugins_HostProject_Plugins_PowerIK_Source_PowerIKTool_Public_AnimGraphNode_PowerIK_Ground_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_PowerIK_Ground(); \
	friend struct Z_Construct_UClass_UAnimGraphNode_PowerIK_Ground_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend POWERIKTOOL_API UClass* Z_Construct_UClass_UAnimGraphNode_PowerIK_Ground_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNode_PowerIK_Ground, UAnimGraphNode_SkeletalControlBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PowerIKTool"), Z_Construct_UClass_UAnimGraphNode_PowerIK_Ground_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNode_PowerIK_Ground)


#define FID_Plugins_HostProject_Plugins_PowerIK_Source_PowerIKTool_Public_AnimGraphNode_PowerIK_Ground_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	POWERIKTOOL_API UAnimGraphNode_PowerIK_Ground(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_PowerIK_Ground) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(POWERIKTOOL_API, UAnimGraphNode_PowerIK_Ground); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_PowerIK_Ground); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNode_PowerIK_Ground(UAnimGraphNode_PowerIK_Ground&&) = delete; \
	UAnimGraphNode_PowerIK_Ground(const UAnimGraphNode_PowerIK_Ground&) = delete; \
	POWERIKTOOL_API virtual ~UAnimGraphNode_PowerIK_Ground();


#define FID_Plugins_HostProject_Plugins_PowerIK_Source_PowerIKTool_Public_AnimGraphNode_PowerIK_Ground_h_14_PROLOG
#define FID_Plugins_HostProject_Plugins_PowerIK_Source_PowerIKTool_Public_AnimGraphNode_PowerIK_Ground_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Plugins_HostProject_Plugins_PowerIK_Source_PowerIKTool_Public_AnimGraphNode_PowerIK_Ground_h_17_INCLASS \
	FID_Plugins_HostProject_Plugins_PowerIK_Source_PowerIKTool_Public_AnimGraphNode_PowerIK_Ground_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNode_PowerIK_Ground;

// ********** End Class UAnimGraphNode_PowerIK_Ground **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Plugins_HostProject_Plugins_PowerIK_Source_PowerIKTool_Public_AnimGraphNode_PowerIK_Ground_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
