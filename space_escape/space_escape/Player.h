#pragma once
#include <time.h>
#include "Basestat.h"
#include "Map.h"
#include "frames.h"

class Player : public BaseStatClass {
private:
	int luck;
	
public:
	int playerHealth = 100;
	int playerSpeed = 50;
	int playerDefense = 40;
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
	int getPlayerHealth() { return playerHealth; }
	int getPlayerSpeed() { return playerSpeed; }
	int getPlayerDefense() { return playerDefense; }

	//Setters
	void setHealth(int h) { h = health; }
	void setSpeed(int s) { s = speed; }
	void setDefense(int d) { d = defense; }
	//void setPlayerPosY(int s) { s = playerPosY; }

	void playerInfo();
};

