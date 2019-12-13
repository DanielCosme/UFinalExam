// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef G1213DANI_G1213DaniProjectile_generated_h
#error "G1213DaniProjectile.generated.h already included, missing '#pragma once' in G1213DaniProjectile.h"
#endif
#define G1213DANI_G1213DaniProjectile_generated_h

#define G1213Dani_Source_G1213Dani_G1213DaniProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define G1213Dani_Source_G1213Dani_G1213DaniProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define G1213Dani_Source_G1213Dani_G1213DaniProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAG1213DaniProjectile(); \
	friend struct Z_Construct_UClass_AG1213DaniProjectile_Statics; \
public: \
	DECLARE_CLASS(AG1213DaniProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/G1213Dani"), NO_API) \
	DECLARE_SERIALIZER(AG1213DaniProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define G1213Dani_Source_G1213Dani_G1213DaniProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAG1213DaniProjectile(); \
	friend struct Z_Construct_UClass_AG1213DaniProjectile_Statics; \
public: \
	DECLARE_CLASS(AG1213DaniProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/G1213Dani"), NO_API) \
	DECLARE_SERIALIZER(AG1213DaniProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define G1213Dani_Source_G1213Dani_G1213DaniProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AG1213DaniProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AG1213DaniProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AG1213DaniProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AG1213DaniProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AG1213DaniProjectile(AG1213DaniProjectile&&); \
	NO_API AG1213DaniProjectile(const AG1213DaniProjectile&); \
public:


#define G1213Dani_Source_G1213Dani_G1213DaniProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AG1213DaniProjectile(AG1213DaniProjectile&&); \
	NO_API AG1213DaniProjectile(const AG1213DaniProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AG1213DaniProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AG1213DaniProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AG1213DaniProjectile)


#define G1213Dani_Source_G1213Dani_G1213DaniProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AG1213DaniProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AG1213DaniProjectile, ProjectileMovement); }


#define G1213Dani_Source_G1213Dani_G1213DaniProjectile_h_9_PROLOG
#define G1213Dani_Source_G1213Dani_G1213DaniProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	G1213Dani_Source_G1213Dani_G1213DaniProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	G1213Dani_Source_G1213Dani_G1213DaniProjectile_h_12_RPC_WRAPPERS \
	G1213Dani_Source_G1213Dani_G1213DaniProjectile_h_12_INCLASS \
	G1213Dani_Source_G1213Dani_G1213DaniProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define G1213Dani_Source_G1213Dani_G1213DaniProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	G1213Dani_Source_G1213Dani_G1213DaniProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	G1213Dani_Source_G1213Dani_G1213DaniProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	G1213Dani_Source_G1213Dani_G1213DaniProjectile_h_12_INCLASS_NO_PURE_DECLS \
	G1213Dani_Source_G1213Dani_G1213DaniProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> G1213DANI_API UClass* StaticClass<class AG1213DaniProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID G1213Dani_Source_G1213Dani_G1213DaniProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
