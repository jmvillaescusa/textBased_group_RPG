#include "Fight.h"

Fight::Fight() {

}; Fight::~Fight() {};

void Fight::PlayerTurn(BaseStatClass* player, BaseStatClass* enemy) 
{
	enemy->setHealth((enemy->getHealth() + enemy->getDefense()) - player->getPower());
	//this line sets the health of the enemy after the battle 
	//with a a param of the enemies health - the players attackpower

	cout << "Player attacks for " << player->getPower() << endl;
	
	//this displace the attack power that gets decrease from the health of the senemy

	cout << "Enemy health is now " << enemy->getHealth() << endl;
	//this display the current health of the enemy
		
	
};

void Fight::EnemyTurn(BaseStatClass* player, BaseStatClass* enemy) 
{

		cout << "The enemy is attacking now attacking .... " << endl;
		player->setHealth((player->getHealth() + player->getDefense()) - enemy->getPower());
		//this line sets the health of the player after the battle 
		//with a a param of the player health - the enemy attackpower

		cout << "Enemy attacks for " << enemy->getPower() << endl;
		//this displace the attack power that gets decrease from the health of the senemy  

		cout << "Player health is now " << enemy->getHealth();
		//this display the current health of the player
	

};

void Fight::SingleEnemy(BaseStatClass* player, BaseStatClass* enemy) 
{
	bool isBattling = true;
	
	//this loop will keep going untill one is declared dead
	while (isBattling == true) {
		std::cout << "\n";
		if (player->getSpeed() > enemy->getSpeed()) {
			while (enemy->getHealth() > 0 && player->getHealth() > 0) 
			{
				PlayerTurn(player, enemy);
				if (enemy->getHealth() > 0) {
					EnemyTurn(player, enemy);
				}
			}
			
			isBattling = false;

		}
		else {
			cout << "The enemy saw you and attacked." << endl;
			EnemyTurn(player, enemy);
			while (enemy->getHealth() > 0 && player->getHealth() > 0)
			{
				EnemyTurn(player, enemy);
				if (player->getHealth() > 0) {
					PlayerTurn(player, enemy);
				}
			}
			isBattling = false;
		}
		
	}
	if (enemy->getHealth() < 0) {
		cout << "You killed the enemy." << endl;
		enemy->setHealth(100);
	}
	else {
		cout << "YOU DIED! LOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOL" << endl;
	}
	//======================================================================add items here when working(reward)================================================================

};

void Fight::TwoEnemy(BaseStatClass* player, BaseStatClass* enemy1, BaseStatClass* enemy2) 
{
	
	bool isBattling = true;
	bool isEmemiesdead = true;
	
	while (isBattling == true) {

		if (player->getSpeed() > enemy1->getSpeed() && player->getSpeed() > enemy2->getSpeed()) {
			
			while (isEmemiesdead == true){
				if (enemy1->getHealth() > 0 && player->getHealth() > 0 && enemy2->getHealth() > 0) {
					while (enemy1->getHealth() > 0 && player->getHealth() > 0 && enemy2->getHealth() > 0)
					{
						PlayerTurn(player, enemy1);
						EnemyTurn(player, enemy1);
						EnemyTurn(player, enemy2);
					}
				}
				else if (enemy2->getHealth() > 0 && player->getHealth() > 0) {
					while (enemy2->getHealth() > 0 && player->getHealth() > 0)
					{
						PlayerTurn(player, enemy2);
						EnemyTurn(player, enemy2);
					}
					isEmemiesdead = false;
				}
			}
			
			isBattling = false;

		}
		
		else if (player->getSpeed() < enemy1->getSpeed() && player->getSpeed() > enemy2->getSpeed()) {
			
			cout << "One of the enemy spoted you" << endl;
			EnemyTurn(player, enemy1);

			while (isEmemiesdead == true) {
				if (enemy1->getHealth() > 0 && player->getHealth() > 0 && enemy2->getHealth() > 0) {

					while (enemy1->getHealth() > 0 && player->getHealth() > 0 && enemy2->getHealth() > 0)
					{
						PlayerTurn(player, enemy1);
						EnemyTurn(player, enemy2);
						EnemyTurn(player, enemy1);
					}
				}
				else if (enemy2->getHealth() > 0 && player->getHealth() > 0) {
					while (enemy2->getHealth() > 0 && player->getHealth() > 0)
					{
						PlayerTurn(player, enemy2);
						EnemyTurn(player, enemy2);
					}
					isEmemiesdead = false;
				}
				isBattling = false;
			}
			
			
		}

		else if (player->getSpeed() > enemy1->getSpeed() && player->getSpeed() < enemy2->getSpeed()) {

			cout << "One of the enemy spoted you" << endl;
			EnemyTurn(player, enemy2);

			while (isEmemiesdead == true) {
				if (enemy1->getHealth() > 0 && player->getHealth() > 0 && enemy2->getHealth() > 0) {

					while (enemy1->getHealth() > 0 && player->getHealth() > 0 && enemy2->getHealth() > 0)
					{
						PlayerTurn(player, enemy1);
						EnemyTurn(player, enemy1);
						EnemyTurn(player, enemy2);
					}
				}
				else if (enemy2->getHealth() > 0 && player->getHealth() > 0) {
					while (enemy2->getHealth() > 0 && player->getHealth() > 0)
					{
						PlayerTurn(player, enemy2);
						EnemyTurn(player, enemy2);
					}
					isEmemiesdead = false;
				}
				isBattling = false;
			}

			
		}

		else {
			cout << "The enemies saw you and attacked." << endl;
			EnemyTurn(player, enemy1);
			EnemyTurn(player, enemy2);

			while (isEmemiesdead == true) {
				if (enemy1->getHealth() > 0 && player->getHealth() > 0 && enemy2->getHealth() > 0) {
					while (enemy1->getHealth() > 0 && player->getHealth() > 0 && enemy2->getHealth() > 0)
					{
						PlayerTurn(player, enemy1);
						EnemyTurn(player, enemy1);
						EnemyTurn(player, enemy2);
					}
				}
				else if (enemy2->getHealth() > 0 && player->getHealth() > 0) {
					while (enemy2->getHealth() > 0 && player->getHealth() > 0)
					{
						PlayerTurn(player, enemy2);
						EnemyTurn(player, enemy2);
					}
					isEmemiesdead = false;
				}
				isBattling = false;
			}

		}

	}
	cout << "You killed the enemies." << endl;
	//======================================================================add items here when working(reward)================================================================
};

void Fight::ThreeEnemy(BaseStatClass* player , BaseStatClass* enemy1, BaseStatClass* enemy2, BaseStatClass* enemy3) 
{

};


void Fight::Death() {
	cout << "Sorry you died!" << endl;
};

