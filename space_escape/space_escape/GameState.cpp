#include "GameState.h"

Movement*movement = new Movement();
//Player* player = new Player();

GameState::GameState(){}
GameState::~GameState(){
	delete movement; movement = nullptr;
}


void GameState::tittleScreen() {
	bool IsOnMenu = true;
	char ans;

	cout << "" << endl;

	cout << "\n\n\n\n\tWould You like to play the game Yes = 'y', No = 'n'. " << endl;
	cin >> ans;

	if (ans == 'y') {
		system("CLS");
		game();

	}
	else if (ans == 'n')
	{
		endGame();
	}
 }

void GameState::game() {
	

	Map m;
	m.DislayMap();

	while (isRunning) {
		movement->Move();
		/*
		if (player->getHealth() > 0) {
			
		}
		else {
			isRunning = false;
		}
		*/
	}

	//fight->Death();
	system("CLS");
	endGame();
}

void GameState::endGame() {
	cout << "\n\n\n\tGood Game!" << endl;
	cout << "\n\tHope Your had fun here are the developers names: " << endl;
	cout << "\tAaron Bisbal" << endl;
	cout << "\tDylan Rampersad" << endl;
	cout << "\tJaimeson Mario Villaescusa" << endl;
	cout << "\tJeffrey Pires" << endl;
	isRunning = false;
}