// Fill out your copyright notice in the Description page of Project Settings.


#include "MyShaderBlueprintLibrary.h"

#include "CommonRenderResources.h"
#include "RenderGraph.h"
#include "MySurfaceShader.h"

#include "Engine/TextureRenderTarget2D.h"


DEFINE_LOG_CATEGORY_STATIC(LogMyShaders, Log, All);

void BuildGraph(
	FRHICommandListImmediate& RHICmdList,
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
)
{
	FRDGBuilder GraphBuilder(RHICmdList);
	
	const FIntPoint OutSize(OutTarget->SizeX, OutTarget->SizeY);

	TRefCountPtr<IPooledRenderTarget> PooledOutTarget, PooledBaseColor, PooledSceneColor, PooledSceneDepth, PooledWaveTex;
	CacheRenderTarget(BaseColor->GetResource()->GetTextureRHI(), TEXT("MySurf BaseColor"), PooledBaseColor);
	const FRDGTextureSRVRef BaseColorSRV = GraphBuilder.CreateSRV(FRDGTextureSRVDesc::Create(GraphBuilder.RegisterExternalTexture(PooledBaseColor)));
	CacheRenderTarget(SceneColor->GetRenderTargetResource()->GetTextureRHI(), TEXT("MySurf SceneColor"), PooledSceneColor);
	const FRDGTextureSRVRef SceneColorSRV = GraphBuilder.CreateSRV(FRDGTextureSRVDesc::Create(GraphBuilder.RegisterExternalTexture(PooledSceneColor)));
	CacheRenderTarget(SceneDepth->GetRenderTargetResource()->GetTextureRHI(), TEXT("MySurf SceneDepth"), PooledSceneDepth);
	const FRDGTextureSRVRef SceneDepthSRV = GraphBuilder.CreateSRV(FRDGTextureSRVDesc::Create(GraphBuilder.RegisterExternalTexture(PooledSceneDepth)));
	CacheRenderTarget(WaveTex->GetRenderTargetResource()->GetTextureRHI(), TEXT("MySurf WaveTex"), PooledWaveTex);
	const FRDGTextureSRVRef WaveTexSRV = GraphBuilder.CreateSRV(FRDGTextureSRVDesc::Create(GraphBuilder.RegisterExternalTexture(PooledWaveTex)));

	const FRDGTextureRef OutTextureRDG = GraphBuilder.CreateTexture(
		FRDGTextureDesc::Create2D(
			OutSize,
			PF_FloatRGBA,
			FClearValueBinding(),
			TexCreate_RenderTargetable | TexCreate_ShaderResource
		),
		TEXT("MySurf Out Texture")
	);

	TResourceArray<FFilterVertex, VERTEXBUFFER_ALIGNMENT> Vertices;
	for (int i = 0; i < PlaneVertices.Num(); i++)
	{
		FFilterVertex toAdd;
		toAdd.Position = FVector4f(
			PlaneVertices[i].X,
			PlaneVertices[i].Y,
			PlaneVertices[i].Z
		);
		toAdd.UV = FVector2f(
			PlaneUV0[i].X,
			PlaneUV0[i].Y
		);
		Vertices.Add(toAdd);
	}
	FRHIResourceCreateInfo VertexCreateInfo(TEXT("FPlaneVertexBuffer"), &Vertices);
	const FBufferRHIRef VertexBufferRHI = RHICreateVertexBuffer(Vertices.GetResourceDataSize(), BUF_Static, VertexCreateInfo);
	
	TResourceArray<uint16, INDEXBUFFER_ALIGNMENT> IndexBuffer;
	IndexBuffer.SetNumUninitialized(PlaneTris.Num());
	for (int i = 0; i < PlaneTris.Num(); i++)
	{
		IndexBuffer[i] = PlaneTris[i];
	}
	FRHIResourceCreateInfo TrisCreateInfo(TEXT("FPlaneIndexBuffer"), &IndexBuffer);
	const FBufferRHIRef IndexBufferRHI = RHICreateIndexBuffer(sizeof(uint16), IndexBuffer.GetResourceDataSize(), BUF_Static, TrisCreateInfo);

	AddMySurfGraphPass(
		GraphBuilder,
		BaseColorSRV,
		BaseUVScaling,
		SceneColorSRV,
		ShallowColor,
		DeepColor,
		SceneDepthSRV,
		WaveTexSRV,
		OutTextureRDG,
		OutSize,
		LocalToWorld,
		WorldToClip,
		VertexBufferRHI,
		IndexBufferRHI,
		PlaneVertices.Num(),
		PlaneTris.Num() / 3
	);

	GraphBuilder.QueueTextureExtraction(OutTextureRDG, &PooledOutTarget);

	GraphBuilder.Execute();
	
	RHICmdList.CopyTexture(PooledOutTarget.GetReference()->GetRHI(), OutTarget->GetRenderTargetResource()->GetTextureRHI(), FRHICopyTextureInfo());
}

void UMyShaderBlueprintLibrary::DrawMySurfaceShaderToRenderTarget(
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
)
{
	
	ENQUEUE_RENDER_COMMAND(CaptureCommand)(
		[=](FRHICommandListImmediate& RHICmdList)
		{
			BuildGraph(
				RHICmdList,
				OutTarget,
				BaseColor,
				BaseUVScaling,
				SceneColor,
				ShallowColor,
				DeepColor,
				SceneDepth,
				WaveTex,
				LocalToWorld,
				WorldToClip,
				PlaneVertices,
				PlaneTris,
				PlaneUV0
			);
		}
	);
}
