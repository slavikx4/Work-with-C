#include "Main.h"


void Main() {

	int i;
	cin >> i;
	while (i != 0) {
		switch (i) {
		case(1):
			SetStudent();
			break;
		case(2):
			GetInfoAboutStudent();
			break;
		case(3):
			InputCheckId();
			break;
		case(4):
			OutputCheckId();
			break;
		default:
			InfoError();
			break;
		}
		cin >> i;
	}
}