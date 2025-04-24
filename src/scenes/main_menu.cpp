#include "main_menu.h"
#include "../scene_manager.h"

void MainMenu::Load() {}

void MainMenu::Update()
{
    if (IsKeyPressed(KEY_ENTER))
        SceneManager::ChangeScene(SceneType::LEVEL);
}

void MainMenu::Draw()
{
    ClearBackground(BLACK);
    DrawText("Press ENTER", 10, 10, 20, WHITE);
}

void MainMenu::Unload() {}