// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyShaders.h"

#include "Interfaces/IPluginManager.h"

#define LOCTEXT_NAMESPACE "FMyShadersModule"

void FMyShadersModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module

	const FString PluginBaseDirectory = IPluginManager::Get().FindPlugin(TEXT("MyShaders"))->GetBaseDir();
	AddShaderSourceDirectoryMapping(TEXT("/Plugin/MyShaders"), FPaths::Combine(PluginBaseDirectory, TEXT("Shaders")));
}

void FMyShadersModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FMyShadersModule, MyShaders)
