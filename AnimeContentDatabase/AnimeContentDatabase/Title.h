#ifndef TITLE_HEADER
#define TITLE_HEADER
#include "Enums.h"
#include <string>
#include <vector>
using namespace std;
class Title {
private:
	string name;
	Type type;
	Status status;
	Genre genreMain;
	Genre genreSub;
	Rating rating;
	double grade;

	bool isEditableField(string field);

public:
	Title();
	Title(string name);
	Title(vector<string> tokens);

	string getName();
	void setName();
	string getType();
	void setType();
	void setType(string text);
	string getStatus();
	void setStatus();
	void setStatus(string text);
	string getGenreMain();
	void setGenreMain();
	void setGenreMain(string text);
	string getGenreSub();
	void setGenreSub();
	void setGenreSub(string text);
	string getRating();
	void setRating();
	void setRating(string text);
	double getGrade();
	void setGrade();

	void createTitle();
	void editTitle();
	void showTitle();
	
	bool operator<(const Title& other);
	bool operator==(const Title& other);
};
#endif