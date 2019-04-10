#ifndef LIGHTSHIV
#define LIGHTSHIV

#include "LightShiv.h"


class lightShiv : public Items {


private:

	int health = 0;
	int damage = 5;
	int defence = 0;

public:

	//Getter Returns information
	int GetHealth() { return health; }
	int GetDamge() { return damage; }
	int GetDefence() { return defence; }

	//Setter Accpets information



};
#endif // !LIGHTSHIV