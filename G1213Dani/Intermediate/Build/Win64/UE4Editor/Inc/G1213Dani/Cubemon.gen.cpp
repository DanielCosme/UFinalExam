// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "G1213Dani/Cubemon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCubemon() {}
// Cross Module References
	G1213DANI_API UClass* Z_Construct_UClass_ACubemon_NoRegister();
	G1213DANI_API UClass* Z_Construct_UClass_ACubemon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_G1213Dani();
// End Cross Module References
	void ACubemon::StaticRegisterNativesACubemon()
	{
	}
	UClass* Z_Construct_UClass_ACubemon_NoRegister()
	{
		return ACubemon::StaticClass();
	}
	struct Z_Construct_UClass_ACubemon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACubemon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_G1213Dani,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubemon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Cubemon.h" },
		{ "ModuleRelativePath", "Cubemon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACubemon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACubemon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACubemon_Statics::ClassParams = {
		&ACubemon::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ACubemon_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACubemon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACubemon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACubemon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACubemon, 2970606171);
	template<> G1213DANI_API UClass* StaticClass<ACubemon>()
	{
		return ACubemon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACubemon(Z_Construct_UClass_ACubemon, &ACubemon::StaticClass, TEXT("/Script/G1213Dani"), TEXT("ACubemon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACubemon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
