//Jaimeson
//Dylan
#pragma once
#include "GameState.h"

class Movement {
private:
	//Controls for player movement
	#define KEY_UP 72
	#define KEY_DOWN 80
	#define KEY_LEFT 75
	#define KEY_RIGHT 77

	bool isPlaying = true;

public:
	Movement();
	~Movement();

	void Move();
};