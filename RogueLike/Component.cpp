#include "Component.h"

Component::Component(GameObject* parent) : parent(parent)
{
}

Component::~Component()
{
}

void Component::update(float deltaTime )
{
	// Update the component
}

void Component::render(sf::RenderWindow& window)
{
	// Render the component
}

GameObject* Component::getParent()
{
	return parent;
}

void Component::setParent(GameObject* parent)
{
	this->parent = parent;
}

std::string Component::getType() const
{
	return type;
}

