#include "Game.h"

using namespace std;

Game::Game() : window (sf::VideoMode(600, 800) , "Tetris", sf::Style::Default)
{
	window.setFramerateLimit(60);
	CreateScene();
	speed = sf::Vector2f(0, 0.01);
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
	test.move(speed.x, speed.y);

	boundingBox = test.getGlobalBounds();
	otherBox = bord_bas.getGlobalBounds();

	cout << "Hauteur de la boîte : " << boundingBox.height << endl << "Largeur de la boîte : " << boundingBox.width << endl;
	cout << "Position x de la boîte : " << boundingBox.left << endl << "Position y de la boîte : " << boundingBox.top << endl;

	if(boundingBox.intersects(bord_bas.getGlobalBounds()));
	{
		//test.setPosition(175, 725);
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
	bord_bas.setPosition(0, 800);
	bord_bas.setFillColor(sf::Color::Red);

	test = sf::RectangleShape(sf::Vector2f(200, 75));
	test.setPosition(175, 200);
}

void Game::Draw()
{
	window.draw(bord_bas);
	window.draw(test);
}