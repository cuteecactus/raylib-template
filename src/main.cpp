#include "raylib.h"

#include "scene_manager.h"

int main () {
    InitWindow(800, 600, "Raylib Template By CuteeCactus");
    SetTargetFPS(60);

    SceneManager::Load();
    
    while (!WindowShouldClose()) {
        BeginDrawing();
        
        SceneManager::Update();
        SceneManager::Draw();
        
        EndDrawing();
    }
    
    SceneManager::Unload();
    CloseWindow();
    return 0;
}