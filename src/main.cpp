#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>

#include "lib/Game.hpp"
#include "MainScene.hpp"

int main(int argc, char* args[])
{
    Game* game = new Game("Test", 800, 640);

    Scene* main = new MainScene();
    game->addScene("main", main);

    game->start();
	return 1;
}