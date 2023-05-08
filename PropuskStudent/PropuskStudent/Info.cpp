#include "Info.h"


void InfoHello() {
	cout << "Добро пожаловать.\n" <<
		"чтобы зарегестрировать нового студента(1) \n" <<
		"чтобы посмотреть посещаемость студента(2) \n" <<
		"отметить вход студента(3) \n"<< 
		"отметить выход студента(4)  \n" <<
		"чтобы закрыть программу(0)" << endl;
}
void InfoError() {
	cout << "Такой команды не существует" << endl;
}
void InfoStartSetStudent() {
	cout << "Давайте загрузим данные студента" << endl;
}
void InfoSetName() {
	cout << "Ввеите имя и фамилию студента: ";
}
void InfoSetAge() {
	cout << "Введите возраст студента: ";
}
void InfoSetFaculty() {
	cout << "Введите номер факультета: ";
}
void InfoSetYear() {
	cout << "Введите курс студента: ";
}
void InfoSetGender() {
	cout << "Укажите гендер студента: ";
}
void InfoSetAboutStudent() {
	cout << "Укажите дополнительную информацию о студенте: ";
}
void InfoSetStudentOk() {
	cout << "Студент зарегистрирован в базе университета" << endl;
}
void InfoGetStart() {
	cout << "Укажите имя и фамилию студента: ";
}
void InfoGetFound(Student student) {
	cout << "Студент найден\n" <<
		"Имя: " << student.name << '\n' <<
		"Фамилия: " << student.surname << '\n' <<
		"Ворзраст: " << student.age << '\n' <<
		"Факультет: " << student.faculty << '\n' <<
		"Курс: " << student.year << '\n' <<
		"Дополнительная информация: " << student.infoAboutStudent << '\n' <<
		"Время в вузе: " << endl;
	student.GetIOUniversity();
}
void InfoGetUnfound() {
	cout << "Студент не зарегестрирован" << endl;
}
void InfoSetData() {
	cout << "Введите ваше имя и фамилию" << endl;
}
void InfoSetDataOk() {
	cout << "Данные внесены" << endl;
}
void InfoBye() {
	cout << "Программа закрывается" << endl;
}