// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaterLibrary/Public/WaterLibraryBP.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterLibraryBP() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_WaterLibrary();
	WATER_API UClass* Z_Construct_UClass_UGerstnerWaterWaves_NoRegister();
	WATER_API UClass* Z_Construct_UClass_UWaterWaves_NoRegister();
	WATERLIBRARY_API UClass* Z_Construct_UClass_UWaterLibraryBP();
	WATERLIBRARY_API UClass* Z_Construct_UClass_UWaterLibraryBP_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UWaterLibraryBP::execLoadWaterWaveAssetFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_WaveAssetFolder);
		P_GET_PROPERTY(FStrProperty,Z_Param_WaveAssetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWaterWaves**)Z_Param__Result=UWaterLibraryBP::LoadWaterWaveAssetFile(Z_Param_WaveAssetFolder,Z_Param_WaveAssetName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaterLibraryBP::execRecalcWaveData)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UGerstnerWaterWaves,Z_Param_GerstnerWaterWaves);
		P_FINISH;
		P_NATIVE_BEGIN;
		UWaterLibraryBP::RecalcWaveData(Z_Param_WorldContextObject,Z_Param_GerstnerWaterWaves);
		P_NATIVE_END;
	}
	void UWaterLibraryBP::StaticRegisterNativesUWaterLibraryBP()
	{
		UClass* Class = UWaterLibraryBP::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadWaterWaveAssetFile", &UWaterLibraryBP::execLoadWaterWaveAssetFile },
			{ "RecalcWaveData", &UWaterLibraryBP::execRecalcWaveData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWaterLibraryBP_LoadWaterWaveAssetFile_Statics
	{
		struct WaterLibraryBP_eventLoadWaterWaveAssetFile_Parms
		{
			FString WaveAssetFolder;
			FString WaveAssetName;
			UWaterWaves* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaveAssetFolder_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_WaveAssetFolder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaveAssetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_WaveAssetName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterLibraryBP_LoadWaterWaveAssetFile_Statics::NewProp_WaveAssetFolder_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWaterLibraryBP_LoadWaterWaveAssetFile_Statics::NewProp_WaveAssetFolder = { "WaveAssetFolder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaterLibraryBP_eventLoadWaterWaveAssetFile_Parms, WaveAssetFolder), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterLibraryBP_LoadWaterWaveAssetFile_Statics::NewProp_WaveAssetFolder_MetaData), Z_Construct_UFunction_UWaterLibraryBP_LoadWaterWaveAssetFile_Statics::NewProp_WaveAssetFolder_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterLibraryBP_LoadWaterWaveAssetFile_Statics::NewProp_WaveAssetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWaterLibraryBP_LoadWaterWaveAssetFile_Statics::NewProp_WaveAssetName = { "WaveAssetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaterLibraryBP_eventLoadWaterWaveAssetFile_Parms, WaveAssetName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterLibraryBP_LoadWaterWaveAssetFile_Statics::NewProp_WaveAssetName_MetaData), Z_Construct_UFunction_UWaterLibraryBP_LoadWaterWaveAssetFile_Statics::NewProp_WaveAssetName_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaterLibraryBP_LoadWaterWaveAssetFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaterLibraryBP_eventLoadWaterWaveAssetFile_Parms, ReturnValue), Z_Construct_UClass_UWaterWaves_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterLibraryBP_LoadWaterWaveAssetFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterLibraryBP_LoadWaterWaveAssetFile_Statics::NewProp_WaveAssetFolder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterLibraryBP_LoadWaterWaveAssetFile_Statics::NewProp_WaveAssetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterLibraryBP_LoadWaterWaveAssetFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterLibraryBP_LoadWaterWaveAssetFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "WaterLibrary" },
		{ "Keywords", "WaterLibrary water waves" },
		{ "ModuleRelativePath", "Public/WaterLibraryBP.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterLibraryBP_LoadWaterWaveAssetFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterLibraryBP, nullptr, "LoadWaterWaveAssetFile", nullptr, nullptr, Z_Construct_UFunction_UWaterLibraryBP_LoadWaterWaveAssetFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterLibraryBP_LoadWaterWaveAssetFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWaterLibraryBP_LoadWaterWaveAssetFile_Statics::WaterLibraryBP_eventLoadWaterWaveAssetFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterLibraryBP_LoadWaterWaveAssetFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWaterLibraryBP_LoadWaterWaveAssetFile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterLibraryBP_LoadWaterWaveAssetFile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWaterLibraryBP_LoadWaterWaveAssetFile_Statics::WaterLibraryBP_eventLoadWaterWaveAssetFile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWaterLibraryBP_LoadWaterWaveAssetFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterLibraryBP_LoadWaterWaveAssetFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaterLibraryBP_RecalcWaveData_Statics
	{
		struct WaterLibraryBP_eventRecalcWaveData_Parms
		{
			UObject* WorldContextObject;
			UGerstnerWaterWaves* GerstnerWaterWaves;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GerstnerWaterWaves;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaterLibraryBP_RecalcWaveData_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaterLibraryBP_eventRecalcWaveData_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaterLibraryBP_RecalcWaveData_Statics::NewProp_GerstnerWaterWaves = { "GerstnerWaterWaves", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WaterLibraryBP_eventRecalcWaveData_Parms, GerstnerWaterWaves), Z_Construct_UClass_UGerstnerWaterWaves_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterLibraryBP_RecalcWaveData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterLibraryBP_RecalcWaveData_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterLibraryBP_RecalcWaveData_Statics::NewProp_GerstnerWaterWaves,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterLibraryBP_RecalcWaveData_Statics::Function_MetaDataParams[] = {
		{ "Category", "WaterLibrary" },
		{ "Keywords", "WaterLibrary water waves" },
		{ "ModuleRelativePath", "Public/WaterLibraryBP.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterLibraryBP_RecalcWaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterLibraryBP, nullptr, "RecalcWaveData", nullptr, nullptr, Z_Construct_UFunction_UWaterLibraryBP_RecalcWaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterLibraryBP_RecalcWaveData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWaterLibraryBP_RecalcWaveData_Statics::WaterLibraryBP_eventRecalcWaveData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterLibraryBP_RecalcWaveData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWaterLibraryBP_RecalcWaveData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterLibraryBP_RecalcWaveData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWaterLibraryBP_RecalcWaveData_Statics::WaterLibraryBP_eventRecalcWaveData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWaterLibraryBP_RecalcWaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterLibraryBP_RecalcWaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaterLibraryBP);
	UClass* Z_Construct_UClass_UWaterLibraryBP_NoRegister()
	{
		return UWaterLibraryBP::StaticClass();
	}
	struct Z_Construct_UClass_UWaterLibraryBP_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaterLibraryBP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_WaterLibrary,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaterLibraryBP_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UWaterLibraryBP_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWaterLibraryBP_LoadWaterWaveAssetFile, "LoadWaterWaveAssetFile" }, // 2420490813
		{ &Z_Construct_UFunction_UWaterLibraryBP_RecalcWaveData, "RecalcWaveData" }, // 1280388069
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWaterLibraryBP_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterLibraryBP_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
#endif
		{ "IncludePath", "WaterLibraryBP.h" },
		{ "ModuleRelativePath", "Public/WaterLibraryBP.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaterLibraryBP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaterLibraryBP>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaterLibraryBP_Statics::ClassParams = {
		&UWaterLibraryBP::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWaterLibraryBP_Statics::Class_MetaDataParams), Z_Construct_UClass_UWaterLibraryBP_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UWaterLibraryBP()
	{
		if (!Z_Registration_Info_UClass_UWaterLibraryBP.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaterLibraryBP.OuterSingleton, Z_Construct_UClass_UWaterLibraryBP_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWaterLibraryBP.OuterSingleton;
	}
	template<> WATERLIBRARY_API UClass* StaticClass<UWaterLibraryBP>()
	{
		return UWaterLibraryBP::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaterLibraryBP);
	UWaterLibraryBP::~UWaterLibraryBP() {}
	struct Z_CompiledInDeferFile_FID_github_DansProjects_GesTest_5_3_Plugins_WaterLibrary_Source_WaterLibrary_Public_WaterLibraryBP_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_github_DansProjects_GesTest_5_3_Plugins_WaterLibrary_Source_WaterLibrary_Public_WaterLibraryBP_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWaterLibraryBP, UWaterLibraryBP::StaticClass, TEXT("UWaterLibraryBP"), &Z_Registration_Info_UClass_UWaterLibraryBP, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaterLibraryBP), 3231747342U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_github_DansProjects_GesTest_5_3_Plugins_WaterLibrary_Source_WaterLibrary_Public_WaterLibraryBP_h_197527311(TEXT("/Script/WaterLibrary"),
		Z_CompiledInDeferFile_FID_github_DansProjects_GesTest_5_3_Plugins_WaterLibrary_Source_WaterLibrary_Public_WaterLibraryBP_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_github_DansProjects_GesTest_5_3_Plugins_WaterLibrary_Source_WaterLibrary_Public_WaterLibraryBP_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
