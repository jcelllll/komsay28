#include <iostream>
#include <string>
using namespace std;

class Movie{
	private:
		string title;
		string synopsis;
		string mpaa_rating;
		string genre;
		string director;
		string actor;
	public:
		Name(){}
		
		Name(string newtitle, string newsynopsis, string newmpaa_rating, string newgenre, string newdirector, string newactor){
			title = newtitle;
			synopsis = newsynopsis;
			mpaa_rating = newmpaa_rating;
			genre = newgenre;
			director = newdirector;
			actor = newactor;
		}
		
	void setTitle(string newtitle){
		title = newtitle;
	}
	string getTitle(){
		return title;
	}
	void setsynopsis(string newsynopsis){
		synopsis = newsynopsis;
	}
	string getsynopsis(){
		return synopsis;
	}
	void setmpaa_rating(string newmpaa_rating){
		mpaa_rating = newmpaa_rating;
	}
	string getmpaarating(){
		return mpaa_rating;
	}
	void setgenre(string newgenre){
		genre = newgenre;
	}
	string getgenre(){
		return genre;
	}
	void setdirector(string newdirector){
		director = newdirector;
	}
	string getdirector(){
		return director;
	}
	void setactor(string newactor){
		actor = newactor;
	}
	string getactor(){
		return actor;
	}
};
