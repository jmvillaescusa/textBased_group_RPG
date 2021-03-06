//Jaimeson
#pragma once
#include <iostream>

class Map {
private:                      
	//Map Index
	//Each number corresponds to the position of the map
	const char AVATAR = '@';   // 3
	const char WALL = '#';     // 1
	const char NOTHING = ' ';  // 0
	const char SPACE = '.';    // 2
	const char NPC = 'N';      // 4
	const char DOOR = 'D';     // 5
	const char BOSS = 'B';     // 6
	const char MEGA_BOSS = 'M';// 7

public:
	int areaIndex;

	//Maps                   
	int world[6][11][20] = { { {0,1,1,1,1,1,1,1,0,0,0,1,1,1,1,1,1,1,0,0},
						       {0,1,2,2,3,2,2,1,0,0,0,1,2,2,2,2,2,1,0,0},
							   {0,1,2,2,2,2,2,1,0,0,0,1,2,2,2,2,2,1,0,0},
							   {1,1,1,1,2,1,1,1,1,1,1,1,1,1,5,1,1,1,1,1},
							   {1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
							   {1,2,2,2,2,2,2,2,6,2,2,2,2,2,2,2,2,2,2,2},
							   {1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
							   {1,1,1,1,5,1,1,1,1,1,1,1,1,1,5,1,1,1,1,1},
							   {0,1,2,2,2,2,2,1,0,0,0,1,2,2,2,2,2,1,0,0},
						  	   {0,1,2,2,4,2,2,1,0,0,0,1,2,2,4,2,2,1,0,0},
							   {0,1,1,1,1,1,1,1,0,0,0,1,1,1,1,1,1,1,0,0} },
		                     
	                         { {0,1,1,1,1,1,1,1,0,0,0,1,1,1,1,1,1,1,1,1},
							   {0,1,2,2,4,2,2,1,0,0,0,1,2,2,2,2,2,2,2,2},
							   {0,1,2,2,2,2,2,1,0,0,0,1,2,2,2,2,2,2,2,2},
							   {1,1,1,1,5,1,1,1,1,1,1,1,1,5,5,1,1,1,1,1},
							   {2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1},
							   {2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1},
							   {2,2,2,2,2,2,2,2,2,2,5,2,2,2,2,2,2,2,2,1},
							   {1,1,1,1,5,1,1,1,1,1,1,1,2,2,2,2,2,2,2,1},
							   {0,1,2,2,2,2,2,1,0,0,0,1,2,2,2,2,2,2,2,1},
							   {0,1,2,2,4,2,2,1,0,0,0,1,2,2,2,6,2,2,2,1},
							   {0,1,1,1,1,1,1,1,0,0,0,1,1,1,1,1,1,1,1,1} }, 

							 { {1,1,1,1,1,1,1,0,0,0,1,1,1,1,1,1,1,1,1,1},
						 	   {2,2,2,2,2,2,1,0,0,0,1,2,2,2,2,2,2,2,2,2},
							   {2,2,2,2,2,2,1,0,0,0,1,2,2,1,1,1,1,1,2,2},
							   {1,1,1,2,2,2,1,0,0,0,1,2,2,1,0,0,0,1,2,2},
							   {0,0,1,2,2,2,1,1,1,1,1,2,2,1,1,1,1,1,2,2},
							   {0,0,1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
							   {0,0,1,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,2,2},
							   {0,0,1,2,2,2,1,0,0,0,0,0,0,0,0,0,0,1,2,2},
							   {0,0,1,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,2,2},
							   {0,0,1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
							   {0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1} }, 

							 { {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
							   {2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
							   {2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,2},
							   {2,2,2,1,0,0,0,0,0,0,0,0,0,0,0,0,1,2,2,2},
							   {2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,2},
							   {2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
							   {2,2,2,2,2,2,1,1,1,1,1,1,1,1,2,2,2,2,2,2},
							   {2,2,2,2,2,2,1,0,0,0,0,0,0,1,2,2,2,2,2,2},
							   {2,2,2,2,2,2,1,0,0,0,0,0,0,1,2,2,2,2,2,2},
							   {2,2,2,2,2,2,1,0,0,0,0,0,0,1,2,2,2,2,2,2},
							   {1,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,1} },

	                         { {1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0},
							   {2,2,2,2,2,2,2,1,0,0,0,0,0,0,0,0,0,0,0,0},
							   {2,2,1,1,1,2,2,1,0,0,0,0,0,0,0,0,0,0,0,0},
							   {2,2,1,0,1,2,2,1,1,1,1,1,1,1,1,1,1,1,1,0},
							   {2,2,1,0,1,2,2,2,2,2,2,2,2,2,2,2,2,2,6,1},
							   {2,2,1,0,1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,5},
							   {2,2,1,0,1,2,2,2,2,2,2,2,2,2,2,2,2,2,6,1},
							   {2,2,1,0,1,2,2,1,1,1,1,1,1,1,1,1,1,1,1,0},
							   {2,2,1,1,1,2,2,1,0,0,0,0,0,0,0,0,0,0,0,0},
							   {2,2,2,2,2,2,2,1,0,0,0,0,0,0,0,0,0,0,0,0},
							   {1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0} },

							 { {0,0,0,0,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0},
							   {0,0,0,1,2,2,2,2,2,2,2,2,1,1,1,1,1,0,0,0},
							   {0,0,1,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,0,0},
							   {0,0,1,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,0,0},
							   {1,1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,0},
							   {2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,7,1,0},
							   {1,1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,0},
							   {0,0,1,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,0,0},
							   {0,0,1,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,0,0},
							   {0,0,0,1,2,2,2,2,2,2,2,2,1,1,1,1,1,0,0,0},
							   {0,0,0,0,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0} } };

public:
	Map();
	~Map();

	void DislayMap();
	char MapIndex(int);

	int getAreaIndex() { return areaIndex; }
	void setAreaIndex(int aI) { areaIndex = aI; }
};