#include "noString.h";


void noString::Get() {
	for (int i = 0; i < sizeof(stroka); i++) {
		std::cout << stroka[i];
	}
}