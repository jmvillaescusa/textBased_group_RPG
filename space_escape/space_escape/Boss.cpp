#include "Boss.h"

BossClass::BossClass() {
	setHealth(0);
	setPower(0);
	setDefense(0);
	setSpeed(0);
	setLuck(0);
}

BossClass::~BossClass() {}

void BossClass::BossStats() {
	cout << endl;

	//displays the stat on the screen
	cout << "Boss Stat:" << endl;
	cout << "Health:" << this->getHealth() << endl;
	cout << "Power:" << this->getPower() << endl;
	cout << "Deffence:" << this->getDefense() << endl;
	cout << "Speed:" << this->getSpeed() << endl;
	cout << "Luck:" << this->getLuck() << endl;

}

void BossClass::BossDialogue() {
	cout << endl;
	cout << "Intruder, get ready to die!" << endl;
}