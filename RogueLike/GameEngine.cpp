#include "GameEngine.h"



GameEngine::GameEngine()
{
	initWindow();
}


GameEngine::~GameEngine()
{
}


void GameEngine::initWindow()
{
	window.create(sf::VideoMode{ 800, 600 }, "SFML Window");
}

void GameEngine::pollEvents()
{
	sf::Event events;
	while (window.pollEvent(events))
	{
		if (events.type == sf::Event::Closed)
			running = false;
	}
}

void GameEngine::gameLoop()
{
	sf::Clock clock;

	running = true;
	while (running)
	{	
		pollEvents();
		update( clock.restart().asSeconds() );
		render();
	}

	window.close();
}

void GameEngine::update(float delta)
{
	if (currentScreen)
		currentScreen->update(delta);
}

void GameEngine::render()
{
	window.clear(sf::Color{ 100, 100, 200 });

	if (currentScreen)
		currentScreen->render(window);

	window.display();
}

void GameEngine::setCurrentScreen(Screen* screen)
{
	currentScreen = screen;
}

Screen* GameEngine::getCurrentScreen()
{
	return currentScreen;
}
