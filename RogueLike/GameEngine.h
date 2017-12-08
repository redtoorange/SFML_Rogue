#ifndef GAME_ENGINE_H
#define GAME_ENGINE_H

#include <SFML/Graphics.hpp>
#include "GameObject.h"
#include "Screen.h"

class GameEngine
{
public:
	GameEngine();
	~GameEngine();

	void gameLoop();
	void setCurrentScreen(Screen* screen);
	Screen* getCurrentScreen();
	

private:
	Screen* currentScreen = nullptr;
	sf::RenderWindow window;
	bool running = false;

	void update(float delta);
	void render();
	void initWindow();
	void pollEvents();
};

#endif