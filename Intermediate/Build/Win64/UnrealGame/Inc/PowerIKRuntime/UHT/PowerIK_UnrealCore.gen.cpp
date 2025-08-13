// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PowerIK_UnrealCore.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePowerIK_UnrealCore() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
POWERIKRUNTIME_API UEnum* Z_Construct_UEnum_PowerIKRuntime_EEffectorSpaceEnum();
POWERIKRUNTIME_API UEnum* Z_Construct_UEnum_PowerIKRuntime_EPoleVectorModeEnum();
POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKBodyInertia();
POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKBoneBendDirection();
POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKBoneData();
POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKBoneLimit();
POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKCenterOfGravity();
POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKCore();
POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKEffector();
POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKEffectorData();
POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKExcludedBone();
POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKPoleVector();
POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKRootData();
POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKSmoothing();
UPackage* Z_Construct_UPackage__Script_PowerIKRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPowerIKBoneLimit *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPowerIKBoneLimit;
class UScriptStruct* FPowerIKBoneLimit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPowerIKBoneLimit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPowerIKBoneLimit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPowerIKBoneLimit, (UObject*)Z_Construct_UPackage__Script_PowerIKRuntime(), TEXT("PowerIKBoneLimit"));
	}
	return Z_Registration_Info_UScriptStruct_FPowerIKBoneLimit.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPowerIKBoneLimit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "Category", "Joint" },
		{ "Constant", "" },
		{ "CustomWidget", "BoneName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stiffness_MetaData[] = {
		{ "Category", "Joint" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Stiffness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPowerIKBoneLimit>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPowerIKBoneLimit_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000030005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKBoneLimit, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKBoneLimit_Statics::NewProp_Stiffness = { "Stiffness", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKBoneLimit, Stiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stiffness_MetaData), NewProp_Stiffness_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPowerIKBoneLimit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKBoneLimit_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKBoneLimit_Statics::NewProp_Stiffness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKBoneLimit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPowerIKBoneLimit_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PowerIKRuntime,
	nullptr,
	&NewStructOps,
	"PowerIKBoneLimit",
	Z_Construct_UScriptStruct_FPowerIKBoneLimit_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKBoneLimit_Statics::PropPointers),
	sizeof(FPowerIKBoneLimit),
	alignof(FPowerIKBoneLimit),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKBoneLimit_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPowerIKBoneLimit_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPowerIKBoneLimit()
{
	if (!Z_Registration_Info_UScriptStruct_FPowerIKBoneLimit.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPowerIKBoneLimit.InnerSingleton, Z_Construct_UScriptStruct_FPowerIKBoneLimit_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPowerIKBoneLimit.InnerSingleton;
}
// ********** End ScriptStruct FPowerIKBoneLimit ***************************************************

// ********** Begin ScriptStruct FPowerIKBoneBendDirection *****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPowerIKBoneBendDirection;
class UScriptStruct* FPowerIKBoneBendDirection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPowerIKBoneBendDirection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPowerIKBoneBendDirection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPowerIKBoneBendDirection, (UObject*)Z_Construct_UPackage__Script_PowerIKRuntime(), TEXT("PowerIKBoneBendDirection"));
	}
	return Z_Registration_Info_UScriptStruct_FPowerIKBoneBendDirection.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "Category", "Joint" },
		{ "CustomWidget", "BoneName" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BendDirection_MetaData[] = {
		{ "Category", "Joint" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BendDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPowerIKBoneBendDirection>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKBoneBendDirection, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Statics::NewProp_BendDirection = { "BendDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKBoneBendDirection, BendDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BendDirection_MetaData), NewProp_BendDirection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Statics::NewProp_BendDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PowerIKRuntime,
	nullptr,
	&NewStructOps,
	"PowerIKBoneBendDirection",
	Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Statics::PropPointers),
	sizeof(FPowerIKBoneBendDirection),
	alignof(FPowerIKBoneBendDirection),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPowerIKBoneBendDirection()
{
	if (!Z_Registration_Info_UScriptStruct_FPowerIKBoneBendDirection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPowerIKBoneBendDirection.InnerSingleton, Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPowerIKBoneBendDirection.InnerSingleton;
}
// ********** End ScriptStruct FPowerIKBoneBendDirection *******************************************

// ********** Begin ScriptStruct FPowerIKExcludedBone **********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPowerIKExcludedBone;
class UScriptStruct* FPowerIKExcludedBone::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPowerIKExcludedBone.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPowerIKExcludedBone.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPowerIKExcludedBone, (UObject*)Z_Construct_UPackage__Script_PowerIKRuntime(), TEXT("PowerIKExcludedBone"));
	}
	return Z_Registration_Info_UScriptStruct_FPowerIKExcludedBone.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPowerIKExcludedBone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "Category", "Joint" },
		{ "CustomWidget", "BoneName" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPowerIKExcludedBone>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPowerIKExcludedBone_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKExcludedBone, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPowerIKExcludedBone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKExcludedBone_Statics::NewProp_BoneName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKExcludedBone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPowerIKExcludedBone_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PowerIKRuntime,
	nullptr,
	&NewStructOps,
	"PowerIKExcludedBone",
	Z_Construct_UScriptStruct_FPowerIKExcludedBone_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKExcludedBone_Statics::PropPointers),
	sizeof(FPowerIKExcludedBone),
	alignof(FPowerIKExcludedBone),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKExcludedBone_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPowerIKExcludedBone_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPowerIKExcludedBone()
{
	if (!Z_Registration_Info_UScriptStruct_FPowerIKExcludedBone.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPowerIKExcludedBone.InnerSingleton, Z_Construct_UScriptStruct_FPowerIKExcludedBone_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPowerIKExcludedBone.InnerSingleton;
}
// ********** End ScriptStruct FPowerIKExcludedBone ************************************************

// ********** Begin Enum EPoleVectorModeEnum *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPoleVectorModeEnum;
static UEnum* EPoleVectorModeEnum_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPoleVectorModeEnum.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPoleVectorModeEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PowerIKRuntime_EPoleVectorModeEnum, (UObject*)Z_Construct_UPackage__Script_PowerIKRuntime(), TEXT("EPoleVectorModeEnum"));
	}
	return Z_Registration_Info_UEnum_EPoleVectorModeEnum.OuterSingleton;
}
template<> POWERIKRUNTIME_API UEnum* StaticEnum<EPoleVectorModeEnum>()
{
	return EPoleVectorModeEnum_StaticEnum();
}
struct Z_Construct_UEnum_PowerIKRuntime_EPoleVectorModeEnum_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "PV_AngleOffset.DisplayName", "Float Angle Offset" },
		{ "PV_AngleOffset.Name", "PV_AngleOffset" },
		{ "PV_Bone.DisplayName", "Bone" },
		{ "PV_Bone.Name", "PV_Bone" },
		{ "PV_None.DisplayName", "None" },
		{ "PV_None.Name", "PV_None" },
		{ "PV_Position.DisplayName", "Character Space Position" },
		{ "PV_Position.Name", "PV_Position" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "PV_None", (int64)PV_None },
		{ "PV_Position", (int64)PV_Position },
		{ "PV_Bone", (int64)PV_Bone },
		{ "PV_AngleOffset", (int64)PV_AngleOffset },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PowerIKRuntime_EPoleVectorModeEnum_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PowerIKRuntime,
	nullptr,
	"EPoleVectorModeEnum",
	"EPoleVectorModeEnum",
	Z_Construct_UEnum_PowerIKRuntime_EPoleVectorModeEnum_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PowerIKRuntime_EPoleVectorModeEnum_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PowerIKRuntime_EPoleVectorModeEnum_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PowerIKRuntime_EPoleVectorModeEnum_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PowerIKRuntime_EPoleVectorModeEnum()
{
	if (!Z_Registration_Info_UEnum_EPoleVectorModeEnum.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPoleVectorModeEnum.InnerSingleton, Z_Construct_UEnum_PowerIKRuntime_EPoleVectorModeEnum_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPoleVectorModeEnum.InnerSingleton;
}
// ********** End Enum EPoleVectorModeEnum *********************************************************

// ********** Begin ScriptStruct FPowerIKPoleVector ************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPowerIKPoleVector;
class UScriptStruct* FPowerIKPoleVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPowerIKPoleVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPowerIKPoleVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPowerIKPoleVector, (UObject*)Z_Construct_UPackage__Script_PowerIKRuntime(), TEXT("PowerIKPoleVector"));
	}
	return Z_Registration_Info_UScriptStruct_FPowerIKPoleVector.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "PoleVector" },
		{ "Comment", "/** Type of Pole Vector. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Type of Pole Vector." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "PoleVector" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "Category", "PoleVector" },
		{ "Constant", "" },
		{ "CustomWidget", "BoneName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngleOffset_MetaData[] = {
		{ "Category", "PoleVector" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPowerIKPoleVector>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKPoleVector, Mode), Z_Construct_UEnum_PowerIKRuntime_EPoleVectorModeEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 4127732025
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKPoleVector, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000030005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKPoleVector, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::NewProp_AngleOffset = { "AngleOffset", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKPoleVector, AngleOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngleOffset_MetaData), NewProp_AngleOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::NewProp_AngleOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PowerIKRuntime,
	nullptr,
	&NewStructOps,
	"PowerIKPoleVector",
	Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::PropPointers),
	sizeof(FPowerIKPoleVector),
	alignof(FPowerIKPoleVector),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPowerIKPoleVector()
{
	if (!Z_Registration_Info_UScriptStruct_FPowerIKPoleVector.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPowerIKPoleVector.InnerSingleton, Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPowerIKPoleVector.InnerSingleton;
}
// ********** End ScriptStruct FPowerIKPoleVector **************************************************

// ********** Begin ScriptStruct FPowerIKSmoothing *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPowerIKSmoothing;
class UScriptStruct* FPowerIKSmoothing::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPowerIKSmoothing.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPowerIKSmoothing.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPowerIKSmoothing, (UObject*)Z_Construct_UPackage__Script_PowerIKRuntime(), TEXT("PowerIKSmoothing"));
	}
	return Z_Registration_Info_UScriptStruct_FPowerIKSmoothing.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothPositionOverTime_MetaData[] = {
		{ "Category", "Ground" },
		{ "Comment", "/** Apply temporal smoothing to effector location. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Apply temporal smoothing to effector location." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPositionSpeed_MetaData[] = {
		{ "Category", "Grounding" },
		{ "ClampMax", "2000" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Maximum speed effector can react to input position when smoothing. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Maximum speed effector can react to input position when smoothing." },
		{ "UIMax", "2000" },
		{ "UIMin", "0.1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPositionDistance_MetaData[] = {
		{ "Category", "Grounding" },
		{ "ClampMax", "2000" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Maximum distance effector can be from input position when smoothing. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Maximum distance effector can be from input position when smoothing." },
		{ "UIMax", "2000" },
		{ "UIMin", "0.1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothRotationOverTime_MetaData[] = {
		{ "Category", "Ground" },
		{ "Comment", "/** Apply temporal smoothing to effector location. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Apply temporal smoothing to effector location." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDegreesSpeed_MetaData[] = {
		{ "Category", "Grounding" },
		{ "ClampMax", "360" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Maximum speed, in degrees/second, effector can react to input rotation when smoothing. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Maximum speed, in degrees/second, effector can react to input rotation when smoothing." },
		{ "UIMax", "360" },
		{ "UIMin", "0.1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDegreesDistance_MetaData[] = {
		{ "Category", "Grounding" },
		{ "ClampMax", "360" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Maximum distance, in degrees, effector can be from input rotation when smoothing. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Maximum distance, in degrees, effector can be from input rotation when smoothing." },
		{ "UIMax", "360" },
		{ "UIMin", "0.1" },
	};
#endif // WITH_METADATA
	static void NewProp_SmoothPositionOverTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SmoothPositionOverTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxPositionSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxPositionDistance;
	static void NewProp_SmoothRotationOverTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SmoothRotationOverTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDegreesSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDegreesDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPowerIKSmoothing>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_SmoothPositionOverTime_SetBit(void* Obj)
{
	((FPowerIKSmoothing*)Obj)->SmoothPositionOverTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_SmoothPositionOverTime = { "SmoothPositionOverTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPowerIKSmoothing), &Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_SmoothPositionOverTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothPositionOverTime_MetaData), NewProp_SmoothPositionOverTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_MaxPositionSpeed = { "MaxPositionSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKSmoothing, MaxPositionSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPositionSpeed_MetaData), NewProp_MaxPositionSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_MaxPositionDistance = { "MaxPositionDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKSmoothing, MaxPositionDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPositionDistance_MetaData), NewProp_MaxPositionDistance_MetaData) };
void Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_SmoothRotationOverTime_SetBit(void* Obj)
{
	((FPowerIKSmoothing*)Obj)->SmoothRotationOverTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_SmoothRotationOverTime = { "SmoothRotationOverTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPowerIKSmoothing), &Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_SmoothRotationOverTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothRotationOverTime_MetaData), NewProp_SmoothRotationOverTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_MaxDegreesSpeed = { "MaxDegreesSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKSmoothing, MaxDegreesSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDegreesSpeed_MetaData), NewProp_MaxDegreesSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_MaxDegreesDistance = { "MaxDegreesDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKSmoothing, MaxDegreesDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDegreesDistance_MetaData), NewProp_MaxDegreesDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_SmoothPositionOverTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_MaxPositionSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_MaxPositionDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_SmoothRotationOverTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_MaxDegreesSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_MaxDegreesDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PowerIKRuntime,
	nullptr,
	&NewStructOps,
	"PowerIKSmoothing",
	Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::PropPointers),
	sizeof(FPowerIKSmoothing),
	alignof(FPowerIKSmoothing),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPowerIKSmoothing()
{
	if (!Z_Registration_Info_UScriptStruct_FPowerIKSmoothing.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPowerIKSmoothing.InnerSingleton, Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPowerIKSmoothing.InnerSingleton;
}
// ********** End ScriptStruct FPowerIKSmoothing ***************************************************

// ********** Begin ScriptStruct FPowerIKCenterOfGravity *******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPowerIKCenterOfGravity;
class UScriptStruct* FPowerIKCenterOfGravity::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPowerIKCenterOfGravity.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPowerIKCenterOfGravity.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPowerIKCenterOfGravity, (UObject*)Z_Construct_UPackage__Script_PowerIKRuntime(), TEXT("PowerIKCenterOfGravity"));
	}
	return Z_Registration_Info_UScriptStruct_FPowerIKCenterOfGravity.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Smoothly blend effect of this constraint on/off. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Smoothly blend effect of this constraint on/off." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizAmount_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How much to pull character root towards feet in horiz direction. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "How much to pull character root towards feet in horiz direction." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertAmount_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How much to pull character root downwards when root pulled away from feet. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "How much to pull character root downwards when root pulled away from feet." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PullBodyAmount_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How much to pull the root with the rest of the body. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "How much to pull the root with the rest of the body." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HorizAmount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VertAmount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PullBodyAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPowerIKCenterOfGravity>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKCenterOfGravity, Alpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alpha_MetaData), NewProp_Alpha_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::NewProp_HorizAmount = { "HorizAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKCenterOfGravity, HorizAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizAmount_MetaData), NewProp_HorizAmount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::NewProp_VertAmount = { "VertAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKCenterOfGravity, VertAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertAmount_MetaData), NewProp_VertAmount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::NewProp_PullBodyAmount = { "PullBodyAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKCenterOfGravity, PullBodyAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PullBodyAmount_MetaData), NewProp_PullBodyAmount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::NewProp_HorizAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::NewProp_VertAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::NewProp_PullBodyAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PowerIKRuntime,
	nullptr,
	&NewStructOps,
	"PowerIKCenterOfGravity",
	Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::PropPointers),
	sizeof(FPowerIKCenterOfGravity),
	alignof(FPowerIKCenterOfGravity),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPowerIKCenterOfGravity()
{
	if (!Z_Registration_Info_UScriptStruct_FPowerIKCenterOfGravity.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPowerIKCenterOfGravity.InnerSingleton, Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPowerIKCenterOfGravity.InnerSingleton;
}
// ********** End ScriptStruct FPowerIKCenterOfGravity *********************************************

// ********** Begin ScriptStruct FPowerIKBodyInertia ***********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPowerIKBodyInertia;
class UScriptStruct* FPowerIKBodyInertia::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPowerIKBodyInertia.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPowerIKBodyInertia.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPowerIKBodyInertia, (UObject*)Z_Construct_UPackage__Script_PowerIKRuntime(), TEXT("PowerIKBodyInertia"));
	}
	return Z_Registration_Info_UScriptStruct_FPowerIKBodyInertia.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplyInertiaToBody_MetaData[] = {
		{ "Category", "Inertia" },
		{ "Comment", "/** Whether to use inertia to smooth root motion. Default is false.*/" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Whether to use inertia to smooth root motion. Default is false." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothFactor_MetaData[] = {
		{ "Category", "Inertia" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The strength of the spring attached the root to the solved position. */" },
		{ "EditCondition", "!UseSpring" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "The strength of the spring attached the root to the solved position." },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseSpring_MetaData[] = {
		{ "Category", "Inertia" },
		{ "Comment", "/** Use a spring instead of smooth motion (can overshoot). Default is false.*/" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Use a spring instead of smooth motion (can overshoot). Default is false." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringStrength_MetaData[] = {
		{ "Category", "Inertia" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The strength of the spring attached the root to the solved position. */" },
		{ "EditCondition", "UseSpring" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "The strength of the spring attached the root to the solved position." },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringDamping_MetaData[] = {
		{ "Category", "Inertia" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Dampen the motion over time. Range is 0-1. Default is 0.2. )*/" },
		{ "EditCondition", "UseSpring" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Dampen the motion over time. Range is 0-1. Default is 0.2. )" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static void NewProp_ApplyInertiaToBody_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ApplyInertiaToBody;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SmoothFactor;
	static void NewProp_UseSpring_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseSpring;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpringStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpringDamping;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPowerIKBodyInertia>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_ApplyInertiaToBody_SetBit(void* Obj)
{
	((FPowerIKBodyInertia*)Obj)->ApplyInertiaToBody = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_ApplyInertiaToBody = { "ApplyInertiaToBody", nullptr, (EPropertyFlags)0x0010000000030005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPowerIKBodyInertia), &Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_ApplyInertiaToBody_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplyInertiaToBody_MetaData), NewProp_ApplyInertiaToBody_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_SmoothFactor = { "SmoothFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKBodyInertia, SmoothFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothFactor_MetaData), NewProp_SmoothFactor_MetaData) };
void Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_UseSpring_SetBit(void* Obj)
{
	((FPowerIKBodyInertia*)Obj)->UseSpring = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_UseSpring = { "UseSpring", nullptr, (EPropertyFlags)0x0010000000030005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPowerIKBodyInertia), &Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_UseSpring_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseSpring_MetaData), NewProp_UseSpring_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_SpringStrength = { "SpringStrength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKBodyInertia, SpringStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringStrength_MetaData), NewProp_SpringStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_SpringDamping = { "SpringDamping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKBodyInertia, SpringDamping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringDamping_MetaData), NewProp_SpringDamping_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_ApplyInertiaToBody,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_SmoothFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_UseSpring,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_SpringStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_SpringDamping,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PowerIKRuntime,
	nullptr,
	&NewStructOps,
	"PowerIKBodyInertia",
	Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::PropPointers),
	sizeof(FPowerIKBodyInertia),
	alignof(FPowerIKBodyInertia),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPowerIKBodyInertia()
{
	if (!Z_Registration_Info_UScriptStruct_FPowerIKBodyInertia.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPowerIKBodyInertia.InnerSingleton, Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPowerIKBodyInertia.InnerSingleton;
}
// ********** End ScriptStruct FPowerIKBodyInertia *************************************************

// ********** Begin Enum EEffectorSpaceEnum ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEffectorSpaceEnum;
static UEnum* EEffectorSpaceEnum_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEffectorSpaceEnum.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEffectorSpaceEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PowerIKRuntime_EEffectorSpaceEnum, (UObject*)Z_Construct_UPackage__Script_PowerIKRuntime(), TEXT("EEffectorSpaceEnum"));
	}
	return Z_Registration_Info_UEnum_EEffectorSpaceEnum.OuterSingleton;
}
template<> POWERIKRUNTIME_API UEnum* StaticEnum<EEffectorSpaceEnum>()
{
	return EEffectorSpaceEnum_StaticEnum();
}
struct Z_Construct_UEnum_PowerIKRuntime_EEffectorSpaceEnum_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ES_Additive.DisplayName", "Relative to Input Pose" },
		{ "ES_Additive.Name", "ES_Additive" },
		{ "ES_Component.DisplayName", "Component Space" },
		{ "ES_Component.Name", "ES_Component" },
		{ "ES_World.DisplayName", "World Space" },
		{ "ES_World.Name", "ES_World" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ES_Additive", (int64)ES_Additive },
		{ "ES_World", (int64)ES_World },
		{ "ES_Component", (int64)ES_Component },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PowerIKRuntime_EEffectorSpaceEnum_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PowerIKRuntime,
	nullptr,
	"EEffectorSpaceEnum",
	"EEffectorSpaceEnum",
	Z_Construct_UEnum_PowerIKRuntime_EEffectorSpaceEnum_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PowerIKRuntime_EEffectorSpaceEnum_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PowerIKRuntime_EEffectorSpaceEnum_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PowerIKRuntime_EEffectorSpaceEnum_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PowerIKRuntime_EEffectorSpaceEnum()
{
	if (!Z_Registration_Info_UEnum_EEffectorSpaceEnum.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEffectorSpaceEnum.InnerSingleton, Z_Construct_UEnum_PowerIKRuntime_EEffectorSpaceEnum_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEffectorSpaceEnum.InnerSingleton;
}
// ********** End Enum EEffectorSpaceEnum **********************************************************

// ********** Begin ScriptStruct FPowerIKEffector **************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPowerIKEffector;
class UScriptStruct* FPowerIKEffector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPowerIKEffector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPowerIKEffector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPowerIKEffector, (UObject*)Z_Construct_UPackage__Script_PowerIKRuntime(), TEXT("PowerIKEffector"));
	}
	return Z_Registration_Info_UScriptStruct_FPowerIKEffector.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPowerIKEffector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "Category", "Effector" },
		{ "Comment", "/** The bone to affect. */" },
		{ "Constant", "" },
		{ "CustomWidget", "BoneName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "The bone to affect." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "Effector" },
		{ "Comment", "/** Where to move this effector. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Where to move this effector." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionSpace_MetaData[] = {
		{ "Category", "Effector" },
		{ "Comment", "/** The space to consider the position in. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "The space to consider the position in." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "Effector" },
		{ "Comment", "/** Rotation used by RotateBone and RotateLimb. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Rotation used by RotateBone and RotateLimb." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpace_MetaData[] = {
		{ "Category", "Effector" },
		{ "Comment", "/** The space to consider the rotation in. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "The space to consider the rotation in." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PullWeight_MetaData[] = {
		{ "Category", "Effector" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How much this effector pulls un-affected parts of body. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "How much this effector pulls un-affected parts of body." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalizePulling_MetaData[] = {
		{ "Category", "Effector" },
		{ "Comment", "/** Use normalized PullWeight values in solver. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Use normalized PullWeight values in solver." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositivePullFactor_MetaData[] = {
		{ "Category", "Effector" },
		{ "Comment", "/** Positive direction scale factor for effector weights. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Positive direction scale factor for effector weights." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NegativePullFactor_MetaData[] = {
		{ "Category", "Effector" },
		{ "Comment", "/** Negative direction scale factor for effector weights. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Negative direction scale factor for effector weights." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotateBone_MetaData[] = {
		{ "Category", "Effector" },
		{ "Comment", "/** Does this effector rotate the bone it affects? */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Does this effector rotate the bone it affects?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotateLimb_MetaData[] = {
		{ "Category", "Effector" },
		{ "Comment", "/** Does this effector rotate the limb surrounding it? */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Does this effector rotate the limb surrounding it?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaSmoothSpeed_MetaData[] = {
		{ "Category", "Effector" },
		{ "ClampMax", "10000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Speed in centimeters per second that this effector adjusts to changing positions. Ignored if <= 0.0. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Speed in centimeters per second that this effector adjusts to changing positions. Ignored if <= 0.0." },
		{ "UIMax", "1000" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularDeltaSmoothSpeed_MetaData[] = {
		{ "Category", "Effector" },
		{ "ClampMax", "10000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Speed in degrees per second that this effector adjusts to changing rotations. Ignored if <= 0.0. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Speed in degrees per second that this effector adjusts to changing rotations. Ignored if <= 0.0." },
		{ "UIMax", "1000" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Smoothing_MetaData[] = {
		{ "Category", "Smoothing" },
		{ "Comment", "/** Analytic, simple velocity clamping on effector position, rotation and distance to input.*/" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Analytic, simple velocity clamping on effector position, rotation and distance to input." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoleVector_MetaData[] = {
		{ "Category", "PoleVector" },
		{ "Comment", "/** Optional, explicit control over the direction of the limb controlled by this effector.*/" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Optional, explicit control over the direction of the limb controlled by this effector." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AffectsCenterOfGravity_MetaData[] = {
		{ "Category", "COG" },
		{ "Comment", "/** Does this effector pull the center of gravity? (usually only feet). */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Does this effector pull the center of gravity? (usually only feet)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[] = {
		{ "Category", "Blend" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Blend entire effector on/off */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Blend entire effector on/off" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PositionSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationSpace;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PullWeight;
	static void NewProp_NormalizePulling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NormalizePulling;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PositivePullFactor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NegativePullFactor;
	static void NewProp_RotateBone_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RotateBone;
	static void NewProp_RotateLimb_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RotateLimb;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSmoothSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularDeltaSmoothSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Smoothing;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PoleVector;
	static void NewProp_AffectsCenterOfGravity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AffectsCenterOfGravity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPowerIKEffector>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000030005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKEffector, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKEffector, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_PositionSpace = { "PositionSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKEffector, PositionSpace), Z_Construct_UEnum_PowerIKRuntime_EEffectorSpaceEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionSpace_MetaData), NewProp_PositionSpace_MetaData) }; // 854077758
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKEffector, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_RotationSpace = { "RotationSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKEffector, RotationSpace), Z_Construct_UEnum_PowerIKRuntime_EEffectorSpaceEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpace_MetaData), NewProp_RotationSpace_MetaData) }; // 854077758
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_PullWeight = { "PullWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKEffector, PullWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PullWeight_MetaData), NewProp_PullWeight_MetaData) };
void Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_NormalizePulling_SetBit(void* Obj)
{
	((FPowerIKEffector*)Obj)->NormalizePulling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_NormalizePulling = { "NormalizePulling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPowerIKEffector), &Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_NormalizePulling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalizePulling_MetaData), NewProp_NormalizePulling_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_PositivePullFactor = { "PositivePullFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKEffector, PositivePullFactor), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositivePullFactor_MetaData), NewProp_PositivePullFactor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_NegativePullFactor = { "NegativePullFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKEffector, NegativePullFactor), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NegativePullFactor_MetaData), NewProp_NegativePullFactor_MetaData) };
void Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_RotateBone_SetBit(void* Obj)
{
	((FPowerIKEffector*)Obj)->RotateBone = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_RotateBone = { "RotateBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPowerIKEffector), &Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_RotateBone_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotateBone_MetaData), NewProp_RotateBone_MetaData) };
void Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_RotateLimb_SetBit(void* Obj)
{
	((FPowerIKEffector*)Obj)->RotateLimb = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_RotateLimb = { "RotateLimb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPowerIKEffector), &Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_RotateLimb_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotateLimb_MetaData), NewProp_RotateLimb_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_DeltaSmoothSpeed = { "DeltaSmoothSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKEffector, DeltaSmoothSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaSmoothSpeed_MetaData), NewProp_DeltaSmoothSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_AngularDeltaSmoothSpeed = { "AngularDeltaSmoothSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKEffector, AngularDeltaSmoothSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularDeltaSmoothSpeed_MetaData), NewProp_AngularDeltaSmoothSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_Smoothing = { "Smoothing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKEffector, Smoothing), Z_Construct_UScriptStruct_FPowerIKSmoothing, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Smoothing_MetaData), NewProp_Smoothing_MetaData) }; // 3348859702
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_PoleVector = { "PoleVector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKEffector, PoleVector), Z_Construct_UScriptStruct_FPowerIKPoleVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoleVector_MetaData), NewProp_PoleVector_MetaData) }; // 724703627
void Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_AffectsCenterOfGravity_SetBit(void* Obj)
{
	((FPowerIKEffector*)Obj)->AffectsCenterOfGravity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_AffectsCenterOfGravity = { "AffectsCenterOfGravity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPowerIKEffector), &Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_AffectsCenterOfGravity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AffectsCenterOfGravity_MetaData), NewProp_AffectsCenterOfGravity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPowerIKEffector, Alpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alpha_MetaData), NewProp_Alpha_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPowerIKEffector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_PositionSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_RotationSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_PullWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_NormalizePulling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_PositivePullFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_NegativePullFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_RotateBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_RotateLimb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_DeltaSmoothSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_AngularDeltaSmoothSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_Smoothing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_PoleVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_AffectsCenterOfGravity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_Alpha,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPowerIKEffector_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PowerIKRuntime,
	nullptr,
	&NewStructOps,
	"PowerIKEffector",
	Z_Construct_UScriptStruct_FPowerIKEffector_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::PropPointers),
	sizeof(FPowerIKEffector),
	alignof(FPowerIKEffector),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPowerIKEffector_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPowerIKEffector()
{
	if (!Z_Registration_Info_UScriptStruct_FPowerIKEffector.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPowerIKEffector.InnerSingleton, Z_Construct_UScriptStruct_FPowerIKEffector_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPowerIKEffector.InnerSingleton;
}
// ********** End ScriptStruct FPowerIKEffector ****************************************************

// ********** Begin ScriptStruct FPowerIKEffectorData **********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPowerIKEffectorData;
class UScriptStruct* FPowerIKEffectorData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPowerIKEffectorData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPowerIKEffectorData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPowerIKEffectorData, (UObject*)Z_Construct_UPackage__Script_PowerIKRuntime(), TEXT("PowerIKEffectorData"));
	}
	return Z_Registration_Info_UScriptStruct_FPowerIKEffectorData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPowerIKEffectorData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPowerIKEffectorData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPowerIKEffectorData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PowerIKRuntime,
	nullptr,
	&NewStructOps,
	"PowerIKEffectorData",
	nullptr,
	0,
	sizeof(FPowerIKEffectorData),
	alignof(FPowerIKEffectorData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKEffectorData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPowerIKEffectorData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPowerIKEffectorData()
{
	if (!Z_Registration_Info_UScriptStruct_FPowerIKEffectorData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPowerIKEffectorData.InnerSingleton, Z_Construct_UScriptStruct_FPowerIKEffectorData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPowerIKEffectorData.InnerSingleton;
}
// ********** End ScriptStruct FPowerIKEffectorData ************************************************

// ********** Begin ScriptStruct FPowerIKBoneData **************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPowerIKBoneData;
class UScriptStruct* FPowerIKBoneData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPowerIKBoneData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPowerIKBoneData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPowerIKBoneData, (UObject*)Z_Construct_UPackage__Script_PowerIKRuntime(), TEXT("PowerIKBoneData"));
	}
	return Z_Registration_Info_UScriptStruct_FPowerIKBoneData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPowerIKBoneData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPowerIKBoneData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPowerIKBoneData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PowerIKRuntime,
	nullptr,
	&NewStructOps,
	"PowerIKBoneData",
	nullptr,
	0,
	sizeof(FPowerIKBoneData),
	alignof(FPowerIKBoneData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKBoneData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPowerIKBoneData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPowerIKBoneData()
{
	if (!Z_Registration_Info_UScriptStruct_FPowerIKBoneData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPowerIKBoneData.InnerSingleton, Z_Construct_UScriptStruct_FPowerIKBoneData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPowerIKBoneData.InnerSingleton;
}
// ********** End ScriptStruct FPowerIKBoneData ****************************************************

// ********** Begin ScriptStruct FPowerIKRootData **************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPowerIKRootData;
class UScriptStruct* FPowerIKRootData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPowerIKRootData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPowerIKRootData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPowerIKRootData, (UObject*)Z_Construct_UPackage__Script_PowerIKRuntime(), TEXT("PowerIKRootData"));
	}
	return Z_Registration_Info_UScriptStruct_FPowerIKRootData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPowerIKRootData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPowerIKRootData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPowerIKRootData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PowerIKRuntime,
	nullptr,
	&NewStructOps,
	"PowerIKRootData",
	nullptr,
	0,
	sizeof(FPowerIKRootData),
	alignof(FPowerIKRootData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKRootData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPowerIKRootData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPowerIKRootData()
{
	if (!Z_Registration_Info_UScriptStruct_FPowerIKRootData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPowerIKRootData.InnerSingleton, Z_Construct_UScriptStruct_FPowerIKRootData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPowerIKRootData.InnerSingleton;
}
// ********** End ScriptStruct FPowerIKRootData ****************************************************

// ********** Begin ScriptStruct FPowerIKCore ******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPowerIKCore;
class UScriptStruct* FPowerIKCore::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPowerIKCore.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPowerIKCore.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPowerIKCore, (UObject*)Z_Construct_UPackage__Script_PowerIKRuntime(), TEXT("PowerIKCore"));
	}
	return Z_Registration_Info_UScriptStruct_FPowerIKCore.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPowerIKCore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPowerIKCore>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPowerIKCore_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_PowerIKRuntime,
	nullptr,
	&NewStructOps,
	"PowerIKCore",
	nullptr,
	0,
	sizeof(FPowerIKCore),
	alignof(FPowerIKCore),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKCore_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPowerIKCore_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPowerIKCore()
{
	if (!Z_Registration_Info_UScriptStruct_FPowerIKCore.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPowerIKCore.InnerSingleton, Z_Construct_UScriptStruct_FPowerIKCore_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPowerIKCore.InnerSingleton;
}
// ********** End ScriptStruct FPowerIKCore ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Plugins_HostProject_Plugins_PowerIK_Source_PowerIKRuntime_Public_PowerIK_UnrealCore_h__Script_PowerIKRuntime_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPoleVectorModeEnum_StaticEnum, TEXT("EPoleVectorModeEnum"), &Z_Registration_Info_UEnum_EPoleVectorModeEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4127732025U) },
		{ EEffectorSpaceEnum_StaticEnum, TEXT("EEffectorSpaceEnum"), &Z_Registration_Info_UEnum_EEffectorSpaceEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 854077758U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPowerIKBoneLimit::StaticStruct, Z_Construct_UScriptStruct_FPowerIKBoneLimit_Statics::NewStructOps, TEXT("PowerIKBoneLimit"), &Z_Registration_Info_UScriptStruct_FPowerIKBoneLimit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPowerIKBoneLimit), 1520110841U) },
		{ FPowerIKBoneBendDirection::StaticStruct, Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Statics::NewStructOps, TEXT("PowerIKBoneBendDirection"), &Z_Registration_Info_UScriptStruct_FPowerIKBoneBendDirection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPowerIKBoneBendDirection), 2760720664U) },
		{ FPowerIKExcludedBone::StaticStruct, Z_Construct_UScriptStruct_FPowerIKExcludedBone_Statics::NewStructOps, TEXT("PowerIKExcludedBone"), &Z_Registration_Info_UScriptStruct_FPowerIKExcludedBone, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPowerIKExcludedBone), 2227159558U) },
		{ FPowerIKPoleVector::StaticStruct, Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::NewStructOps, TEXT("PowerIKPoleVector"), &Z_Registration_Info_UScriptStruct_FPowerIKPoleVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPowerIKPoleVector), 724703627U) },
		{ FPowerIKSmoothing::StaticStruct, Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewStructOps, TEXT("PowerIKSmoothing"), &Z_Registration_Info_UScriptStruct_FPowerIKSmoothing, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPowerIKSmoothing), 3348859702U) },
		{ FPowerIKCenterOfGravity::StaticStruct, Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::NewStructOps, TEXT("PowerIKCenterOfGravity"), &Z_Registration_Info_UScriptStruct_FPowerIKCenterOfGravity, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPowerIKCenterOfGravity), 1512727556U) },
		{ FPowerIKBodyInertia::StaticStruct, Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewStructOps, TEXT("PowerIKBodyInertia"), &Z_Registration_Info_UScriptStruct_FPowerIKBodyInertia, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPowerIKBodyInertia), 1762818926U) },
		{ FPowerIKEffector::StaticStruct, Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewStructOps, TEXT("PowerIKEffector"), &Z_Registration_Info_UScriptStruct_FPowerIKEffector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPowerIKEffector), 793941899U) },
		{ FPowerIKEffectorData::StaticStruct, Z_Construct_UScriptStruct_FPowerIKEffectorData_Statics::NewStructOps, TEXT("PowerIKEffectorData"), &Z_Registration_Info_UScriptStruct_FPowerIKEffectorData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPowerIKEffectorData), 3815232751U) },
		{ FPowerIKBoneData::StaticStruct, Z_Construct_UScriptStruct_FPowerIKBoneData_Statics::NewStructOps, TEXT("PowerIKBoneData"), &Z_Registration_Info_UScriptStruct_FPowerIKBoneData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPowerIKBoneData), 2413980945U) },
		{ FPowerIKRootData::StaticStruct, Z_Construct_UScriptStruct_FPowerIKRootData_Statics::NewStructOps, TEXT("PowerIKRootData"), &Z_Registration_Info_UScriptStruct_FPowerIKRootData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPowerIKRootData), 137326491U) },
		{ FPowerIKCore::StaticStruct, Z_Construct_UScriptStruct_FPowerIKCore_Statics::NewStructOps, TEXT("PowerIKCore"), &Z_Registration_Info_UScriptStruct_FPowerIKCore, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPowerIKCore), 1787368951U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Plugins_HostProject_Plugins_PowerIK_Source_PowerIKRuntime_Public_PowerIK_UnrealCore_h__Script_PowerIKRuntime_3916228627(TEXT("/Script/PowerIKRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Plugins_HostProject_Plugins_PowerIK_Source_PowerIKRuntime_Public_PowerIK_UnrealCore_h__Script_PowerIKRuntime_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Plugins_HostProject_Plugins_PowerIK_Source_PowerIKRuntime_Public_PowerIK_UnrealCore_h__Script_PowerIKRuntime_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Plugins_HostProject_Plugins_PowerIK_Source_PowerIKRuntime_Public_PowerIK_UnrealCore_h__Script_PowerIKRuntime_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Plugins_HostProject_Plugins_PowerIK_Source_PowerIKRuntime_Public_PowerIK_UnrealCore_h__Script_PowerIKRuntime_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
