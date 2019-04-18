//Dylan Rampersad

#include "Player.h"

<<<<<<< HEAD
Movement movement;


=======
>>>>>>> master
Player::Player() {
	//player stats/variables
	setHealth(100);
	setDefense(40);
	setPower(50);
	setSpeed(30);
} Player::~Player(){}

void Player::Update() {
<<<<<<< HEAD

	movement.Move();

=======
	//movement.Move();
>>>>>>> master
}

void Player::playerInfo() {
	cout << endl;
	cout << "Player Stats:" << endl;
	cout << getHealth() << endl;
	cout << getSpeed() << endl;
	cout << getDefense() << endl;

}

