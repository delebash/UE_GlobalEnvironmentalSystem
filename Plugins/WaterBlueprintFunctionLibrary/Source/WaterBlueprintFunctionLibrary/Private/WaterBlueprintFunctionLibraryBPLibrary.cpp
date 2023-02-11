// Copyright Epic Games, Inc. All Rights Reserved.

#include "WaterBlueprintFunctionLibraryBPLibrary.h"
#include "WaterBlueprintFunctionLibrary.h"
#include "WaterBodyActor.h"
#include "WaterWaves.h"
#include "GerstnerWaterWaves.h"
#include "Kismet/GameplayStatics.h"

UWaterBlueprintFunctionLibraryBPLibrary::UWaterBlueprintFunctionLibraryBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

UWaterWaves* UWaterBlueprintFunctionLibraryBPLibrary::LoadWaterWaveAssetFile (const FString& WaveAssetFolder,  const FString& WaveAssetName)
{
	const FString FullPath = WaveAssetFolder + "/" + WaveAssetName;; 
	UWaterWavesAsset* WaterWavesRef = LoadObject<UWaterWavesAsset>(nullptr, const_cast<TCHAR*>(*FullPath));
	return WaterWavesRef->GetWaterWaves();
}

void UWaterBlueprintFunctionLibraryBPLibrary::RecalcWaveData(UObject* WorldContextObject, UGerstnerWaterWaves* GerstnerWaterWaves)
{
	GerstnerWaterWaves->RecomputeWaves(true);
}
