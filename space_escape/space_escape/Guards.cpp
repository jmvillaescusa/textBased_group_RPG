#include "Guards.h"

GuardClass :: GuardClass() {
	setHealth(100);
	setPower(5);
	setDeffence(10);

}
GuardClass ::~GuardClass(){}

void GuardClass::GuardStats() {
	cout << endl;
	cout << "Guard Stats:" << endl;
	cout << getHealth() << endl;
	cout << getPower() << endl;
	cout << getDeffence() << endl;

}

