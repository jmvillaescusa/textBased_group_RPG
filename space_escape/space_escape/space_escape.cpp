//Jaimeson
#include "Map.h"
#include "Basestat.h"
#include "Enemy.h"
#include "Guards.h"
#include "Player.h"
#include <conio.h>
#include "Fight.h"
#include <iostream>



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
		EndGame();
		return;
	}
}

void Game() {

	bool isRunning = true;

	Map m;
	m.DislayMap();


	//PlaySound(TEXT("Halo_2.mp3"), NULL, SND_FILENAME | SND_ASYNC);
	//PlaySound(TEXT("Halo_2.mp3"), NULL, 0, NULL);

	
	//player.getPlayerInfo;
	

	
	


	int c = 0;
	int playerPosX = 4;
	int playerPosY = 1;

	

	//fight.Death();
	system("CLS");
	EndGame();

}
void EndGame() {
	cout << "\n\n\n\tGood Game!" << endl;
	cout << "\n\tHope Your had fun here are the developers names: " << endl;
	cout << "\t" << endl;
	cout << "\t" << endl;
	cout << "\t" << endl;
	cout << "\t" << endl;

}