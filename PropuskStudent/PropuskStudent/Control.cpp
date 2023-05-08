#include "Control.h"

void SetStudent() {

	InfoStartSetStudent();

	Student* ptStudent = new Student();

	InfoSetName();
	cin >> ptStudent->name >> ptStudent->surname;
	InfoSetAge();
	cin >> ptStudent->age;
	InfoSetFaculty();
	cin >> ptStudent->faculty;
	InfoSetYear();
	cin >> ptStudent->year;
	InfoSetGender();
	cin >> ptStudent->gender;
	InfoSetAboutStudent();
	cin.ignore();
	getline(cin, ptStudent->infoAboutStudent);

	universityList.push_back(*ptStudent);
	InfoSetStudentOk();

}
void GetInfoAboutStudent() {

	InfoGetStart();
	string name, surname;
	cin >> name >> surname;
	string nameSurname = name + surname;
	bool studentIsRegistered = false;
	for (int i = 0; i < universityList.size(); i++) {

		string nameSurnameI = universityList[i].name + universityList[i].surname;

		if (nameSurname == nameSurnameI) {
			InfoGetFound(universityList[i]);
			studentIsRegistered = true;
			break;
		}
	}
	if (!studentIsRegistered) {
		InfoGetUnfound();
	}
}

void InputCheckId() {
	
	InfoSetData();
	string name, surname;
	cin >> name >> surname;
	bool flag = false;
	for (int i = 0; i < universityList.size(); i++) {
		if (name + surname == universityList[i].name + universityList[i].surname) {
			universityList[i].InputUniversity();
			flag = true;
			break;
		}
	}
	if(!flag) {
		InfoGetUnfound();
	}
}
void OutputCheckId() {

	InfoSetData();
	string name, surname;
	cin >> name >> surname;
	bool flag = false;
	for (int i = 0; i < universityList.size(); i++) {
		if (name + surname == universityList[i].name + universityList[i].surname) {
			universityList[i].OutputUniversity();
			flag = true;
			break;
		}
	}
	if (!flag) {
		InfoGetUnfound();
	}

}