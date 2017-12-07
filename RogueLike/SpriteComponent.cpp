#include "SpriteComponent.h"
#include <iostream>


SpriteComponent::SpriteComponent( GameObject* parent) : Component(parent)
{
	std::cout << "Allocated SpriteComponent" << std::endl;

	type = "sprite";

	spriteTex.loadFromFile("mario.png");
	texSize = spriteTex.getSize();

	sprite.setTexture(spriteTex);
}


SpriteComponent::~SpriteComponent()
{
	std::cout << "Deallocated SpriteComponent" << std::endl;
}

void SpriteComponent::render( sf::RenderWindow& window )
{
	if(parent && !positionComponent )
		positionComponent = dynamic_cast<TransformComponent*>(parent->getComponent("transform"));

	if( positionComponent )
	{
		auto pos = positionComponent->getPosition();
		auto size = positionComponent->getSize();
		auto rot = positionComponent->getRotation();

		sprite.setPosition(pos.x, pos.y);
		sprite.setScale(size.x/texSize.x, size.y/texSize.y);
		sprite.setRotation(rot);

		window.draw(sprite);
	}
}
