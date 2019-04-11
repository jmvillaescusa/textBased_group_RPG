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

	
	//function that gives a message that will appeare when the player hit 0 health
	void Death();


};