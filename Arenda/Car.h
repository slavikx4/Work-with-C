#pragma once
#include <ctime>
#include "Info.h"

class Car {
public:

	void ToStart();
	void ToPause();
	void ToContinue();
	void TurnOff();
	int timeCounter = 0;

private:

	clock_t Time(int time_begin, int time_end);
	clock_t time_begin;
	clock_t time_end;
};