#pragma once
#include "GameObject.h"
#include <SFML/Graphics.hpp>

class GameObject;

class Component
{
public:
	Component(GameObject* parent);

	virtual ~Component();

	virtual void update( float );
	virtual void render(sf::RenderWindow& window);

	virtual std::string getType() const;
	void setParent( GameObject* parent );
	GameObject* getParent();


protected:
	GameObject* parent = nullptr;
	std::string type = "component";
};

