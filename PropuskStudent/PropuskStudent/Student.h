#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <vector>

using namespace std;

struct Student {

public:
	
	string name;
	string surname;
	int age;
	string faculty;
	int year;
	string gender;
	string infoAboutStudent;

	vector<char*> ioUniversity;
	void InputUniversity();
	void OutputUniversity();
	void GetIOUniversity();

	

};