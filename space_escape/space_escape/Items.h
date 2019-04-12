//JEFF

#pragma once
#ifndef ITEMS
#define ITEMS

#include <iostream>
#include <string>
#include <vector>
#include <algorithm> 

using namespace std;

//ITEMS STATS!

class Items {

private:

	int health = 100;

public:

	//getter
	int getHealth() { return health; }
	//setter
	void setHealth(int h_health) { health = h_health; }


};
#endif // !ITEMS