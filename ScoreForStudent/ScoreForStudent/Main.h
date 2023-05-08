#pragma once
#include "Domanager.h"

void Main() {

	int i;
	std::cin >> i;
	while (i != 0) {
		switch (i) {
		case(1):
			SetStudent();
			break;
		case(2):
			GetListAboutStudent();
			break;
		default:
			break;
		}
		std::cin >> i;
	}
}