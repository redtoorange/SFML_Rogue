#include "Screen.h"



Screen::Screen()
{
}


Screen::~Screen()
{
}


void Screen::show()
{
}

void Screen::update(float delta)
{
	for (auto& go : gameObjects)
		go->update(delta);
}

void Screen::render(sf::RenderWindow& window)
{
	for (auto& go : gameObjects)
		go->render(window);
}

void Screen::hide()
{
}

void Screen::addGameObject(GameObject* go)
{
	gameObjects.push_back(std::unique_ptr<GameObject>(go));
}
