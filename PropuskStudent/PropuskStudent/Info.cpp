#include "Info.h"


void InfoHello() {
	cout << "����� ����������.\n" <<
		"����� ���������������� ������ ��������(1) \n" <<
		"����� ���������� ������������ ��������(2) \n" <<
		"�������� ���� ��������(3) \n"<< 
		"�������� ����� ��������(4)  \n" <<
		"����� ������� ���������(0)" << endl;
}
void InfoError() {
	cout << "����� ������� �� ����������" << endl;
}
void InfoStartSetStudent() {
	cout << "������� �������� ������ ��������" << endl;
}
void InfoSetName() {
	cout << "������ ��� � ������� ��������: ";
}
void InfoSetAge() {
	cout << "������� ������� ��������: ";
}
void InfoSetFaculty() {
	cout << "������� ����� ����������: ";
}
void InfoSetYear() {
	cout << "������� ���� ��������: ";
}
void InfoSetGender() {
	cout << "������� ������ ��������: ";
}
void InfoSetAboutStudent() {
	cout << "������� �������������� ���������� � ��������: ";
}
void InfoSetStudentOk() {
	cout << "������� ��������������� � ���� ������������" << endl;
}
void InfoGetStart() {
	cout << "������� ��� � ������� ��������: ";
}
void InfoGetFound(Student student) {
	cout << "������� ������\n" <<
		"���: " << student.name << '\n' <<
		"�������: " << student.surname << '\n' <<
		"��������: " << student.age << '\n' <<
		"���������: " << student.faculty << '\n' <<
		"����: " << student.year << '\n' <<
		"�������������� ����������: " << student.infoAboutStudent << '\n' <<
		"����� � ����: " << endl;
	student.GetIOUniversity();
}
void InfoGetUnfound() {
	cout << "������� �� ���������������" << endl;
}
void InfoSetData() {
	cout << "������� ���� ��� � �������" << endl;
}
void InfoSetDataOk() {
	cout << "������ �������" << endl;
}
void InfoBye() {
	cout << "��������� �����������" << endl;
}