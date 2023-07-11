#pragma once

class Player
{
public:
	Player();
	void	SetV(float a);
	void	Update();
private:
	void	Show();
	float	x;
	float	vX;
};

