#include "Start.h"
#include "Main.h"
#include "Finish.h"
#include <clocale>

Car car;

int main() {
	
	setlocale(0, "");

	Start();
	Main();
	Finish();

	return 0;
}