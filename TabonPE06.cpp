#include <iostream>
#include <string>
#include "Person.h" 
#include "Movie.h" 

using namespace std;

int main() {
	int choice, i, numDirector, numActor, numGenre, movieCount = 0, personCount = 0, maxMovie = 50, maxPerson = 500;
	char newdGender, newaGender;
	string newTitle, newSynopsis, newMpaa_rating, newGenre, allGenre, newdFirstname, newdLastname, newDirector, newaFirstname, newaLastname, newActor, searchmovieTitle, deletemovieTitle;
    Movie movies[maxMovie];
    Person persons[maxPerson];
    cout << "=========================================================================================\n";
    cout << "=========================================================================================\n";
    cout << "                                Programming Exercise 06                                  \n";
    cout << "                           Submitted by: Jeycel Ann M. Tabon                             \n";
    cout << "                                  Mini movie library                                     \n";
	cout << "-----------------------------------------------------------------------------------------\n";
    cout << "               This program allows you to store your favorite movies,                    \n";
    cout << "                together with their title, synopsis, MPAA rating, genre,                 \n";
    cout << "                              director, and main actor/actress.                          \n";
    cout << "=========================================================================================\n";
    cout << "=========================================================================================\n";
    
    do{
		cout << "\nMenu:\n[1]Add Movie\n[2]View Movie\n[3]Search Movie\n[0]Exit\nEnter Choice: ";	//for interactive program. 
	    cin >> choice;
	    cin.ignore();
		switch(choice){
	        case 1:
	            if (movieCount < maxMovie && personCount < maxPerson) {
	                // Get movie details
	                cout << "\nEnter Movie Title: ";
	                getline(cin, newTitle);
	                movies[movieCount].setTitle(newTitle);
	                
	                cout << "Enter Movie Synopsis: ";
	                getline(cin, newSynopsis);
	                movies[movieCount].setsynopsis(newSynopsis);
	                
	                cout << "Enter Movie MPAA Rating: ";
	                getline(cin, newMpaa_rating);
	                movies[movieCount].setmpaa_rating(newMpaa_rating);
	                
	            	cout << "How many genres does the movie consist of? ";
	            	cin >> numGenre;
	                cin.ignore();
	    
	                if(numGenre > 1){
	                	for(i = 0; i< numGenre; i++) {
						    cout<< "Enter Genre: ";
						    getline(cin, newGenre);
						    movies[movieCount].setgenre(newGenre);
						    
						    allGenre += "     " + movies[movieCount].getgenre() + "\n";
						}
						movies[movieCount].setgenre(allGenre);
					}
					else{
						cout<< "Enter Genre: ";
					    getline(cin, newGenre);
					    movies[movieCount].setgenre(newGenre);
					    
					    newGenre = "     " + movies[movieCount].getgenre();
					    movies[movieCount].setgenre(newGenre);
		                
					}
	                
		            cout << "How many directors directed the movie?: ";
	                cin >> numDirector;
	                cin.ignore();
	                if(numDirector > 1){
	                	for(i = 0; i< numDirector; i++) {
						    cout<< "Enter First Name: ";
						    getline(cin, newdFirstname);
						    persons[personCount].setfname(newdFirstname);
						
						    cout << "Enter Last Name: ";
						    getline(cin, newdLastname);
						    persons[personCount].setlname(newdLastname);
							
						    cout << "Enter Gender(M/F): ";
						    cin >> newdGender;
						    cin.ignore();
						    persons[personCount].setgender(newdGender);
						
						    newDirector += "     Name: " + persons[personCount].getfname() + " " + persons[personCount].getlname() + "\n     Gender: " + persons[personCount].getgender() + "\n\n";
						    personCount++;
						}
						movies[movieCount].setdirector(newDirector);
					}
					else{
						cout<< "Enter First Name: ";
					    getline(cin, newdFirstname);
					    persons[personCount].setfname(newdFirstname);
					
					    cout << "Enter Last Name: ";
					    getline(cin, newdLastname);
					    persons[personCount].setlname(newdLastname);
						
					    cout << "Enter Gender(M/F): ";
					    cin >> newdGender;
					    cin.ignore();
					    persons[personCount].setgender(newdGender);
	            		
		                newDirector = "     Name: " + persons[personCount].getfname() + " " + persons[personCount].getlname() + "\n     Gender: " + persons[personCount].getgender();
						movies[movieCount].setdirector(newDirector);
					}

	                cout << "How many actors or actresses were in the movie?: ";
	                cin >> numActor;
	                cin.ignore();
	                if(numActor > 1){
	                	for(i = 0; i< numActor; i++) {
						    cout<< "Enter First Name: ";
						    getline(cin, newaFirstname);
						    persons[personCount].setfname(newaFirstname);
						
						    cout << "Enter Last Name: ";
						    getline(cin, newaLastname);
						    persons[personCount].setlname(newaLastname);
							
						    cout << "Enter Gender(M/F): ";
						    cin >> newaGender;
						    cin.ignore();
						    persons[personCount].setgender(newaGender);
						
						    newActor += "     Name: " + persons[personCount].getfname() + " " + persons[personCount].getlname() + "\n     Gender: " + persons[personCount].getgender() + "\n\n";
						    personCount++;
						}
						movies[movieCount].setactor(newActor);
					}
					else{
						cout<< "Enter First Name: ";
					    getline(cin, newaFirstname);
					    persons[personCount].setfname(newaFirstname);
					
					    cout << "Enter Last Name: ";
					    getline(cin, newaLastname);
					    persons[personCount].setlname(newaLastname);
						
					    cout << "Enter Gender(M/F): ";
					    cin >> newaGender;
					    cin.ignore();
					    persons[personCount].setgender(newaGender);
                		
		                newActor = "     Name: " + persons[personCount].getfname() + " " + persons[personCount].getlname() + "\n     Gender: " + persons[personCount].getgender();
						movies[movieCount].setactor(newActor);
					}
	            	movieCount++;
	            }
				else {
	                cout << "Maximum number of books reached!\n";
	            }
	            break;
	        case 2:
	        	for (int i = 0; i < movieCount; ++i) {
	                cout << "\nTitle: " << movies[i].getTitle() << endl;
	                cout << "Synopsis: " << movies[i].getsynopsis() << endl;
	                cout << "MPAA Rating: " << movies[i].getmpaarating() << endl;
	                cout << "Genre: \n" << movies[i].getgenre() << endl;
	                cout << "Directors:\n" << movies[i].getdirector() << endl;
	                cout << "Actors:\n" << movies[i].getactor() << endl;
	            }
	            break;
	        case 3:
	        	cout << "\nEnter the movie title you want to search: ";
	        	getline(cin, searchmovieTitle);
	        	int i;
	        	for(i = 0; i < movieCount; i++){
					if(movies[i].getTitle() == searchmovieTitle){
						cout <<"\nMovie Title: " << movies[i].getTitle() << endl;
						cout <<"Movie Synopsis: " << movies[i].getsynopsis() << endl;
						cout <<"Movie MPAA Rating: "<< movies[i].getmpaarating() << endl;
						cout <<"Movie Genre: "<< movies[i].getgenre() <<endl;
						cout <<"Movie Director/s:\n"<< movies[i].getdirector() <<endl;
						cout <<"Movie Actor/s:\n"<< movies[i].getactor() <<endl;
					}
					else{
						cout <<"Movie not found";
						break;
					}
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

