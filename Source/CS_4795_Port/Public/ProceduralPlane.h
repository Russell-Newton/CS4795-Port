// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProceduralMeshComponent.h"
#include "ProceduralPlane.generated.h"

UCLASS()
class CS_4795_PORT_API AProceduralPlane : public AActor
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, Category = "ProceduralPlane")
	UProceduralMeshComponent* Mesh;
	
public:	
	// Sets default values for this actor's properties
	AProceduralPlane();

	UPROPERTY(BlueprintReadOnly)
	TArray<FVector> Vertices;
	UPROPERTY()
	TArray<FVector> Normals;
	UPROPERTY(BlueprintReadOnly)
	TArray<int32> Triangles;
	UPROPERTY(BlueprintReadOnly)
	TArray<FVector2D> UV0;
	UPROPERTY()
	TArray<FLinearColor> VertexColors;
	UPROPERTY()
	TArray<FProcMeshTangent> Tangents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProceduralPlane")
	int32 Height;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProceduralPlane")
	int32 Width;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProceduralPlane")
	float Spacing;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProceduralPlane")
	bool bGenerateMesh = true;

public:	
	virtual void OnConstruction(const FTransform& Transform) override;

	void GenerateVertices();
	void GenerateTriangles();
	void ClearMeshData();

};
