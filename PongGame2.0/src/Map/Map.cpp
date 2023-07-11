#include "Map.h"
#include "../../main.h"

Map::Map()
{
	for (int i = 0; i < map.size(); i++)
	{
		for (int j = 0; j < map[0].size(); j++)
		{
			if (!(i % 29) || !(j % 119))
				map[i][j] = 1;	
			else if (4 % i == i)
				map[i][j] = 2;
		}
	}
}

bool Map::Collide(int x, int y)
{
	if (map[y][x] == 2)
		map[y][x] == 0;
	return map[y][x] == 2;
}

