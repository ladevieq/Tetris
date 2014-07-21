#include "Object.h"

using namespace std;
using namespace sf;

Object::Object()
{
	speed = Vector2f(0, 0);
	posShape = Vector2f(0, 0);
	right = 0;
	left = 0;
	posXYShape = new Vector2f[4];
	forme = new Sprite[16];
	for (unsigned int i = 0; i < 4; ++i)
		for (unsigned int j = 0; j < 4; ++j)
		{	
			//forme.push_back();
			
			// on récupère le numéro de tuile courant
			forme[i + j * 4].setPosition(i * 50, j * 50);
		}
}

bool Object::load(const string& tileset, const int *tiles, int width, int height, FloatRect bounds)
{	
	// on charge la texture du tileset
	if (!m_tile.loadFromFile(tileset))
		return false;

	// on remplit le tableau de vertex, avec un quad par tuile
	for (unsigned int i = 0; i < width; ++i)
		for (unsigned int j = 0; j < height; ++j)
		{	
			// on récupère le numéro de tuile courant
			int tileNumber = i + j * width;

			if(tiles[tileNumber] == 1)
				forme[tileNumber].setTexture(m_tile);

			
		}

	Update(bounds);
	return true;
}

int Object::rotate(int shape)
{
	forme = new Sprite[16];
	for (unsigned int i = 0; i < 4; ++i)
		for (unsigned int j = 0; j < 4; ++j)
		{	
			// on récupère le numéro de tuile courant
			int tileNumber = i + j * 4;
			forme[tileNumber].setPosition(posXYShape[i].x, posXYShape[j].y);
		}
	shape = ((shape + 1) % 4 == 0 ? shape - 3 : shape + 1);
	return shape;
}

void Object::Update(FloatRect bounds)
{
	for(int i = 0; i < 16; i++)
	{
		if(forme[i].getGlobalBounds().intersects(bounds))
			for(int j = 0; j < 16; j++)
				forme[j].move(0, 0);
	}

	if(!forme[12].getGlobalBounds().intersects(bounds))
			for(int j = 0; j < 16; j++)
				forme[j].move(0, 1);

	for (unsigned int i = 0; i < 1; ++i)
		for (unsigned int j = 0; j < 4; ++j)
			posXYShape[j].y = forme[i + j * 4].getPosition().y;

	for (unsigned int i = 0; i < 4; ++i)
		for (unsigned int j = 0; j < 1; ++j)
			posXYShape[i].x = forme[i].getPosition().x;
}

void Object::Droite()
{
	if(right < 10)
	{
		left--;
		right++;
		for (unsigned int i = 0; i < 4; ++i)
			for (unsigned int j = 0; j < 4; ++j)
			{
				posShape = forme[i + j * 4].getPosition();
				forme[i + j * 4].setPosition(posShape.x + 50, posShape.y);
			}
	}
}

void Object::Gauche()
{
	if(left < 0)
	{
		right--;
		left++;
		for (unsigned int i = 0; i < 4; ++i)
			for (unsigned int j = 0; j < 4; ++j)
			{
				posShape = forme[i + j * 4].getPosition();
				forme[i + j * 4].setPosition(posShape.x - 50, posShape.y);
			}
	}
}

void Object::barreColor()
{
}

int Object::generate()
{
	int g = (rand() % 7) * 4;
	return g;
}