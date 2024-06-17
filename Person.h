#include <iostream>
#include <string>
using namespace std;

class Person{
	private:
		string fname;
		string lname;
		char gender;
	public:
		Person(){}
		
		Person(string newfname, string newlname, char newGender ){
			fname = newfname;
			lname = newlname;
			gender = newGender;
		}
		
	void setfname(string newfname){
		fname = newfname;	
	}
	string getfname(){
		return fname;
	}	
	void setlname(string newlname){
		lname = newlname; 
	}
	string getlname(){
		return lname;
	}
	void setgender(char newGender){
		gender = newGender; 
	}
	char getgender(){
		return gender;
	}
};
