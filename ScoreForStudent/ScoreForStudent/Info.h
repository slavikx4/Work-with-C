#pragma once
#include <iostream>

void InfoHello() {
	std::cout << "����� ���������������� ��������, ���(1) \n" <<
		"����� ���������� ������� ��������, ���(2) \n" <<
		"����� ����� �� ���������, ���(0) " << std::endl;
}
void InfoError() {
	std::cout << "����� ������� ���" << std::endl;
}
void InfoFinish() {
	std::cout << "��������� �����������" << std::endl;
}
void InfoSetNameAndSurnameStudent() {
	std::cout << "������� ��� � ������� ��������: ";
}
void InfoSetScore() {
	std::cout << "������� ������" << std::endl;
}
void InfoSetDataOk() {
	std::cout << "������ �������" << std::endl;
}