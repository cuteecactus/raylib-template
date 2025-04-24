#include "player.h"
#include "raylib.h"

void Player::Init()
{
    float screenCenterX = GetScreenWidth() / 2.0f;
    float screenCenterY = GetScreenHeight() / 2.0f;

    scale = {50, 50};
    position = {
        screenCenterX - (scale.x / 2),
        screenCenterY - (scale.y / 2)};
}

void Player::Draw()
{
    DrawRectangleV(position, scale, RED); // More efficient version
}