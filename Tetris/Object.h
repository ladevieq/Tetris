#pragma once
#include <SFML\Graphics.hpp>
#include <iostream>
#include <ctime>
#include <fstream>
#include <string>
#include <vector>

class Object : public sf::Drawable, public sf::Transformable
{
public:
	Object(void);

	int rotate(int shape);

	void Update(int tileNumber); 

	void Droite();

	void Gauche();

	void collisionBas(sf::FloatRect bounds);

	void barreColor();

	bool load(const std::string& tileset, const int *tiles, int width, int height);

	int generate();

private:

	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const
    {
        // et on dessine enfin le tableau de vertex
		for(int i = 0; i < 16; i++)
			target.draw(forme[i]);
    }

	sf::Vector2f speed;
	sf::Vector2f posShape;
	float *posYShape;

	sf::Texture m_tile;
	sf::RectangleShape m_vertices;
	sf::Vertex* quad;
	sf::Sprite* forme;

	int right, left;
};

