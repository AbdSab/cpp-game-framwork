#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include "Game.hpp"

Game::Game(const char* _title, int _width, int _height) {
    if (SDL_Init(SDL_INIT_VIDEO) > 0) throw "Init failed : " + std::string(SDL_GetError());
	if (!(IMG_Init(IMG_INIT_PNG))) throw "IMG_init has failed. Error: " + std::string(SDL_GetError());

    window = SDL_CreateWindow("Test", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 800, 640, SDL_WINDOW_SHOWN);
    if (window == NULL) throw "Window failed to init. Error: " + std::string(SDL_GetError());
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    running = true;
}

void Game::addScene(const char* _name, Scene* _scene) {
    _scene->attachGame(this);
    scenes[_name] = _scene;
}

void Game::start() {
    while (running){
        while (SDL_PollEvent(&event)){
            if (event.type == SDL_QUIT)
                running = false;
        }
    }
    clean();
}

void Game::clean() {
    SDL_DestroyWindow(window);
	SDL_Quit();
}