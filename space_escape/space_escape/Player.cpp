#include "Player.h"

Player::Player() {
	//player stats/variables
	setHealth(100);
	setDefense(40);
	setPower(50);
	setSpeed(30);
} Player::~Player(){}

void Player::Update() {
	//movement.Move();
}

void Player::playerInfo() {
	cout << endl;
	cout << "Player Stats:" << endl;
	cout << getHealth() << endl;
	cout << getSpeed() << endl;
	cout << getDefense() << endl;

}

