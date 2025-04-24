#pragma once
#include "scene.h"

class Level : public Scene
{
public:
    void Load() override;

    void Update() override;

    void Draw() override;

    void Unload() override;
};