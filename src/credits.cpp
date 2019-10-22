#include "credits.h"

#include "game.h"
#include "menu.h"

using namespace Juego;
using namespace Menu_Section;
namespace Juego
{
	static const int Menu = 6;

	namespace Credits_Section
	{
		static void CreditosInput()
		{

			if (IsKeyPressed(KEY_ONE))
			{

				selectOption = Menu;
				isScreenFinished = true;
			}
		}

		void UpdateCreditsScreen()
		{


			CreditosInput();
		}

		void InitCreditsScreen()
		{
			isScreenFinished = false;
		}

		bool FinishCreditsScreen()
		{
			return isScreenFinished;
		}

		void DrawCredits()
		{
			DrawText(FormatText("Credits"), screenWidth / 3, 20, 60, WHITE);
			DrawText(FormatText("Version 0.1"), screenWidth / 3, screenHeight / 7, 60, WHITE);
			DrawText(FormatText("Game made by"), screenWidth / 4, screenHeight / 4.0f, 60, WHITE);
			DrawText(FormatText("Carrizo Santiago"), screenWidth / 3, screenHeight / 3.0f, 60, WHITE);
			DrawText(FormatText("Tools Used"), screenWidth / 4, screenHeight / 2.0f, 60, WHITE);
			DrawText(FormatText("Piskel"), screenWidth / 3, screenHeight / 1.7f, 60, WHITE);
			DrawText(FormatText("Git HUB and Git CMD"), screenWidth / 3, screenHeight / 1.7f, 60, WHITE);
			DrawText(FormatText("Visual Studio 2017"), screenWidth / 3, screenHeight / 1.5f, 60, WHITE);
			DrawText(FormatText("Raylib"), screenWidth / 3, screenHeight / 1.35f, 60, WHITE);
			DrawText(FormatText("1. Go back to Menu"), 10, screenHeight - 80, 60, WHITE);
		}
	}
}