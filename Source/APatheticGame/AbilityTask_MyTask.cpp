// Fill out your copyright notice in the Description page of Project Settings.

#include "AbilityTask_MyTask.h"
#include "AbilityTask.h"

UAbilityTask_MyTask::UAbilityTask_MyTask()
{
}





AbilityTask_MyTask* AbilityTask_MyTask::CreateMyTask(UGameplayAbility * OwningAbility, FName TaskInstanceName, float examplevariable)
{

	AbilityTask_MyTask* MyObj = AbilityTask<UAbilityTask_MyTask>(OwningAbility, TaskInstanceName);
	//Just assume we have defined a float called OptionalValue somewhere in the class before. This is just an example.
	MyObj->OptionalValue = examplevariable;

	return MyObj;
}