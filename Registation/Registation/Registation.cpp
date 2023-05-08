#include "Start.h"
#include "Main.h"
#include "Finish.h"


using namespace std;

ifstream inputFile("Basa");
ofstream outFile("Basa");

int main() {

	Start();
	while (Return()) {
		Main();
	}
	Finish();
	return 0;
}
