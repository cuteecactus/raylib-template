#include <iostream>
#include "raylib.h"


#include "entities/player.h"

Player player;

int main () {
    InitWindow(800, 600, "raylib [core] example - basic window");
    SetTargetFPS(60);

    player.Init();
    while (!WindowShouldClose()) {
        BeginDrawing();

        ClearBackground(BLACK);
        player.Draw();
        
        EndDrawing();
    }

    CloseWindow();
    return 0;
}