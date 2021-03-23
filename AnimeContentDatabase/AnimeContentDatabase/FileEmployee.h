#ifndef FILEEMPLOYEE_HEADER
#define FILEEMPLOYEE_HEADER
#define filetimepath "time.txt"
#define filedatapath "data.txt"
#include <time.h>
#include "ContentList.h"
#include <fstream>

using namespace std;

class FileEmployee{
private:
	ifstream fileToRead;
	ofstream fileToWrite;
	tm* dateTime;

	void saveDateTime();
public:
	FileEmployee();
	void fileOpen();
	void saveData(ContentList* list);
	void readData(ContentList* list);
	Title fromStrToTitle(const string& s);
};
#endif