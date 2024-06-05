#include <iostream>
#include <cstdlib>
using namespace std;

//function prototype
void displayProgram();				//function to display the program description
int displayMenu(int z);				//function to display menu
int getInput(int x);				//function to get user input
int convertDecimal(int y);			//function to convert decimal into binary
void displayResult(int x, int y);	//function yo display data

int main(){
	int choice, decimal, binary;					//declare variables
	
	displayProgram();								//call function display program description
	do{
		choice = displayMenu(choice);				//call function to display menu
		switch(choice){
			case 1:
				decimal = getInput(decimal);		//call function to get user input
				binary = convertDecimal(decimal);	//call function to convert binary to decimal
				displayResult(decimal, binary);		//call function to display data
				break;
			case 0:
				cout <<"\nProgram has been terminated";
				break;
			default:
				cout << "\nInvalid Choice. Enter a valid number";
				break;
		}
	} while (choice !=0);
	
	return 0;
}
void displayProgram(){
	//print program description and programmer name
	cout << "This Program will convert integer number into binary equivalent\n";
	cout << "\nJeycel Ann Tabon || April 27, 2024 || CMSC 28\n\n";	
}
int displayMenu(int z){
	//display menu for interactive program
	int choice;
	cout << "\nMenu: \n[1]Find binary equivalent of integer number\n[0]Exit Program\nEnter Choice: ";
	cin >> choice;
	return choice;
}
int getInput(int x){
	//get user input
	cout <<"\nEnter an integer number: ";
	cin >> x;
	return x;
}
int convertDecimal(int y){
	int binary = 0, remainder, i = 1;	//initialize binary as 0, declare variable name remainder, and initialize i as 1
	while (y!=0){
		remainder = y%2; 				//calculate the remainder of the y(number)
		binary = binary + remainder*i;	//update the binary equivalent of the number
		i = i*10;						//update i
		y = y/2;						//divide y(number) by 2
	}
	return binary;						//return the calculated binary
}
void displayResult(int x, int y){
	//display data
	cout << "\nDecimal: " << x;
	cout << "\nBinary Equivalent: " <<y <<"\n";
}
