
#include <clocale>
#include "Start.h"
#include "Main.h"
#include "Finish.h"
#include <vector>

vector<Student> universityList;

int main() {

	setlocale(0, "");

	Start();
	Main();
	Finish();

	return 0;
}