#include "Timer.h"
#include <iostream>
#include <time.h>


// CONSTRUCTOR
Timer::Timer() {
	this->beginTime = 0;
	this->endTime = 0;
	this->elapsedTime = 0;
	this->milsElapsed = 0;
}

// record start time as long as timer is not already ticking
bool Timer::Start() {
	if (this->IsTicking()) {
		return false;
	}
	else {
		this->beginTime = clock();
		return true;
	}
}

// record stop time as long as timer is currently ticking
bool Timer::Stop() {
	if (this->IsTicking()) {
		// record end time
		this->endTime = clock();
		return true;
	}
	else {
		return false;
	}
}

// check if timer is actively ticking, i.e. if endTime - beginTime is a negative number
bool Timer::IsTicking() {
	if (this->endTime - this->beginTime < 0) {
		return true;
	}
	else {
		return false;
	}
}

// calculate total elapsed time, seconds and milliseconds, and print formatted time passed
void Timer::GetTime() {

	// calculate elapsed time
	this->elapsedTime = this->endTime - this->beginTime;

	// translate timer into milliseconds (x ticks / 1 second) * (1 second / 1000 milliseconds)
	this->milsElapsed = elapsedTime / (CLOCKS_PER_SEC / 1000);

	// print formatted amount of milliseconds passed
	std::cout << this->milsElapsed << " milliseconds\n";
}
