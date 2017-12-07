#pragma once
#include <SFML/Graphics.hpp>
#include "GameObject.h"

class Screen
{
public:
	Screen();
	~Screen();

	void addGameObject(GameObject*  go);

	void show();
	void update(float delta);
	void render( sf::RenderWindow& window);
	void hide();

private:
	std::vector<std::unique_ptr<GameObject>> gameObjects;
};

