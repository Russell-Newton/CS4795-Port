#pragma once

#include "RenderGraph.h"

class FMySurfaceShaderVS : public FGlobalShader
{
	DECLARE_GLOBAL_SHADER(FMySurfaceShaderVS);
	SHADER_USE_PARAMETER_STRUCT(FMySurfaceShaderVS, FGlobalShader);

	BEGIN_SHADER_PARAMETER_STRUCT(FParameters,)
		SHADER_PARAMETER(float, BaseUVScaling)
		SHADER_PARAMETER_RDG_TEXTURE_SRV(Texture2D, WaveTex)
		SHADER_PARAMETER_SAMPLER(SamplerState, WaveTexSampler)
		SHADER_PARAMETER(FMatrix44f, LocalToWorld)
		SHADER_PARAMETER(FMatrix44f, WorldToClip)
	END_SHADER_PARAMETER_STRUCT()
};

class FMySurfaceShaderPS : public FGlobalShader
{
	DECLARE_GLOBAL_SHADER(FMySurfaceShaderPS);
	SHADER_USE_PARAMETER_STRUCT(FMySurfaceShaderPS, FGlobalShader);

	BEGIN_SHADER_PARAMETER_STRUCT(FParameters,)
		SHADER_PARAMETER_RDG_TEXTURE_SRV(Texture2D, BaseColor)
		SHADER_PARAMETER_SAMPLER(SamplerState, BaseColorSampler)
		SHADER_PARAMETER(float, BaseUVScaling)
		SHADER_PARAMETER_RDG_TEXTURE_SRV(Texture2D, SceneColor)
		SHADER_PARAMETER_SAMPLER(SamplerState, SceneColorSampler)
		SHADER_PARAMETER(FVector4f, ShallowColor)
		SHADER_PARAMETER(FVector4f, DeepColor)
		SHADER_PARAMETER_RDG_TEXTURE_SRV(Texture2D, SceneDepth)
		SHADER_PARAMETER_SAMPLER(SamplerState, SceneDepthSampler)
		SHADER_PARAMETER_RDG_TEXTURE_SRV(Texture2D, WaveTex)
		SHADER_PARAMETER_SAMPLER(SamplerState, WaveTexSampler)
		SHADER_PARAMETER(FMatrix44f, LocalToWorld)
		SHADER_PARAMETER(FMatrix44f, WorldToClip)
		RENDER_TARGET_BINDING_SLOTS()
	END_SHADER_PARAMETER_STRUCT()
};

static void AddMySurfGraphPass(
	FRDGBuilder& GraphBuilder,
	const FRDGTextureSRVRef& BaseColor,
	const float BaseUVScaling,
	const FRDGTextureSRVRef& SceneColor,
	const FVector4f ShallowColor,
	const FVector4f DeepColor,
	const FRDGTextureSRVRef& SceneDepth,
	const FRDGTextureSRVRef& WaveTex,
	const FRDGTextureRef& OutTarget,
	const FIntPoint& OutSize,
	const FMatrix44f LocalToWorld,
	const FMatrix44f WorldToClip,
	const FBufferRHIRef& PlaneVertices,
	const FBufferRHIRef& PlaneTris,
	const int NumVertices,
	const int NumTris
);
