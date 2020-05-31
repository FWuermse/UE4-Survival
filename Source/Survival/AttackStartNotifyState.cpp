// Fill out your copyright notice in the Description page of Project Settings.

#include "AttackStartNotifyState.h"
#include "SurvivalCharacter.h"

#include "Engine.h"

void UAttackStartNotifyState::NotifyBegin(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, float TotalDuration)
{
	GEngine->AddOnScreenDebugMessage(-1, 4.5f, FColor::Magenta, __FUNCTION__);

	if (MeshComp != NULL && MeshComp->GetOwner() != NULL)
	{
		ASurvivalCharacter* Player = Cast<ASurvivalCharacter>(MeshComp->GetOwner());
		if (Player != NULL)
		{
			Player->StartAttack();
		}
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 4.5f, FColor::Red, "Error either the MeshComp, or the Owner was NULL");
	}
}

void UAttackStartNotifyState::NotifyEnd(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation)
{
	GEngine->AddOnScreenDebugMessage(-1, 4.5f, FColor::Magenta, __FUNCTION__);

	if (MeshComp != NULL && MeshComp->GetOwner() != NULL)
	{
		ASurvivalCharacter* Player = Cast<ASurvivalCharacter>(MeshComp->GetOwner());
		if (Player != NULL)
		{
			Player->StopAttack();
		}
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 4.5f, FColor::Red, "Error either the MeshComp, or the Owner was NULL");
	}
}