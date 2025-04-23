#include "iostream"

#include "raylib.h"

int main()
{
    InitWindow(800, 450, "raylib [core] example - basic window");

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Welcome to Raylib!", 190, 200, 20, LIGHTGRAY);        
        EndDrawing();
    }

    CloseWindow();
    return 0;
}

// int main () {
//     std::cout << std::endl << "Hello World" << std::endl;

//     return 0;
// }