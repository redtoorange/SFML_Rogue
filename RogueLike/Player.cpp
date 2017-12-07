#include "Player.h"



Player::Player()
{
	std::cout << "Allocated Player" << std::endl;

	addComponent(new SpriteComponent(this));
	addComponent(new TransformComponent(this));
	addComponent(new PlayerInputComponent(this));
}


Player::~Player()
{
	std::cout << "Deallocated Player" << std::endl;
}
