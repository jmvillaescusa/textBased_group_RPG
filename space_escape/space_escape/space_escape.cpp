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

	while (isRunning) {
		player.Update();
		player.playerInfo();
	}

	//PlaySound(TEXT("Halo_2.mp3"), NULL, SND_FILENAME | SND_ASYNC);
	//PlaySound(TEXT("Halo_2.mp3"), NULL, 0, NULL);

	
	//player.getPlayerInfo;
	

	
	


	return 0;
}