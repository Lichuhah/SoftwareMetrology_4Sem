#include "FileEmployee.h"
#include <iostream>
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