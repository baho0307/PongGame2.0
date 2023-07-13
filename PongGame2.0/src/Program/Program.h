#pragma once

#include <Windows.h>
#include <iostream>
#include "../Ball/Ball.h"
#include "../../main.h"
#include "../Map/Map.h"
#include "../Player/Player.h"
#include "../Screen/Screen.h"

class Program
{
public:
	Program();
	void	Update();
private:
	Player	player;
	Screen	scr;
	Map		g_map;
	Ball	ball;
	void	Input();
	clock_t	oldTime;
	double	deltaTime;
	std::map<int, char>			texture;
	std::map<std::string, int>	input;
};

