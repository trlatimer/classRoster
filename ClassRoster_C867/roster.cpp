// roster.cpp
#include <iostream>
#include <string>
#include <vector>

#include "degree.h"
#include "student.h"
#include "securityStudent.h"
#include "networkStudent.h"
#include "softwareStudent.h"
#include "roster.h"

void Roster::add(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree program) {
	if (program == 0) { // Creates a Security Student if program is Security
		classRosterVector.push_back(new SecurityStudent(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, program));
	}
	if (program == 1) { // Creates a Network Student if program is Network
		classRosterVector.push_back(new NetworkStudent(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, program));
	}
	if (program == 2) { // Creates a Software Student if program is Software
		classRosterVector.push_back(new SoftwareStudent(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, program));
	}
	std::cout << "Instance added" << std::endl;
	return;
}
void Roster::remove(std::string studentID) { // Removes a student from roster
	unsigned int i = 0;
	for (i = 0; i < classRosterVector.size(); i++) {
		if (classRosterVector.at(i)->getStudentID() == studentID) { // If ID's match, removes from vector which delete instance
			classRosterVector.erase(classRosterVector.begin() + i);
			std::cout << "Instance removed" << std::endl;
			return;
		}
	}
	std::cout << "No matching student found" << std::endl;
	return;
}
void Roster::printAll() { // Prints all students based on format set in Print() function
	unsigned int i = 0;
	std::cout << "Printing students: " << std::endl;
	for (i = 0; i < classRosterVector.size(); i++) {
		classRosterVector.at(i)->Print();
	}
	return;
}
void Roster::printAvgDaysInCourse(std::string studentID) { // Prints the average days spent in courses for a specific student
	unsigned int i = 0;
	unsigned int j = 0;
	float sum = 0.0;
	for (i = 0; i < classRosterVector.size(); i++) { // Iterates through each student
		if (classRosterVector.at(i)->getStudentID() == studentID) { // If student's ID matches provided ID, sums days in courses
			for (j = 0; j <= 2; j++) {
				sum += classRosterVector.at(i)->getDayInCourse(j);
			}
		}
	}
	std::cout << "Average days in courses: " << (sum / 3.0) << std::endl; // Calculates average
	return;
}
void Roster::printInvalidEmails() { // Prints all emails that don't have an '@', or '.', or that have a ' ' within them
	unsigned int i = 0;
	unsigned int j = 0;
	std::string email = "";
	for (i = 0; i < classRosterVector.size(); i++) { // Iterates through each Student instance
		bool hasAt = false;
		bool hasPeriod = false;
		bool hasSpace = false;
		email = classRosterVector.at(i)->getEmailAddress();
		
		for (j = 0; j < email.length(); j++) { // Iterates through each character in email of Student instance
			if (email.at(j) == '@') { // If @ matches within email, passes requirement
				hasAt = true;
			}
			if (email.at(j) == '.') { // If . matches within email, passes requirement
				hasPeriod = true;
			}
			if (email.at(j) == ' ') { // If ' ' matches within email, passes requirement
				hasSpace = true;
			}
		}

		if (hasAt == false || hasPeriod == false || hasSpace == true) { // If email doesn't have an @, or ., and doens't have a space, passes requirements
			std::cout << email << std::endl;
		} 
	}
}
void Roster::printByDegreeProgram(int degreeProgram) { // Prints students based on degree program specified
	unsigned int i = 0;
	if (degreeProgram == SECURITY) { std::cout << "Printing security students: " << std::endl; } 
	else if (degreeProgram == NETWORKING) { std::cout << "Printing networking students: " << std::endl; }
	else if (degreeProgram == SOFTWARE) { std::cout << "Printing software students: " << std::endl; }
	else { std::cout << degreeProgram << " is not a proper input, please enter an proper program" << std::endl; }
	for (i = 0; i < classRosterVector.size(); i++) {
		if (classRosterVector.at(i)->getDegreeProgram() == degreeProgram) { // If student degree matches specified degree, prints student information
			classRosterVector.at(i)->Print();
		}
	}
	return;
}
Roster::~Roster() {return;}

int main()
{
	unsigned int instance = 0;
	std::cout << "Course: Scripting & Programming - Applications, Language: C++, Student ID: 000853044, Name: Tyler Latimer\n\n"; // TITLE
	// Create instance of Roster class
	Roster* classRoster = new Roster();
	// Add each student to classRoster
	classRoster->add("A1", "John", "Smith", "John1989@gm ail.com", 20, 30, 35, 40, SECURITY);
	classRoster->add("A2", "Suzan", "Erickson", "Erickson_1990@gmailcom", 19, 50, 30, 40, NETWORKING);
	classRoster->add("A3", "Jack", "Napoli", "The_lawyer99yahoo.com", 19, 20, 40, 33, SOFTWARE);
	classRoster->add("A4", "Erin", "Black", "Erin.black@comcast.net", 22, 50, 58, 40, SECURITY);
	classRoster->add("A5", "Tyler", "Latimer", "trlatimer95@gmail.com", 23, 10, 17, 13, SOFTWARE); 
	// Print all students
	classRoster->printAll();
	std::cout << std::endl << std::endl;
	// Print invalid emails
	std::cout << "Invalid emails: " << std::endl;
	classRoster->printInvalidEmails();
	std::cout << std::endl << std::endl;
	// Loop through classRosterVector and print average days in courses.
	std::cout << "Average days in courses for each student: " << std::endl;
	for (instance = 0; instance < classRoster->classRosterVector.size(); instance++) {
		classRoster->printAvgDaysInCourse(classRoster->classRosterVector.at(instance)->getStudentID());
	}
	std::cout << std::endl << std::endl;
	// Print all software students
	classRoster->printByDegreeProgram(SOFTWARE);
	std::cout << std::endl << std::endl;
	// Remove student with ID "A3"
	classRoster->remove("A3");
	// Remove student with ID "A3" a second time to get error
	classRoster->remove("A3");
	// Remove Roster from memory
	delete classRoster;

	return 0;
}