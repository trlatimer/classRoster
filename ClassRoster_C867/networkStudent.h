#pragma once
// networkStudent.h file

class NetworkStudent : public Student {
public:
	Degree getDegreeProgram();
	// Constructor
	NetworkStudent(std::string ID, std::string name1, std::string name2, std::string email, int years, int course1, int course2, int course3, Degree program);
	// Destructor
	~NetworkStudent();
private:
	Degree degree;
};