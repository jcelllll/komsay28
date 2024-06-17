#include <iostream>
#include <string>
using namespace std;

class Person{
	private:
		int age;
		char gender;
	public:
		Person(){}
		
		Person(int newage){
			age = newage;
			gender = 'M';
		}
		Person(int newage, char c){
			age = newage;
			gender = c;
		}
		
void setage(int newage){
	if( newage >= 0){
		age = newage;	
	}
	else{
		cout << "invalid age!!!" << endl;
	}
}
int getage(){
		return age;
	}	
void setgender(char c){
	if( (c == 'M') || (c == 'F') ){
		gender = c;

	} 
	else{
		cout << "invalid gender!!!" << endl;
	}
}
char getgender(){
	return gender;
}
string whatGen(int age){
	if(age <= 123 && age >= 97){
		return "Greatest Generation";
	}
	else if(age <= 96 && age >= 79){
		return "Silent Generation";
	}
	else if(age <= 78 && age >= 60){
		return "Boomers";
	}
	else if(age <= 59 && age >= 44){
		return "Generation X";
	}
	else if(age <= 43 && age >= 28){
		return "Millenials";
	}
	else if(age <= 27 && age >= 14){
		return "Gen Z";
	}
	else if(age <= 13 && age >= 0){
		return "Generation Alpha";
	}
}

};
