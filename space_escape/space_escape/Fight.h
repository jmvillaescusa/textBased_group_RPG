#pragma once
#include <iostream>
#include "Basestat.h"

class Fight {
public:
	Fight();
	~Fight();

	void FightManager(BaseStatClass*, BaseStatClass*);
	void PlayerTurn(BaseStatClass*, BaseStatClass*);
	void EnemyTurn(BaseStatClass*, BaseStatClass*);
};