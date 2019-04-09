#pragma once

#ifndef ENEMY_H
#define ENEMY_H

#include"Basestat.h"

class EnemyClass : public BaseStatClass {

public:
	int getHealth() { return health; }
	void setHealth(unsigned int e_health) { health = e_health; }


};

#endif // !1
