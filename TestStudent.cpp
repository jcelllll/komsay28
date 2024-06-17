#include <iostream>
#include <string>
#include "Student.h"	//Include the student header file which contains the definition of the studnet child class
using namespace std;

int main(){
	//Display program description
    cout << "===========================================================================================================\n";
    cout << "The program captures student details through user input and welcomes the new student with a warm message.\n";
    cout << "It utilizes object-oriented principles, specifically inheritance and encapsulation, to organize student information efficiently.\n\n";
    cout << "Programmed by: Jeycel Ann M. Tabon\n";
    cout << "============================================================================================================\n\n";
    
    //Declare variables to be used for storing details
    int choice; 	//for user input
    char g;
    string firstName, lastName, phoneNum, emailadd, studentNum, course, department, college;
    
    Student s;		//declare an isntance of the student class
    
    //repeat the process until the user confirms that all inputs are correct
    do {
    	//Prompt the user to input student details
        cout << "\n\nStudent First Name: ";
        getline(cin, firstName);
        s.setfname(firstName);

        cout << "Student Last Name: ";
        getline(cin, lastName);
        s.setlname(lastName);
        
        cout << "Student Gender(M/F): ";
        cin >> g;
        s.setgender(g);
        
        cin.ignore();
        
        cout << "Student Email Address: ";
        getline(cin, emailadd);
        s.setEmailadd(emailadd);
        
        cout << "Student Phone Number: ";
        getline(cin, phoneNum);
        s.setCpnumber(phoneNum);
        
        
      
        cout << "Student Number: ";
        getline(cin, studentNum);
        s.setStudentnum(studentNum);
        
        cout <<"Course: ";
        getline(cin, course);
        s.setCourse(course);
        
        cout <<"Department: ";
        getline(cin, department);
        s.setDepartment(department);
        
        cout << "College: ";
        getline(cin, college);
        s.setCollege(college);
        
        //display all the entered information
        cout << "\nAre you sure that all information is correct?";
        cout << "\nFirst Name: " << s.getfname() << endl;
        cout << "Last Name: " << s.getlname() << endl;
        cout << "Gender: " << s.getgender() << endl;
        cout << "Email Address: " << s.getEmailadd()<< endl;
        cout << "Phone Number: " << s.getCpnumber()<< endl;
        cout << "Student ID Number: " << s.getStudentnum()<< endl;
        cout << "Course: " << s.getCourse() << endl;
        cout << "Department: " << s.getDepartment() << endl;
        cout << "College: " << s.getCollege() << endl;
        cout << "\n[1]Yes\n[2]Edit Details\nEnter Choice: ";
        cin >> choice;
        cin.ignore(); 
        
    } while (choice == 2);

	//Dislay the message if the user confirm that all information is correct
    if(choice == 1){
    	cout << "\n\nSending this message to " << s.getEmailadd() << " and " << s.getCpnumber();
    	
        cout << "\n\nHi, " << s.getfname()  << " " << s.getlname() << "! Welcome to UP Mindanao and congratulations! ";
        cout << "We are pleased to inform you that you are admitted in the " << s.getCourse() << " under the " << s.getDepartment() << ", " << s.getCollege();
        cout << ". Your Student number is " << s.getStudentnum() << "."<< endl;
    }

    return 0;
}

