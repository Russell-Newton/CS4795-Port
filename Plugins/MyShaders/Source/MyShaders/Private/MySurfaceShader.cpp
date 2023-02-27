#include "MySurfaceShader.h"

#include "PixelShaderUtils.h"

IMPLEMENT_GLOBAL_SHADER(FMySurfaceShaderVS, "/Plugin/MyShaders/Private/MySurf.usf", "MainVS", SF_Vertex);
IMPLEMENT_GLOBAL_SHADER(FMySurfaceShaderPS, "/Plugin/MyShaders/Private/MySurf.usf", "MainPS", SF_Pixel);

void AddMySurfGraphPass(
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
)
{
	auto ShaderMap = GetGlobalShaderMap(GMaxRHIFeatureLevel);
	TShaderMapRef<FMySurfaceShaderVS> VertexShader(ShaderMap);
	TShaderMapRef<FMySurfaceShaderPS> PixelShader(ShaderMap);

	FMySurfaceShaderVS::FParameters* VSParameters = GraphBuilder.AllocParameters<FMySurfaceShaderVS::FParameters>();
	VSParameters->BaseUVScaling = BaseUVScaling;
	VSParameters->LocalToWorld = LocalToWorld;
	VSParameters->WorldToClip = WorldToClip;
	VSParameters->WaveTex = WaveTex;
	VSParameters->WaveTexSampler = TStaticSamplerState<SF_AnisotropicLinear, AM_Wrap, AM_Wrap, AM_Wrap>::GetRHI();

	FMySurfaceShaderPS::FParameters* PassParameters = GraphBuilder.AllocParameters<FMySurfaceShaderPS::FParameters>();

	PassParameters->BaseColor = BaseColor;
	PassParameters->BaseColorSampler = TStaticSamplerState<SF_AnisotropicLinear, AM_Wrap, AM_Wrap, AM_Wrap>::GetRHI();
	PassParameters->BaseUVScaling = BaseUVScaling;
	PassParameters->SceneColor = SceneColor;
	PassParameters->SceneColorSampler = TStaticSamplerState<SF_AnisotropicLinear, AM_Clamp, AM_Clamp, AM_Clamp>::GetRHI();
	PassParameters->ShallowColor = ShallowColor;
	PassParameters->DeepColor = DeepColor;
	PassParameters->SceneDepth = SceneDepth;
	PassParameters->SceneDepthSampler = TStaticSamplerState<SF_AnisotropicLinear, AM_Clamp, AM_Clamp, AM_Clamp>::GetRHI();
	PassParameters->WaveTex = WaveTex;
	PassParameters->WaveTexSampler = TStaticSamplerState<SF_AnisotropicLinear, AM_Wrap, AM_Wrap, AM_Wrap>::GetRHI();
	PassParameters->LocalToWorld = LocalToWorld;
	PassParameters->WorldToClip = WorldToClip;
	PassParameters->RenderTargets[0] = FRenderTargetBinding(OutTarget, ERenderTargetLoadAction::EClear);

	// FPixelShaderUtils::AddFullscreenPass(
	// 	GraphBuilder,
	// 	ShaderMap,
	// 	RDG_EVENT_NAME("Test VS+PS"),
	// 	PixelShader,
	// 	PassParameters,
	// 	FIntRect(FIntPoint::ZeroValue, OutSize)
	// );
	GraphBuilder.AddPass(
		RDG_EVENT_NAME("My Surf"),
		PassParameters,
		ERDGPassFlags::Raster,
		[
			VertexShader,
			PixelShader,
			VSParameters,
			PassParameters,
			OutSize,
			PlaneVertices,
			PlaneTris,
			NumVertices,
			NumTris
		](FRHICommandList& RHICmdList)
		{
			RHICmdList.SetViewport(0.0f, 0.0f, 0.0f, static_cast<float>(OutSize.X), static_cast<float>(OutSize.Y), 1.0f);

			FGraphicsPipelineStateInitializer GraphicsPSOInit;
			GraphicsPSOInit.DepthStencilState = TStaticDepthStencilState<false, CF_Never>::GetRHI();
			GraphicsPSOInit.RasterizerState = TStaticRasterizerState<>::GetRHI();
			GraphicsPSOInit.BlendState = TStaticBlendStateWriteMask<
				CW_RGBA, CW_NONE, CW_NONE, CW_NONE, CW_NONE, CW_NONE, CW_NONE, CW_NONE>::GetRHI();
			GraphicsPSOInit.PrimitiveType = PT_TriangleList;
			GraphicsPSOInit.BoundShaderState.VertexDeclarationRHI = GFilterVertexDeclaration.VertexDeclarationRHI;
			GraphicsPSOInit.BoundShaderState.VertexShaderRHI = VertexShader.GetVertexShader();
			GraphicsPSOInit.BoundShaderState.PixelShaderRHI = PixelShader.GetPixelShader();
			RHICmdList.ApplyCachedRenderTargets(GraphicsPSOInit);
			SetGraphicsPipelineState(RHICmdList, GraphicsPSOInit, 0);
			SetShaderParameters(RHICmdList, VertexShader, VertexShader.GetVertexShader(), *VSParameters);
			SetShaderParameters(RHICmdList, PixelShader, PixelShader.GetPixelShader(), *PassParameters);

			// FPixelShaderUtils::DrawFullscreenQuad(RHICmdList, 1);
			RHICmdList.SetStreamSource(0, PlaneVertices, 0);

			RHICmdList.DrawIndexedPrimitive(
				PlaneTris,
				/*BaseVertexIndex=*/ 0,
				/*MinIndex=*/ 0,
				/*NumVertices=*/ NumVertices,
				/*StartIndex=*/ 0,
				/*NumPrimitives=*/ NumTris,
				/*NumInstances=*/ 1);
		}
	);
}
