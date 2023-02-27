// Fill out your copyright notice in the Description page of Project Settings.


#include "TestShaderBlueprintLibrary.h"

#include "PixelShaderUtils.h"
#include "RenderGraph.h"
#include "Engine/TextureRenderTarget2D.h"

class MYSHADERS_API FTestVS : public FGlobalShader
{
public:
	DECLARE_GLOBAL_SHADER(FTestVS);
	SHADER_USE_PARAMETER_STRUCT(FTestVS, FGlobalShader);
	using FParameters = FEmptyShaderParameters;

	static bool ShouldCompilePermutation(const FGlobalShaderPermutationParameters& Parameters)
	{
		return IsFeatureLevelSupported(Parameters.Platform, ERHIFeatureLevel::ES3_1);
	}
};

IMPLEMENT_GLOBAL_SHADER(FTestVS, "/Plugin/MyShaders/Private/test.usf", "MainVS", SF_Vertex);

class MYSHADERS_API FTestPS : public FGlobalShader
{
public:
	DECLARE_GLOBAL_SHADER(FTestPS);
	SHADER_USE_PARAMETER_STRUCT(FTestPS, FGlobalShader);

	BEGIN_SHADER_PARAMETER_STRUCT(FParameters,)
		SHADER_PARAMETER_RDG_TEXTURE_SRV(Texture2D, TestTexture)
		SHADER_PARAMETER_SAMPLER(SamplerState, TestTextureSampler)
		RENDER_TARGET_BINDING_SLOTS()
	END_SHADER_PARAMETER_STRUCT()

	static bool ShouldCompilePermutation(const FGlobalShaderPermutationParameters& Parameters)
	{
		return IsFeatureLevelSupported(Parameters.Platform, ERHIFeatureLevel::ES3_1);
	}
};

IMPLEMENT_GLOBAL_SHADER(FTestPS, "/Plugin/MyShaders/Private/test.usf", "MainPS", SF_Pixel);

void BuildGraph(FRHICommandListImmediate& RHICmdList, UTextureRenderTarget2D* RenderTarget, UTexture2D* TestTexture)
{
	FRDGBuilder GraphBuilder(RHICmdList);

	auto ShaderMap = GetGlobalShaderMap(GMaxRHIFeatureLevel);
	TShaderMapRef<FTestVS> VertexShader(ShaderMap);
	TShaderMapRef<FTestPS> PixelShader(ShaderMap);

	FTestPS::FParameters* PassParameters = GraphBuilder.AllocParameters<FTestPS::FParameters>();

	FIntPoint DestTextureSize = FIntPoint(RenderTarget->SizeX, RenderTarget->SizeY);

	TRefCountPtr<IPooledRenderTarget> TestTextureRef;
	CacheRenderTarget(TestTexture->GetResource()->GetTextureRHI(), TEXT("TestIn"), TestTextureRef);

	FRDGTextureRef OutTextureRDG = GraphBuilder.CreateTexture(
		FRDGTextureDesc::Create2D(
			DestTextureSize,
			PF_FloatRGBA,
			FClearValueBinding(),
			TexCreate_RenderTargetable | TexCreate_ShaderResource
		),
		TEXT("TestTexture")
	);

	PassParameters->TestTexture = GraphBuilder.CreateSRV(FRDGTextureSRVDesc::Create(GraphBuilder.RegisterExternalTexture(TestTextureRef)));
	PassParameters->TestTextureSampler = TStaticSamplerState<SF_Point, AM_Clamp, AM_Clamp, AM_Clamp>::GetRHI();
	PassParameters->RenderTargets[0] = FRenderTargetBinding(OutTextureRDG, ERenderTargetLoadAction::EClear);

	// FPixelShaderUtils::AddFullscreenPass(
	// 	GraphBuilder,
	// 	ShaderMap,
	// 	RDG_EVENT_NAME("Test VS+PS"),
	// 	PixelShader,
	// 	PassParameters,
	// 	FIntRect(FIntPoint::ZeroValue, DestTextureSize)
	// );

	GraphBuilder.AddPass(
		RDG_EVENT_NAME("Test VS/PS"),
		PassParameters,
		ERDGPassFlags::Raster,
		[VertexShader, PixelShader, PassParameters, DestTextureSize](FRHICommandList& RHICmdList)
	{
		RHICmdList.SetViewport(0.0f, 0.0f, 0.0f, (float)DestTextureSize.X, (float)DestTextureSize.Y, 1.0f);
	
		FGraphicsPipelineStateInitializer GraphicsPSOInit;
		GraphicsPSOInit.DepthStencilState = TStaticDepthStencilState<false, CF_Always>::GetRHI();
		GraphicsPSOInit.RasterizerState = TStaticRasterizerState<>::GetRHI();
		GraphicsPSOInit.BlendState = TStaticBlendStateWriteMask<CW_RGBA, CW_NONE, CW_NONE, CW_NONE, CW_NONE, CW_NONE, CW_NONE, CW_NONE>::GetRHI();
		GraphicsPSOInit.PrimitiveType = PT_TriangleStrip;
		GraphicsPSOInit.BoundShaderState.VertexDeclarationRHI = GFilterVertexDeclaration.VertexDeclarationRHI;
		GraphicsPSOInit.BoundShaderState.VertexShaderRHI = VertexShader.GetVertexShader();
		GraphicsPSOInit.BoundShaderState.PixelShaderRHI = PixelShader.GetPixelShader();
		RHICmdList.ApplyCachedRenderTargets(GraphicsPSOInit);
		SetGraphicsPipelineState(RHICmdList, GraphicsPSOInit, 0);
		SetShaderParameters(RHICmdList, PixelShader, PixelShader.GetPixelShader(), *PassParameters);
	
		FPixelShaderUtils::DrawFullscreenTriangle(RHICmdList, 1);
	});

	TRefCountPtr<IPooledRenderTarget> PooledOutTarget = nullptr;
			
	GraphBuilder.QueueTextureExtraction(OutTextureRDG, &PooledOutTarget);

	GraphBuilder.Execute();

	RHICmdList.CopyTexture(PooledOutTarget.GetReference()->GetRHI(), RenderTarget->GetRenderTargetResource()->TextureRHI, FRHICopyTextureInfo());
}

void UTestShaderBlueprintLibrary::DrawTestShaderRenderTarget(UTextureRenderTarget2D* RenderTarget,
                                                             UTexture2D* TestTexture)
{
	ENQUEUE_RENDER_COMMAND(CaptureCommand)(
		[RenderTarget, TestTexture](FRHICommandListImmediate& RHICmdList)
		{
			BuildGraph(RHICmdList, RenderTarget, TestTexture);
		}
	);
}
