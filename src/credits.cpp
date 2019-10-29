#include "credits.h"

#include "game.h"
#include "menu.h"
#include "gameplay.h"
using namespace Juego;
namespace Juego
{
	bool initCredits = false;
	void DrawCredits()
	{
		initCredits = true;
		DrawText(FormatText("Credits"), screenWidth / 2.5, 20, 60, BLUE);
		DrawText(FormatText("Version 0.1"), screenWidth / 3.5, screenHeight / 7, 60, BLUE);
		DrawText(FormatText("Game made by"), screenWidth / 4, screenHeight / 4.0f, 60, BLUE);
		DrawText(FormatText("Carrizo Santiago"), screenWidth / 3, screenHeight / 3.0f, 60, BLUE);
		DrawText(FormatText("Tools Used"), screenWidth / 4, screenHeight / 2.0f, 60, BLUE);
		DrawText(FormatText("Piskel"), screenWidth / 3, screenHeight / 1.7f, 60, BLUE);
		DrawText(FormatText("Git HUB and Git CMD"), screenWidth / 3, screenHeight / 1.7f, 60, BLUE);
		DrawText(FormatText("Visual Studio 2017"), screenWidth / 3, screenHeight / 1.5f, 60, BLUE);
		DrawText(FormatText("Raylib"), screenWidth / 3, screenHeight / 1.35f, 60, BLUE);
		DrawText(FormatText("1. Go back to Menu"), 10, screenHeight - 80, 60, BLUE);
		if (IsKeyPressed(KEY_ONE))
		{
			MenuInput();
			initCredits = false;
		}
	}

}