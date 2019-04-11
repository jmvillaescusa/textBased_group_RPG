//Jaimeson
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
	GuardClass Guard;

	Map m;
	m.DislayMap();


	while (isRunning) {
		player.Update();

	}

	return 0;
}