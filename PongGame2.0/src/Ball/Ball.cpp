#include "Ball.h"
#include "../../main.h"

Ball::Ball()
{

}

Ball::Ball(float x, float y)
{
	cX = x;
	cY = y;
	vX = 0;
	vY = 0;
}

void Ball::SetV(float x, float y)
{
	vX = x / (sqrt(pow(x, 2) + pow(y, 2)));
	vY = y / (sqrt(pow(x, 2) + pow(y, 2)));
	if (vY < 0.2)
		SetV(vX, 0.2);
}

bool Ball::Collide(Player player)
{
	if (map[cY - vY][cX] == 2)
	{
		map[cY - vY][cX] = 0;
		vY *= -1;
		return true;
	}
	else if (map[cY - vY][cX] != 0 && map[cY - vY][cX] != 4)
	{
		vY *= -1;
		return true;
	}
	if (map[cY][cX + vX] == 2)
	{
		map[cY][cX + vX] = 0;
		vX *= -1;
		return true;
	}
	else if ((cX + vX) >= player.x && (cX + vX) <= player.x - 1 + pSize && (int)cY == 25)
	{
		SetV(vX + player.vX, vY);
		vY *= -1;
	}
	else if (map[cY][cX + vX] != 0 && map[cY][cX + vX] != 4)
	{
		vX *= -1;
		return true;
	}
	return false;
}

void Ball::Show()
{
	map[cY][cX] = 4;
}

void Ball::Update(double deltaTime, Player player)
{
	Collide(player);
	cX += vX / (deltaTime * 2);
	cY -= vY / (deltaTime * 2);
	Show();
}