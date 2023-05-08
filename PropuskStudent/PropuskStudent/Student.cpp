#include "Student.h"

#pragma warning(disable:4996);

void Student::InputUniversity() {
	
	time_t timeNow = clock();
	struct tm* timeInfo;
	char* strTime = new char[80];

	time(&timeNow);
	timeInfo = localtime(&timeNow);

	strftime(strTime, 80, "Вход: %c", timeInfo);

	ioUniversity.push_back(strTime);
	char* message = new char[30]{ "Студент находится в вузе" };
	ioUniversity.push_back(message);
	cout << "Данные внесены" << endl;
}
void Student::OutputUniversity() {

	time_t timeNew = clock();
	struct tm* timeInfo;
	char* strTime = new char[80];

	time(&timeNew);
	timeInfo = localtime(&timeNew);

	strftime(strTime, 80, "Вход: %c", timeInfo);

	char* message = new char[30] {"Студент находится дома"};

	ioUniversity.pop_back();
	ioUniversity.push_back(strTime);
	ioUniversity.push_back(message);

	cout << "Данные внесены" << endl;

}
void Student::GetIOUniversity() {
	for (int i = 0; i < ioUniversity.size(); i++) {
		cout << ioUniversity[i] << endl;
	}
}