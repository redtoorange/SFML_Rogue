#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <vector>
#include <SFML/Graphics.hpp>
#include <memory>

#include "TransformComponent.h"

class Component;
class TransformComponent;

class GameObject
{
public:
	GameObject();
	virtual ~GameObject();

	virtual void update( float );
	virtual void render( sf::RenderWindow& window );

	void addComponent( Component*  comp );
	Component* getComponent( std::string type );

	TransformComponent* getTransform() const;

private:
	std::vector<std::unique_ptr<Component>> components;
	TransformComponent * transform = nullptr;
};

#endif
