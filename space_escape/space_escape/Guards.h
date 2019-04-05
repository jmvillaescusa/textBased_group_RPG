#pragma once
#ifndef GUARDS_H
#define GUARDS_H

#include "Enemy.h"

class GuardClass : public EnemyClass {
private:
	unsigned int health;
	int speed;
	int power;

public:
	GuardClass();
	~GuardClass();
	void GuardStats();

};


#endif // !GUARDS_H