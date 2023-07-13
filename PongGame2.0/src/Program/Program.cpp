#include "Program.h"

Program::Program()
{
	texture =
	{
		{0, ' '},
		{1, '#'},
		{2, '\xdc'},
		{3, '\xdf'},
		{4, 'O'}
	};
	input =
	{
		{"Horizontal", 0},
		{"Speed", 0}
	};
	ball = Ball((120 - pSize) / 2, (30 - 3) - 2);
	player = Player();
	g_map = Map();
	scr = Screen(&map, texture);
	ball.SetV(0, 1);
	oldTime = clock();
}

void Program::Input()
{
	input["Horizontal"] = 0;
	if (GetKeyState('D') & 0x8000)
		input["Horizontal"] += 1;
	if (GetKeyState('A') & 0x8000)
		input["Horizontal"] -= 1;
	if (GetKeyState(VK_SPACE) & 0x8000)
		input["Speed"] = 4;
	else
		input["Speed"] = 1;
}

void Program::Update()
{
	g_map.Reset();
	deltaTime = clock() - oldTime;
	oldTime = clock();
	Input();
	player.SetV((input["Speed"] * (float)input["Horizontal"]) / (40));
	player.Update();
	ball.Update(40 / input["Speed"], player);
	scr.Update();
}
