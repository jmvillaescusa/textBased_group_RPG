#pragma once
#include <time.h>
#include "Basestat.h"

class Player : public BaseStatClass {
private:
	int luck;

public:
	int getLuck() { return luck; }
	void setLuck(int m_luck) { luck = m_luck; }

	void Update();
	Player();
	~Player();
	//bool isRunning = true;
};

