#include "ContentList.h"
#include <iostream>
#include <algorithm>

using namespace std;

ContentList::ContentList() {

}

void ContentList::addTitle() {
	Title title;
	list.push_back(title);
	cout << "\nЭлемент добавлен. \n";
}

void ContentList::showList() {
	for (int i = 0; i < list.size(); i++) {
		cout << "[" << i << "] ";
		list[i].showTitle();
	}
}

void ContentList::deleteTitle() {
	cout << "Введите номер удаляемого тайтла: ";
	int id;
	cin >> id;
	list.erase(list.begin()+id);
	cout << "\nЭлемент удален.\n";
}

void ContentList::clearList() {
	list.clear();
	cout << "\nСписок очищен.\n";
}

void ContentList::editTitle() {
	cout << "Введите номер изменяемого тайтла: ";
	int id;
	cin >> id;
	list[id].editTitle();
	cout << "\nЭлемент изменен.\n";
}

void ContentList::sort() {
	std::sort(list.begin(), list.end());
	cout << "\nСписок отсортирован.\n";
}

void ContentList::findTitle() {
	cout << "Введите название искомого тайтла: ";
	string name;
	cin >> name;
	Title findTitleEl(name);
	vector<Title>::iterator title = find(begin(list), end(list), findTitleEl);
	list[distance(list.begin(), title)].showTitle();
}

vector<Title>* ContentList::getList() {
	return &list;
}