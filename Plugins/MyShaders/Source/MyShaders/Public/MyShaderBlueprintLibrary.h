// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyShaderBlueprintLibrary.generated.h"

/**
 * 
 */
UCLASS(MinimalAPI)
class UMyShaderBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "MyShaders | Draw Surf to RenderTarget", meta = (WorldContext = "WorldContextObject"))
	static void DrawMySurfaceShaderToRenderTarget(
		UTextureRenderTarget2D* OutTarget,
		UTexture2D* BaseColor,
		const float BaseUVScaling,
		UTextureRenderTarget2D* SceneColor,
		const FVector4f ShallowColor,
		const FVector4f DeepColor,
		UTextureRenderTarget2D* SceneDepth,
		UTextureRenderTarget2D* WaveTex,
		const FMatrix44f LocalToWorld,
		const FMatrix44f WorldToClip,
		const TArray<FVector>& PlaneVertices,
		const TArray<int32>& PlaneTris,
		const TArray<FVector2D>& PlaneUV0
	);
};
