#include "Player.h"

//Controls for player movement
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

Map map;

Player::Player() {
	//player stats/variables
	setHealth(100);
	setDefense(40);
	setPower(50);
	setSpeed(30);
} Player::~Player(){}

void Player::Update() {
	Frames frames;
	bool isPlaying = true;

	
	while (isPlaying) {
		
		frames.Update();
		int c = 0;
		if (frames.DeltaTime() >= (1.0 / frames.GetFrameRate())) {

			switch ((c = _getch())) {
			case KEY_DOWN:
				if (map.area1_1[playerPosY + 1][playerPosX] == 1 || map.area1_1[playerPosY + 1][playerPosX] == 5) {
					playerPosY += 0;
				}
				else if (playerPosY == map.DOOR) {
					map.area1_1[playerPosY = 0][playerPosX] = 3;
					playerPosY - 1;
				}
				else {
					map.area1_1[playerPosY][playerPosX] = 2;
					playerPosY += 1;
					map.area1_1[playerPosY][playerPosX] = 3;
				}
				system("CLS");
				map.DislayMap();
				break;
			case KEY_UP:
				if (map.area1_1[playerPosY - 1][playerPosX] == 1 || map.area1_1[playerPosY - 1][playerPosX] == 5) {
					playerPosY += 0;
				}
				else {
					map.area1_1[playerPosY][playerPosX] = 2;
					playerPosY -= 1;
					map.area1_1[playerPosY][playerPosX] = 3;
				}
				system("CLS");
				map.DislayMap();
				break;
			case KEY_LEFT:
				if (map.area1_1[playerPosY][playerPosX - 1] == 1 || map.area1_1[playerPosY][playerPosX - 1] == 5) {
					playerPosY += 0;
				}
				else {
					map.area1_1[playerPosY][playerPosX] = 2;
					playerPosX -= 1;
					map.area1_1[playerPosY][playerPosX] = 3;
				}
				system("CLS");
				map.DislayMap();
				std::cout << playerPosX << std::endl;
				break;
			case KEY_RIGHT:
				if (map.area1_1[playerPosY][playerPosX + 1] == 1 || map.area1_1[playerPosY][playerPosX + 1] == 5) {
					playerPosY += 0;
				}
				else {
					map.area1_1[playerPosY][playerPosX] = 2;
					playerPosX += 1;
					map.area1_1[playerPosY][playerPosX] = 3;
				}
				system("CLS");
				map.DislayMap();
				std::cout << playerPosX << std::endl;
				break;
			}
		}
	}
}

void Player::playerInfo() {
	cout << endl;
	cout << "Player Stats:" << endl;
	cout << getHealth() << endl;
	cout << getSpeed() << endl;
	cout << getDefense() << endl;

}

