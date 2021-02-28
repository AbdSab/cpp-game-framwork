#pragma once
#include <vector>
#include <unordered_map>
#include "lib/Game.hpp"
#include "lib/Object.hpp"
#include "lib/Sprite.hpp"

class Game;

class Scene {
    public:
        virtual void preload() = 0;
        virtual void create() = 0;
        virtual void update() = 0;
        void attachGame(Game* game);
    protected:
        std::unordered_map<std::string, SDL_Texture*> textures;
        std::vector<Object*> objects;
        Game* game;

        void addTexture(const char* _name, const char* _path);
        Sprite* addSprite(float _x, float _y, const char* texture);
};