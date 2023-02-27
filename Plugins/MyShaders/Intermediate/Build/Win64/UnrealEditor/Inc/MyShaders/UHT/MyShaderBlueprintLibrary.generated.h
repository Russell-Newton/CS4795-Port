// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyShaderBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
class UTextureRenderTarget2D;
#ifdef MYSHADERS_MyShaderBlueprintLibrary_generated_h
#error "MyShaderBlueprintLibrary.generated.h already included, missing '#pragma once' in MyShaderBlueprintLibrary.h"
#endif
#define MYSHADERS_MyShaderBlueprintLibrary_generated_h

#define FID_Users_rnewt_Documents_Unreal_Projects_CS_4795_Port_Plugins_MyShaders_Source_MyShaders_Public_MyShaderBlueprintLibrary_h_14_SPARSE_DATA
#define FID_Users_rnewt_Documents_Unreal_Projects_CS_4795_Port_Plugins_MyShaders_Source_MyShaders_Public_MyShaderBlueprintLibrary_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDrawMySurfaceShaderToRenderTarget);


#define FID_Users_rnewt_Documents_Unreal_Projects_CS_4795_Port_Plugins_MyShaders_Source_MyShaders_Public_MyShaderBlueprintLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDrawMySurfaceShaderToRenderTarget);


#define FID_Users_rnewt_Documents_Unreal_Projects_CS_4795_Port_Plugins_MyShaders_Source_MyShaders_Public_MyShaderBlueprintLibrary_h_14_ACCESSORS
#define FID_Users_rnewt_Documents_Unreal_Projects_CS_4795_Port_Plugins_MyShaders_Source_MyShaders_Public_MyShaderBlueprintLibrary_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyShaderBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UMyShaderBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UMyShaderBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyShaders"), MYSHADERS_API) \
	DECLARE_SERIALIZER(UMyShaderBlueprintLibrary)


#define FID_Users_rnewt_Documents_Unreal_Projects_CS_4795_Port_Plugins_MyShaders_Source_MyShaders_Public_MyShaderBlueprintLibrary_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUMyShaderBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UMyShaderBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UMyShaderBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyShaders"), MYSHADERS_API) \
	DECLARE_SERIALIZER(UMyShaderBlueprintLibrary)


#define FID_Users_rnewt_Documents_Unreal_Projects_CS_4795_Port_Plugins_MyShaders_Source_MyShaders_Public_MyShaderBlueprintLibrary_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MYSHADERS_API UMyShaderBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyShaderBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYSHADERS_API, UMyShaderBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyShaderBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MYSHADERS_API UMyShaderBlueprintLibrary(UMyShaderBlueprintLibrary&&); \
	MYSHADERS_API UMyShaderBlueprintLibrary(const UMyShaderBlueprintLibrary&); \
public: \
	MYSHADERS_API virtual ~UMyShaderBlueprintLibrary();


#define FID_Users_rnewt_Documents_Unreal_Projects_CS_4795_Port_Plugins_MyShaders_Source_MyShaders_Public_MyShaderBlueprintLibrary_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MYSHADERS_API UMyShaderBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MYSHADERS_API UMyShaderBlueprintLibrary(UMyShaderBlueprintLibrary&&); \
	MYSHADERS_API UMyShaderBlueprintLibrary(const UMyShaderBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYSHADERS_API, UMyShaderBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyShaderBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyShaderBlueprintLibrary) \
	MYSHADERS_API virtual ~UMyShaderBlueprintLibrary();


#define FID_Users_rnewt_Documents_Unreal_Projects_CS_4795_Port_Plugins_MyShaders_Source_MyShaders_Public_MyShaderBlueprintLibrary_h_11_PROLOG
#define FID_Users_rnewt_Documents_Unreal_Projects_CS_4795_Port_Plugins_MyShaders_Source_MyShaders_Public_MyShaderBlueprintLibrary_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_rnewt_Documents_Unreal_Projects_CS_4795_Port_Plugins_MyShaders_Source_MyShaders_Public_MyShaderBlueprintLibrary_h_14_SPARSE_DATA \
	FID_Users_rnewt_Documents_Unreal_Projects_CS_4795_Port_Plugins_MyShaders_Source_MyShaders_Public_MyShaderBlueprintLibrary_h_14_RPC_WRAPPERS \
	FID_Users_rnewt_Documents_Unreal_Projects_CS_4795_Port_Plugins_MyShaders_Source_MyShaders_Public_MyShaderBlueprintLibrary_h_14_ACCESSORS \
	FID_Users_rnewt_Documents_Unreal_Projects_CS_4795_Port_Plugins_MyShaders_Source_MyShaders_Public_MyShaderBlueprintLibrary_h_14_INCLASS \
	FID_Users_rnewt_Documents_Unreal_Projects_CS_4795_Port_Plugins_MyShaders_Source_MyShaders_Public_MyShaderBlueprintLibrary_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_rnewt_Documents_Unreal_Projects_CS_4795_Port_Plugins_MyShaders_Source_MyShaders_Public_MyShaderBlueprintLibrary_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_rnewt_Documents_Unreal_Projects_CS_4795_Port_Plugins_MyShaders_Source_MyShaders_Public_MyShaderBlueprintLibrary_h_14_SPARSE_DATA \
	FID_Users_rnewt_Documents_Unreal_Projects_CS_4795_Port_Plugins_MyShaders_Source_MyShaders_Public_MyShaderBlueprintLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_rnewt_Documents_Unreal_Projects_CS_4795_Port_Plugins_MyShaders_Source_MyShaders_Public_MyShaderBlueprintLibrary_h_14_ACCESSORS \
	FID_Users_rnewt_Documents_Unreal_Projects_CS_4795_Port_Plugins_MyShaders_Source_MyShaders_Public_MyShaderBlueprintLibrary_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_rnewt_Documents_Unreal_Projects_CS_4795_Port_Plugins_MyShaders_Source_MyShaders_Public_MyShaderBlueprintLibrary_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYSHADERS_API UClass* StaticClass<class UMyShaderBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_rnewt_Documents_Unreal_Projects_CS_4795_Port_Plugins_MyShaders_Source_MyShaders_Public_MyShaderBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
