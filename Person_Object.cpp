#include <iostream>
#include <string>
#include "Person.h" 
#include "Name.h" 
using namespace std;
int main(){
	int a;
	char g;
	string firstName, lastName;
	Person p;
	Name n;
	
	cout << "Input First Name: ";
	getline(cin, firstName);

	cout << "Input Last Name: ";
	getline(cin, lastName);
	n.setlname(lastName);
	
	cout << "Input Age: ";
	cin >> a;
	p.setage(a);
	
	cout << "Input Gender: ";
	cin >> g;
	p.setgender(g);
	

	
	cout << "\nFirst Name: " << n.getfname() << endl;
	cout << "Last Name: " << n.getlname() << endl;
	cout << "Age: " << p.getage() << endl;
	cout << "Gender: " << p.getgender() << endl;
	cout << "Generation: " << p.whatGen(a) << endl;

	return 0;
}
