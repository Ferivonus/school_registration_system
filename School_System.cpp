//============================================================================
// Name        : School_system.cpp
// Author      : Fahrettin Baştürk
// Version     : 3.0.0
// Date		   : may 7, 2020
// Copyright   : Your copyright notice
// Description : school system in c++ as a console application 
//============================================================================


#include <iostream>
#include <string>
#include "school.h"
#include "LinkedList.h"

using namespace std;

int main() {
	Student *students;
	teacher *teachers;
	school highSchool;


	string name="", surname="", city="", email="", website="";
	int phone=0;
	int howManyStudents, howManyTeachers;

	cin >>highSchool;

	cout << "How many teachers do you want to add: ";
	cin >> howManyTeachers;

	for (int i = 0; i < howManyTeachers; i++) {
		teachers = new teacher;
		cin >> *teachers;
		HighSchool.addTeacher(*teachers);
		cout << "Teacher added successfully" << endl;
	}

	cout << "How many students do you want to add: ";
	cin >> howManyStudents;

	for (int i = 0; i < howManyStudents; i++) {
		students = new Student;
		cin >> *students;
		HighSchool.addStudent(*students);
		cout << "Student added successfully" << endl;
	}

	return 0;
}



