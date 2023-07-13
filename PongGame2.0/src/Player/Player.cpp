#include "Player.h"
#include "../../main.h"

Player::Player()
{
	x = (120 - pSize) / 2;
	vX = 0;
}

void Player::Show()
{
	for (int i = 0; i < pSize; i++)
		map[map.size() - 3][x + i] = 3;
}

void Player::SetV(float a)
{
	vX = a;
}

void Player::Update()
{
	if (x + vX > 1 && x + pSize + vX < 120)
		x += vX;
	Show();
}
