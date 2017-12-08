#ifndef SPRITE_COMPONENT_H
#define SPRITE_COMPONENT_H

#include "Component.h"
#include "TransformComponent.h"
#include <SFML/Graphics.hpp>

class SpriteComponent : public Component
{
public:
	SpriteComponent(GameObject* parent);
	~SpriteComponent();


	void render(sf::RenderWindow& window) override;

private:
	TransformComponent* positionComponent = nullptr;
	sf::Texture spriteTex;
	sf::Sprite sprite;

	sf::Vector2u texSize;
};

#endif