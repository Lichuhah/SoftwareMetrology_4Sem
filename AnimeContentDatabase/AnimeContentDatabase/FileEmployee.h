#define filetimepath "time.txt"
#include <time.h>
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
};