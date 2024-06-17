#include <iostream>
#include <string>
#include "Person.h" // Include the Person header file, that contains the definition of the Person class
using namespace std;

// Define the Employee class, which inherits from the Person class
class Employee: public Person {
	private:
		string empNum; // Private member variable to store employee number
	public:
		// Public member variables for position, office, and salary
		string Position;
		string Office;
		int Salary;
		
		// Constructors
		Employee() {} // Default constructor
		Employee(string newempNum, string newPosition, string newOffice, int newSalary) {
			empNum = newempNum;
			Position = newPosition;
			Office = newOffice;
			Salary = newSalary;
		}
		
		// Getter and setter functions for employee number
		void setEmpnum(string newEmpnum) {
			empNum = newEmpnum;
		}
		string getEmpnum() {
			return empNum;
		}
		
		// Getter and setter functions for position
		void setPosition(string newPosition) {
			Position = newPosition;
		}
		string getPosition() {
			return Position;
		}
		
		// Getter and setter functions for office
		void setOffice(string newOffice) {
			Office = newOffice;
		}
		string getOffice() {
			return Office;
		}
		
		// Getter and setter functions for salary
		void setSalary(int newSalary) {
			Salary = newSalary;
		}
		int getSalary() {
			return Salary;
		}
};
