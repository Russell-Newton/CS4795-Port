# CS4795-Port

<div align="center">
A UE5 RDG port of the most important features from my final project in CS/ECE 4795 at Georgia Tech.

<image src="GitMedia/CS_4795_Port.gif"/>
</div>

## Table of Contents

* [Purpose](#purpose)
* [Explanation](#explanation)
    * [Original Project](#original-project)
    * [Ported Project](#ported-project)
        * [Notable Differences](#notable-differences)
* [Takeaways](#takeaways)

## Purpose

The goal of this project is first and foremost to get me familiar with Unreal Engine 5's Render Dependency Graph, how it can be used to queue vertex/fragment passes, and how it can be interacted with via blueprints.

## Explanation

### Original Project

The original project implemented a surface shader that created waves in a water plane, slightly shifted scene color captured with a GrabPass in a forward renderer to approximate refraction and depth fade, and custom lighting to create the appearance of an ocean. All of this is fairly straightforward to implement in Unity.

This project also featured some extra props to further play with the depth falloff.

### Ported Project

Implementing similar functionality in Unreal Engine 5 is significantly more challenging. UE5 forces the use of a deferred renderer, and in order to create a new lighting model that can be used in the Material Graph, I would need to implement it directly into a fork of the UE5 editor. I think it was more important to become more familiar with the RDG, so I made some weird choices with the ported implementation in order to get this to work.

I created a water plane with a UProceduralMeshComponent. This let me control the quad resolution when applying wave heights as offsets.

During the tick of the player pawn:

1. Parameters are captured:
    * Screen color and depth are captured with Render Targets attached to the player camera.
    * A wave noise material is rendered to another Render Target.
    * The water plane transformation and camera view-projection matrix are captured.
1. These parameters are passed to a bluprint library function created in C++ that queues an RDG pass to draw the water plane to a Render Target.
    * Parameters are converted to their RHI bindings and stored in vertex and pixel shader pass `FParameters`.
    * The vertices of the water plane (in local coordinates) are set as the stream source for the `FRHICommandList`.
    * `DrawIndexedPrimitive` is called with the triangles from the water plane.
    * The vertex shader transforms vertices into world space, adds a Z offset based on the wave texture, transforms them with the view-projection matrix, and scales input UVs by a constant used to tile the water texture.
    * The pixel shader grabs the base color of the water texture determined by the UV interpolated from the vertex shader.
    * The pixel shader grabs the scene color and depth using the ScreenUV.
    * The base and scene colors are lerped between based on a function of depth to give the appearance of background objects fading under deeper water.
1. The water material uses the same Z offset to match the plane rendered with the material and the plane rendered by my shader setup.
1. The rendered water texture is set as the base color of a water material, using ScreenUV as the texture coordinates.
    * The effect is that the water plane is rendered by UE5 exactly as it's rendered to the Render Target outputted to by my setup.
1. The vertex normals are offset in the shader graph using the `NormalFromHeightMap` node so that the default lighting model doesn't look weird with the waves.

#### Notable Differences

* I didn't worry about the refraction effect here, I figured I wouldn't learn much more by doing this.
* The depth falloff is calculated slightly differently here. I couldn't find analogs to the utilities I was using in Unity, and this is probably due to the hacky nature of my implementation in UE5.
* I didn't apply specular highlights manually. Again, I figured I wouldn't be able to learn much more by adding some more parameters and setting the lighting model of the water material to unlit.

## Takeaways

**Is this the best way of doing it?** No! Absolutely not!

That being said, I think I learned a lot in the process of hacking together something that worked.

* I got experience working with `UProceduralMeshComponent`s, which will be handy when I want to implement marching cubes in a compute shader.
* The RDG is a really powerful tool for communication between the CPU and GPU.
    * I got experience passing matrices, vectors, textures, and render targets into a graph pass.
    * I got experience controlling the vertex input stream to a vertex/pixel shader pipeline.
    * I got experience extracting a texture out of a graph pass.
* I had to learn more about how data is passed between the CPU and RHI and how to make sure that data is persistent when it needs to be.
