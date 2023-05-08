#include "Info.h"

using namespace std;

void HelloInfo() {

	cout << "для запуса машины нажмите(1)" << '\n' <<
		"для начала стоянки нажмите(2)" << '\n' <<
		"для продолжения движения нажмите(3)" << '\n' <<
		"для выхода из машины нажмите(0)" << endl;
}
void StartInfo() {
	cout << "Машина заведена" << endl;
}
void PauseInfo() {
	cout << "Время приостановлено" << endl;
}
void UnPauseInfo() {
	cout << "Время возобновилось" << endl;
}
void TurnOffInfo() {
	cout << "Машина заглушена" << endl;
}
void FinishInfo() {
	cout << "Выход из программы" << endl;
}
void ErrorInfo() {
	cout << "Ошибка, такой команды нет" << endl;
}
