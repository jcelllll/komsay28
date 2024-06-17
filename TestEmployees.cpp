#include <iostream>
#include <string>
#include "Employees.h" 	//Include the employee header file which contains the definition of the employee child class
using namespace std;

int main() {
    cout << "===========================================================================================================\n";
    cout << "The program captures employee details through user input and welcomes the new employee with a warm message.\n";
    cout << "It utilizes object-oriented principles, specifically inheritance and encapsulation, to organize employee information efficiently.\n\n";
    cout << "Programmed by: Jeycel Ann M. Tabon\n";
    cout << "============================================================================================================\n\n";
    
    // Declare variables for employee details
    string firstName, lastName, phoneNum, emailadd, employeeNum, position, office;
    int salary, choice;
    char g;
    
    // Create an instance of the Employee class
    Employee e;
    
    do {
        // Prompt the user to input employee details
        cout << "\n\nEmployee First Name: ";
        getline(cin, firstName);
        e.setfname(firstName);

        cout << "Employee Last Name: ";
        getline(cin, lastName);
        e.setlname(lastName);
        
        cout << "Employee Gender(M/F): ";
        cin >> g;
        e.setgender(g);
        
        cin.ignore();
        
        cout << "Employee Email Address: ";
        getline(cin, emailadd);
        e.setEmailadd(emailadd);
        
        cout << "Employee Phone Number: ";
        getline(cin, phoneNum);
        e.setCpnumber(phoneNum);
        
        
        cout << "Enter Employee Number: ";
        getline(cin, employeeNum);
        e.setEmpnum(employeeNum);
        
        cout <<"Position: ";
        getline(cin, position);
        e.setPosition(position);
        
        cout <<"Office/Unit: ";
        getline(cin, office);
        e.setOffice(office);
        
        cout << "Salary: ";
        cin >> salary;
        e.setSalary(salary);
        
        // Display the entered information for confirmation
        cout << "\nAre you sure that all information is correct?";
        cout << "\nFirst Name: " << e.getfname() << endl;
        cout << "Last Name: " << e.getlname() << endl;
        cout << "Gender: " << e.getgender() << endl;
        cout << "Email Address: " << e.getEmailadd() <<endl;
        cout << "Phone Number: " << e.getCpnumber()<< endl;
        cout << "Employee Number: " << e.getEmpnum() << endl;
        cout << "Position: " << e.getPosition() << endl;
        cout << "Office/Unit: " << e.getOffice() << endl;
        cout << "Salary: " << e.getSalary() << endl;
        
        // Prompt the user to confirm or edit the details
        cout << "\n[1] Yes\n[2] Edit Details\nEnter Choice: ";
        cin >> choice;
        cin.ignore(); 
    } while (choice == 2); // Repeat the loop if the user chooses to edit the details

    if(choice == 1) {
    	
    	cout << "\n\nSending this message to " << e.getEmailadd() << " and " << e.getCpnumber();
        // Display the welcome message with employee details if the user confirms
        cout << "\n\nHi, " << e.getfname()  << " " << e.getlname() << "! Welcome to UP Mindanao and congratulations on joining our team! ";
        cout << "We are thrilled to have you on board as a " << e.getPosition() << " in the dynamic Department of Mathematics, Physics, and Computer Science. ";
        cout << "Your Employee number is " << e.getEmpnum() << ", and we are confident that you'll make valuable contributions to our department's mission. ";
        cout << "Your office is located in " << e.getOffice() << ", where you'll find a supportive environment and opportunities for growth. ";
        cout << "Your starting salary is " << e.getSalary() << ", reflecting our commitment to recognizing your expertise and dedication. ";
        cout << "We are looking forward to collaborating with you and learning from your unique perspectives and experiences.\n";
        cout << "Once again, welcome to the team, and we can't wait to see all the great things we'll accomplish together! "<< endl;
        
    }

    return 0;
}

