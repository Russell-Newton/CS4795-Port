// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyShaders/Public/TestShaderBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestShaderBlueprintLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	MYSHADERS_API UClass* Z_Construct_UClass_UTestShaderBlueprintLibrary();
	MYSHADERS_API UClass* Z_Construct_UClass_UTestShaderBlueprintLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyShaders();
// End Cross Module References
	DEFINE_FUNCTION(UTestShaderBlueprintLibrary::execDrawTestShaderRenderTarget)
	{
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_RenderTarget);
		P_GET_OBJECT(UTexture2D,Z_Param_TestTexture);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTestShaderBlueprintLibrary::DrawTestShaderRenderTarget(Z_Param_RenderTarget,Z_Param_TestTexture);
		P_NATIVE_END;
	}
	void UTestShaderBlueprintLibrary::StaticRegisterNativesUTestShaderBlueprintLibrary()
	{
		UClass* Class = UTestShaderBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DrawTestShaderRenderTarget", &UTestShaderBlueprintLibrary::execDrawTestShaderRenderTarget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTestShaderBlueprintLibrary_DrawTestShaderRenderTarget_Statics
	{
		struct TestShaderBlueprintLibrary_eventDrawTestShaderRenderTarget_Parms
		{
			UTextureRenderTarget2D* RenderTarget;
			UTexture2D* TestTexture;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TestTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTestShaderBlueprintLibrary_DrawTestShaderRenderTarget_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TestShaderBlueprintLibrary_eventDrawTestShaderRenderTarget_Parms, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTestShaderBlueprintLibrary_DrawTestShaderRenderTarget_Statics::NewProp_TestTexture = { "TestTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TestShaderBlueprintLibrary_eventDrawTestShaderRenderTarget_Parms, TestTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTestShaderBlueprintLibrary_DrawTestShaderRenderTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestShaderBlueprintLibrary_DrawTestShaderRenderTarget_Statics::NewProp_RenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestShaderBlueprintLibrary_DrawTestShaderRenderTarget_Statics::NewProp_TestTexture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTestShaderBlueprintLibrary_DrawTestShaderRenderTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyTests | Test Draw to RenderTarget" },
		{ "ModuleRelativePath", "Public/TestShaderBlueprintLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTestShaderBlueprintLibrary_DrawTestShaderRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTestShaderBlueprintLibrary, nullptr, "DrawTestShaderRenderTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTestShaderBlueprintLibrary_DrawTestShaderRenderTarget_Statics::TestShaderBlueprintLibrary_eventDrawTestShaderRenderTarget_Parms), Z_Construct_UFunction_UTestShaderBlueprintLibrary_DrawTestShaderRenderTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTestShaderBlueprintLibrary_DrawTestShaderRenderTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTestShaderBlueprintLibrary_DrawTestShaderRenderTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTestShaderBlueprintLibrary_DrawTestShaderRenderTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTestShaderBlueprintLibrary_DrawTestShaderRenderTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTestShaderBlueprintLibrary_DrawTestShaderRenderTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestShaderBlueprintLibrary);
	UClass* Z_Construct_UClass_UTestShaderBlueprintLibrary_NoRegister()
	{
		return UTestShaderBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UTestShaderBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestShaderBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MyShaders,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTestShaderBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTestShaderBlueprintLibrary_DrawTestShaderRenderTarget, "DrawTestShaderRenderTarget" }, // 2596542044
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestShaderBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TestShaderBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/TestShaderBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestShaderBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestShaderBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestShaderBlueprintLibrary_Statics::ClassParams = {
		&UTestShaderBlueprintLibrary::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTestShaderBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTestShaderBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestShaderBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UTestShaderBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestShaderBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UTestShaderBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTestShaderBlueprintLibrary.OuterSingleton;
	}
	template<> MYSHADERS_API UClass* StaticClass<UTestShaderBlueprintLibrary>()
	{
		return UTestShaderBlueprintLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestShaderBlueprintLibrary);
	UTestShaderBlueprintLibrary::~UTestShaderBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Users_rnewt_Documents_Unreal_Projects_CS_4795_Port_Plugins_MyShaders_Source_MyShaders_Public_TestShaderBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rnewt_Documents_Unreal_Projects_CS_4795_Port_Plugins_MyShaders_Source_MyShaders_Public_TestShaderBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTestShaderBlueprintLibrary, UTestShaderBlueprintLibrary::StaticClass, TEXT("UTestShaderBlueprintLibrary"), &Z_Registration_Info_UClass_UTestShaderBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestShaderBlueprintLibrary), 1695968260U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rnewt_Documents_Unreal_Projects_CS_4795_Port_Plugins_MyShaders_Source_MyShaders_Public_TestShaderBlueprintLibrary_h_3668809030(TEXT("/Script/MyShaders"),
		Z_CompiledInDeferFile_FID_Users_rnewt_Documents_Unreal_Projects_CS_4795_Port_Plugins_MyShaders_Source_MyShaders_Public_TestShaderBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rnewt_Documents_Unreal_Projects_CS_4795_Port_Plugins_MyShaders_Source_MyShaders_Public_TestShaderBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
