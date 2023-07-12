#include "Ball.h"
#include "../../main.h"

Ball::Ball(float x, float y)
{
	this->x = x;
	this->y = y;
	vX = 0;
	vY = 0;
}

void Ball::SetV(float x, float y)
{
	vX = x / (sqrt(pow(x, 2) + pow(y, 2)));
	vY = y / (sqrt(pow(x, 2) + pow(y, 2)));
}

void Ball::Show()
{
	map[y][x] = 4;
}

void Ball::Update()
{
	x += vX;
	y += vY;
}