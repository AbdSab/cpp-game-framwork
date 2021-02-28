#include "Sprite.hpp"

Sprite::Sprite(float _x, float _y, SDL_Texture* _texture, Game* _game): texture(_texture), Object(_x, _y, _game) {}