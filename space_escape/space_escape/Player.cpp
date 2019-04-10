#include "Player.h"
#include <conio.h>
#include "Map.h"


//Controls for player movement
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

int c = 0;
bool isRunning = true;
Map map;

Player::Player() {
	//player stats/variables
	setHealth(100);
	setDefense(40);
	setPower(50);
	setSpeed(30);
} Player::~Player(){}

void Player::Update() {
	getPlayerPosX();
	getPlayerPosY();

	Frames frames;
	bool isPlaying = true;

	int c = 0;

	while (isPlaying) {
		frames.Update();

if (frames.DeltaTime() >= (1.0 / frames.GetFrameRate())) {

	//std::cout << "timer" << std::endl;
	//ystem("CLS");

	switch ((c = _getch())) {
	case KEY_DOWN:
		if (map.area1_1[playerPosY + 1][playerPosX] == 1) {
			playerPosY += 0;
		}
		else if(playerPosY == map.DOOR){
			map.area1_1[playerPosY + 0][playerPosX] = 0;
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
		if (map.area1_1[playerPosY - 1][playerPosX] == 1) {
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
		if (map.area1_1[playerPosY][playerPosX - 1] == 1) {
			playerPosY += 0;
		}
		else {
			map.area1_1[playerPosY][playerPosX] = 2;
			playerPosX -= 1;
			map.area1_1[playerPosY][playerPosX] = 3;
		}
		system("CLS");
		map.DislayMap();
		break;
	case KEY_RIGHT:
		if (map.area1_1[playerPosY][playerPosX + 1] == 1) {
			playerPosY += 0;
		}
		else {
			map.area1_1[playerPosY][playerPosX] = 2;
			playerPosX += 1;
			map.area1_1[playerPosY][playerPosX] = 3;
		}
		system("CLS");
		map.DislayMap();
		break;
			}
		}
	}
}

void Player::playerInfo() {
	cout << endl;
	cout << "Player Stats:" << endl;
	cout << getPlayerHealth() << endl;
	cout << getPlayerSpeed() << endl;
	cout << getPlayerDefense() << endl;

}

		

