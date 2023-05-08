#include "SetAndGet.h"



void Set() {
	cout << "set your nickname: " << endl;
	string name;
	cin >> name;
	outFile << name << " ";
	cout << "set password (8 char): " << endl;
	string password;
	cin >> password;
	outFile << password << endl;
	
}
void Get() {
	cout << "your nickname?" << endl;
	string name, password;
	cin >> name;
	string word;
	while (inputFile >> word) {
		if (word == name) {
			cout << "password?" << endl;
			inputFile >> word;
			cin >> password;
			while (password != word) {
				cout << "locked" << endl;
				cout << "please, again password" << endl;
				cin >> password;
			}
			cout << "unlocked" << endl;
			break;
		}
		else {
			cout << "have not registration";
			Set();
		}
	}
}