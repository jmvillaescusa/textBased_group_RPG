#pragma once
#include <time.h>

<<<<<<< HEAD
class Player {
private:
	
=======
class Player : public BaseStatClass {
private:
	int luck;
>>>>>>> parent of 37edd26... w

public:
	void Update();
	Player();
	~Player();
	//bool isRunning = true;
};

