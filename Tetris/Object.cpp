#include "Object.h"

using namespace std;
using namespace sf;

Object::Object(void)
{
	speed = Vector2f(0, 0.1);
	createObject();
}

void Object::createObject()
{
	rectangle = RectangleShape(Vector2f(200, 100));
	rectangle.setOrigin(100, 50);
	rectangle.setPosition(200, 50);
	rectangle.setFillColor(Color::Red);
}

void Object::drawObject()
{
	window.draw(rectangle);
}