#ifndef TRANSFORM_COMPONENT_H
#define TRANSFORM_COMPONENT_H

#include "Component.h"

class GameObject;
class Component;

class TransformComponent : public Component
{
public:
	TransformComponent(GameObject* parent);
	~TransformComponent();

	void setPosition(float x, float y);
	const sf::Vector2f& getPosition() const;

	void setSize(float x, float y);
	const sf::Vector2f& getSize() const;

	void setRotation(float degrees);
	float getRotation() const;

private:
	sf::Vector2f position{0.0f, 0.0f};
	sf::Vector2f size{32.0f, 32.0f};
	float rotation{0};
};

#endif