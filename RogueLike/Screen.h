#ifndef SCREEN_H
#define SCREEN_H

#include <SFML/Graphics.hpp>
#include "GameObject.h"

class Screen
{
public:
	
	~Screen();

	void addGameObject(GameObject*  go);

	void show();
	void update(float delta);
	void render( sf::RenderWindow& window);
	void hide();

protected:
	std::vector<std::unique_ptr<GameObject>> gameObjects;
	Screen();
};

#endif