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


bool Timer::Start() {
	if (this->IsTicking()) {
		return false;
	}
	else {
		this->beginTime = clock();
		return true;
	}
}


bool Timer::Stop() {
	if (this->IsTicking()) {
		this->endTime = clock();
		return true;
	}
	else {
		return false;
	}
}


bool Timer::IsTicking() {
	if (this->endTime = NULL) {
		return false;
	}
	else {
		return true;
	}
}


void Timer::GetTime() {
	this->elapsedTime = this->endTime - this->beginTime;
	this->milsElapsed = elapsedTime / (CLOCKS_PER_SEC / 1000);
	std::cout << this->milsElapsed << " milliseconds\n";
}
