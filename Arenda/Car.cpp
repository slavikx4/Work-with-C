#include "Car.h"

using namespace std;

clock_t Car::Time(int time_begin, int time_end) {
	return (time_end - time_begin) / CLOCKS_PER_SEC;
}

void Car::ToStart() {
	
	StartInfo();
	time_begin = clock();

}
void Car::ToPause() {

	PauseInfo();
	time_end = clock();
	timeCounter += Time(time_begin, time_end);

}
void Car::ToContinue() {

	UnPauseInfo();
	time_begin = clock();
}
void Car::TurnOff() {

	TurnOffInfo();
	std::cout << "¬ы прокатались " << timeCounter  << " секунд" << '\n' <<
		"стоимость дороги в рубл€х " << timeCounter * 3 << std::endl;
}

