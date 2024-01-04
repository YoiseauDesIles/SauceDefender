#pragma once
#include "Game.h"

class GameObject
{
public:
	GameObject(const char* textureSheet, SDL_Renderer* renderer, int x, int y);
	~GameObject();

	void update();
	void render();

private:
	int m_xPos;
	int m_yPos;

	SDL_Texture* m_objTexture;
	SDL_Rect m_srcRect, m_dstRect;
	SDL_Renderer* m_renderer;
};

