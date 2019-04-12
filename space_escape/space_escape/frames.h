#pragma once
#include <time.h>

class Frames {
private:
	//contains the time of the last reset
	unsigned int startTicks;

	//Store the number of milliseconds since last reset
	unsigned int elapsedTicks;

	//Store the time elapsed since the last reset in seconds
	float deltaTime;

	//Can be used to speed up or slow down all entities that transform using it.
	float timeScale;

	const int FRAME_RATE = 60;

public:
	void Reset();
	void TimeScale(float t = 1.0f) { timeScale = t; }
	void Update();
	Frames();
	~Frames();

	float DeltaTime() { return deltaTime; }
	float TimeScale() { return timeScale; }
	const int GetFrameRate() { return FRAME_RATE; }
};