#include "Map.h"

#include "Player.h"
#include <conio.h>
#include "Basestat.h"
#include "Enemy.h"
#include "Guards.h"
#include <iostream>

//Controls for player movement
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

int main()
{
	GuardClass Guard;
	Player player;
	bool isRunning = true;
	Map m;
	m.DislayMap();
	int c = 0;


	while (isRunning) {
		player.Update();

		//Player Movement
	}

	return 0;
}