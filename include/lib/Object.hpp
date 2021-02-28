#pragma once

#include "lib/Game.hpp"

class Game;
class Sprite;

class Object {
    public:
        Object(float _x, float _y);
        void update();
        void render();
    protected:
        Game* game;
        float x, y;
};