#pragma once
#include "raylib.h"

class Player
{
public:

    Vector2 position;
    Vector2 scale;

    void Load();
    void Draw();
};