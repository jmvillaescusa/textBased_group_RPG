//Dylan Rampersad

#include "Player.h"

Movement movement;


Player::Player() {
	//player stats/variables
	setHealth(100);
	setDefense(40);
	setPower(50);
	setSpeed(30);
} Player::~Player(){}

void Player::Update() {

	movement.Move();

}

void Player::playerInfo() {
	cout << endl;
	cout << "Player Stats:" << endl;
	cout << getPlayerHealth() << endl;
	cout << getPlayerSpeed() << endl;
	cout << getPlayerDefense() << endl;

}

