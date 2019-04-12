//Jaimeson
#include "Map.h"

Map::Map() {
	areaIndex = 0;
}; Map::~Map() {};

void Map::DislayMap() {

	char temp;
	for (int i = 0; i < 11; i++) {
		for (int j = 0; j < 20; j++) {
			//Goes through each cell to determine whatys needed to display
			temp = MapIndex(world[areaIndex][i][j]);
			std::cout << temp;
		}
		std::cout << std::endl;
	}
};
char Map::MapIndex(int temp) {
	//Returns what will appear on screen
	switch (temp) {
	case 0: return NOTHING;
	case 1:	return WALL;
	case 2: return SPACE;
	case 3:	return AVATAR;
	case 4: return NPC;
	case 5: return DOOR;
	case 6: return BOSS;
	case 7: return MEGA_BOSS;
	default:
		NULL;
	}
	return NULL;
};