#include "Info.h"
using namespace std;

void hello() {
	cout << "Hello, friend" << endl;
}

bool SetOrGet() {
	cout << "set(0) or get(1) ?" << endl;
	int flag;
	cin >> flag;
	return flag;
}

bool Return() {
	cout << "stop(0) or Continue?(1)" << endl;
	bool flag;
	cin >> flag;
	return flag;
}

void Bye() {
	cout << "Bye bye, baby" << endl;
}