// Fill out your copyright notice in the Description page of Project Settings.


#include "Load_From_File.h"

FString ULoad_From_File::LoadFileToString(FString Filename) {
	FString directory = FPaths::ProjectContentDir();
	FString result;
	IPlatformFile& file = FPlatformFileManager::Get().GetPlatformFile();

	if (file.CreateDirectory(*directory)) {
		FString myFile = directory + "/" + Filename;
		FFileHelper::LoadFileToString(result, *myFile);
	}

	return result;
}

TArray<FString> ULoad_From_File::LoadFileToStringArray(FString Filename) {
	FString directory = FPaths::ProjectContentDir();
	TArray<FString> result;
	IPlatformFile& file = FPlatformFileManager::Get().GetPlatformFile();

	if (file.CreateDirectory(*directory)) {
		FString myFile = directory + "/" + Filename;
		FFileHelper::LoadFileToStringArray(result, *myFile);
	}

	return result;
}