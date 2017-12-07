#include "TransformComponent.h"
#include <iostream>

TransformComponent::TransformComponent(GameObject* parent) : Component(parent)
{
	std::cout << "Allocated TransformComponent" << std::endl;
	type = "transform";
}


TransformComponent::~TransformComponent()
{
	std::cout << "Dellocated TransformComponent" << std::endl;
}

void TransformComponent::setPosition(float x, float y)
{
	position.x = x;
	position.y = y;
}

const sf::Vector2f& TransformComponent::getPosition() const
{
	return position;
}


void TransformComponent::setSize(float x, float y)
{
	size.x = x;
	size.y = y;
}

const sf::Vector2f& TransformComponent::getSize() const
{
	return size;
}

void TransformComponent::setRotation(float degrees)
{
	rotation = degrees;
}

float TransformComponent::getRotation() const
{
	return rotation;
}
