#ifndef PLAYER_H
#define PLAYER_H
#include "game.h"
#include <include/raylib.h>
namespace Juego {
	struct Player {
		Vector2 position;
		Vector2 size;
		int life;
	};
	#define PLAYER_MAX_LIFE 1
	extern Player player;
	void InitPlayer();
	void PlayerMovement();
	void DrawPlayer();
	void CollisionPvE();

}
#endif
