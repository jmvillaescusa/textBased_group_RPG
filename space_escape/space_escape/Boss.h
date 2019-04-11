#pragma once
#ifndef BOSS_H
#define BOSS_H

#include "Enemy.h"

class BossClass :public Enemy {
private:
	unsigned int health;
	int speed;
	int power;
	int luck;
	int defense;

public:
	BossClass();
	~BossClass();
	void BossStats();
	void BossDialogue();

};




#endif // !BOSS_H
