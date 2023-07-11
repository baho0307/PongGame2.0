#include "Player.h"
#include "../../main.h"

Player::Player()
{
	x = (128 - pSize) / 2;
	vX = 0;
}

void Player::Show()
{
	map[map.size() - 3][x] = 3;
}

void Player::SetV(float a)
{
	vX = a;
}

void Player::Update()
{
	if (x + vX > 0 && x + pSize + vX < 119)
		x += vX;
	Show();
}
