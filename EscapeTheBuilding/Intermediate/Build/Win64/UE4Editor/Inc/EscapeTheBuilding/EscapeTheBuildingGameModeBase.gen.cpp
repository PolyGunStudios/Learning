// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "EscapeTheBuildingGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscapeTheBuildingGameModeBase() {}
// Cross Module References
	ESCAPETHEBUILDING_API UClass* Z_Construct_UClass_AEscapeTheBuildingGameModeBase_NoRegister();
	ESCAPETHEBUILDING_API UClass* Z_Construct_UClass_AEscapeTheBuildingGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_EscapeTheBuilding();
// End Cross Module References
	void AEscapeTheBuildingGameModeBase::StaticRegisterNativesAEscapeTheBuildingGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AEscapeTheBuildingGameModeBase_NoRegister()
	{
		return AEscapeTheBuildingGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AEscapeTheBuildingGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_EscapeTheBuilding,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "EscapeTheBuildingGameModeBase.h" },
				{ "ModuleRelativePath", "EscapeTheBuildingGameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AEscapeTheBuildingGameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AEscapeTheBuildingGameModeBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEscapeTheBuildingGameModeBase, 2462570400);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEscapeTheBuildingGameModeBase(Z_Construct_UClass_AEscapeTheBuildingGameModeBase, &AEscapeTheBuildingGameModeBase::StaticClass, TEXT("/Script/EscapeTheBuilding"), TEXT("AEscapeTheBuildingGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEscapeTheBuildingGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
