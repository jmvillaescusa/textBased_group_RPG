#pragma once
#include <time.h>

class Player {
private:
	int Health;
	int Defense;
	int Attack;
	int Speed;

public:
	

	int setHealth(int h) { Health = h; }
	int setDefence(int d) { Defense = d; }
	int setAttack(int a) { Attack = a; }
	int setSpeed(int s) { Speed = s; }


	void Update();
	Player();
	~Player();
	//bool isRunning = true;
};

