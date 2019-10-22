#include "player.h"
#include "textures.h"
#include "enemy.h"
#include "gameplay.h"
namespace Juego {

	Player player;

	void InitPlayer() {
		// Initialize player
		player.position = { screenWidth / 4, screenHeight / 2 };
		player.size = { screenWidth / 10,20 };
		player.life = PLAYER_MAX_LIFE;
		LoadTextures();
	}
	void PlayerMovement() {
		if (IsKeyDown(KEY_LEFT)) player.position.x -= 5;
		if ((player.position.x - player.size.x / 2) <= 0) player.position.x = player.size.x / 2;
		if (IsKeyDown(KEY_RIGHT)) player.position.x += 5;
		if ((player.position.x + player.size.x / 2) >= screenWidth) player.position.x = screenWidth - player.size.x / 2;
		if (IsKeyDown(KEY_UP)) player.position.y -= 5;
		if ((player.position.y - player.size.y / 2) <= 0) player.position.y = player.size.y / 2;
		if (IsKeyDown(KEY_DOWN)) player.position.y += 5;
		if ((player.position.y + player.size.y / 2) >= screenHeight) player.position.y = screenHeight - player.size.y / 2;
	}
	void DrawPlayer() {
		// Draw player 
		DrawTexture(textureNave,player.position.x - player.size.x / 2, player.position.y - player.size.y / 2, WHITE);

		// Draw player lives
		//for (int i = 0; i < player.life; i++) DrawTexture(textureLives, 20 + 35 * i, screenHeight - 35, WHITE);
	}
	/*void CollisionPvE() {
		if (player.position.x==(enemy.position.x+enemy.size.y)){
			player.life--;
		}
	}*/
}