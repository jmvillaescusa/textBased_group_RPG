#pragma once
#ifndef GUARDS_H
#define GUARDS_H

#include "Enemy.h"

class GuardClass : public Enemy {
private:
	unsigned int health;
	int speed;
	int power;

public:
	GuardClass();
	~GuardClass();
	void GuardStats();
	void GuardDialogue(int);

};


#endif // !GUARDS_H