// securityStudent.cpp
#ifndef __SECURITYSTUDENT_CPP_INCLUDED__
#define __SECURITYSTUDENT_CPP_INCLUDED__
#include <iostream>

#include "student.h"
#include "securityStudent.h"

Degree SecurityStudent::getDegreeProgram() {return SECURITY;}
// Constructor
SecurityStudent::SecurityStudent(std::string ID, std::string name1, std::string name2, std::string email, int years, int course1, int course2, int course3, Degree program) {
	setStudentID(ID);
	setFirstName(name1);
	setLastName(name2);
	setEmailAddress(email);
	setAge(years);
	setDayInCourse(0, course1);
	setDayInCourse(1, course2);
	setDayInCourse(2, course3);
	setDegree(program);
	return;
}
// Destructor
SecurityStudent::~SecurityStudent() {
	return;
}

#endif