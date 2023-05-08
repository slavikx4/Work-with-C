#include "Check.h"

using namespace std;

extern Car car;

bool Check() {

	int i;
	cin >> i;
	while (i != 1) {
		cout << "Ошибка: машина не заведена" << endl;
		cin >> i;
	}
	return 1;
}
void CheckMenu() {
	
	int i;
	cin >> i;
	while (i != 0) {
		switch (i) {
		case(2): 
			car.ToPause();
			break;
		case(3): 
			car.ToContinue();
			break;
		case(0):
			car.TurnOff();
			break;
		default:
			ErrorInfo();
			break;
		}
		cin >> i;
	}
}