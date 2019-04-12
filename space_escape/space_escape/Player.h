#pragma once
#include <time.h>
#include "Basestat.h"

class Player : public BaseStatClass {
private:
	int luck;
	int playerPosX = 4;
	int playerPosY = 1;

public:

	int getPlayerPosX() { return playerPosX; }
	int getPlayerPosY() { return playerPosY; }

	void setPlayerPosX(int x) { playerPosX = x; }
	void setPlayerPosY(int y) { playerPosY = y; }

	void playerInfo();

	void Update();
	Player();
	~Player();
	//bool isRunning = true;

};

