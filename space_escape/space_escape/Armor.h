//JEFF
#pragma once
#ifndef ARMOR
#define ARMOR

#include <iostream>
#include <string>
#include <vector>
#include <algorithm> 

using namespace std;

//ITEMS STATS!

class Armor {

private:

	int defense = 100;

public:

	//getter
	int getDefense() { return defense; }
	//setter
	void setDefense(int f_defense) { defense = f_defense; }


};
#endif // !ARMOR