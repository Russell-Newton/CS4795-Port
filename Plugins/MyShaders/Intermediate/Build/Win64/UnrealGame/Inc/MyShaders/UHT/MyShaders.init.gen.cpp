// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyShaders_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MyShaders;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MyShaders()
	{
		if (!Z_Registration_Info_UPackage__Script_MyShaders.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MyShaders",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x865E869F,
				0xBD6B1D7A,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MyShaders.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MyShaders.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MyShaders(Z_Construct_UPackage__Script_MyShaders, TEXT("/Script/MyShaders"), Z_Registration_Info_UPackage__Script_MyShaders, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x865E869F, 0xBD6B1D7A));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
