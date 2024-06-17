#include <iostream>
#include <string>
using namespace std;

class Name{
	private:
		string firstName;
		string lastName;
	public:
		Name(){}
		
		Name(string newfname, string newlname ){
			firstName = newfname;
			lastName= newlname;
		}
		
void setfname(string fname){
		firstName = fname;	
}
string getfname(){
		return firstName;
}	
void setlname(string lname){
		lastName = lname; 
}
string getlname(){
	return lastName;
}
};
