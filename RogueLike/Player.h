#ifndef PLAYER_H
#define PLAYER_H

#include "GameObject.h"
#include "SpriteComponent.h"
#include "PlayerInputComponent.h"

class Player : public GameObject
{
public:
	Player();
	~Player();
};

#endif