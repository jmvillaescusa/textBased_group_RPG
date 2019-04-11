#pragma once
#include <time.h>
#include "Basestat.h"
#include "Movement.h"

class Player : public BaseStatClass {
private:
	int luck;

public:

	int getPlayerPosX() { return playerPosX; }
	int getPlayerPosY() { return playerPosY; }

	void setPlayerPosX(int x) { playerPosX = x; }
	void setPlayerPosY(int y) { playerPosY = y; }

	void Update();
	Player();
	~Player();
	//bool isRunning = true;

};

