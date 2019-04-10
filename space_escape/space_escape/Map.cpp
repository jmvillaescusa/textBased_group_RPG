#include "Map.h"

Map::Map() {
}; Map::~Map() {};

void Map::DislayMap() {
	int c;
	std::cin >> c;
	system("CLS");
	char temp;
	if (c == 1) {
		for (int i = 0; i < 11; i++) {
			for (int j = 0; j < 20; j++) {
				temp = MapIndex(area1_1[i][j]);
				std::cout << temp;
			}
			std::cout << std::endl;
		}
	}
	else if (c == 2) {
		for (int i = 0; i < 11; i++) {
			for (int j = 0; j < 20; j++) {
				temp = MapIndex(area1_2[i][j]);
				std::cout << temp;
			}
			std::cout << std::endl;
		}
	}
	else if (c == 3) {
		for (int i = 0; i < 11; i++) {
			for (int j = 0; j < 20; j++) {
				temp = MapIndex(area2_1[i][j]);
				std::cout << temp;
			}
			std::cout << std::endl;
		}
	}
	else if (c == 4) {
		for (int i = 0; i < 11; i++) {
			for (int j = 0; j < 20; j++) {
				temp = MapIndex(area2_2[i][j]);
				std::cout << temp;
			}
			std::cout << std::endl;
		}
	}
	else if (c == 5) {
		for (int i = 0; i < 11; i++) {
			for (int j = 0; j < 20; j++) {
				temp = MapIndex(area2_3[i][j]);
				std::cout << temp;
			}
			std::cout << std::endl;
		}
	}
	else if (c == 6) {
		for (int i = 0; i < 11; i++) {
			for (int j = 0; j < 20; j++) {
				temp = MapIndex(area3_1[i][j]);
				std::cout << temp;
			}
			std::cout << std::endl;
		}
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
	default:	NULL;

		return NULL;
	}
};