#pragma once
#include <time.h>
#include <conio.h>
#include "Basestat.h"
#include "frames.h"
#include "Map.h"

class Player : public BaseStatClass {
private:
	int luck;
	int playerPosX = 4;
	int playerPosY = 1;

public:

	void Update();
	Player();
	~Player();
	void playerInfo();
	//bool isRunning = true;

};

