// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Survival/AttackStartNotifyState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttackStartNotifyState() {}
// Cross Module References
	SURVIVAL_API UClass* Z_Construct_UClass_UAttackStartNotifyState_NoRegister();
	SURVIVAL_API UClass* Z_Construct_UClass_UAttackStartNotifyState();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_Survival();
// End Cross Module References
	void UAttackStartNotifyState::StaticRegisterNativesUAttackStartNotifyState()
	{
	}
	UClass* Z_Construct_UClass_UAttackStartNotifyState_NoRegister()
	{
		return UAttackStartNotifyState::StaticClass();
	}
	struct Z_Construct_UClass_UAttackStartNotifyState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttackStartNotifyState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_Survival,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackStartNotifyState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AttackStartNotifyState.h" },
		{ "ModuleRelativePath", "AttackStartNotifyState.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttackStartNotifyState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttackStartNotifyState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAttackStartNotifyState_Statics::ClassParams = {
		&UAttackStartNotifyState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001130A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAttackStartNotifyState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAttackStartNotifyState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAttackStartNotifyState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAttackStartNotifyState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAttackStartNotifyState, 1362441242);
	template<> SURVIVAL_API UClass* StaticClass<UAttackStartNotifyState>()
	{
		return UAttackStartNotifyState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAttackStartNotifyState(Z_Construct_UClass_UAttackStartNotifyState, &UAttackStartNotifyState::StaticClass, TEXT("/Script/Survival"), TEXT("UAttackStartNotifyState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttackStartNotifyState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
