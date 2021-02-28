#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>
#include <unordered_map>

#include "lib/Scene.hpp"

class Game {
    public:
        Game(const char* _title, int _width, int _height);
        void addScene(const char* _name, Scene* _scene);
        void start();
        void clean();
    private:
        int width, height, title;
        SDL_Renderer* renderer;
        SDL_Window* window;
        SDL_Event event;
        std::unordered_map<std::string, Scene*> scenes;
        bool running;
};