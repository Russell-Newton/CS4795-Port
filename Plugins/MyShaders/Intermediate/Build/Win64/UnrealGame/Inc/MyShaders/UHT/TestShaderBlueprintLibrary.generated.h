// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TestShaderBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
class UTextureRenderTarget2D;
#ifdef MYSHADERS_TestShaderBlueprintLibrary_generated_h
#error "TestShaderBlueprintLibrary.generated.h already included, missing '#pragma once' in TestShaderBlueprintLibrary.h"
#endif
#define MYSHADERS_TestShaderBlueprintLibrary_generated_h

#define FID_Users_rnewt_Documents_Unreal_Projects_CS_4795_Port_Plugins_MyShaders_Source_MyShaders_Public_TestShaderBlueprintLibrary_h_14_SPARSE_DATA
#define FID_Users_rnewt_Documents_Unreal_Projects_CS_4795_Port_Plugins_MyShaders_Source_MyShaders_Public_TestShaderBlueprintLibrary_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDrawTestShaderRenderTarget);


#define FID_Users_rnewt_Documents_Unreal_Projects_CS_4795_Port_Plugins_MyShaders_Source_MyShaders_Public_TestShaderBlueprintLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDrawTestShaderRenderTarget);


#define FID_Users_rnewt_Documents_Unreal_Projects_CS_4795_Port_Plugins_MyShaders_Source_MyShaders_Public_TestShaderBlueprintLibrary_h_14_ACCESSORS
#define FID_Users_rnewt_Documents_Unreal_Projects_CS_4795_Port_Plugins_MyShaders_Source_MyShaders_Public_TestShaderBlueprintLibrary_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTestShaderBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UTestShaderBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UTestShaderBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyShaders"), MYSHADERS_API) \
	DECLARE_SERIALIZER(UTestShaderBlueprintLibrary)


#define FID_Users_rnewt_Documents_Unreal_Projects_CS_4795_Port_Plugins_MyShaders_Source_MyShaders_Public_TestShaderBlueprintLibrary_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUTestShaderBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UTestShaderBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UTestShaderBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyShaders"), MYSHADERS_API) \
	DECLARE_SERIALIZER(UTestShaderBlueprintLibrary)


#define FID_Users_rnewt_Documents_Unreal_Projects_CS_4795_Port_Plugins_MyShaders_Source_MyShaders_Public_TestShaderBlueprintLibrary_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MYSHADERS_API UTestShaderBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestShaderBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYSHADERS_API, UTestShaderBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestShaderBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MYSHADERS_API UTestShaderBlueprintLibrary(UTestShaderBlueprintLibrary&&); \
	MYSHADERS_API UTestShaderBlueprintLibrary(const UTestShaderBlueprintLibrary&); \
public: \
	MYSHADERS_API virtual ~UTestShaderBlueprintLibrary();


#define FID_Users_rnewt_Documents_Unreal_Projects_CS_4795_Port_Plugins_MyShaders_Source_MyShaders_Public_TestShaderBlueprintLibrary_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MYSHADERS_API UTestShaderBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MYSHADERS_API UTestShaderBlueprintLibrary(UTestShaderBlueprintLibrary&&); \
	MYSHADERS_API UTestShaderBlueprintLibrary(const UTestShaderBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYSHADERS_API, UTestShaderBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestShaderBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestShaderBlueprintLibrary) \
	MYSHADERS_API virtual ~UTestShaderBlueprintLibrary();


#define FID_Users_rnewt_Documents_Unreal_Projects_CS_4795_Port_Plugins_MyShaders_Source_MyShaders_Public_TestShaderBlueprintLibrary_h_11_PROLOG
#define FID_Users_rnewt_Documents_Unreal_Projects_CS_4795_Port_Plugins_MyShaders_Source_MyShaders_Public_TestShaderBlueprintLibrary_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_rnewt_Documents_Unreal_Projects_CS_4795_Port_Plugins_MyShaders_Source_MyShaders_Public_TestShaderBlueprintLibrary_h_14_SPARSE_DATA \
	FID_Users_rnewt_Documents_Unreal_Projects_CS_4795_Port_Plugins_MyShaders_Source_MyShaders_Public_TestShaderBlueprintLibrary_h_14_RPC_WRAPPERS \
	FID_Users_rnewt_Documents_Unreal_Projects_CS_4795_Port_Plugins_MyShaders_Source_MyShaders_Public_TestShaderBlueprintLibrary_h_14_ACCESSORS \
	FID_Users_rnewt_Documents_Unreal_Projects_CS_4795_Port_Plugins_MyShaders_Source_MyShaders_Public_TestShaderBlueprintLibrary_h_14_INCLASS \
	FID_Users_rnewt_Documents_Unreal_Projects_CS_4795_Port_Plugins_MyShaders_Source_MyShaders_Public_TestShaderBlueprintLibrary_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_rnewt_Documents_Unreal_Projects_CS_4795_Port_Plugins_MyShaders_Source_MyShaders_Public_TestShaderBlueprintLibrary_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_rnewt_Documents_Unreal_Projects_CS_4795_Port_Plugins_MyShaders_Source_MyShaders_Public_TestShaderBlueprintLibrary_h_14_SPARSE_DATA \
	FID_Users_rnewt_Documents_Unreal_Projects_CS_4795_Port_Plugins_MyShaders_Source_MyShaders_Public_TestShaderBlueprintLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_rnewt_Documents_Unreal_Projects_CS_4795_Port_Plugins_MyShaders_Source_MyShaders_Public_TestShaderBlueprintLibrary_h_14_ACCESSORS \
	FID_Users_rnewt_Documents_Unreal_Projects_CS_4795_Port_Plugins_MyShaders_Source_MyShaders_Public_TestShaderBlueprintLibrary_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_rnewt_Documents_Unreal_Projects_CS_4795_Port_Plugins_MyShaders_Source_MyShaders_Public_TestShaderBlueprintLibrary_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYSHADERS_API UClass* StaticClass<class UTestShaderBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_rnewt_Documents_Unreal_Projects_CS_4795_Port_Plugins_MyShaders_Source_MyShaders_Public_TestShaderBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
