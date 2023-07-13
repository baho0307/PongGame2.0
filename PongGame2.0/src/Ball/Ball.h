#pragma once

#include <math.h>
#include "../Player/Player.h"

class Ball
{
public:
	Ball();
	Ball(float x, float y);
	void	SetV(float x, float y);
	bool	Collide(Player player);
	void	Update(double deltaTime, Player player);
private:
	float	cX;
	float	cY;
	float	vX;
	float	vY;
	void	Show();
};

