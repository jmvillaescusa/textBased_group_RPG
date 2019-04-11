#pragma once
#include <time.h>
#include "Basestat.h"

class Player : public BaseStatClass {
private:
	int luck;

public:

	void Update();
	Player();
	~Player();
	//bool isRunning = true;

};

