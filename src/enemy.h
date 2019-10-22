#ifndef ENEMY_H
#define ENEMY_H
#include "game.h"

#include <iostream>
using namespace std;
#include <include/raylib.h>
namespace Juego {
	struct Enemy {
		Vector2 position;
		Vector2 size;
		bool active;
		int deaths;
	};
	extern Enemy enemy;
	static float rposenemy;

	void InitEnemy();
	void EnemyMovement();
	void DrawEnemy();

}
#endif