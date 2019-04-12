//Dylan Rampersad

#pragma once
#include <time.h>
#include "Basestat.h"
#include "Movement.h"

class Player : public BaseStatClass {
private:
	int luck;
	int playerPosX;
	int playerPosY;

public:

	int getPlayerPosX() { return playerPosX; }
	int getPlayerPosY() { return playerPosY; }

	void setPlayerPosX(int x) { playerPosX = x; }
	void setPlayerPosY(int y) { playerPosY = y; }

	void Update();
	Player();
	~Player();
	void playerInfo();
	//bool isRunning = true;

	//Getters
	int getPlayerPosY() { return playerPosY; }
	int getPlayerPosX() { return playerPosX; }
	int getHealth() { return health; }
	int getSpeed() { return speed; }
	int getrDefense() { return defense; }
	void getPlayerInfo() { return playerInfo(); }

	//Setters
	void setHealth(int h) { h = health; }
	void setSpeed(int s) { s = speed; }
	void setDefense(int d) { d = defense; }
	
	//void setPlayerPosY(int s) { s = playerPosY; }

	
	//void *playerInfo();
	void getPlayerInfo(int temp) { void playerInfo(); }
};

