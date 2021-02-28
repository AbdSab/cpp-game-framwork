#include "Scene.h"

class MainScene : public Scene {}

void Scene::preload() {
    loadTexture("brick", "res/sprites/brick.png");
}

void Scene::create() {
    std::cout << "Main scene create" << std::endl;
}

void Scene::update() {
    std::cout << "Main scene update" << std::endl;
}