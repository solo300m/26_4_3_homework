// task_3.cpp: определяет точку входа для приложения.
//

#include "task_3.h"
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	WindowMy win(13, 3, 20, 10);
	
	while (true)
	{
		system("cls");
		win.display();
		cout << "Выберите действие: 1 - Сместить окно, 2 - Изменить размеры окна, 0 - Закрыть окно, выйти из программы." << endl;
		int choose;
		cin >> choose;
		if (choose == 1) {
			cout << "Ввести сдвиг по X ->";
			int x;
			cin >> x;
			cout << "Ввести сдвиг по Y ->";
			int y;
			cin >> y;
			win.move(x, y);			
		}
		else if (choose == 2) {
			cout << "Ввести новую ширину ->";
			int x;
			cin >> x;
			cout << "Ввести новую высоту ->";
			int y;
			cin >> y;
			win.resize(x, y);
		}
		else if (choose == 0) {
			break;
		}
		else {
			cout << "Не верный ввод. Повторите." << endl;
		}		
	}	
	return 0;
}
