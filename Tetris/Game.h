#pragma once
#include <SFML\Graphics.hpp>
#include <iostream>

class Game
{
public:
	Game(void);
	~Game(void);

	void Run();

	void Event();

	void Render();

	void CreateScene();

	void Update();

	void Draw();

private: 
	sf::RenderWindow window;

	sf::Event event;

	sf::RectangleShape bord_bas;
	sf::RectangleShape test;
	sf::FloatRect boundingBox;
	sf::FloatRect otherBox;

	sf::Vector2f speed;
};

