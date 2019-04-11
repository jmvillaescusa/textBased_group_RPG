#pragma once
#include <time.h>
#include "Basestat.h"
#include "Movement.h"

class Player : public BaseStatClass {
private:
	int luck;
	int playerPosX = 4;
	int playerPosY = 1;

public:
	int getLuck() { return luck; }
	void setLuck(int m_luck) { luck = m_luck; }

	int getPlayerPosX() { return playerPosX; }
	int getPlayerPosY() { return playerPosY; }

	void setPlayerPosX(int x) { playerPosX = x; }
	void setPlayerPosY(int y) { playerPosY = y; }

	void Update();
	Player();
	~Player();
	void playerInfo();
	//bool isRunning = true;
};

