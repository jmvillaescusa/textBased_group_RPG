#ifndef RATIONS 
#define RATIONS

#include "Items.h"

class Rations : public Items  {

private:

	int health = 100;
	int damage = 0;
	int defence = 0;


public:

	//Getter Returns information
	int GetHealth() { return health ; }
	int GetDamge() { return damage; }
	int GetDefence() { return defence; }

	//Setter Accpets information
	
};

#endif// !RATIONS