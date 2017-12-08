#ifndef PLAYER_INPUT_COMPONENT_H
#define PLAYER_INPUT_COMPONENT_H

#include "Component.h"
#include "TransformComponent.h"

class PlayerInputComponent :
	public Component
{
public:
	PlayerInputComponent(GameObject* parent);
	~PlayerInputComponent();


	void update(float) override;

private:
	TransformComponent* playerTransform = nullptr;
	int speed = 100;
};

#endif