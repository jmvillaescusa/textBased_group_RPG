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

class BaseStats {
public: 
	int health;
	int speed;
	int power;
	int defense;
	int luck;

public:
	int getHealth() { return health; }
	void setHealth(unsigned int m_health) { health = m_health; }

	int getPower() { return power; }
	void setPower(int m_power) { power = m_power; }

	int getDefense() { return defense; }
	void setDefense(int m_defense) { defense = m_defense; }

	int getSpeed() { return speed; }
	void setSpeed(int m_speed) { speed = m_speed; }

	int getLuck() { return luck; }
	void setLuck(int m_luck) { luck = m_luck; }
};

#endif // !BASESTAT_H
