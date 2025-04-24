#pragma once
#include "scene.h"

class MainMenu : public Scene
{
public:
    void Load() override;

    void Update() override;

    void Draw() override;

    void Unload() override;
};