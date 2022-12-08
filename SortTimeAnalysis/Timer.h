#ifndef __TIMER__
#define __TIMER__

#include <time.h>

class Timer {
private:
	clock_t beginTime;     // really a 'long int'
	clock_t endTime;
	clock_t elapsedTime;
	long int milsElapsed;

public:
	// CONSTRUCTOR
	Timer();

	// record start time as long as timer is not already ticking
	bool Start();

	// record stop time as long as timer is currently ticking
	bool Stop();

	// check if timer is actively ticking, i.e. if endTime - beginTime is a negative number
	bool IsTicking();

	// calculate total elapsed time, seconds and milliseconds, and print formatted time passed
	void GetTime();
};
#endif