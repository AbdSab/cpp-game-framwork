#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include "Scene.hpp"

void Scene::loadTexture(const char* _name, const char* _path) {
    SDL_Texture* texture = IMG_LoadTexture(game.getRenderer(), path);
    if(texture == NULL) {
        std::cout << "[Failed to load texture] : " << SDL_GetError() << std::endl;
    }
    textures[_name] = texture;
}

void Scene::addSprite(float _x, float _y, const char* _textureKey) {
    Sprite* sprite(_x, _y, _textureKey, game);
    objects.push_back(sprite);
}