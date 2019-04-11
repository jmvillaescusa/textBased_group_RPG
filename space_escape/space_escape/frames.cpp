#include "frames.h"

Frames::Frames() {
	Reset();
	timeScale = 1.0f;
}

Frames::~Frames() {}

void Frames::Reset() {
	startTicks = clock();
	elapsedTicks = 0;
	deltaTime = 0.0f;
}

void Frames::Update() {
	elapsedTicks = clock() - startTicks;

	//Converting milliseconds to seconds
	deltaTime = elapsedTicks * 0.001f;
}