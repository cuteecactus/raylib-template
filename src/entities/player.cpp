#include "player.h"
#include "raylib.h"

float screenCenterX = GetScreenWidth() / 2.0f;
float screenCenterY = GetScreenHeight() / 2.0f;

void Player::Load() {
    
    scale = {50.0f, 50.0f};  
    
  
    position = {
        (GetScreenWidth()/2.0f) - (scale.x/2.0f),
        (GetScreenHeight()/2.0f) - (scale.y/2.0f)
    };
}

void Player::Draw() {
    // Draw player rectangle
    // DrawRectangleV(position, scale, RED);
    // DrawRectangleV({screenCenterX,screenCenterY}, scale, RED);
    DrawRectangle ((GetScreenWidth()/2.0f) - scale.x/2.0f, (GetScreenHeight()/2.0f) - scale.y/2.0f, scale.x, scale.y, RED);
    
    
    DrawText(TextFormat("Pos: (%.1f, %.1f)", position.x, position.y), 10, 10, 20, WHITE);
    DrawText(TextFormat("Scale: (%.1f, %.1f)", scale.x, scale.y), 10, 40, 20, WHITE);
    
    
    Vector2 center = {
        GetScreenWidth()/2.0f,
        GetScreenHeight()/2.0f
    };
    DrawCircleV(center, 5.0f, GREEN);
}