#pragma once
#include <time.h>
#include "Basestat.h"
#include "Map.h"

class Player : public BaseStatClass {
private:
	int luck;
	
public:
	int getLuck() { return luck; }
	void setLuck(int m_luck) { luck = m_luck; }
	int playerPosX = 4;
	int playerPosY = 1;
	void Update();
	Player();
	~Player();
	//bool isRunning = true;

	//Getters
	int getPlayerPosY() { return playerPosY; }
	int getPlayerPosX() { return playerPosX; }
	int getHealth() { return health; }
	int getSpeed() { return speed; }
	int getDefense() { return defense; }

	//Setters
	void setHealth(int h) { h = health; }
	void setSpeed(int s) { s = speed; }
	void setDefense(int d) { d = defense; }
	//void setPlayerPosY(int s) { s = playerPosY; }
};

