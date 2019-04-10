#pragma once
#ifndef GUARDS_H
#define GUARDS_H

#include "Enemy.h"

class GuardClass : public BaseStatClass {
private:
	
	//holds the stat information of the guard
	unsigned int health;
	int speed;
	int power;
	int deffence;

public:
	GuardClass();
	~GuardClass();

	//function to display guard stat
	void GuardStats();

	//function to display guard dialogue
	void GuardDialogue(int);

};


#endif // !GUARDS_H