//Jaimeson
#pragma once
#include <conio.h>
#include "frames.h"
#include "Player.h"
#include "Map.h"

class Movement {
private:
	//Controls for player movement
	#define KEY_UP 72
	#define KEY_DOWN 80
	#define KEY_LEFT 75
	#define KEY_RIGHT 77

public:
	Movement();
	~Movement();

	void Move();
	int TransitionScreen();
};