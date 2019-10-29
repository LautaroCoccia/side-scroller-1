#include "game.h"
#include "gameplay.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "textures.h"
#include "player.h"
#include "enemy.h"
#include "credits.h"
#include "menu.h"
#include<iostream>

static bool gameOver = false;
static bool pause = false;
using namespace Juego;
namespace Juego {
	bool initgame = false;
	void InitGame(void)
	{
		initgame = true;
		InitPlayer();
		InitEnemy();
		LoadTextures();
		gameOver = false;
	}
	void UpdateGame(void)
	{
		
		if (!gameOver)
		{
			if (IsKeyPressed('P')) pause = !pause;

			if (!pause)
			{

				PlayerMovement();
				EnemyMovement();
				//CollisionPvE();
				if (player.life <= 0) {
					gameOver = true;
				}
				else if (enemy.deaths == 2) {
					gameOver = true;
				}
				else
				{
					gameOver = false;
				}
			}
		}
		else
		{
			if (IsKeyPressed(KEY_ENTER))
			{
				InitGame();
				gameOver = false;
			}
		}
	}
	void Draw(void)
	{
		BeginDrawing();
		ClearBackground(BLACK);
		DrawMenu();
		if (MenuInput() == 1) InitGame();
		else if (MenuInput() == 2) {//in progress
			//DrawCredits();
		}

		DrawTexture(textureFont, screenWidth / 2 - textureFont.width / 2, screenHeight / 2 - textureFont.height / 2, WHITE);
		if (!gameOver)
		{
			DrawPlayer();
			DrawEnemy();
			if (pause) DrawText("GAME PAUSED", screenWidth / 2 - MeasureText("GAME PAUSED", 40) / 2, screenHeight / 2 - 40, 40, GRAY);
		}
		else {
			if(initgame)
				DrawText("PRESS [ENTER] TO PLAY AGAIN", GetScreenWidth() / 2 - MeasureText("PRESS [ENTER] TO PLAY AGAIN", 20) / 2, GetScreenHeight() / 2 - 50, 20, GRAY);
		
		}
		EndDrawing();
	}
	void UpdateDrawFrame(void)
	{
		UpdateGame();
		Draw();
	}
}