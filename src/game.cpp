#include "game.h"
#include "gameplay.h"
using namespace Juego;
void Juego::Execute() {
	InitWindow(screenWidth, screenHeight, "Arkanoid");
	//InitGame();
	SetTargetFPS(60);
	while (!WindowShouldClose())
	{
		UpdateDrawFrame();
	}
	CloseWindow();
	
}
