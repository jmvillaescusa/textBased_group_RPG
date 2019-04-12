#pragma once
#ifndef GAMESTATE_H
#define GAMESTATE_H
#include "Movement.h"
#include <conio.h>
#include <iostream>
#include "frames.h"
#include "Player.h"
#include "Map.h"
#include "Fight.h"
#include "Guards.h"
#include "Enemy.h"

class GameState {
private:
	bool isRunning = true;

public:
	GameState();
	~GameState();
	void game();
	void endGame();
	void tittleScreen();

	void setRunning(bool iR) { isRunning = iR; }
};
#endif // !GAMESTATE_H
