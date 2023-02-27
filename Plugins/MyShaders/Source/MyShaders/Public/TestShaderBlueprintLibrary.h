// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TestShaderBlueprintLibrary.generated.h"

/**
 * 
 */
UCLASS(MinimalAPI)
class UTestShaderBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "MyTests | Test Draw to RenderTarget", meta = (WorldContext = "WorldContextObject"))
	static void DrawTestShaderRenderTarget(UTextureRenderTarget2D* RenderTarget, UTexture2D* TestTexture);
};
