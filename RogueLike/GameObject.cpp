#include "GameObject.h"

GameObject::GameObject()
{
	transform = new TransformComponent(this);
	addComponent( transform );
}


GameObject::~GameObject()
{
	transform = nullptr;
}


void GameObject::update(float deltaTime )
{
	for (auto& comp : components)
		comp->update(deltaTime);
}

void GameObject::render(sf::RenderWindow& window )
{
	for (auto& comp : components)
		comp->render( window );
}


void GameObject::addComponent(Component* comp)
{
	components.push_back(std::unique_ptr<Component>{ comp });
}

Component* GameObject::getComponent(std::string type )
{
	for (auto& comp : components)
	{
		if (comp->getType() == type)
			return comp.get();
	}

	return nullptr;
}


TransformComponent* GameObject::getTransform() const
{
	return transform;
}
