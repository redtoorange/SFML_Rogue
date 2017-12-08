#include "Player.h"
#include <iostream>


Player::Player()
{
	std::cout << "Allocated Player" << std::endl;

	addComponent(new SpriteComponent(this));
	addComponent(new PlayerInputComponent(this));
}


Player::~Player()
{
	std::cout << "Deallocated Player" << std::endl;
}