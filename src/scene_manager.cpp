// SceneManager.cpp
#include "scene_manager.h"
#include "scenes/main_menu.h"
#include "scenes/level.h"

Scene* SceneManager::currentScene = nullptr;

void SceneManager::ChangeScene(SceneType newScene) {
    // Cleanup old scene
    if (currentScene) {
        currentScene->Unload();
        delete currentScene;
    }

    // Create new scene
    switch (newScene) {
        case SceneType::MAIN_MENU:
            currentScene = new MainMenu();
            break;
        case SceneType::LEVEL:
            currentScene = new Level();
            break;
    }

    // Initialize new scene
    if (currentScene) currentScene->Load();
}

void SceneManager::Load() {
    ChangeScene(SceneType::MAIN_MENU);  // Start with menu
}

void SceneManager::Update() {
    if (currentScene) currentScene->Update();
}

void SceneManager::Draw() {
    if (currentScene) currentScene->Draw();
}

void SceneManager::Unload() {
    if (currentScene) {
        currentScene->Unload();
        delete currentScene;
        currentScene = nullptr;
    }
}