#pragma once
#include "lib/Object.hpp"

class Game;

class Sprite : public Object {
    public:
        Sprite(float _x, float _y, SDL_Texture* texture, Game* _game);
    private:
        SDL_Texture* texture;
};