#include "FileEmployee.h"
#include "ContentList.h"
#include <iostream>


void menu() {
	system("cls");
	cout << " ____________________________________________________\n";
	cout << "|    База данных аниме-контента (одобрено РКН)       |\n";
	cout << " ____________________________________________________\n";
	cout << "| 1 - Просмотреть базу данных.                       |\n";
	cout << "| 2 - Добавить новый тайтл.                          |\n";
	cout << "| 3 - Удалить тайтл.                                 |\n";
	cout << "| 4 - Очистить базу данных.                          |\n";
	cout << "| 5 - Изменить тайтл.                                |\n";
	cout << "| 6 - Найти тайтл по названию.                       |\n";
	cout << "| 7 - Сортировать по названию.                       |\n";
	cout << "| 8 - Запись в файл.                                 |\n";
	cout << "| 8 - Считать данные с файла.                        |\n";
	cout << "| Ввод других значений приводит к снижению           |\n";
	cout << "| социального рейтинга! Будьте аккуратны.            |\n";
	cout << " ____________________________________________________\n";
}

void UI() {
	ContentList contentList;
	FileEmployee fileEmployee;
	
	menu();
	cout << "Ваш выбор: ";
	int info;
	cin >> info;
	while (true) {
		switch (info) {
		case 1: contentList.showList(); break;
		case 2: contentList.addTitle(); break;
		case 3: contentList.deleteTitle(); break;
		case 4: contentList.clearList(); break;
		case 5: contentList.editTitle(); break;
		case 6: contentList.findTitle(); break;
		case 7: contentList.sort(); break;
		case 8: fileEmployee.saveData(&contentList); break;
		case 9: fileEmployee.readData(&contentList); break;
		default: break; break;
		}
		cout << "Ваш выбор: ";
		cin >> info;
		system("cls");
		menu();
		
	}
}


int main() {
	system("chcp 1251");
	UI();

	return 0;
}

