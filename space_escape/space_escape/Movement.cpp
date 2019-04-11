#include "Movement.h"
Map map;
Player player;
Frames frames;

Movement::Movement() {}; Movement::~Movement() {};

void Movement::Move() {
	frames.Update();
	int c = 0;
	bool isPlaying = true;
	while (isPlaying) {
		if (frames.DeltaTime() >= (1.0 / frames.GetFrameRate())) {
			switch ((c = _getch())) {
			case KEY_DOWN:
				if (map.world[map.getAreaIndex()][player.getPlayerPosY() + 1][player.getPlayerPosX()] == 1 || map.world[map.getAreaIndex()][player.getPlayerPosY() + 1][player.getPlayerPosX()] == 5) {
					player.setPlayerPosY(player.getPlayerPosY() + 0);
				}
				else {
					map.world[map.areaIndex][player.getPlayerPosY()][player.getPlayerPosX()] = 2;
					player.setPlayerPosY(player.getPlayerPosY() + 1);
					map.world[map.areaIndex][player.getPlayerPosY()][player.getPlayerPosX()] = 3;
				}
				map.DislayMap();
				break;
			case KEY_UP:
				if (map.world[map.getAreaIndex()][player.getPlayerPosY() - 1][player.getPlayerPosX()] == 1 || map.world[map.getAreaIndex()][player.getPlayerPosY() - 1][player.getPlayerPosX()] == 5) {
					player.setPlayerPosY(player.getPlayerPosY() + 0);
				}
				else {
					map.world[map.getAreaIndex()][player.getPlayerPosY()][player.getPlayerPosX()] = 2;
					player.setPlayerPosY(player.getPlayerPosY() - 1);
					map.world[map.getAreaIndex()][player.getPlayerPosY()][player.getPlayerPosX()] = 3;
				}
				map.DislayMap();
				break;
			case KEY_LEFT:
				if (map.world[map.getAreaIndex()][player.getPlayerPosY()][player.getPlayerPosX() - 1] == 1 || map.world[map.getAreaIndex()][player.getPlayerPosY()][player.getPlayerPosX() - 1] == 5) {
					player.setPlayerPosX(player.getPlayerPosX() + 0);
				}
				else if (player.getPlayerPosX() <= 1) {
					map.setAreaIndex(map.getAreaIndex() - 1);
					map.world[map.getAreaIndex()][player.getPlayerPosY()][18] = 3;
					player.setPlayerPosX(18);
				}
				else {
					map.world[map.getAreaIndex()][player.getPlayerPosY()][player.getPlayerPosX()] = 2;
					player.setPlayerPosX(player.getPlayerPosX() - 1);
					map.world[map.getAreaIndex()][player.getPlayerPosY()][player.getPlayerPosX()] = 3;
				}
				map.DislayMap();
				std::cout << player.getPlayerPosX() << std::endl;
				std::cout << map.getAreaIndex() << std::endl;
				break;
			case KEY_RIGHT:
				if (map.world[map.getAreaIndex()][player.getPlayerPosY()][player.getPlayerPosX() + 1] == 1 || map.world[map.getAreaIndex()][player.getPlayerPosY()][player.getPlayerPosX() + 1] == 5) {
					player.setPlayerPosX(player.getPlayerPosX() + 0);
				}
				else if (player.getPlayerPosX() >= 18) {
					map.setAreaIndex(map.getAreaIndex() + 1);
					map.world[map.getAreaIndex()][player.getPlayerPosY()][1] = 3;
					player.setPlayerPosX(1);
				}
				else {
					map.world[map.getAreaIndex()][player.getPlayerPosY()][player.getPlayerPosX()] = 2;
					player.setPlayerPosX(player.getPlayerPosX() + 1);
					map.world[map.getAreaIndex()][player.getPlayerPosY()][player.getPlayerPosX()] = 3;
				}
				map.DislayMap();
				std::cout << player.getPlayerPosX() << std::endl;
				std::cout << map.getAreaIndex() << std::endl;
				break;
			}
		}
	}
}