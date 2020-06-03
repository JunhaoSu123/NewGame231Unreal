// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"

bool UMyBlueprintFunctionLibrary::LoadTxt(FString FileNameA, FString& SaveTextA) {
	return FFileHelper::LoadFileToString(SaveTextA, *(FPaths::ProjectDir() + FileNameA));
}

bool UMyBlueprintFunctionLibrary::SaveTxt(FString SaveTextB, FString& FileNameB) {
	return FFileHelper::SaveStringToFile(SaveTextB, *(FPaths::ProjectDir() + FileNameB));
}