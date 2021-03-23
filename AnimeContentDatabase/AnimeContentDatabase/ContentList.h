#ifndef CONTENTLIST_HEADER
#define CONTENTLIST_HEADER
#include "Title.h"
#include <vector>

class ContentList {
private:
	vector<Title> list;

	
public:
	ContentList();
	void addTitle();
	void sort();
	void deleteTitle();
	void clearList();
	void editTitle();
	void showList();
	void findTitle();
	vector<Title>* getList();
};
#endif