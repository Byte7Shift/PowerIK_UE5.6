// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphNode_PowerIK.h"
#include "AnimNode_PowerIK.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_PowerIK() {}

// ********** Begin Cross Module References ********************************************************
ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase();
POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_PowerIK();
POWERIKTOOL_API UClass* Z_Construct_UClass_UAnimGraphNode_PowerIK();
POWERIKTOOL_API UClass* Z_Construct_UClass_UAnimGraphNode_PowerIK_NoRegister();
UPackage* Z_Construct_UPackage__Script_PowerIKTool();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAnimGraphNode_PowerIK ***************************************************
void UAnimGraphNode_PowerIK::StaticRegisterNativesUAnimGraphNode_PowerIK()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAnimGraphNode_PowerIK;
UClass* UAnimGraphNode_PowerIK::GetPrivateStaticClass()
{
	using TClass = UAnimGraphNode_PowerIK;
	if (!Z_Registration_Info_UClass_UAnimGraphNode_PowerIK.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AnimGraphNode_PowerIK"),
			Z_Registration_Info_UClass_UAnimGraphNode_PowerIK.InnerSingleton,
			StaticRegisterNativesUAnimGraphNode_PowerIK,
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
	return Z_Registration_Info_UClass_UAnimGraphNode_PowerIK.InnerSingleton;
}
UClass* Z_Construct_UClass_UAnimGraphNode_PowerIK_NoRegister()
{
	return UAnimGraphNode_PowerIK::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAnimGraphNode_PowerIK_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_PowerIK.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_PowerIK.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_PowerIK.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDebugDraw_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Enable drawing of debug information in viewport. */" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_PowerIK.h" },
		{ "ToolTip", "Enable drawing of debug information in viewport." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
	static void NewProp_bEnableDebugDraw_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDebugDraw;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_PowerIK>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_PowerIK_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimGraphNode_PowerIK, Node), Z_Construct_UScriptStruct_FAnimNode_PowerIK, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) }; // 4147452361
void Z_Construct_UClass_UAnimGraphNode_PowerIK_Statics::NewProp_bEnableDebugDraw_SetBit(void* Obj)
{
	((UAnimGraphNode_PowerIK*)Obj)->bEnableDebugDraw = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimGraphNode_PowerIK_Statics::NewProp_bEnableDebugDraw = { "bEnableDebugDraw", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimGraphNode_PowerIK), &Z_Construct_UClass_UAnimGraphNode_PowerIK_Statics::NewProp_bEnableDebugDraw_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDebugDraw_MetaData), NewProp_bEnableDebugDraw_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_PowerIK_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_PowerIK_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_PowerIK_Statics::NewProp_bEnableDebugDraw,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_PowerIK_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimGraphNode_PowerIK_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PowerIKTool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_PowerIK_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_PowerIK_Statics::ClassParams = {
	&UAnimGraphNode_PowerIK::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimGraphNode_PowerIK_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_PowerIK_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_PowerIK_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimGraphNode_PowerIK_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimGraphNode_PowerIK()
{
	if (!Z_Registration_Info_UClass_UAnimGraphNode_PowerIK.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_PowerIK.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_PowerIK_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimGraphNode_PowerIK.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_PowerIK);
UAnimGraphNode_PowerIK::~UAnimGraphNode_PowerIK() {}
// ********** End Class UAnimGraphNode_PowerIK *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Plugins_HostProject_Plugins_PowerIK_Source_PowerIKTool_Public_AnimGraphNode_PowerIK_h__Script_PowerIKTool_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_PowerIK, UAnimGraphNode_PowerIK::StaticClass, TEXT("UAnimGraphNode_PowerIK"), &Z_Registration_Info_UClass_UAnimGraphNode_PowerIK, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_PowerIK), 3784056534U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Plugins_HostProject_Plugins_PowerIK_Source_PowerIKTool_Public_AnimGraphNode_PowerIK_h__Script_PowerIKTool_3309728689(TEXT("/Script/PowerIKTool"),
	Z_CompiledInDeferFile_FID_Plugins_HostProject_Plugins_PowerIK_Source_PowerIKTool_Public_AnimGraphNode_PowerIK_h__Script_PowerIKTool_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Plugins_HostProject_Plugins_PowerIK_Source_PowerIKTool_Public_AnimGraphNode_PowerIK_h__Script_PowerIKTool_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
