#pragma once
#include <iostream>

class noString {
public:

	char stroka[1000];
	noString(){};
	noString(const char _stroka[]) {

		for (int i = 0; i < sizeof(_stroka); i++) {

			stroka[i] = _stroka[i];
		}
	}
	void Get();

private:
};