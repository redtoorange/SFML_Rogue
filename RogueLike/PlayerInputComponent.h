#pragma once
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

