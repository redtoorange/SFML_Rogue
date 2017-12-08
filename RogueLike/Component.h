#ifndef COMPONENT_H
#define COMPONENT_H

#include <SFML/Graphics.hpp>
#include "GameObject.h"

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

#endif