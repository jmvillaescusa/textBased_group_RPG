#ifndef ITEMS
#define ITEMS

// ITEM STATS!
#include <iostream>
using namespace std;

class Items {

private:

	int health;
	int damage;
	int defence;

public:


	//Getters
	int GetHeath() { return health; }
	int GetDamage() { return damage; }
	int GetDefence() { return defence; }

	//Setters
	void SetHealth(int h) { health = h; }
	void SetDamage(int d) { damage = d; }
	void SetDefence(int f) { defence = f; }


};


#endif // !ITEMS


