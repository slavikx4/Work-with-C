#pragma once
#include "Info.h"
#include <fstream>
#include <string>

using namespace std;

void SetStudent() {

	InfoSetNameAndSurnameStudent();
	std::string name, surname;
	std::cin >> name >> surname;
	ofstream fStudent("D:DataStudent\\" + name + "_" + surname + ".txt");
	fStudent << name << " " << surname << std::endl;

	InfoSetScore();
	int score;
	std::cout << "Mathematic: ";
	std::cin >> score;
	fStudent << "Mathematic : " << score << std::endl;

	std::cout << "Geography: ";
	std::cin >> score;
	fStudent << "Geography: " << score << std::endl;

	std::cout << "Physic: ";
	std::cin >> score;
	fStudent << "Physic: " << score << std::endl;

	std::cout << "Biologi: ";
	std::cin >> score;
	fStudent << "Biologi: " << score << std::endl;

	std::cout << "Programming: ";
	std::cin >> score;
	fStudent << "Programming: " << score << std::endl;

	InfoSetDataOk();
}
void GetListAboutStudent() {

	InfoSetNameAndSurnameStudent();
	string name, surname;
	cin >> name >> surname;
	string pyth = "D:DataStudent\\" + name + "_" + surname + ".txt";
	try {
		system(pyth.c_str());

		throw "Ошибка: такого студента нет!!!"; // исключение не работает
	}
	catch(char *str) {

		cout << str << endl;

	}
}