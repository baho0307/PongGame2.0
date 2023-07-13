#pragma once

#include <vector>

class Map
{
public:
	Map();
	void	Reset();
	bool	Collide(int x, int y);
};

