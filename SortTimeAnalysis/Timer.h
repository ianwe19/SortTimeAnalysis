#ifndef __TIMER__
#define __TIMER__

#include <time.h>

class Timer {
private:
	clock_t beginTime;
	clock_t endTime;
	clock_t elapsedTime;
	long int milsElapsed;

public:
	// CONSTRUCTOR
	Timer();


	bool Start();

	bool Stop();

	bool IsTicking();

	void GetTime();

};
#endif