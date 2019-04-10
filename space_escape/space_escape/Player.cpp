#include "Player.h"

//Controls for player movement
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

int c = 0;
bool isRunning = true;

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
}


	


		

