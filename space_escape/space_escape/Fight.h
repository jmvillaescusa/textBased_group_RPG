#pragma once
#include <iostream>
#include "Basestat.h"
#include <vector>

class Fight {
public:
	Fight();
	~Fight();

	void FightManager(BaseStatClass*, BaseStatClass*);
	void PlayerTurn(BaseStatClass*, BaseStatClass*);
	void EnemyTurn(BaseStatClass*, BaseStatClass*);
};