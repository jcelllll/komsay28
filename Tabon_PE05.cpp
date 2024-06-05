#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
using namespace std;

//function prototypes
void displayProgramDescription();
float data_Entry();
float find_Largest(float num[]);
float find_Smallest(float num[]);
float calculate_Average(float num[]);
float calculate_Standard_Deviation(float num[], float num2);
float calculate_Variance(float num[], float num2);
void display_Data(float num1, float num2, float num3, float num4, float num5);


int main(){
	int i, choice; 
	float average, standard_Deviation, variance, data[10], largest, smallest;
	
	displayProgramDescription();

	//loop to store values in array
	for(i=0; i<10; i++){
		data[i]= data_Entry();
	}
	cout << "Data array: ";
    for (int i = 0; i < 10; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
    
    //function call to find the largest and smallest numbers
    largest = find_Largest(data);
    smallest = find_Smallest(data);
    average = calculate_Average(data);
    standard_Deviation = calculate_Standard_Deviation(data, average);
    variance = calculate_Variance(data, average);
    display_Data(largest, smallest, average, standard_Deviation, variance);
	return 0;
}
void displayProgramDescription(){
	cout <<"============================================================================================\n";
	cout <<"============================================================================================\n";
	cout <<"                              Programming Exercise 05                                       \n";
	cout <<"                         Submitted by: Jeycel Ann M. Tabon                                  \n";
	cout <<"--------------------------------------------------------------------------------------------\n";
	cout <<"--------------------------------------------------------------------------------------------\n\n";
	cout <<"This program will ask the user to input 10 various numbers (positive or negative but not zero)\n\n";
	cout <<"                          and perform statistics on these numbers.                          \n\n";
	cout <<"============================================================================================\n";
	cout <<"============================================================================================\n\n";
}
//function to get user input
float data_Entry(){
	int num;
	cout << "Input an integer: ";
	cin >> num;
	if (num!=0){
		return num;
	}
}
//function to find the largest number
float find_Largest(float num[]){
	int i, largest = num[0];
	for(int i; i<10; i++){
		if(num[i]>largest){
			largest = num[i];
		}
	}
	return largest;
}
//function to find the smallest number
float find_Smallest(float num[]){
	int i, smallest = num[0];
	for(int i; i<10; i++){
		if(num[i]>smallest){
			smallest = num[i];
		}
	}
	return smallest;
}
//function to find the mean or average of the data values
float calculate_Average(float num[]){
	int i;
	float sum=0, mean;
	for(i=0; i<10; i++){
		sum = sum + num[i];
	}
	mean = sum /10;
	return mean;
}
//Standard deviation of a sample.Not population. reason why I divide it by 10-1, instead of 10.  I just used the built in function for square root
float calculate_Standard_Deviation(float num[],  float num2){
	int i;
	float ss, standardD, x, y, sum = 0;
	for(i=0; i<10; i++){
		x = num[i] - num2;												//to get the difference of data value and their data mean
		y = x*x;														//squared the difference	
		sum = sum + y;													//add all the squared difference
	}
	ss = sum/(10-1);													//divide by difference of the data size, which is 10, and by 1.
	standardD = sqrt(ss);												//I use the built in sqrt function to squared ss
	return standardD;													//return standard deviation
}
//Variance of Sample. Not population. reason why I divide it by 10-1, instead of 10.function to find the variance of the data values
float calculate_Variance(float num[], float num2){
	int i;
	float variance, x, y, sum = 0;
	for(i=0; i<10; i++){
		x = num[i] - num2; 												//to get the difference of data value and their data mean
		y = x*x;														//squared the difference
		sum = sum + y;													//add all the squared difference
	}
	variance = sum/(10-1);												//divide by difference of the data size, which is 10, and by 1.
	return variance;													//return the calculated variances
}
//function to display all calculated values and found numbers
void display_Data(float num1, float num2, float num3, float num4, float num5){
	cout << "\nLargest: " << num1;
	cout << "\nSmallest: " << num2;
	cout << setprecision(2) << fixed;
	cout << "\nAverage: " << num3;
	cout << "\nStandard Deviation: " << num4;
	cout << "\nVariance: " << num5;
}
