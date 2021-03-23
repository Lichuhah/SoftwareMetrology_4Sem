#include "Title.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

Title::Title() {
	createTitle();
}

Title::Title(string name) {
	this->name = name;
}

Title::Title(vector<string> tokens) {
	name = tokens[0];
	setType(tokens[1]);
	setStatus(tokens[2]);
	setGenreMain(tokens[3]);
	setGenreSub(tokens[4]);
	setRating(tokens[5]);
	grade = stod(tokens[6]);
}

string Title::getName() {
	return name;
}

void Title::setName() {
	cout << "\nВведите название: ";
	cin >> name;
	this->name = name;
}

string Title::getType() {
	switch (type) {
	case 1: return "Сериал";  break;
	case 2: return "Фильм"; break;
	case 3: return "OVA"; break;
	case 4: return "Спешл"; break;
	}
	return "";
}

void Title::setType() {
	cout << "\nВыберите тип(Сериал - 1, Фильм - 2, OVA - 3, Спешл - 4): ";
	int type;
	cin >> type;
	this->type = Type(type);
}

void Title::setType(string text) {
	int type=0;
	if (text == "Сериал") {
		type = 1;
	}
	else if (text=="Фильм"){
		type = 2;
	}
	else if (text == "OVA") {
		type = 3;
	}
	else if (text == "Спешл") {
		type = 4;
	}
	this->type = Type(type);
}

string Title::getStatus() {
	switch (status) {
	case 1: return "Анонсировано";  break;
	case 2: return "Онгоинг"; break;
	case 3: return "Вышло"; break;
	}
	return "";
}

void Title::setStatus() {
	cout << "\nВыберите статус(Анонсировано - 1, Онгоинг - 2, Вышло - 3): ";
	int status;
	cin >> status;
	this->status = Status(status);
}

void Title::setStatus(string text) {
	int status = 0;
	if (text == "Анонсировано") {
		status = 1;
	}
	else if (text == "Онгоинг") {
		status = 2;
	}
	else if (text == "Вышло") {
		status = 3;
	}
	this->status = Status(status);
}

string Title::getGenreMain() {
	switch (genreMain) {
	case 1: return "Сёнен";  break;
	case 2: return "Сейнен"; break;
	case 3: return "Сёдзе"; break;
	case 4: return "Комедия"; break;
	case 5: return "Повседневность"; break;
	case 6: return "Экшен"; break;
	case 7: return "Хоррор"; break;
	}
	return "";
}

void Title::setGenreMain() {
	cout << "\nВыберите жанр(Сёнен - 1, Сейнен - 2, Сёдзе - 3, Комедия - 4, Повседневность - 5, Экшн - 6, Хоррор - 7): ";
	int genre;
	cin >> genre;
	this->genreMain = Genre(genre);
}

void Title::setGenreMain(string text) {
	int genre=0;
	if (text == "Сёнен") {
		genre = 1;
	}
	else if (text == "Сейнен") {
		genre = 2;
	}
	else if (text == "Сёдзе") {
		genre = 3;
	}
	else if (text == "Комедия") {
		genre = 4;
	}
	else if (text == "Повседневность") {
		genre = 5;
	}
	else if (text == "Экшен") {
		genre = 6;
	}
	else if (text == "Хоррор") {
		genre = 7;
	}
	this->genreMain = Genre(genre);
}

string Title::getGenreSub() {
	switch (genreSub) {
	case 1: return "Сёнен";  break;
	case 2: return "Сейнен"; break;
	case 3: return "Сёдзе"; break;
	case 4: return "Комедия"; break;
	case 5: return "Повседневность"; break;
	case 6: return "Экшен"; break;
	case 7: return "Хоррор"; break;
	}
	return "";
}
void Title::setGenreSub() {
	cout << "\nВыберите поджанр(Сёнен - 1, Сейнен - 2, Сёдзе - 3, Комедия - 4, Повседневность - 5, Экшн - 6, Хоррор - 7): ";
	int genre;
	cin >> genre;
	this->genreSub = Genre(genre);
}
void Title::setGenreSub(string text) {
	int genre = 0;
	if (text == "Сёнен") {
		genre = 1;
	}
	else if (text == "Сейнен") {
		genre = 2;
	}
	else if (text == "Сёдзе") {
		genre = 3;
	}
	else if (text == "Комедия") {
		genre = 4;
	}
	else if (text == "Повседневность") {
		genre = 5;
	}
	else if (text == "Экшен") {
		genre = 6;
	}
	else if (text == "Хоррор") {
		genre = 7;
	}
	this->genreSub = Genre(genre);
}
string Title::getRating() {
	switch (rating) {
	case 1: return "G";  break;
	case 2: return "PG"; break;
	case 3: return "PG13"; break;
	case 4: return "R17"; break;
	case 5: return "R"; break;
	}
	return "";
}
void Title::setRating() {
	cout << "\nВыберите возрастной рейтинг(G - 1, PG - 2, PG13 - 3, R17 - 4, R - 5): ";
	int rating;
	cin >> rating;
	this->rating = Rating(rating);
}
void Title::setRating(string text) {
	int rating;
	if (text == "G") {
		rating = 1;
	}
	else if (text == "PG") {
		rating = 2;
	}
	else if (text == "PG13") {
		rating = 3;
	}
	else if (text == "R17") {
		rating = 4;
	}
	else if (text == "R") {
		rating = 5;
	}
	this->rating = Rating(rating);
}
double Title::getGrade() {
	return grade;
}
void Title::setGrade() {
	cout << "\nВведите оценку: ";
	double grade;
	cin >> grade;
	this->grade = grade;
}

bool Title::operator<(const Title& other) {
	return this->name[0] < other.name[0];
}

bool Title::operator==(const Title& other) {
	return this->name == other.name;
}

void Title::createTitle() {
	setName();
	setType();
	setStatus();
	setGenreMain();
	setGenreSub();
	setRating();
	setGrade();
}

bool Title::isEditableField(string field) {
	bool info;
	cout << "Редактировать поле "+field+"? (0 - Нет, 1 - Да)";
	cin >> info;
	return info;
}

void Title::editTitle() {
	if (isEditableField("название")) {
		setName();
	}
	if (isEditableField("тип")) {
		setType();
	}
	if (isEditableField("статус")) {
		setStatus();
	}
	if (isEditableField("жанр")) {
		setGenreMain();
	}
	if (isEditableField("поджанр")) {
		setGenreSub();
	}
	if (isEditableField("рейтинг")) {
		setRating();
	}
	if (isEditableField("оценка")) {
		setGrade();
	}
}

void Title::showTitle() {
	cout << "Название: " << getName() << "\n";
	cout << "Тип: " << getType() << "\n";
	cout << "Статус: " << getStatus() << "\n";
	cout << "Жанр: " << getGenreMain() << "\n";
	cout << "Поджанр: " << getGenreSub() << "\n";
	cout << "Возрастой рейтинг: " << getRating() << "\n";
	cout << "Оценка: " << getGrade() << "\n";
	cout << "\n";
}