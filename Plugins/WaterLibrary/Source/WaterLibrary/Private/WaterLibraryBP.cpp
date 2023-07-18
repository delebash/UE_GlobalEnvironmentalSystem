// Copyright Epic Games, Inc. All Rights Reserved.

#include "..\Public\WaterLibraryBP.h"
#include "WaterLibrary.h"
#include "WaterBodyActor.h"
#include "WaterWaves.h"
#include "GerstnerWaterWaves.h"
#include "Kismet/GameplayStatics.h"

UWaterLibraryBP::UWaterLibraryBP(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

UWaterWaves* UWaterLibraryBP::LoadWaterWaveAssetFile (const FString& WaveAssetFolder,  const FString& WaveAssetName)
{
	const FString FullPath = WaveAssetFolder + "/" + WaveAssetName;; 
	UWaterWavesAsset* WaterWavesRef = LoadObject<UWaterWavesAsset>(nullptr, const_cast<TCHAR*>(*FullPath));
	return WaterWavesRef->GetWaterWaves();
}

void UWaterLibraryBP::RecalcWaveData(UObject* WorldContextObject, UGerstnerWaterWaves* GerstnerWaterWaves)
{
	GerstnerWaterWaves->RecomputeWaves(true);
}
