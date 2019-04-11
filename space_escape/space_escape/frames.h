#pragma once
#include <time.h>

class Frames {
private:
	unsigned int startTicks;
	unsigned int elapsedTicks;
	float deltaTime;
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