#pragma once
#ifndef BASESTAT_H
#define BASESTAT_H

#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

class BaseStatClass {
public: 
	unsigned int health;
	int speed;
	int power;
	int luck;
	int deffence;

public:

	

	int getHealth() { return health; }
	void setHealth(unsigned int m_health) { health = m_health; }

	int getPower() { return power; }
	void setPower(int m_power) { power = m_power; }

	int getDeffence() { return deffence; }
	void setDeffence(int m_deffence) { deffence = m_deffence; }

	int getSpeed() { return speed; }
	void setSpeed(int m_speed) { speed = m_speed; }

	int getLuck() { return luck; }
	void setLuck(int m_luck) { luck = m_luck; }
};

#endif // !BASESTAT_H
