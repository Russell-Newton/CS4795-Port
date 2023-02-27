// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyShaders/Public/MyShaderBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyShaderBlueprintLibrary() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix44f();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4f();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	MYSHADERS_API UClass* Z_Construct_UClass_UMyShaderBlueprintLibrary();
	MYSHADERS_API UClass* Z_Construct_UClass_UMyShaderBlueprintLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyShaders();
// End Cross Module References
	DEFINE_FUNCTION(UMyShaderBlueprintLibrary::execDrawMySurfaceShaderToRenderTarget)
	{
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_OutTarget);
		P_GET_OBJECT(UTexture2D,Z_Param_BaseColor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BaseUVScaling);
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_SceneColor);
		P_GET_STRUCT(FVector4f,Z_Param_ShallowColor);
		P_GET_STRUCT(FVector4f,Z_Param_DeepColor);
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_SceneDepth);
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_WaveTex);
		P_GET_STRUCT(FMatrix44f,Z_Param_LocalToWorld);
		P_GET_STRUCT(FMatrix44f,Z_Param_WorldToClip);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_PlaneVertices);
		P_GET_TARRAY_REF(int32,Z_Param_Out_PlaneTris);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_PlaneUV0);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMyShaderBlueprintLibrary::DrawMySurfaceShaderToRenderTarget(Z_Param_OutTarget,Z_Param_BaseColor,Z_Param_BaseUVScaling,Z_Param_SceneColor,Z_Param_ShallowColor,Z_Param_DeepColor,Z_Param_SceneDepth,Z_Param_WaveTex,Z_Param_LocalToWorld,Z_Param_WorldToClip,Z_Param_Out_PlaneVertices,Z_Param_Out_PlaneTris,Z_Param_Out_PlaneUV0);
		P_NATIVE_END;
	}
	void UMyShaderBlueprintLibrary::StaticRegisterNativesUMyShaderBlueprintLibrary()
	{
		UClass* Class = UMyShaderBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DrawMySurfaceShaderToRenderTarget", &UMyShaderBlueprintLibrary::execDrawMySurfaceShaderToRenderTarget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics
	{
		struct FMatrix44f
		{
			FPlane4f XPlane;
			FPlane4f YPlane;
			FPlane4f ZPlane;
			FPlane4f WPlane;
		};

		struct MyShaderBlueprintLibrary_eventDrawMySurfaceShaderToRenderTarget_Parms
		{
			UTextureRenderTarget2D* OutTarget;
			UTexture2D* BaseColor;
			float BaseUVScaling;
			UTextureRenderTarget2D* SceneColor;
			FVector4f ShallowColor;
			FVector4f DeepColor;
			UTextureRenderTarget2D* SceneDepth;
			UTextureRenderTarget2D* WaveTex;
			FMatrix44f LocalToWorld;
			FMatrix44f WorldToClip;
			TArray<FVector> PlaneVertices;
			TArray<int32> PlaneTris;
			TArray<FVector2D> PlaneUV0;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutTarget;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseUVScaling_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseUVScaling;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShallowColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShallowColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeepColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeepColor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneDepth;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WaveTex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalToWorld_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalToWorld;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldToClip_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldToClip;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlaneVertices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaneVertices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PlaneVertices;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlaneTris_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaneTris_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PlaneTris;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlaneUV0_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaneUV0_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PlaneUV0;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::NewProp_OutTarget = { "OutTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MyShaderBlueprintLibrary_eventDrawMySurfaceShaderToRenderTarget_Parms, OutTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::NewProp_BaseColor = { "BaseColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MyShaderBlueprintLibrary_eventDrawMySurfaceShaderToRenderTarget_Parms, BaseColor), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::NewProp_BaseUVScaling_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::NewProp_BaseUVScaling = { "BaseUVScaling", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MyShaderBlueprintLibrary_eventDrawMySurfaceShaderToRenderTarget_Parms, BaseUVScaling), METADATA_PARAMS(Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::NewProp_BaseUVScaling_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::NewProp_BaseUVScaling_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::NewProp_SceneColor = { "SceneColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MyShaderBlueprintLibrary_eventDrawMySurfaceShaderToRenderTarget_Parms, SceneColor), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::NewProp_ShallowColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::NewProp_ShallowColor = { "ShallowColor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MyShaderBlueprintLibrary_eventDrawMySurfaceShaderToRenderTarget_Parms, ShallowColor), Z_Construct_UScriptStruct_FVector4f, METADATA_PARAMS(Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::NewProp_ShallowColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::NewProp_ShallowColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::NewProp_DeepColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::NewProp_DeepColor = { "DeepColor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MyShaderBlueprintLibrary_eventDrawMySurfaceShaderToRenderTarget_Parms, DeepColor), Z_Construct_UScriptStruct_FVector4f, METADATA_PARAMS(Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::NewProp_DeepColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::NewProp_DeepColor_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::NewProp_SceneDepth = { "SceneDepth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MyShaderBlueprintLibrary_eventDrawMySurfaceShaderToRenderTarget_Parms, SceneDepth), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::NewProp_WaveTex = { "WaveTex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MyShaderBlueprintLibrary_eventDrawMySurfaceShaderToRenderTarget_Parms, WaveTex), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::NewProp_LocalToWorld_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::NewProp_LocalToWorld = { "LocalToWorld", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MyShaderBlueprintLibrary_eventDrawMySurfaceShaderToRenderTarget_Parms, LocalToWorld), Z_Construct_UScriptStruct_FMatrix44f, METADATA_PARAMS(Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::NewProp_LocalToWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::NewProp_LocalToWorld_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::NewProp_WorldToClip_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::NewProp_WorldToClip = { "WorldToClip", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MyShaderBlueprintLibrary_eventDrawMySurfaceShaderToRenderTarget_Parms, WorldToClip), Z_Construct_UScriptStruct_FMatrix44f, METADATA_PARAMS(Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::NewProp_WorldToClip_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::NewProp_WorldToClip_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::NewProp_PlaneVertices_Inner = { "PlaneVertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::NewProp_PlaneVertices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::NewProp_PlaneVertices = { "PlaneVertices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MyShaderBlueprintLibrary_eventDrawMySurfaceShaderToRenderTarget_Parms, PlaneVertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::NewProp_PlaneVertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::NewProp_PlaneVertices_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::NewProp_PlaneTris_Inner = { "PlaneTris", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::NewProp_PlaneTris_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::NewProp_PlaneTris = { "PlaneTris", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MyShaderBlueprintLibrary_eventDrawMySurfaceShaderToRenderTarget_Parms, PlaneTris), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::NewProp_PlaneTris_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::NewProp_PlaneTris_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::NewProp_PlaneUV0_Inner = { "PlaneUV0", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::NewProp_PlaneUV0_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::NewProp_PlaneUV0 = { "PlaneUV0", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MyShaderBlueprintLibrary_eventDrawMySurfaceShaderToRenderTarget_Parms, PlaneUV0), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::NewProp_PlaneUV0_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::NewProp_PlaneUV0_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::NewProp_OutTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::NewProp_BaseColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::NewProp_BaseUVScaling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::NewProp_SceneColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::NewProp_ShallowColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::NewProp_DeepColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::NewProp_SceneDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::NewProp_WaveTex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::NewProp_LocalToWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::NewProp_WorldToClip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::NewProp_PlaneVertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::NewProp_PlaneVertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::NewProp_PlaneTris_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::NewProp_PlaneTris,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::NewProp_PlaneUV0_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::NewProp_PlaneUV0,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyShaders | Draw Surf to RenderTarget" },
		{ "ModuleRelativePath", "Public/MyShaderBlueprintLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyShaderBlueprintLibrary, nullptr, "DrawMySurfaceShaderToRenderTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::MyShaderBlueprintLibrary_eventDrawMySurfaceShaderToRenderTarget_Parms), Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C42401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyShaderBlueprintLibrary);
	UClass* Z_Construct_UClass_UMyShaderBlueprintLibrary_NoRegister()
	{
		return UMyShaderBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMyShaderBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyShaderBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MyShaders,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyShaderBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyShaderBlueprintLibrary_DrawMySurfaceShaderToRenderTarget, "DrawMySurfaceShaderToRenderTarget" }, // 3385793069
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyShaderBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyShaderBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/MyShaderBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyShaderBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyShaderBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyShaderBlueprintLibrary_Statics::ClassParams = {
		&UMyShaderBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMyShaderBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyShaderBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyShaderBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UMyShaderBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyShaderBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UMyShaderBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyShaderBlueprintLibrary.OuterSingleton;
	}
	template<> MYSHADERS_API UClass* StaticClass<UMyShaderBlueprintLibrary>()
	{
		return UMyShaderBlueprintLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyShaderBlueprintLibrary);
	UMyShaderBlueprintLibrary::~UMyShaderBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Users_rnewt_Documents_Unreal_Projects_CS_4795_Port_Plugins_MyShaders_Source_MyShaders_Public_MyShaderBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rnewt_Documents_Unreal_Projects_CS_4795_Port_Plugins_MyShaders_Source_MyShaders_Public_MyShaderBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyShaderBlueprintLibrary, UMyShaderBlueprintLibrary::StaticClass, TEXT("UMyShaderBlueprintLibrary"), &Z_Registration_Info_UClass_UMyShaderBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyShaderBlueprintLibrary), 4240051922U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rnewt_Documents_Unreal_Projects_CS_4795_Port_Plugins_MyShaders_Source_MyShaders_Public_MyShaderBlueprintLibrary_h_2585188316(TEXT("/Script/MyShaders"),
		Z_CompiledInDeferFile_FID_Users_rnewt_Documents_Unreal_Projects_CS_4795_Port_Plugins_MyShaders_Source_MyShaders_Public_MyShaderBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rnewt_Documents_Unreal_Projects_CS_4795_Port_Plugins_MyShaders_Source_MyShaders_Public_MyShaderBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
