#include "FileEmployee.h"
#include <iostream>
#include <sstream>
#pragma warning(disable : 4996)
FileEmployee::FileEmployee() {
	time_t t = time(0);
	dateTime = localtime(&t);
	saveDateTime();
}

void FileEmployee::saveDateTime() {
	fileToWrite.open(filetimepath);
	if (fileToWrite.is_open()) {
		fileToWrite << "Дата " << (dateTime->tm_year + 1900) << '-' << (dateTime->tm_mon + 1) << '-' << dateTime->tm_mday
			<<"\nВремя " << dateTime->tm_hour << ":" << dateTime->tm_min << ":" << dateTime->tm_sec;
		fileToWrite.close();
	}
	else {
		cout << "Ошибка открытия файла.";
	}
}

void FileEmployee::saveData(ContentList* list) {
	fileToWrite.open(filedatapath);
	if (fileToWrite.is_open()) {
		vector<Title> *listData = list->getList();
		for (int i = 0; i < listData->size(); i++) {
			fileToWrite << listData->at(i).getName() << "|";
			fileToWrite << listData->at(i).getType() << "|";
			fileToWrite << listData->at(i).getStatus() << "|";
			fileToWrite << listData->at(i).getGenreMain() << "|";
			fileToWrite << listData->at(i).getGenreSub() << "|";
			fileToWrite << listData->at(i).getRating() << "|";
			fileToWrite << listData->at(i).getGrade() << "|\n";
		}
		fileToWrite.close();
	}
	else {
		cout << "Ошибка открытия файла.";
	}
}

void FileEmployee::readData(ContentList* list) {
	fileToRead.open(filedatapath);
	if (fileToRead.is_open()) {
		vector<Title> *listData = list->getList();
		listData->clear();
		string s;
		while (!fileToRead.eof()) {
			getline(fileToRead, s);
			if (s != "") {
				Title t = fromStrToTitle(s);
				listData->push_back(t);
			}
		}
	}
	else {

	}
}

Title FileEmployee::fromStrToTitle(const string& s) {
	char del = '|';
	vector<string> tokens;
	string token;
	istringstream tokenStream(s);
	while (getline(tokenStream, token, del))
	{
		tokens.push_back(token);
	}
	Title title(tokens);
	return title;
}