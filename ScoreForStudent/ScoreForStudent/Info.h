#pragma once
#include <iostream>

void InfoHello() {
	std::cout << "Чтобы зарегестрировать студента, жми(1) \n" <<
		"Чтобы посмотреть дневник студента, жми(2) \n" <<
		"Чтобы выйти из программы, жми(0) " << std::endl;
}
void InfoError() {
	std::cout << "Такой команды нет" << std::endl;
}
void InfoFinish() {
	std::cout << "Программа закрывается" << std::endl;
}
void InfoSetNameAndSurnameStudent() {
	std::cout << "Введите имя и фамилию студента: ";
}
void InfoSetScore() {
	std::cout << "Введите оценки" << std::endl;
}
void InfoSetDataOk() {
	std::cout << "Данные внесены" << std::endl;
}