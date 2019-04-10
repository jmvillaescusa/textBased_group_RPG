#include "Map.h"
#include "Player.h"
#include <conio.h>
#include "Basestat.h"
#include "Enemy.h"
#include "Guards.h"
#include <iostream>




int main()
{
	Player player;
	bool isRunning = true;
	int playerPosY = 1;
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
		player.Update();
	}


	return 0;
}