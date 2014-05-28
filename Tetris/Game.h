#pragma once
#include <SFML\Graphics.hpp>
#include <iostream>
#include "Object.h"

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
	
	sf::RenderWindow getWindow();

private: 
	sf::Event event;

	sf::RectangleShape bord_bas;
	sf::RectangleShape bord_droit;
	sf::RectangleShape bord_gauche;
	sf::RenderWindow window;

	Object test;
};

