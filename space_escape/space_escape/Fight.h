#pragma once
#include <iostream>
#include "Player.h"
#include "Enemy.h"


class Fight {
public:
	Fight();
	~Fight();


	void PlayerTurn(BaseStatClass*, BaseStatClass*);
	void EnemyTurn(BaseStatClass*,BaseStatClass*);
	void SingleEnemy(BaseStatClass*, BaseStatClass*);
	void TwoEnemy(BaseStatClass*,BaseStatClass*,BaseStatClass*);
	void ThreeEnemy(BaseStatClass*, BaseStatClass*, BaseStatClass*, BaseStatClass*);
	void BattleCalculation(BaseStatClass*, BaseStatClass*);
	void FightMessage();


};