#include "Guards.h"

GuardClass::GuardClass() {
	setHealth(100);
	setPower(5);
	setDefense(10);
	setSpeed(20);
} GuardClass::~GuardClass(){}

void GuardClass::GuardStats() {
	cout << endl;
	cout << "Guard Stats:" << endl;
	cout << "Health:"<<this->getHealth() << endl;
	cout << "Power:"<<this->getPower() << endl;
	cout << "Deffence:"<<this->getDefense() << endl;


}
void GuardClass::GuardDialogue(int temp) {
	system("CLS");
	cout << endl;


	switch (temp)
	{
	case 1:
		cout << "How dare you escape your cell human DIE!" << endl;
		break;
	case 2:
		cout << "Your not supposed to be here human DIE!" << endl;
		break;
	case 3:
		cout << "I always wonder how mun taste like I guess I'll find out." << endl;
		break;
	default:
		cout << "Get ready to get to take one under." << endl;
	}

}

