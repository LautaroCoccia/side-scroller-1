#include "enemy.h"
#include "textures.h"
#include <ctime>
namespace Juego {

	Enemy enemy;

	void InitEnemy() {
		rposenemy;
		enemy.deaths = 0;
		enemy.active = true;
		srand(time(NULL));
		rposenemy = rand() % screenHeight + 10;
		enemy.position = { screenWidth , rposenemy};
		enemy.size = { screenWidth / 10,20 };
		LoadTextures();
	}
	void EnemyMovement() {
		if (enemy.active) {
			enemy.position.x -= 1;
			if (enemy.position.x == 0) {
				enemy.active = false;
				if (!enemy.active)
				{
					rposenemy = rand() % screenHeight + 10;
					enemy.position = { screenWidth , rposenemy };
					enemy.active = true;
					enemy.position.x -= 1;
					enemy.deaths += 1;
				}
			}
		}
	}
	void DrawEnemy() {
		DrawTexture(textureEnemy, enemy.position.x - enemy.size.x / 2, enemy.position.y - enemy.size.y / 2, WHITE);
	}

}