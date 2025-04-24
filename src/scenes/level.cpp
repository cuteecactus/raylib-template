#include "level.h"
#include "../scene_manager.h"
#include "../entities/player.h"

Player player;

void Level::Load() {
    player.Load();
}

void Level::Update() {}

void Level::Draw() {
    ClearBackground(BLACK);

    player.Draw();
}

void Level::Unload() {}