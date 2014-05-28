#include "Game.h"

using namespace std;
using namespace sf;

Game::Game(): test(Object())
{
	window = sf::RenderWindow(sf::VideoMode(600, 800) , "Tetris", sf::Style::Default);
	window.setFramerateLimit(6000);
	CreateScene();
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

			if (event.key.code == sf::Keyboard::Right)
			{
				//cubePosition.x += 50;
			}

			if (event.key.code == sf::Keyboard::Left)
			{
				//cubePosition.x -= 50;
			}

			if (event.key.code == sf::Keyboard::R)
			{
				//test.rotate(90);
			}
		}
	}
}

void Game::Update()
{

/*	if(test.getGlobalBounds().intersects(bord_droit.getGlobalBounds()))
	{
		cout<< "Hit" << endl;

//		if(test.getRotation() == 90 || test.getRotation() == 180 && cubePosition.x <= 550)
		{
//			cubePosition.x <= 550;
		}
	}

	if(test.getGlobalBounds().intersects(bord_gauche.getGlobalBounds()))
	{
		cubePosition.x;
		cout<< "Hit" << endl;
	}

	if(test.getGlobalBounds().intersects(bord_bas.getGlobalBounds()))
	{
		test.setPosition(cubePosition.x, 750);
		test.move(0, 0);
		cout<< "Hit" << endl;
	}*/
}

void Game::Render()
{
	window.clear();
	Draw();
	window.display();
}

void Game::CreateScene()
{
	/////////
	//Bords//
	/////////
	bord_bas = sf::RectangleShape(sf::Vector2f(600, 1));
	bord_bas.setPosition(0, 799);
	bord_bas.setFillColor(sf::Color::White);
	bord_droit = sf::RectangleShape(sf::Vector2f(1, 800));
	bord_droit.setPosition(599, 0);
	bord_droit.setFillColor(sf::Color::White);
	bord_gauche = sf::RectangleShape(sf::Vector2f(1, 800));
	bord_gauche.setPosition(0, 0);
	bord_gauche.setFillColor(sf::Color::White);
}

void Game::Draw()
{
	window.draw(bord_bas);
	window.draw(bord_droit);
	window.draw(bord_gauche);
}

sf::RenderWindow Game::getWindow()
{
	return window;
}