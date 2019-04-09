#include "Map.h"

#include "Basestat.h"
#include "Enemy.h"
#include "Guards.h"
#include "Player.h"
#include <conio.h>

#include <iostream>


//Controls for player movement
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

Player player;
GuardClass Guard;

void MenuScreen();
void Game();

int main()
{


	MenuScreen();

	return 0;
}

void MenuScreen() {

	bool IsOnMenu = true;
	char ans;

	cout << "" << endl;

	cout << "\n\n\n\n\tWould You like to play the game Yes = 'y', No = 'n'. " << endl;
	cin >> ans;

	if (ans == 'y') {
		Game();

	}
	else if (ans == 'n')
	{

		return;
	}
}

void Game() {
	bool isRunning = true;

	Map m;
	m.DislayMap();
	int c = 0;
	int playerPosX = 4;
	int playerPosY = 1;

	while (isRunning) {
		player.Update();

		//Player Movement
	}
}