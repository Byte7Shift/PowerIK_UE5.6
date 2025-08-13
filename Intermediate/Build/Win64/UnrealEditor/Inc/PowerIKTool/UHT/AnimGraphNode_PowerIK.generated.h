// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_PowerIK.h"

#ifdef POWERIKTOOL_AnimGraphNode_PowerIK_generated_h
#error "AnimGraphNode_PowerIK.generated.h already included, missing '#pragma once' in AnimGraphNode_PowerIK.h"
#endif
#define POWERIKTOOL_AnimGraphNode_PowerIK_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimGraphNode_PowerIK ***************************************************
POWERIKTOOL_API UClass* Z_Construct_UClass_UAnimGraphNode_PowerIK_NoRegister();

#define FID_Plugins_HostProject_Plugins_PowerIK_Source_PowerIKTool_Public_AnimGraphNode_PowerIK_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_PowerIK(); \
	friend struct Z_Construct_UClass_UAnimGraphNode_PowerIK_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend POWERIKTOOL_API UClass* Z_Construct_UClass_UAnimGraphNode_PowerIK_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNode_PowerIK, UAnimGraphNode_SkeletalControlBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PowerIKTool"), Z_Construct_UClass_UAnimGraphNode_PowerIK_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNode_PowerIK)


#define FID_Plugins_HostProject_Plugins_PowerIK_Source_PowerIKTool_Public_AnimGraphNode_PowerIK_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	POWERIKTOOL_API UAnimGraphNode_PowerIK(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_PowerIK) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(POWERIKTOOL_API, UAnimGraphNode_PowerIK); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_PowerIK); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNode_PowerIK(UAnimGraphNode_PowerIK&&) = delete; \
	UAnimGraphNode_PowerIK(const UAnimGraphNode_PowerIK&) = delete; \
	POWERIKTOOL_API virtual ~UAnimGraphNode_PowerIK();


#define FID_Plugins_HostProject_Plugins_PowerIK_Source_PowerIKTool_Public_AnimGraphNode_PowerIK_h_14_PROLOG
#define FID_Plugins_HostProject_Plugins_PowerIK_Source_PowerIKTool_Public_AnimGraphNode_PowerIK_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Plugins_HostProject_Plugins_PowerIK_Source_PowerIKTool_Public_AnimGraphNode_PowerIK_h_17_INCLASS \
	FID_Plugins_HostProject_Plugins_PowerIK_Source_PowerIKTool_Public_AnimGraphNode_PowerIK_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNode_PowerIK;

// ********** End Class UAnimGraphNode_PowerIK *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Plugins_HostProject_Plugins_PowerIK_Source_PowerIKTool_Public_AnimGraphNode_PowerIK_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
