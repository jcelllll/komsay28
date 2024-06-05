#include <iostream>
#include <cstdlib>
using namespace std;

//function prototypes
void program_Description();
int displayMenu(int z);
void getValues(int &a, int &b, int &c);
int getSmall(int a, int b, int c);
int getLarge(int a, int b, int c);
int getDifference(int num1, int num2);
void display(int num1, int num2, int num3);

int main(){
	//declare variables
	int x, y, z, choice, smallNum, largeNum, difference;
	program_Description();								//function to display the program description
	do{
		choice = displayMenu(choice);					//call function to display menu
		switch(choice){
			case 1:
				getValues(x, y, z);									//function to get inputs from the user
				smallNum = getSmall(x, y, z);						//call the function to find the smallest number
				largeNum = getLarge(x, y, z);						//call the function to find the largest number
				difference = getDifference(smallNum, largeNum);		//call the function to find the difference of smallest and largest numbers 
				display(smallNum, largeNum, difference);			//call the function to display the largest number, smallest number, and their differences
				break;
			case 0:
				cout <<"\nProgram has been terminated";
				break;
			default:
				cout << "\nInvalid Choice. Enter a valid number";
				break;	
		}
	}while(choice != 0);
	return 0;
}
//function to display the program description
void program_Description(){
	cout << "This program will ask the user to input three numbers, find the highest and lowest numbers, and calculate the difference between the largest and smallest numbers..\n";
	cout << "\nJeycel Ann Tabon || April 27, 2024 || CMSC 28\n\n";
}
int displayMenu(int z){
	//display menu for interactive program
	int choice;
	cout << "\nMenu: \n[1]Find smallest and largest numbers and their differences\n[0]Exit Program\nEnter Choice: ";
	cin >> choice;
	return choice;
}
//function to get the inputs of the user
void getValues(int& a, int& b, int& c){
    cout << "\nEnter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Enter the third number: ";
    cin >> c;
}
//function to find the smallest number
int getSmall(int a, int b, int c){
	int small = a;
	if(small > b){
		small = b;
	}
	if(small>c){
		small = c;
	}
	return small;
}
//function to find the largest number
int getLarge(int a, int b, int c){
	int large = a;
	if (large<b){
		large = b;
	}
	if (large < c){
		large = c;
	}
	return large;
}
//function to find the difference of the smallest and largest number
int getDifference(int num1, int num2){
	return num2- num1;
}
//function to display the results
void display(int num1, int num2, int num3){
    cout << "\nSmallest Number: " << num1 << endl;
    cout << "Largest Number: " << num2 << endl;
    cout << "Difference: " << num3 << endl;
}
