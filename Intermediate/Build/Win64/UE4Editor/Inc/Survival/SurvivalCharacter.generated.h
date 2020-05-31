// Copyright Epic Games, Inc. All Rights Reserved.
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
#ifdef SURVIVAL_SurvivalCharacter_generated_h
#error "SurvivalCharacter.generated.h already included, missing '#pragma once' in SurvivalCharacter.h"
#endif
#define SURVIVAL_SurvivalCharacter_generated_h

#define Survival_Source_Survival_SurvivalCharacter_h_33_SPARSE_DATA
#define Survival_Source_Survival_SurvivalCharacter_h_33_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnAttackHit);


#define Survival_Source_Survival_SurvivalCharacter_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnAttackHit);


#define Survival_Source_Survival_SurvivalCharacter_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASurvivalCharacter(); \
	friend struct Z_Construct_UClass_ASurvivalCharacter_Statics; \
public: \
	DECLARE_CLASS(ASurvivalCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Survival"), NO_API) \
	DECLARE_SERIALIZER(ASurvivalCharacter)


#define Survival_Source_Survival_SurvivalCharacter_h_33_INCLASS \
private: \
	static void StaticRegisterNativesASurvivalCharacter(); \
	friend struct Z_Construct_UClass_ASurvivalCharacter_Statics; \
public: \
	DECLARE_CLASS(ASurvivalCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Survival"), NO_API) \
	DECLARE_SERIALIZER(ASurvivalCharacter)


#define Survival_Source_Survival_SurvivalCharacter_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASurvivalCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASurvivalCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASurvivalCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASurvivalCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASurvivalCharacter(ASurvivalCharacter&&); \
	NO_API ASurvivalCharacter(const ASurvivalCharacter&); \
public:


#define Survival_Source_Survival_SurvivalCharacter_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASurvivalCharacter(ASurvivalCharacter&&); \
	NO_API ASurvivalCharacter(const ASurvivalCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASurvivalCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASurvivalCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASurvivalCharacter)


#define Survival_Source_Survival_SurvivalCharacter_h_33_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ASurvivalCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ASurvivalCharacter, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__MeleeFistAttackMontage() { return STRUCT_OFFSET(ASurvivalCharacter, MeleeFistAttackMontage); } \
	FORCEINLINE static uint32 __PPO__LeftFistCollisionBox() { return STRUCT_OFFSET(ASurvivalCharacter, LeftFistCollisionBox); } \
	FORCEINLINE static uint32 __PPO__RightFistCollisionBox() { return STRUCT_OFFSET(ASurvivalCharacter, RightFistCollisionBox); }


#define Survival_Source_Survival_SurvivalCharacter_h_30_PROLOG
#define Survival_Source_Survival_SurvivalCharacter_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Survival_Source_Survival_SurvivalCharacter_h_33_PRIVATE_PROPERTY_OFFSET \
	Survival_Source_Survival_SurvivalCharacter_h_33_SPARSE_DATA \
	Survival_Source_Survival_SurvivalCharacter_h_33_RPC_WRAPPERS \
	Survival_Source_Survival_SurvivalCharacter_h_33_INCLASS \
	Survival_Source_Survival_SurvivalCharacter_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Survival_Source_Survival_SurvivalCharacter_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Survival_Source_Survival_SurvivalCharacter_h_33_PRIVATE_PROPERTY_OFFSET \
	Survival_Source_Survival_SurvivalCharacter_h_33_SPARSE_DATA \
	Survival_Source_Survival_SurvivalCharacter_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	Survival_Source_Survival_SurvivalCharacter_h_33_INCLASS_NO_PURE_DECLS \
	Survival_Source_Survival_SurvivalCharacter_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SURVIVAL_API UClass* StaticClass<class ASurvivalCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Survival_Source_Survival_SurvivalCharacter_h


#define FOREACH_ENUM_EATTACKTYPE(op) \
	op(EAttackType::MELEE_FIST) 

enum class EAttackType : uint8;
template<> SURVIVAL_API UEnum* StaticEnum<EAttackType>();

#define FOREACH_ENUM_ELOGOUTPUT(op) \
	op(ELogOutput::ALL) \
	op(ELogOutput::OUTPUT_LOG) \
	op(ELogOutput::SCREEN) 

enum class ELogOutput : uint8;
template<> SURVIVAL_API UEnum* StaticEnum<ELogOutput>();

#define FOREACH_ENUM_ELOGLEVEL(op) \
	op(ELogLevel::TRACE) \
	op(ELogLevel::DEBUG) \
	op(ELogLevel::INFO) \
	op(ELogLevel::WARNING) \
	op(ELogLevel::ERROR) 

enum class ELogLevel : uint8;
template<> SURVIVAL_API UEnum* StaticEnum<ELogLevel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
