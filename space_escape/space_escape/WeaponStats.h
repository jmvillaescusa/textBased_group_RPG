//JEFF
#pragma once
#ifndef WEAPONSTATS
#define WEAPONSTATS
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// WEAPON STATS

class WeaponStats { 

private:

	int damage;
	

public:
	//getter
	int getDamage() { return damage; }
	
	//setter
	void setDamage(int d_damage) { damage = d_damage; }

};
#endif // !WEAPONSTATS

