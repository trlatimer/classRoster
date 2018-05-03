// student.cpp
#ifndef __STUDENT_CPP_INCLUDED__   // if x.h hasn't been included yet...
#define __STUDENT_CPP_INCLUDED__
#include <iostream>

#include "student.h"

// Getter functions
std::string Student::getStudentID() { return studentID; }
std::string Student::getFirstName() { return firstName; }
std::string Student::getLastName() { return lastName; }
std::string Student::getEmailAddress() { return emailAddress; }
int Student::getAge() { return age; }
int Student::getDayInCourse(int course) { return daysInCourse[course]; }
Degree Student::getDegreeProgram() { 
	if (degree == 0) {
		return SECURITY;
	}
	else if (degree == 1) {
		return NETWORKING;
	}
	else {
		return SOFTWARE;
	}
}
// Setter functions
void Student::setStudentID(std::string ID) { studentID = ID; return; }
void Student::setFirstName(std::string name) { firstName = name; return; }
void Student::setLastName(std::string name) { lastName = name; return; }
void Student::setEmailAddress(std::string email) { emailAddress = email; return; }
void Student::setAge(int years) { age = years; return; }
void Student::setDayInCourse(int course, int days) { daysInCourse[course] = days; return; }
void Student::setDegree(Degree program) { degree = program; return; }
Student::Student() { // Default constructor
	studentID = "null";
	firstName = "null";
	lastName = "null";
	emailAddress = "null";
	age = 0;
	daysInCourse[0] = 0;
	daysInCourse[1] = 0;
	daysInCourse[2] = 0;
	degree = SOFTWARE;
};
// Constructor
Student::Student(std::string ID, std::string name1, std::string name2, std::string email, int years, int course1, int course2, int course3, Degree program) {
	studentID = ID;
	firstName = name1;
	lastName = name2;
	emailAddress = email;
	age = years;
	daysInCourse[0] = course1;
	daysInCourse[1] = course2;
	daysInCourse[2] = course3;
	degree = program;
	return;
}
// Destructor
Student::~Student() {
	return; 
}
void Student::Print() { // Prints student information
	std::cout << studentID << "    ";
	std::cout << "First Name: " << firstName << "    " << "Last Name: " << lastName << "    ";
	std::cout << "Age: " << age << "    ";
	std::cout << "daysInCourse: {" << daysInCourse[0] << ", " << daysInCourse[1] << ", " << daysInCourse[2] << "} ";
	std::cout << "Degree Program: ";
	if (degree == 0) { // Prints proper terms depending on degree set
		std::cout << "Security" << std::endl;
	}
	else if (degree == 1) {
		std::cout << "Networking" << std::endl;
	}
	else if (degree == 2) {
		std::cout << "Software" << std::endl;
	}
	return;
}

#endif