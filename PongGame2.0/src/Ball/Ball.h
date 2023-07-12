#pragma once

#include <math.h>

class Ball
{
public:
	Ball(float x, float y);
	void	SetV(float x, float y);
	void	Update();
private:
	float	x;
	float	y;
	float	vX;
	float	vY;
	void	Show();
};

