#include "textures.h"
#include "game.h"
namespace Juego
{
	static Image inave;
	static Image ienemy;
	static Image ifont;

	Texture2D textureNave;
	Texture2D textureEnemy;
	Texture2D textureFont;
	//cambio
	void LoadTextures()
	{
		inave = LoadImage("res/nave.png");
		ienemy = LoadImage("res/enemigo.png");
		ifont = LoadImage("res/fondelli.png");
	

		ImageResize(&ifont, screenWidth, screenHeight);

		textureNave = LoadTextureFromImage(inave);
		textureEnemy = LoadTextureFromImage(ienemy);
		textureFont = LoadTextureFromImage(ifont);

		UnloadImage(inave);
		UnloadImage(ienemy);

		UnloadImage(ifont);
	}
}