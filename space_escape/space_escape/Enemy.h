#pragma once

#ifndef ENEMY_H
#define ENEMY_H

#include"Basestat.h"

class EnemyClass : public BaseStatClass {
public:
	int getHealth() { return health; }
	void setHealth(unsigned int e_health) { health = e_health; }

	int getPower() { return power; }
	void setPower(int e_power) { power = e_power; }

	int getDefense() { return defense; }
	void setDefense(int e_defense) { defense = e_defense; }

	int getSpeed() { return speed; }
	void setSpeed(int e_speed) { speed = e_speed; }
};

#endif // !1
