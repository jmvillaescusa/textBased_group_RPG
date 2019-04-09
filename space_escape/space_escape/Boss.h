#pragma once

#ifndef BOSS_H
#define BOSS_H

#include "Enemy.h"

class BossClass :public EnemyClass {
private:
	
	//holds the information of the boss stat
	unsigned int health;
	int speed;
	int power;
	int luck;
	int defense;

public:
	BossClass();
	~BossClass();

	//function that shows the boss current stat
	void BossStats();

	//function to call for the boss dialogue
	void BossDialogue();

};


#endif // !BOSS_H
