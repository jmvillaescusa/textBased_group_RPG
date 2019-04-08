#pragma once
#include <time.h>


class Player : public BaseStat {
private:
	int luck;

public:
	void Update();
	Player();
	~Player();
	//bool isRunning = true;
};

