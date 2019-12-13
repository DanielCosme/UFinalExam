// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "G1213Dani/G1213DaniGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeG1213DaniGameMode() {}
// Cross Module References
	G1213DANI_API UClass* Z_Construct_UClass_AG1213DaniGameMode_NoRegister();
	G1213DANI_API UClass* Z_Construct_UClass_AG1213DaniGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_G1213Dani();
// End Cross Module References
	void AG1213DaniGameMode::StaticRegisterNativesAG1213DaniGameMode()
	{
	}
	UClass* Z_Construct_UClass_AG1213DaniGameMode_NoRegister()
	{
		return AG1213DaniGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AG1213DaniGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AG1213DaniGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_G1213Dani,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AG1213DaniGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "G1213DaniGameMode.h" },
		{ "ModuleRelativePath", "G1213DaniGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AG1213DaniGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AG1213DaniGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AG1213DaniGameMode_Statics::ClassParams = {
		&AG1213DaniGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_AG1213DaniGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AG1213DaniGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AG1213DaniGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AG1213DaniGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AG1213DaniGameMode, 2958363165);
	template<> G1213DANI_API UClass* StaticClass<AG1213DaniGameMode>()
	{
		return AG1213DaniGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AG1213DaniGameMode(Z_Construct_UClass_AG1213DaniGameMode, &AG1213DaniGameMode::StaticClass, TEXT("/Script/G1213Dani"), TEXT("AG1213DaniGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AG1213DaniGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
