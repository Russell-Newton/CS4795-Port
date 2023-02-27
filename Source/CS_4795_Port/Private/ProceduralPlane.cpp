// Fill out your copyright notice in the Description page of Project Settings.


#include "ProceduralPlane.h"

// Sets default values
AProceduralPlane::AProceduralPlane()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create the mesh component
	Mesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("ProceduralMesh"));
	Mesh->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);

	Width = 4;
	Height = 4;
	Spacing = 50.0f;

	bGenerateMesh = true;

}

void AProceduralPlane::OnConstruction(const FTransform& Transform)
{
	if (bGenerateMesh)
	{
		UE_LOG(LogTemp, Log, TEXT("Generating Plane"))
		bGenerateMesh = false;

		ClearMeshData();

		GenerateVertices();
		GenerateTriangles();

		Mesh->CreateMeshSection_LinearColor(0, Vertices, Triangles, Normals, UV0, VertexColors, Tangents, false);
	}
}

void AProceduralPlane::GenerateVertices()
{
	const float UVSpacing = 1.0f / FMath::Max(Height, Width);

	for (int32 y = 0; y < Height; y++)
	{
		for (int32 x = 0; x < Width; x++)
		{
			Vertices.Add(FVector(x * Spacing, y * Spacing, 0));
			Normals.Add(FVector(0, 0, 1));
			UV0.Add(FVector2D(x * UVSpacing, y * UVSpacing));
			VertexColors.Add(FLinearColor(0, 0, 0, 1));
			Tangents.Add(FProcMeshTangent(1, 0, 0));
		}
	}
}

void AProceduralPlane::GenerateTriangles()
{
	for (int32 y = 0; y < Height - 1; y++)
	{
		for (int32 x = 0; x < Width - 1; x++)
		{
			Triangles.Add(x + y * Width);
			Triangles.Add(x + (y + 1) * Width);
			Triangles.Add(x + (y + 1) * Width + 1);
			
			Triangles.Add(x + y * Width);
			Triangles.Add(x + (y + 1) * Width + 1);
			Triangles.Add(x + y * Width + 1);
		}
	}
}

void AProceduralPlane::ClearMeshData()
{
	Vertices.Empty();
	Triangles.Empty();
	UV0.Empty();
	Normals.Empty();
	VertexColors.Empty();
	Tangents.Empty();
}

