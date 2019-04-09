#include "Fight.h"

Fight::Fight() {

}; Fight::~Fight() {};
void Fight::PlayerTurn(BaseStatClass* player, BaseStatClass* enemy) 
{
	std::cout << "would you like to attack? (y/n)" << std::endl;
	char answer = ' ';
	do {
		std::cin >> answer;

	} while (answer != 'y' && answer != 'n');
	if (answer == 'y') {

		enemy->setHealth((enemy->getHealth()+ enemy->getDefense()) - player->getPower());
		//this line sets the health of the enemy after the battle 
		//with a a param of the enemies health - the players attackpower

		std::cout << "Player attacks for " << player->getPower() << std::endl;
		//this displace the attack power that gets decrease from the health of the senemy

		std::cout << "Enemy health is now " << enemy->getHealth();
		//this display the current health of the enemy
	}
	else {
		std::cout << "Okay the enemy will now attack .... " << std::endl;
		EnemyTurn(player, enemy);
	}

};

void Fight::EnemyTurn(BaseStatClass* player, BaseStatClass* enemy) 
{
	std::cout << "would you like to attack? (y/n)" << std::endl;
	char answer = ' ';
	do {
		std::cin >> answer;

	} while (answer != 'y' && answer != 'n');
	if (answer == 'y') {

		enemy->setHealth((player->getHealth() + player->getDefense()) - enemy->getPower());
		//this line sets the health of the player after the battle 
		//with a a param of the player health - the enemy attackpower

		std::cout << "Enemy attacks for " << enemy->getPower() << std::endl;
		//this displace the attack power that gets decrease from the health of the senemy  

		std::cout << "Player health is now " << enemy->getHealth();
		//this display the current health of the player
	}
	else {
		std::cout << "Okay the enemy will now attack .... " << std::endl;
		EnemyTurn(player, enemy);
	}

};

void Fight::SingleEnemy(BaseStatClass* player, BaseStatClass* enemy) 
{

};

void Fight::TwoEnemy(BaseStatClass* player, BaseStatClass* enemy1, BaseStatClass* enemy2) 
{

};

void Fight::ThreeEnemy(BaseStatClass* player , BaseStatClass* enemy1, BaseStatClass* enemy2, BaseStatClass* enemy3) 
{

};

void Fight::BattleCalculation(BaseStatClass* player, BaseStatClass* enemy)
{

};



void Fight::FightMessage() 
{
	
};


