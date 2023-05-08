#include "Start.h"

using namespace std;

extern Car car;

void Start() {

	HelloInfo();

	if (Check()) {
		car.ToStart();
	}
}