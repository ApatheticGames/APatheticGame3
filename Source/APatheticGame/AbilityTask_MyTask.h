// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "AbilityTask.generated.h"

/**
 * 
 */
class APATHETICGAME_API AbilityTask_MyTask : public AbilityTask
{
public:
	float OptionalValue;
	UAbilityTask_MyTask();
	
	
	
	UFUNCTION(BlueprintCallable, Category = "Ability|Tasks", meta = (DisplayName = "ExecuteMyTask", HidePin = "OwningAbility", DefaultToSelf = "OwningAbility", BlueprintInternalUseOnly = "TRUE"))
		static AbilityTask_MyTask* CreateMyTask(UGameplayAbility* OwningAbility, FName TaskInstanceName, float examplevariable);
};
