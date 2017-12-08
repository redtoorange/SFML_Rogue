#include <SFML/Graphics.hpp>
#include "GameEngine.h"
#include "Player.h"
#include <iostream>
#include "TransformComponent.h"
using namespace std;

//class TestScreen : public Screen
//{
//public:
//	TestScreen()
//	{
//		cout << "TestScreen Built" << endl;
//		auto p = new Player;
//
//		addGameObject(p);
//	}
//
//	~TestScreen()
//	{
//		
//	}
//};


int main()
{
//	TestScreen ts;

	GameEngine engine;
//	engine.setCurrentScreen(&ts);
	engine.gameLoop();


	return 0;
}