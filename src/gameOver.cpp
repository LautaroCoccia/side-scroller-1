#include "gameOver.h"

#include "game.h"
#include "gamePlay.h"
#include "enemy.h"
#include "player.h"
#include "menu.h"
using namespace Juego;
using namespace Menu_Section;
static bool pause = false;
static bool gameOver = false;
namespace Juego
{
	static const int Menu = 6;
	static const int Restart_Gameplay = 5;

	namespace GameOver_Section
	{
		static void GameOverInput()
		{
			if (IsKeyPressed(KEY_ONE))
			{
				selectOption = Menu;
				isScreenFinished = true;
			}

			if (IsKeyPressed(KEY_TWO))
			{
				selectOption = Restart_Gameplay;
				isScreenFinished = true;
			}
		}

		void UpdateGameOverScreen()
		{
			GameOverInput();
		}

		void InitGameOverScreen()
		{
			isScreenFinished = false;
		}

		bool FinishGameOverScreen()
		{
			return isScreenFinished;
		}

		void DrawGameOver()
		{

				DrawText(FormatText("1. Back to Menu"), screenWidth / 4 - 20, screenHeight / 2, 60, BLACK);
				DrawText(FormatText("2. Restart Match"), screenWidth / 4 - 20, screenHeight / 1.5, 60, BLACK);
			
		}
	}
}
