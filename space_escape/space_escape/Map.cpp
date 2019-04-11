#include "Map.h"

Map::Map() {
	
}; Map::~Map() {};

void Map::DislayMap() {
	system("CLS");
	int area[11][20];
	area[11][20] = area2_1[11][20];
	char temp;
	for (int i = 0; i < 11; i++) {
		for (int j = 0; j < 20; j++) {
			temp = MapIndex(area1_1[i][j]);
			std::cout << temp;
		}
		std::cout << std::endl;
	}
};
char Map::MapIndex(int temp) {
	switch (temp) {
	case 0: return NOTHING;
	case 1:	return WALL;
	case 2: return SPACE;
	case 3:	return AVATAR;
	case 4: return NPC;
	case 5: return DOOR;
	case 6: return BOSS;
	default:
		NULL;
	}
};