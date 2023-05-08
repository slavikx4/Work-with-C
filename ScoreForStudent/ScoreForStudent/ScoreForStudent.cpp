#include <clocale>
#include "Info.h"
#include "Main.h"

int main() {

	setlocale(0, "");

	InfoHello();
	Main();
	InfoFinish();

	return 0;
}