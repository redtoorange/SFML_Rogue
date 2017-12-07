#include <SFML/Graphics.hpp>
#include "GameEngine.h"
#include "Player.h"
#include <iostream>
#include "TransformComponent.h"
using namespace std;



int main()
{

	Screen s;
	s.addGameObject(new Player);

	GameEngine engine;
	engine.setCurrentScreen(&s);
	engine.gameLoop();


	return 0;
}