#include "menu.h"

#include <include/raylib.h>
#include "game.h"
#include "player.h" 
#include "gameplay.h"
#include <iostream>
using namespace std;
using namespace Juego;
namespace Juego
{
	extern bool initMenu = false;
	float MenuInput()
	{
	    initMenu = true;
		if (IsKeyPressed(KEY_ONE))
		{
			InitGame();
			return 1;
			initMenu = false;
		}
		else if (IsKeyPressed(KEY_TWO))
		{
			Option = 2;
			return 2;
			initMenu = false;

		}
		else return 0;

	}
	void DrawMenu()
	{

		DrawText(FormatText("Gradius"), screenWidth / 2.5, 20, 60, BLUE);
		DrawText(FormatText("1. Play"), screenWidth / 3.5, screenHeight / 5.2, 60, BLUE);
		DrawText(FormatText("2. Credits "), screenWidth / 3.5, screenHeight / 3.2, 60, BLUE);
		//DrawText(FormatText("Carrizo Santiago Agustin"), screenWidth / 5, screenHeight / 1.1, 60, BLUE);
	}

}