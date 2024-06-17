#include <iostream>
#include <string>
#include "Person.h" // Include the Person header file, that contains the definition of the Person class
using namespace std;

// Define the Student class, which inherits from the Person class
class Student: public Person {
	private:
		string studentNum; // Private member variable to store student number
	public:
		// Public member variables for course, department, and college
		string Course;
		string Department;
		string College;
		
		// Constructors
		Student() {} // Default constructor
		Student(string newstudentNum, string newCourse, string newDepartment, string newCollege) {
			studentNum = newstudentNum;
			Course = newCourse;
			Department = newDepartment;
			College = newCollege;
		}
		
		// Getter and setter functions for student number
		void setStudentnum(string newStudentnum) {
			studentNum = newStudentnum;
		}
		string getStudentnum() {
			return studentNum;
		}
		
		// Getter and setter functions for course
		void setCourse(string newCourse) {
			Course = newCourse;
		}
		string getCourse() {
			return Course;
		}
		
		// Getter and setter functions for department
		void setDepartment(string newDepartment) {
			Department = newDepartment;
		}
		string getDepartment() {
			return Department;
		}
		
		// Getter and setter functions for college
		void setCollege(string newCollege) {
			College = newCollege;
		}
		string getCollege() {
			return College;
		}
};

