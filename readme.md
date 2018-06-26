# ClassRoster
This project was completed as a final project for the Scripting & Programming Applications class through Western Governor's University. I was provided with a the data to include and a list of objectives.

## OBJECTIVES:
The following objectives were provided by the instructor and the project was completed with no assistance from the instructor.
  1. Modify the studentData table to include your personal information as the last item.
  2. Create a C++ project in your integrated development environment (IDE) with the following files:
    - degree.h
    - student.h and student.cpp
    - networkStudent.h and networkStudent.cpp
    - securityStudent.h and securityStudent.cpp
    - softwareStudent.h and softwareStudent.cpp
    - roster.h and roster.cpp
    Note: There must be a total of 11 source code files.
  3. Define an enumerated data type Degree for the degree programs containing the following data elements SECURITY, NETWORKING and SOFTWARE.
    Note: This information should be included in the degree.h file.
  4. For the Student class, do the following:
    A. Create the base class Student in the files student.h and student.cpp, which includes each the following variables:
      - student ID
      - first name
      - last name
      - email address
      - age
      - array of number of days to complete each course
      - degree types
      Note: Degree type should be populated in subclasses only.
    B. Create each of the following functions in the Student class:
      - an accessor (i.e., getter) for each instance variable from part D1
      - a mutator (i.e., setter) for each instance variable from part D1
      Note: All access and changes to the instance variables of the Student class should be done through the accessor and mutator functions.
      - constructor using all of the input parameters provided in the table
      - virtual print() to print specific student data 
      - destructor
      - virtual getDegreeProgram()
      Note: Leave the implementation of the getDegreeProgram() function empty.
    C. Create the three following classes as subclasses of Student, using the files created in part B:
      - SecurityStudent
      - NetworkStudent
      - SoftwareStudent
      Each subclass should override the getDegreeProgram() function. Each subclass should have a data member to hold the enumerated type for the degree program using the types defined in part C.
  5. Create a Roster class (roster.cpp) by doing the following:
    A. Create an array of pointers, classRosterArray, to hold the data provided in the studentData table.
    B. Create a student object for each student in the data table by using the subclasses NetworkStudent, SecurityStudent, and SoftwareStudent, and populate classRosterArray.
      - Apply pointer operations when parsing each set of data identified in the studentData table.
      - Add each student object to classRosterArray.
    C. Define the following functions:
      - public void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, <degree program>) that sets the instance variables from part D1 and updates the roster
      - public void remove(string studentID) that removes students from the roster by student ID. If the student ID does not exist, the function prints an error message indicating that the student was not found.
      - public void printAll() that prints a complete tab-separated list of student data using accessor functions with the provided format: 1 [tab] First Name: John [tab] Last Name: Smith [tab] Age: 20 [tab]daysInCourse: {35, 40, 55} Degree Program: Security. The printAll() function should loop through all the students in classRosterArray and call the print() function for each student.
      - public void printDaysInCourse(string studentID) that correctly prints a student’s average number of days in the three courses. The student is identified by the studentID parameter.
      - public void printInvalidEmails() that verifies student email addresses and displays all invalid email addresses to the user
        Note: A valid email should include an at sign ('@') and period ('.') and should not include a space (' ').
      - public void printByDegreeProgram(int degreeProgram) that prints out student information for a degree program specified by an enumerated type
   6. Demonstrate the program’s required functionality by adding a void main() function to roster.cpp, which will contain the required function calls to achieve the following results:
    A. Print out to the screen, via your application, the course title, the programming language used, your student ID, and your name.
    B. Create an instance of the Roster class called classRoster.
    C. Add each student to classRoster.
    D. Convert the following pseudo code to complete the rest of the main() function:
      classRoster.printAll();
      classRoster.printInvalidEmails();
      //loop through classRosterArray and for each element:
      classRoster.printAverageDaysInCourse(/*current_object's student id*/);
      classRoster.printByDegreeProgram(SOFTWARE);
      classRoster.remove("A3");
      classRoster.remove("A3");
      //expected: the above line should print a message saying such a student with this ID was not found.
    E. Call the destructor to release the Roster memory.

## TO VIEW:
In order to view the project, you will need to follow the steps below:
  1. Download and unzip the repository
  2. Open project solution in visual studio
  3. Build & Run the project
    - In order to properly run the project you will need to disable precompiles headers
      - Go to Project > Properties > C/C++ > Precompiles Headers > Select "Not using precompiles headers"

## WHAT YOU WILL SEE:
This project is based in the command prompt. It will pop-up and display a series of text. 

The first line will include the course information as well as my information. Then you will see my feedback that the student instances have been added. 

The next section shows the data included in the program, the student ID numbers, names, ages, days in courses, and degree program. Email is not included in this section. 

After printing the students, you will see a list of invalid emails. This section checks each email in the data to ensure that it has an '@' symbol as well as '.'. 

The next section shows the average days in classes for each student. This takes the vector of days in courses, sums them up, and divides by three to get the average days a student spends in a class. 

The last section shows which students are pursuing a degree in Software.

You will then see that the 'Roster' instance is removed in order to remove all of the student instances and prevent memory leaks. To confirm this, I added a check that attempts to print all of the students.

You are welcome to modify the 'main' function within roster.cpp to see other results the program can provide.

## BUG REPORTING:
Please leave feedback on the repository for any bugs or suggestions
