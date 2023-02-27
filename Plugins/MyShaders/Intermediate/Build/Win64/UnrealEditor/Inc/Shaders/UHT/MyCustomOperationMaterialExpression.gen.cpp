// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shaders/Public/MyCustomOperationMaterialExpression.h"
#include "Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCustomOperationMaterialExpression() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	SHADERS_API UClass* Z_Construct_UClass_UMaterialExpressionMyCustomOperation();
	SHADERS_API UClass* Z_Construct_UClass_UMaterialExpressionMyCustomOperation_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Shaders();
// End Cross Module References
	void UMaterialExpressionMyCustomOperation::StaticRegisterNativesUMaterialExpressionMyCustomOperation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionMyCustomOperation);
	UClass* Z_Construct_UClass_UMaterialExpressionMyCustomOperation_NoRegister()
	{
		return UMaterialExpressionMyCustomOperation::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionMyCustomOperation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionMyCustomOperation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Shaders,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMyCustomOperation_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "MyCustomOperationMaterialExpression.h" },
		{ "ModuleRelativePath", "Public/MyCustomOperationMaterialExpression.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMyCustomOperation_Statics::NewProp_Input_MetaData[] = {
		{ "Comment", "/** Link to the input expression to be evaluated */" },
		{ "ModuleRelativePath", "Public/MyCustomOperationMaterialExpression.h" },
		{ "ToolTip", "Link to the input expression to be evaluated" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionMyCustomOperation_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionMyCustomOperation, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionMyCustomOperation_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMyCustomOperation_Statics::NewProp_Input_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionMyCustomOperation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMyCustomOperation_Statics::NewProp_Input,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionMyCustomOperation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionMyCustomOperation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionMyCustomOperation_Statics::ClassParams = {
		&UMaterialExpressionMyCustomOperation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionMyCustomOperation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMyCustomOperation_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionMyCustomOperation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMyCustomOperation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionMyCustomOperation()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionMyCustomOperation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionMyCustomOperation.OuterSingleton, Z_Construct_UClass_UMaterialExpressionMyCustomOperation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionMyCustomOperation.OuterSingleton;
	}
	template<> SHADERS_API UClass* StaticClass<UMaterialExpressionMyCustomOperation>()
	{
		return UMaterialExpressionMyCustomOperation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionMyCustomOperation);
	UMaterialExpressionMyCustomOperation::~UMaterialExpressionMyCustomOperation() {}
	struct Z_CompiledInDeferFile_FID_Users_rnewt_Documents_Unreal_Projects_CS_4795_Port_Plugins_MyShaders_Source_Shaders_Public_MyCustomOperationMaterialExpression_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rnewt_Documents_Unreal_Projects_CS_4795_Port_Plugins_MyShaders_Source_Shaders_Public_MyCustomOperationMaterialExpression_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionMyCustomOperation, UMaterialExpressionMyCustomOperation::StaticClass, TEXT("UMaterialExpressionMyCustomOperation"), &Z_Registration_Info_UClass_UMaterialExpressionMyCustomOperation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionMyCustomOperation), 3947418314U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rnewt_Documents_Unreal_Projects_CS_4795_Port_Plugins_MyShaders_Source_Shaders_Public_MyCustomOperationMaterialExpression_h_4286194886(TEXT("/Script/Shaders"),
		Z_CompiledInDeferFile_FID_Users_rnewt_Documents_Unreal_Projects_CS_4795_Port_Plugins_MyShaders_Source_Shaders_Public_MyCustomOperationMaterialExpression_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rnewt_Documents_Unreal_Projects_CS_4795_Port_Plugins_MyShaders_Source_Shaders_Public_MyCustomOperationMaterialExpression_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
