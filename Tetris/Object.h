#pragma once
#include <SFML\Graphics.hpp>
#include <iostream>
#include "Game.h"

class Object
{
public:
	Object(void);

	void createObject();

	void drawObject();

private: 
	sf::Vector2f speed;
	sf::RectangleShape rectangle;
	sf::RenderWindow window;
};

