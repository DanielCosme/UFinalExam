// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "G1213Dani/G1213DaniHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeG1213DaniHUD() {}
// Cross Module References
	G1213DANI_API UClass* Z_Construct_UClass_AG1213DaniHUD_NoRegister();
	G1213DANI_API UClass* Z_Construct_UClass_AG1213DaniHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_G1213Dani();
// End Cross Module References
	void AG1213DaniHUD::StaticRegisterNativesAG1213DaniHUD()
	{
	}
	UClass* Z_Construct_UClass_AG1213DaniHUD_NoRegister()
	{
		return AG1213DaniHUD::StaticClass();
	}
	struct Z_Construct_UClass_AG1213DaniHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AG1213DaniHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_G1213Dani,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AG1213DaniHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "G1213DaniHUD.h" },
		{ "ModuleRelativePath", "G1213DaniHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AG1213DaniHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AG1213DaniHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AG1213DaniHUD_Statics::ClassParams = {
		&AG1213DaniHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AG1213DaniHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AG1213DaniHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AG1213DaniHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AG1213DaniHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AG1213DaniHUD, 495045248);
	template<> G1213DANI_API UClass* StaticClass<AG1213DaniHUD>()
	{
		return AG1213DaniHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AG1213DaniHUD(Z_Construct_UClass_AG1213DaniHUD, &AG1213DaniHUD::StaticClass, TEXT("/Script/G1213Dani"), TEXT("AG1213DaniHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AG1213DaniHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
