#include "Game.h"

using namespace std;

Game::Game() : window (sf::VideoMode(600, 800) , "Tetris", sf::Style::Default)
{
	CreateScene();
	speed = sf::Vector2f(0, 0.005);
}

Game::~Game(void)
{
}

void Game::Run()
{
	while(window.isOpen())
	{
		Event();
		Update();
		Render();
	}
}

void Game::Event()
{
	while(window.pollEvent(event))
	{
		if(event.type == sf::Event::Closed)
		{
			window.close();
		}

		if (event.type == sf::Event::KeyPressed)
		{
			if (event.key.code == sf::Keyboard::Escape)
			{
				window.close();
			}
		}
	}
}

void Game::Update()
{
	//test.move(speed.x, speed.y);


	if(test.getLocalBounds().intersects(bord_bas.getLocalBounds()));
	{
		cout<< "Hit" << endl;
	}
}

void Game::Render()
{
	window.clear();
	Draw();
	window.display();
}

void Game::CreateScene()
{
	bord_bas = sf::RectangleShape(sf::Vector2f(600, 1));
	bord_bas.setPosition(0, 600);
	bord_bas.setFillColor(sf::Color::Red);

	otherBox = bord_bas.getLocalBounds();

	test = sf::RectangleShape(sf::Vector2f(200, 75));
	test.setPosition(175, 0);

	boundingBox = test.getLocalBounds();
}

void Game::Draw()
{
	window.draw(bord_bas);
	window.draw(test);
}