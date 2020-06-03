// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Load_From_File.generated.h"

/**
 * 
 */
UCLASS()
class GAME231_UEPROJECT_API ULoad_From_File : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	UFUNCTION(BlueprintCallable, Category = "File I/O")
		static FString LoadFileToString(FString Filename);

	UFUNCTION(BlueprintCallable, Category = "File I/O")
		static TArray<FString> LoadFileToStringArray(FString Filename);

};
