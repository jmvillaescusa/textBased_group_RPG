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
	Player player;
	bool isRunning = true;
	GuardClass Guard;

	Map m;
	m.DislayMap();
	int c = 0;
	int playerPosX = 4;
	int playerPosY = 1;

	while (isRunning) {
		//player.Update();
		m.DislayMap();
		//Player Movement
	}

	return 0;
}