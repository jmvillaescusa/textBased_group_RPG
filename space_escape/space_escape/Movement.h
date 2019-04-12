//Jaimeson
//Dylan
#pragma once
#include <conio.h>
#include "frames.h"
#include "Player.h"
#include "Map.h"
#include "Fight.h"
#include "Guards.h"
#include "Enemy.h"

class Movement {
private:
	//Controls for player movement
	#define KEY_UP 72
	#define KEY_DOWN 80
	#define KEY_LEFT 75
	#define KEY_RIGHT 77

	int posX = 4;

public:
	Movement();
	~Movement();

	void Move();
};