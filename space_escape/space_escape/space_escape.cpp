#include "Map.h"
#include "Player.h"
#include <conio.h>
#include "Enemy.h"
#include "Guards.h"
#include <iostream>
#include <Windows.h>
#include <mmsystem.h>

int main()
{
	
	/*mciSendString("(open\"Halo_2.mp3\"mp3", NULL, 0, NULL);
	mciSendString("play mp3", NULL, 0, NULL);
	mciSendString("play mp3 wait", NULL, 0, NULL);*/
	Player player;
	bool isRunning = true;
	int playerPosY = 1;
	GuardClass Guard;
	Map m;
	m.DislayMap();

	//PlaySound(TEXT("Halo_2.mp3"), NULL, SND_FILENAME | SND_ASYNC);
	//PlaySound(TEXT("Halo_2.mp3"), NULL, 0, NULL);

	player.Update();
	//player.getPlayerInfo;
	cout << endl;
	cout << "Player Stats:" << endl;
	cout << player.getPlayerHealth() << endl;
	cout << player.getPlayerSpeed() << endl;
	cout << player.getPlayerDefense() << endl;

	
	


	return 0;
}