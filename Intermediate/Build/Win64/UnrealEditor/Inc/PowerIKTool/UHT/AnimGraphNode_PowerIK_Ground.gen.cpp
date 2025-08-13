// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphNode_PowerIK_Ground.h"
#include "AnimNode_PowerIK_Ground.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_PowerIK_Ground() {}

// ********** Begin Cross Module References ********************************************************
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase();
POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground();
POWERIKTOOL_API UClass* Z_Construct_UClass_UAnimGraphNode_PowerIK_Ground();
POWERIKTOOL_API UClass* Z_Construct_UClass_UAnimGraphNode_PowerIK_Ground_NoRegister();
UPackage* Z_Construct_UPackage__Script_PowerIKTool();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAnimGraphNode_PowerIK_Ground ********************************************
void UAnimGraphNode_PowerIK_Ground::StaticRegisterNativesUAnimGraphNode_PowerIK_Ground()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAnimGraphNode_PowerIK_Ground;
UClass* UAnimGraphNode_PowerIK_Ground::GetPrivateStaticClass()
{
	using TClass = UAnimGraphNode_PowerIK_Ground;
	if (!Z_Registration_Info_UClass_UAnimGraphNode_PowerIK_Ground.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AnimGraphNode_PowerIK_Ground"),
			Z_Registration_Info_UClass_UAnimGraphNode_PowerIK_Ground.InnerSingleton,
			StaticRegisterNativesUAnimGraphNode_PowerIK_Ground,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UAnimGraphNode_PowerIK_Ground.InnerSingleton;
}
UClass* Z_Construct_UClass_UAnimGraphNode_PowerIK_Ground_NoRegister()
{
	return UAnimGraphNode_PowerIK_Ground::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAnimGraphNode_PowerIK_Ground_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_PowerIK_Ground.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_PowerIK_Ground.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_PowerIK_Ground.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDebugDraw_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Enable drawing of debug information in viewport. */" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_PowerIK_Ground.h" },
		{ "ToolTip", "Enable drawing of debug information in viewport." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
	static void NewProp_bEnableDebugDraw_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDebugDraw;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_PowerIK_Ground>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_PowerIK_Ground_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimGraphNode_PowerIK_Ground, Node), Z_Construct_UScriptStruct_FAnimNode_PowerIK_Ground, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) }; // 2258382652
void Z_Construct_UClass_UAnimGraphNode_PowerIK_Ground_Statics::NewProp_bEnableDebugDraw_SetBit(void* Obj)
{
	((UAnimGraphNode_PowerIK_Ground*)Obj)->bEnableDebugDraw = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimGraphNode_PowerIK_Ground_Statics::NewProp_bEnableDebugDraw = { "bEnableDebugDraw", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimGraphNode_PowerIK_Ground), &Z_Construct_UClass_UAnimGraphNode_PowerIK_Ground_Statics::NewProp_bEnableDebugDraw_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDebugDraw_MetaData), NewProp_bEnableDebugDraw_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_PowerIK_Ground_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_PowerIK_Ground_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_PowerIK_Ground_Statics::NewProp_bEnableDebugDraw,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_PowerIK_Ground_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimGraphNode_PowerIK_Ground_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PowerIKTool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_PowerIK_Ground_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_PowerIK_Ground_Statics::ClassParams = {
	&UAnimGraphNode_PowerIK_Ground::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimGraphNode_PowerIK_Ground_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_PowerIK_Ground_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_PowerIK_Ground_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimGraphNode_PowerIK_Ground_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimGraphNode_PowerIK_Ground()
{
	if (!Z_Registration_Info_UClass_UAnimGraphNode_PowerIK_Ground.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_PowerIK_Ground.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_PowerIK_Ground_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimGraphNode_PowerIK_Ground.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_PowerIK_Ground);
UAnimGraphNode_PowerIK_Ground::~UAnimGraphNode_PowerIK_Ground() {}
// ********** End Class UAnimGraphNode_PowerIK_Ground **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Plugins_HostProject_Plugins_PowerIK_Source_PowerIKTool_Public_AnimGraphNode_PowerIK_Ground_h__Script_PowerIKTool_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_PowerIK_Ground, UAnimGraphNode_PowerIK_Ground::StaticClass, TEXT("UAnimGraphNode_PowerIK_Ground"), &Z_Registration_Info_UClass_UAnimGraphNode_PowerIK_Ground, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_PowerIK_Ground), 3907791890U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Plugins_HostProject_Plugins_PowerIK_Source_PowerIKTool_Public_AnimGraphNode_PowerIK_Ground_h__Script_PowerIKTool_1900674373(TEXT("/Script/PowerIKTool"),
	Z_CompiledInDeferFile_FID_Plugins_HostProject_Plugins_PowerIK_Source_PowerIKTool_Public_AnimGraphNode_PowerIK_Ground_h__Script_PowerIKTool_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Plugins_HostProject_Plugins_PowerIK_Source_PowerIKTool_Public_AnimGraphNode_PowerIK_Ground_h__Script_PowerIKTool_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
