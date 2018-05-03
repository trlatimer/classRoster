#pragma once
// roster.h

class Roster {
public:
	void add(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree program);
	void remove(std::string studentID);
	void printAll();
	void printAvgDaysInCourse(std::string studentID);
	void printInvalidEmails();
	void printByDegreeProgram(int degreeProgram);
	std::vector<Student*> classRosterVector;
	virtual ~Roster();
};
