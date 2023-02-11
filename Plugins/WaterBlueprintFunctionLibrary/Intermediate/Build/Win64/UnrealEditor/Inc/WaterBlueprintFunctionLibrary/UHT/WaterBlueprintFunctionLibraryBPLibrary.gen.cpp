// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaterBlueprintFunctionLibrary/Public/WaterBlueprintFunctionLibraryBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterBlueprintFunctionLibraryBPLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_WaterBlueprintFunctionLibrary();
	WATER_API UClass* Z_Construct_UClass_UGerstnerWaterWaves_NoRegister();
	WATER_API UClass* Z_Construct_UClass_UWaterWaves_NoRegister();
	WATERBLUEPRINTFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_UWaterBlueprintFunctionLibraryBPLibrary();
	WATERBLUEPRINTFUNCTIONLIBRARY_API UClass* Z_Construct_UClass_UWaterBlueprintFunctionLibraryBPLibrary_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UWaterBlueprintFunctionLibraryBPLibrary::execLoadWaterWaveAssetFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_WaveAssetFolder);
		P_GET_PROPERTY(FStrProperty,Z_Param_WaveAssetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWaterWaves**)Z_Param__Result=UWaterBlueprintFunctionLibraryBPLibrary::LoadWaterWaveAssetFile(Z_Param_WaveAssetFolder,Z_Param_WaveAssetName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaterBlueprintFunctionLibraryBPLibrary::execRecalcWaveData)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UGerstnerWaterWaves,Z_Param_GerstnerWaterWaves);
		P_FINISH;
		P_NATIVE_BEGIN;
		UWaterBlueprintFunctionLibraryBPLibrary::RecalcWaveData(Z_Param_WorldContextObject,Z_Param_GerstnerWaterWaves);
		P_NATIVE_END;
	}
	void UWaterBlueprintFunctionLibraryBPLibrary::StaticRegisterNativesUWaterBlueprintFunctionLibraryBPLibrary()
	{
		UClass* Class = UWaterBlueprintFunctionLibraryBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadWaterWaveAssetFile", &UWaterBlueprintFunctionLibraryBPLibrary::execLoadWaterWaveAssetFile },
			{ "RecalcWaveData", &UWaterBlueprintFunctionLibraryBPLibrary::execRecalcWaveData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWaterBlueprintFunctionLibraryBPLibrary_LoadWaterWaveAssetFile_Statics
	{
		struct WaterBlueprintFunctionLibraryBPLibrary_eventLoadWaterWaveAssetFile_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterBlueprintFunctionLibraryBPLibrary_LoadWaterWaveAssetFile_Statics::NewProp_WaveAssetFolder_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWaterBlueprintFunctionLibraryBPLibrary_LoadWaterWaveAssetFile_Statics::NewProp_WaveAssetFolder = { "WaveAssetFolder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterBlueprintFunctionLibraryBPLibrary_eventLoadWaterWaveAssetFile_Parms, WaveAssetFolder), METADATA_PARAMS(Z_Construct_UFunction_UWaterBlueprintFunctionLibraryBPLibrary_LoadWaterWaveAssetFile_Statics::NewProp_WaveAssetFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterBlueprintFunctionLibraryBPLibrary_LoadWaterWaveAssetFile_Statics::NewProp_WaveAssetFolder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterBlueprintFunctionLibraryBPLibrary_LoadWaterWaveAssetFile_Statics::NewProp_WaveAssetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWaterBlueprintFunctionLibraryBPLibrary_LoadWaterWaveAssetFile_Statics::NewProp_WaveAssetName = { "WaveAssetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterBlueprintFunctionLibraryBPLibrary_eventLoadWaterWaveAssetFile_Parms, WaveAssetName), METADATA_PARAMS(Z_Construct_UFunction_UWaterBlueprintFunctionLibraryBPLibrary_LoadWaterWaveAssetFile_Statics::NewProp_WaveAssetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterBlueprintFunctionLibraryBPLibrary_LoadWaterWaveAssetFile_Statics::NewProp_WaveAssetName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaterBlueprintFunctionLibraryBPLibrary_LoadWaterWaveAssetFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterBlueprintFunctionLibraryBPLibrary_eventLoadWaterWaveAssetFile_Parms, ReturnValue), Z_Construct_UClass_UWaterWaves_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterBlueprintFunctionLibraryBPLibrary_LoadWaterWaveAssetFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterBlueprintFunctionLibraryBPLibrary_LoadWaterWaveAssetFile_Statics::NewProp_WaveAssetFolder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterBlueprintFunctionLibraryBPLibrary_LoadWaterWaveAssetFile_Statics::NewProp_WaveAssetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterBlueprintFunctionLibraryBPLibrary_LoadWaterWaveAssetFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterBlueprintFunctionLibraryBPLibrary_LoadWaterWaveAssetFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "WaterBlueprintFunctionLibrary" },
		{ "Keywords", "WaterBlueprintFunctionLibrary water waves" },
		{ "ModuleRelativePath", "Public/WaterBlueprintFunctionLibraryBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterBlueprintFunctionLibraryBPLibrary_LoadWaterWaveAssetFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterBlueprintFunctionLibraryBPLibrary, nullptr, "LoadWaterWaveAssetFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterBlueprintFunctionLibraryBPLibrary_LoadWaterWaveAssetFile_Statics::WaterBlueprintFunctionLibraryBPLibrary_eventLoadWaterWaveAssetFile_Parms), Z_Construct_UFunction_UWaterBlueprintFunctionLibraryBPLibrary_LoadWaterWaveAssetFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterBlueprintFunctionLibraryBPLibrary_LoadWaterWaveAssetFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterBlueprintFunctionLibraryBPLibrary_LoadWaterWaveAssetFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterBlueprintFunctionLibraryBPLibrary_LoadWaterWaveAssetFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterBlueprintFunctionLibraryBPLibrary_LoadWaterWaveAssetFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterBlueprintFunctionLibraryBPLibrary_LoadWaterWaveAssetFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaterBlueprintFunctionLibraryBPLibrary_RecalcWaveData_Statics
	{
		struct WaterBlueprintFunctionLibraryBPLibrary_eventRecalcWaveData_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaterBlueprintFunctionLibraryBPLibrary_RecalcWaveData_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterBlueprintFunctionLibraryBPLibrary_eventRecalcWaveData_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaterBlueprintFunctionLibraryBPLibrary_RecalcWaveData_Statics::NewProp_GerstnerWaterWaves = { "GerstnerWaterWaves", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterBlueprintFunctionLibraryBPLibrary_eventRecalcWaveData_Parms, GerstnerWaterWaves), Z_Construct_UClass_UGerstnerWaterWaves_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterBlueprintFunctionLibraryBPLibrary_RecalcWaveData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterBlueprintFunctionLibraryBPLibrary_RecalcWaveData_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterBlueprintFunctionLibraryBPLibrary_RecalcWaveData_Statics::NewProp_GerstnerWaterWaves,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterBlueprintFunctionLibraryBPLibrary_RecalcWaveData_Statics::Function_MetaDataParams[] = {
		{ "Category", "WaterBlueprintFunctionLibrary" },
		{ "Keywords", "WaterBlueprintFunctionLibrary water waves" },
		{ "ModuleRelativePath", "Public/WaterBlueprintFunctionLibraryBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterBlueprintFunctionLibraryBPLibrary_RecalcWaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterBlueprintFunctionLibraryBPLibrary, nullptr, "RecalcWaveData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterBlueprintFunctionLibraryBPLibrary_RecalcWaveData_Statics::WaterBlueprintFunctionLibraryBPLibrary_eventRecalcWaveData_Parms), Z_Construct_UFunction_UWaterBlueprintFunctionLibraryBPLibrary_RecalcWaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterBlueprintFunctionLibraryBPLibrary_RecalcWaveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterBlueprintFunctionLibraryBPLibrary_RecalcWaveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterBlueprintFunctionLibraryBPLibrary_RecalcWaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterBlueprintFunctionLibraryBPLibrary_RecalcWaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterBlueprintFunctionLibraryBPLibrary_RecalcWaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaterBlueprintFunctionLibraryBPLibrary);
	UClass* Z_Construct_UClass_UWaterBlueprintFunctionLibraryBPLibrary_NoRegister()
	{
		return UWaterBlueprintFunctionLibraryBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UWaterBlueprintFunctionLibraryBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaterBlueprintFunctionLibraryBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_WaterBlueprintFunctionLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWaterBlueprintFunctionLibraryBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWaterBlueprintFunctionLibraryBPLibrary_LoadWaterWaveAssetFile, "LoadWaterWaveAssetFile" }, // 3228958391
		{ &Z_Construct_UFunction_UWaterBlueprintFunctionLibraryBPLibrary_RecalcWaveData, "RecalcWaveData" }, // 602285537
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBlueprintFunctionLibraryBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "IncludePath", "WaterBlueprintFunctionLibraryBPLibrary.h" },
		{ "ModuleRelativePath", "Public/WaterBlueprintFunctionLibraryBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaterBlueprintFunctionLibraryBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaterBlueprintFunctionLibraryBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaterBlueprintFunctionLibraryBPLibrary_Statics::ClassParams = {
		&UWaterBlueprintFunctionLibraryBPLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWaterBlueprintFunctionLibraryBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBlueprintFunctionLibraryBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWaterBlueprintFunctionLibraryBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UWaterBlueprintFunctionLibraryBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaterBlueprintFunctionLibraryBPLibrary.OuterSingleton, Z_Construct_UClass_UWaterBlueprintFunctionLibraryBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWaterBlueprintFunctionLibraryBPLibrary.OuterSingleton;
	}
	template<> WATERBLUEPRINTFUNCTIONLIBRARY_API UClass* StaticClass<UWaterBlueprintFunctionLibraryBPLibrary>()
	{
		return UWaterBlueprintFunctionLibraryBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaterBlueprintFunctionLibraryBPLibrary);
	UWaterBlueprintFunctionLibraryBPLibrary::~UWaterBlueprintFunctionLibraryBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_3DProjects_github_Dans_Projects_GFA_UDS_Test_Project_Plugins_WaterBlueprintFunctionLibrary_Source_WaterBlueprintFunctionLibrary_Public_WaterBlueprintFunctionLibraryBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_3DProjects_github_Dans_Projects_GFA_UDS_Test_Project_Plugins_WaterBlueprintFunctionLibrary_Source_WaterBlueprintFunctionLibrary_Public_WaterBlueprintFunctionLibraryBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWaterBlueprintFunctionLibraryBPLibrary, UWaterBlueprintFunctionLibraryBPLibrary::StaticClass, TEXT("UWaterBlueprintFunctionLibraryBPLibrary"), &Z_Registration_Info_UClass_UWaterBlueprintFunctionLibraryBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaterBlueprintFunctionLibraryBPLibrary), 2614568806U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_3DProjects_github_Dans_Projects_GFA_UDS_Test_Project_Plugins_WaterBlueprintFunctionLibrary_Source_WaterBlueprintFunctionLibrary_Public_WaterBlueprintFunctionLibraryBPLibrary_h_1742025721(TEXT("/Script/WaterBlueprintFunctionLibrary"),
		Z_CompiledInDeferFile_FID_3DProjects_github_Dans_Projects_GFA_UDS_Test_Project_Plugins_WaterBlueprintFunctionLibrary_Source_WaterBlueprintFunctionLibrary_Public_WaterBlueprintFunctionLibraryBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_3DProjects_github_Dans_Projects_GFA_UDS_Test_Project_Plugins_WaterBlueprintFunctionLibrary_Source_WaterBlueprintFunctionLibrary_Public_WaterBlueprintFunctionLibraryBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
