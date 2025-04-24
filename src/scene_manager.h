#pragma once
#include "scenes/scene.h"

enum class SceneType {
    MAIN_MENU,
    LEVEL
};

class SceneManager {

public:
    static void ChangeScene (SceneType newScene);
    static void Load();
    static void Update();
    static void Draw();
    static void Unload();
    
private:
    static Scene* currentScene;

};