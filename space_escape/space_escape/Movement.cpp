//Jaimeson
//Dylan
#include "Movement.h"
Map *map = new Map();
Player* player = new Player();
GuardClass *guard = new GuardClass();
Frames *frames = new Frames();
Fight *fight = new Fight();

Movement::Movement() {

}; 
Movement::~Movement() {
	delete map; map = nullptr;
	delete player; player = nullptr;
	delete guard; guard = nullptr;
	delete frames; frames = nullptr;
	delete fight; fight = nullptr;
};

void Movement::Move() {
	frames->Update();
	int c = 0;
	bool isPlaying = true;
	while (isPlaying) {
		if (frames->DeltaTime() >= (1.0 / frames->GetFrameRate())) {
			switch ((c = _getch())) {
			case KEY_DOWN:
				system("CLS");
				//Hits a wall
				if (map->world[map->getAreaIndex()][player->getPlayerPosY() + 1][player->getPlayerPosX()] == 1) {
					player->setPlayerPosY(player->getPlayerPosY() + 0);
					map->DislayMap();
				}
				//Fights an enemy
				else if (map->world[map->getAreaIndex()][player->getPlayerPosY() + 1][player->getPlayerPosX()] == 6) {
					map->world[map->getAreaIndex()][player->getPlayerPosY() + 1][player->getPlayerPosX()] = 2;
					map->DislayMap();
					fight->SingleEnemy(player, guard);
				}
				//Kicks a Door
				else if (map->world[map->getAreaIndex()][player->getPlayerPosY() + 1][player->getPlayerPosX()] == 5) {
					map->world[map->getAreaIndex()][player->getPlayerPosY() + 1][player->getPlayerPosX()] = 2;
					map->DislayMap();
					std::cout << "\nThe door flew off its hinges!\n";
				}
				//Moving down
				else {
					map->world[map->areaIndex][player->getPlayerPosY()][player->getPlayerPosX()] = 2;
					player->setPlayerPosY(player->getPlayerPosY() + 1);
					map->world[map->areaIndex][player->getPlayerPosY()][player->getPlayerPosX()] = 3;
					map->DislayMap();
				}
				break;
			case KEY_UP:
				system("CLS");
				//Hits a wall
				if (map->world[map->getAreaIndex()][player->getPlayerPosY() - 1][player->getPlayerPosX()] == 1) {
					player->setPlayerPosY(player->getPlayerPosY() - 0);
					map->DislayMap();
				}
				//Fights an enemy
				else if (map->world[map->getAreaIndex()][player->getPlayerPosY() - 1][player->getPlayerPosX()] == 6) {
					map->world[map->getAreaIndex()][player->getPlayerPosY() - 1][player->getPlayerPosX()] = 2;
					map->DislayMap();
					fight->SingleEnemy(player, guard);
				}
				//Kicks a door
				else if (map->world[map->getAreaIndex()][player->getPlayerPosY() - 1][player->getPlayerPosX()] == 5) {
					map->world[map->getAreaIndex()][player->getPlayerPosY() - 1][player->getPlayerPosX()] = 2;
					map->DislayMap();
					std::cout << "\nThe door flew off its hinges!\n";
				}
				//Moves up
				else {
					map->world[map->getAreaIndex()][player->getPlayerPosY()][player->getPlayerPosX()] = 2;
					player->setPlayerPosY(player->getPlayerPosY() - 1);
					map->world[map->getAreaIndex()][player->getPlayerPosY()][player->getPlayerPosX()] = 3;
					map->DislayMap();
				}
				
				break;
			case KEY_LEFT:
				system("CLS");
				//Hits a wall
				if (map->world[map->getAreaIndex()][player->getPlayerPosY()][player->getPlayerPosX() - 1] == 1) {
					player->setPlayerPosX(player->getPlayerPosX() + 0);
					map->DislayMap();
				}
				//Fights an enemy
				else if (map->world[map->getAreaIndex()][player->getPlayerPosY()][player->getPlayerPosX() - 1] == 6) {
					map->world[map->getAreaIndex()][player->getPlayerPosY()][player->getPlayerPosX() - 1] = 2;
					map->DislayMap();
					fight->SingleEnemy(player, guard);
				}
				//Moves to previous area
				else if (player->getPlayerPosX() <= 1) {
					map->setAreaIndex(map->getAreaIndex() - 1);
					map->world[map->getAreaIndex()][player->getPlayerPosY()][18] = 3;
					player->setPlayerPosX(18);
					map->DislayMap();
				}
				//Kicks a door
				else if (map->world[map->getAreaIndex()][player->getPlayerPosY()][player->getPlayerPosX() - 1] == 5) {
					map->world[map->getAreaIndex()][player->getPlayerPosY()][player->getPlayerPosX() - 1] = 2;
					map->DislayMap();
					std::cout << "\nThe door flew off its hinges!\n";
				}
				//Moves left
				else {
					map->world[map->getAreaIndex()][player->getPlayerPosY()][player->getPlayerPosX()] = 2;
					player->setPlayerPosX(player->getPlayerPosX() - 1);
					map->world[map->getAreaIndex()][player->getPlayerPosY()][player->getPlayerPosX()] = 3;
					map->DislayMap();
				}
				
				
				break;
			case KEY_RIGHT:
				system("CLS");
				//Hits a wall
				if (map->world[map->getAreaIndex()][player->getPlayerPosY()][player->getPlayerPosX() + 1] == 1) {
					player->setPlayerPosX(player->getPlayerPosX() + 0);
					map->DislayMap();
				}
				//Fights an enemy
				else if (map->world[map->getAreaIndex()][player->getPlayerPosY()][player->getPlayerPosX() + 1] == 6) {
					map->world[map->getAreaIndex()][player->getPlayerPosY()][player->getPlayerPosX() + 1] = 2;
					map->DislayMap();
					fight->SingleEnemy(player, guard);
				}
				//Kills the Mega Boss
				else if (map->world[map->getAreaIndex()][player->getPlayerPosY()][player->getPlayerPosX() + 1] == 7) {
					map->world[map->getAreaIndex()][player->getPlayerPosY()][player->getPlayerPosX() + 1] = 2;
					map->DislayMap();
					fight->SingleEnemy(player, guard);
					isPlaying = false;
				}
				//Kicks a door
				else if (map->world[map->getAreaIndex()][player->getPlayerPosY()][player->getPlayerPosX() + 1] == 5) {
					map->world[map->getAreaIndex()][player->getPlayerPosY()][player->getPlayerPosX() + 1] = 2;
					map->DislayMap();
					std::cout << "\nThe door flew off its hinges!\n";
				}
				//Moves to new area
				else if (player->getPlayerPosX() >= 18) {
					map->setAreaIndex(map->getAreaIndex() + 1);
					map->world[map->getAreaIndex()][player->getPlayerPosY()][1] = 3;
					player->setPlayerPosX(1);
					map->DislayMap();
				}
				//Moves right
				else {
					map->world[map->getAreaIndex()][player->getPlayerPosY()][player->getPlayerPosX()] = 2;
					player->setPlayerPosX(player->getPlayerPosX() + 1);
					map->world[map->getAreaIndex()][player->getPlayerPosY()][player->getPlayerPosX()] = 3;
					map->DislayMap();
				}
				break;
			}
		}
	}
}