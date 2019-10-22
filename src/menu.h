#ifndef MENU_H
#define MENU_H
namespace Juego
{
	static bool isScreenFinished;
	static int selectOption;
	namespace Menu_Section
	{

		void UpdateMenuScreen();
		void InitMenuScreen();
		bool FinishMenuScreen();
		void DrawMenu();
	}
}
#endif 