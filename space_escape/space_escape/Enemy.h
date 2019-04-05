#pragma once

#ifndef ENEMY_H
#define ENEMY_H

#include"Basestat.h"

class EnemyClass {
private:
	unsigned int health;
	int speed;
	int power;
	int luck;
	int deffence;

public:

	int getHealth() { return health; }
	void setHealth(unsigned int e_health) { health = e_health; }

	int getPower() { return power; }
	void setPower(int e_power) { power = e_power; }

	int getDeffence() { return deffence; }
	void setDeffence(int e_deffence) { deffence = e_deffence; }

	int getSpeed() { return speed; }
	void setSpeed(int e_speed) { speed = e_speed; }

	int getLuck() { return luck; }
	void setLuck(int e_luck) { luck = e_luck; }

};

#endif // !1
