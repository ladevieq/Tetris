#include "Game.h"

using namespace std;
using namespace sf;

Game::Game(): window (sf::RenderWindow(sf::VideoMode(600, 800) , "Tetris", sf::Style::Default))
{
	window.setFramerateLimit(60);
	width = 4;
	height = 4;
	tileSize = Vector2u(50, 50);
	fileName = "Texture_Tetris_1.png";
	randomShape = tile.generate();
	CreateScene();
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

				window.close();

			if (event.key.code == sf::Keyboard::Right)
				tile.Droite();

			if (event.key.code == sf::Keyboard::Left)
				tile.Gauche();

			if (event.key.code == sf::Keyboard::R)
				randomShape = tile.rotate(randomShape);
		}
	}
}

void Game::Update()
{
	switch (randomShape)
	{
		case 0:
		{
			const int shapes [][16] = {{1, 0, 0, 0,
										1, 0, 0, 0,
										1, 0, 0, 0,
										1, 0, 0, 0,}};

			tile.load(fileName, *shapes, width, height);
			break;
		}

		case 1:
		{
			const int shapes [][16] = {{0, 0, 0, 0,
										0, 0, 0, 0,
										0, 0, 0, 0,
										1, 1, 1, 1,}};

			tile.load(fileName, *shapes, width, height);
			break;
		}

		case 2:
		{
			const int shapes [][16] = {{1, 0, 0, 0,
										1, 0, 0, 0,
										1, 0, 0, 0,
										1, 0, 0, 0,}};

			tile.load(fileName, *shapes, width, height);
			break;
		}

		case 3:
		{
			const int shapes [][16] = {{0, 0, 0, 0,
										0, 0, 0, 0,
										0, 0, 0, 0,
										1, 1, 1, 1,}};

			tile.load(fileName, *shapes, width, height);
			break;
		}

		case 4:
		{
			const int shapes [][16] = {{0, 0, 0, 0,
										0, 0, 0, 0,
										1, 1, 0, 0,
										1, 1, 0, 0,}};

			tile.load(fileName, *shapes, width, height);
			break;
		}

		case 5:
		{
			const int shapes [][16] = {{0, 0, 0, 0,
										0, 0, 0, 0,
										1, 1, 0, 0,
										1, 1, 0, 0,}};

			tile.load(fileName, *shapes, width, height);
			break;
		}

		case 6:
		{
			const int shapes [][16] = {{0, 0, 0, 0,
										0, 0, 0, 0,
										1, 1, 0, 0,
										1, 1, 0, 0,}};

			tile.load(fileName, *shapes, width, height);
			break;
		}

		case 7:
		{
			const int shapes [][16] = {{0, 0, 0, 0,
										0, 0, 0, 0,
										1, 1, 0, 0,
										1, 1, 0, 0,}};

			tile.load(fileName, *shapes, width, height);
			break;
		}

		case 8:
		{
			const int shapes [][16] = {{0, 0, 0, 0,
										0, 0, 0, 0,
										0, 1, 1, 0,
										1, 1, 0, 0,}};

			tile.load(fileName, *shapes, width, height);
			break;
		}

		case 9:
		{
			const int shapes [][16] = {{0, 0, 0, 0,
										1, 0, 0, 0,
										1, 1, 0, 0,
										0, 1, 0, 0,}};

			tile.load(fileName, *shapes, width, height);
			break;
		}

		case 10:
		{
			const int shapes [][16] = {{0, 0, 0, 0,
										0, 0, 0, 0,
										0, 1, 1, 0,
										1, 1, 0, 0,}};

			tile.load(fileName, *shapes, width, height);
			break;
		}

		case 11:
		{
			const int shapes [][16] = {{0, 0, 0, 0,
										1, 0, 0, 0,
										1, 1, 0, 0,
										0, 1, 0, 0,}};

			tile.load(fileName, *shapes, width, height);
			break;
		}
		case 12:
		{
			const int shapes [][16] = {{0, 0, 0, 0,
										0, 0, 0, 0,
										1, 1, 0, 0,
										0, 1, 1, 0,}};

			tile.load(fileName, *shapes, width, height);
			break;
		}

		case 13:
		{
			const int shapes [][16] = {{0, 0, 0, 0,
										0, 1, 0, 0,
										1, 1, 0, 0,
										1, 0, 0, 0,}};

			tile.load(fileName, *shapes, width, height);
			break;
		}

		case 14:
		{
			const int shapes [][16] = {{0, 0, 0, 0,
										0, 0, 0, 0,
										0, 1, 1, 0,
										1, 1, 0, 0,}};

			tile.load(fileName, *shapes, width, height);
			break;
		}

		case 15:
		{
			const int shapes [][16] = {{0, 0, 0, 0,
										0, 1, 0, 0,
										1, 1, 0, 0,
										1, 0, 0, 0,}};

			tile.load(fileName, *shapes, width, height);
			break;
		}

		case 16:
		{
			const int shapes [][16] = {{0, 0, 0, 0,
										0, 0, 0, 0,
										0, 1, 0, 0,
										1, 1, 1, 0,}};

			tile.load(fileName, *shapes, width, height);
			break;
		}

		case 17:
		{
			const int shapes [][16] = {{0, 0, 0, 0,
										1, 0, 0, 0,
										1, 1, 0, 0,
										1, 0, 0, 0,}};

			tile.load(fileName, *shapes, width, height);
			break;
		}

		case 18:
		{
			const int shapes [][16] = {{0, 0, 0, 0,
										0, 0, 0, 0,
										1, 1, 1, 0,
										0, 1, 0, 0,}};

			tile.load(fileName, *shapes, width, height);
			break;
		}

		case 19:
		{
			const int shapes [][16] = {{0, 0, 0, 0,
										0, 1, 0, 0,
										1, 1, 0, 0,
										0, 1, 0, 0,}};

			tile.load(fileName, *shapes, width, height);
			break;
		}

		case 20:
		{
			const int shapes [][16] = {{0, 0, 0, 0,
										1, 0, 0, 0,
										1, 0, 0, 0,
										1, 1, 0, 0,}};

			tile.load(fileName, *shapes, width, height);
			break;
		};

		case 21:
		{
			const int shapes [][16] = {{0, 0, 0, 0,
										0, 0, 0, 0,
										1, 1, 1, 0,
										1, 0, 0, 0,}};

			tile.load(fileName, *shapes, width, height);
			break;
		};

		case 22:
		{
			const int shapes [][16] = {{0, 0, 0, 0,
										1, 1, 0, 0,
										0, 1, 0, 0,
										0, 1, 0, 0,}};

			tile.load(fileName, *shapes, width, height);
			break;
		};

		case 23:
		{
			const int shapes [][16] = {{0, 0, 0, 0,
										0, 0, 0, 0,
										0, 0, 1, 0,
										1, 1, 1, 0,}};

			tile.load(fileName, *shapes, width, height);
			break;
		};

		case 24:
		{
			const int shapes [][16] = {{0, 0, 0, 0,
										0, 1, 0, 0,
										0, 1, 0, 0,
										1, 1, 0, 0,}};

			tile.load(fileName, *shapes, width, height);
			break;
		};

		case 25:
		{
			const int shapes [][16] = {{0, 0, 0, 0,
										0, 0, 0, 0,
										1, 0, 0, 0,
										1, 1, 1, 0,}};

			tile.load(fileName, *shapes, width, height);
			break;
		};

		case 26:
		{
			const int shapes [][16] = {{0, 0, 0, 0,
										1, 1, 0, 0,
										1, 0, 0, 0,
										1, 0, 0, 0,}};

			tile.load(fileName, *shapes, width, height);
			break;
		};

		case 27:
		{
			const int shapes [][16] = {{0, 0, 0, 0,
										0, 0, 0, 0,
										1, 1, 1, 0,
										0, 0, 1, 0,}};

			tile.load(fileName, *shapes, width, height);
			break;
		};
		default:
			cout << randomShape << endl;
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
	/////////
	//Bords//
	/////////
	bord_bas = sf::RectangleShape(sf::Vector2f(600, 1));
	bord_bas.setPosition(0, 800);
	bord_bas.setFillColor(sf::Color::White);
	bord_droit = sf::RectangleShape(sf::Vector2f(75, 800));
	bord_droit.setPosition(525, 0);
	bord_droit.setFillColor(sf::Color::White);
	bord_gauche = sf::RectangleShape(sf::Vector2f(75, 800));
	bord_gauche.setPosition(0, 0);
	bord_gauche.setFillColor(sf::Color::White);

}

void Game::Draw()
{
	/*window.draw(bord_bas);
	window.draw(bord_droit);
	window.draw(bord_gauche);*/
	window.draw(tile);
}