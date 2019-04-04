#pragma once
#include <iostream>

class Map {
private:                       //Map Index
	const char AVATAR = '@';   // 3
	const char WALL = '#';     // 1
	const char NOTHING = ' ';  // 0
	const char SPACE = '.';    // 2
	const char NPC = 'N';      // 4
	const char DOOR = 'D';     // 5

	int area1_1[11][20] = { {0,1,1,1,1,1,1,1,0,0,0,1,1,1,1,1,1,1,0,0},
						    {0,1,2,2,3,2,2,1,0,0,0,1,2,2,2,2,2,1,0,0},
						    {0,1,2,2,2,2,2,1,0,0,0,1,2,2,2,2,2,1,0,0},
					   	    {1,1,1,1,2,1,1,1,1,1,1,1,1,1,5,1,1,1,1,1},
						    {1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
	                        {1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
	                        {1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
						    {1,1,1,1,5,1,1,1,1,1,1,1,1,1,5,1,1,1,1,1},
						    {0,1,2,2,2,2,2,1,0,0,0,1,2,2,2,2,2,1,0,0},
	                        {0,1,2,2,2,2,2,1,0,0,0,1,2,2,2,2,2,1,0,0},
	                        {0,1,1,1,1,1,1,1,0,0,0,1,1,1,1,1,1,1,0,0} };

	int area1_2[11][20] = { {0,1,1,1,1,1,1,1,0,0,0,1,1,1,1,1,1,1,1},
							{0,1,2,2,2,2,2,1,0,0,0,1,2,2,2,2,2,2,2},
							{0,1,2,2,2,2,2,1,0,0,0,1,2,2,2,2,2,2,2},
							{1,1,1,1,5,1,1,1,1,1,1,1,1,5,5,1,1,1,1},
							{2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1},
							{2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1},
							{2,2,2,2,2,2,2,2,2,2,5,2,2,2,2,2,2,2,1},
	                        {1,1,1,1,5,1,1,1,1,1,1,1,2,2,2,2,2,2,1},
							{0,1,2,2,2,2,2,1,0,0,0,1,2,2,2,2,2,2,1},
							{0,1,2,2,2,2,2,1,0,0,0,1,2,2,2,2,2,2,1},
	                        {0,1,1,1,1,1,1,1,0,0,0,1,1,1,1,1,1,1,1} };

public:
	Map();
	~Map();

	void DislayMap();
	char MapIndex(int);
};