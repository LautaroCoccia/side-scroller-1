#include "menu.h"

#include <include/raylib.h>
#include "game.h"
#include "player.h" 
using namespace Juego;

namespace Juego
{
	enum gameActions
	{
		Game,
		Credits,
		Menu,
		GameOver,
	};

	namespace Menu_Section
	{
		static void MenuInput()
		{

			if (IsKeyPressed(KEY_ONE))
			{
				selectOption = Game;
				isScreenFinished = true;
			}


			if (IsKeyPressed(KEY_TWO))
			{
				selectOption = Credits;
				isScreenFinished = true;
			}

		}

		void UpdateMenuScreen()
		{
			MenuInput();
		}

		void InitMenuScreen()
		{
			isScreenFinished = false;
		}

		bool FinishMenuScreen()
		{
			return isScreenFinished;
		}

		void DrawMenu()
		{

			DrawText(FormatText("Gradius"), screenWidth / 2.5, 20, 60, BLUE);
			DrawText(FormatText("1. Play"), screenWidth / 3.5, screenHeight / 5.2, 60, BLUE);
			DrawText(FormatText("2. Credits "), screenWidth / 3.5, screenHeight / 3.2, 60, BLUE);
			DrawText(FormatText("Carrizo Santiago Agustin"), screenWidth / 5, screenHeight / 1.1, 60, BLUE);
		}
	}
}