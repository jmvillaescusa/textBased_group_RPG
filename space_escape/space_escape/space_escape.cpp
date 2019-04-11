#include "Map.h"
#include "Player.h"
#include <conio.h>
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

	player.Update();
	//player.getPlayerInfo;
	cout << endl;
	cout << "Player Stats:" << endl;
	cout << player.getPlayerHealth() << endl;
	cout << player.getPlayerSpeed() << endl;
	cout << player.getPlayerDefense() << endl;

	
	


	return 0;
}