#pragma once
#include "raylib.h"

class Scene
{
public:
    virtual ~Scene() = default;
    virtual void Load() {}
    virtual void Unload() {}
    virtual void Update() {}
    virtual void Draw() {}
};