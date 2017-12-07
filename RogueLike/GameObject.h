#pragma once
#include <vector>
#include "Component.h"
#include <SFML/Graphics/RenderWindow.hpp>
#include <memory>
class Component;

class GameObject
{
public:
	GameObject();
	virtual ~GameObject();

	virtual void update( float );
	virtual void render( sf::RenderWindow& window );

	void addComponent( Component*  comp );
	Component* getComponent( std::string type );

private:
	std::vector<std::unique_ptr<Component>> components;
};

