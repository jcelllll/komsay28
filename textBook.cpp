// This program manages a collection of books using a class and objects.
// It allows users to add books, view the details of added books,
// and ensures that the number of stored books does not exceed 50.
#include <iostream>
#include <string>
#include "Book.h"
using namespace std;

int main() {
    int choice, bookCount = 0, maxBooks = 50;
    string newTitle, newAuthor, newISBN, newPublisher;
    Book books[maxBooks];
    
    cout <<"=========================================================================================\n";
    cout <<"=========================================================================================\n";
    cout <<"                                Programming Exercise 06                                  \n";
    cout <<"                           Submitted by: Jeycel Ann M. Tabon                             \n";
    cout <<"-----------------------------------------------------------------------------------------\n";
    cout <<"  This program stores books description such as its title, author, IBSN, and publisher.  \n\n";
    cout <<"=========================================================================================\n";
    cout <<"=========================================================================================\n";
    
	do{
		cout << "\nMenu:\n[1]Add Book\n[2]View Book\n[0]Exit\nEnter Choice: ";	//for interactive program. 
	    cin >> choice;
	    cin.ignore();
		switch(choice){
	        case 1:
	            if (bookCount < maxBooks) {
	                // Get book details
	                cout << "\nEnter Book Title: ";
	                getline(cin, newTitle);
	                books[bookCount].setTitle(newTitle);
	                
	                cout << "Enter Book Author: ";
	                getline(cin, newAuthor);
	                books[bookCount].setAuthor(newAuthor);
	                
	                cout << "Enter Book ISBN: ";
	                getline(cin, newISBN);
	                books[bookCount].setISBN(newISBN);
	                
	                cout << "Enter Book Publisher: ";
	                getline(cin, newPublisher);
	                books[bookCount].setPublisher(newPublisher);
	                
	                bookCount++;
	            } else {
	                cout << "Maximum number of books reached!\n";
	            }
	            break;
	        case 2:
	            // View Books
	            for (int i = 0; i < bookCount; ++i) {
	                cout << "\nBook " << i + 1 << ":\n";
	                cout << "Title: " << books[i].getTitle() << endl;
	                cout << "Author: " << books[i].getAuthor() << endl;
	                cout << "ISBN: " << books[i].getISBN() << endl;
	                cout << "Publisher: " << books[i].getPublisher() << endl;
	            }
	            break;
	        case 0:
	            cout << "Exiting program...\n";
	            break;
	        default:
	            cout << "Invalid choice. Please enter again.\n";
	    }
	}
	while (choice != 0);
	
    return 0;
}
