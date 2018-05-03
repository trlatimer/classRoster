#pragma once
// softwareStudent.h

class SoftwareStudent : public Student {
public:
	Degree getDegreeProgram();
	// Constructor
	SoftwareStudent(std::string ID, std::string name1, std::string name2, std::string email, int years, int course1, int course2, int course3, Degree program);
	// Destructor
	~SoftwareStudent();
private:
	Degree degree;
};