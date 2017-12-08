#include "PlayerInputComponent.h"

PlayerInputComponent::PlayerInputComponent(GameObject* parent) : Component(parent)
{
	type = "inputComponent";
}


PlayerInputComponent::~PlayerInputComponent()
{
}


void PlayerInputComponent::update(float delta)
{
	if( parent && !playerTransform) 
		playerTransform = dynamic_cast<TransformComponent*>(parent->getComponent("transform"));


	if( playerTransform )
	{
		sf::Vector2f input;

		if( sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
			input.y -= 1;

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
			input.y += 1;
		
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
			input.x -= 1;
		
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
			input.x += 1;
		

		if (input.x != 0 || input.y != 0)
		{
			auto pos = playerTransform->getPosition();
			playerTransform->setPosition(pos.x + (speed * input.x * delta), pos.y + (speed * input.y * delta));
		}
			
	}
}
