// student.h file
#include <string>
#include "degree.h"

class Student {
public:
	// Getter functions
	std::string getStudentID();
	std::string getFirstName();
	std::string getLastName();
	std::string getEmailAddress();
	int getAge();
	int getDayInCourse(int course);
	virtual Degree getDegreeProgram();

	// Setter functions
	void setStudentID(std::string ID);
	void setFirstName(std::string name);
	void setLastName(std::string name);
	void setEmailAddress(std::string email);
	void setAge(int years);
	void setDayInCourse(int course, int days);
	void setDegree(Degree program);

	// Constructor
	Student();
	Student(std::string ID, std::string name1, std::string name2, std::string email, int years, int course1, int course2, int course3, Degree program);
	// Destructor
	~Student();

	void Print();

private:
	std::string studentID;
	std::string firstName;
	std::string lastName;
	std::string emailAddress;
	int age;
	int daysInCourse[3];
	Degree degree;
};