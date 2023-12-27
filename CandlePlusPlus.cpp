//
//    ______                ____   
//   / ____/___  _____ ____/ / /__
//  / /   / __ `/ __ \/ __  / /  _ \
// / /___/ /_/ / / / / /_/ / /   __/
// \____/\__,_/_/ /_/\__,_/_/ \___/
//
// CandlePlusPlus v1.0
//
//
//

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int height = 0;
void MainMenu();
void ExtinguishedСandle();
void LitCandle();
void WaitUntilEnter();
void ClearConsole();


void ClearConsole() { cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"; }

void WaitUntilEnter() {
	string StopUntilEnter;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	getline(cin, StopUntilEnter);
}

void ExtinguishedСandle() {
	ClearConsole();
	if (height <= 0) { 
		cout << "Свечка слишком короткая, задайте другую длину свечи" << endl;
		WaitUntilEnter();
		MainMenu();
	}
	cout << "/----------CANDLE----------\\" << endl;
	for (int i = 0; i < 7; i++) {
	cout << "|                          |" << endl;
	}
	cout << "|            |             |" << endl << "|            |             |" << endl;
	for (int i = 0; i < height; i++) {
	cout << "|        mmmmmmmmm         |" << endl;
	}
	cout << "\\__________________________/" << endl;

	//Local Menu
	while (true) {
		int choose;
		cout << "Текущая высота свечки: " << height << endl << "Выберите пункт из меню : \n1.Зажечь свечку(убирает 1 ед.длины)\n2.Перейти в главное меню\n\nВыбор: "; cin >> choose;
		switch (choose) {
		case 1:
			LitCandle();
			break;
		case 2:
			MainMenu();
			break;
		default:
			ExtinguishedСandle();
			break;
		}
	}
}

void LitCandle() {
	ClearConsole();
	if (height <= 0) {
		cout << "Свечка слишком короткая, задайте другую длину свечи" << endl;
		WaitUntilEnter();
		MainMenu();
	}
	cout << "/----------CANDLE----------\\" << endl;
	for (int i = 0; i < 2; i++) {
	cout << "|                          |" << endl;
	}
	cout << "|        \033[31m    /\\   \033[0m         |" << endl;
	cout << "|     \033[31m      /##\\      \033[0m     |" << endl;
	cout << "|     \033[31m     /####\\      \033[0m    |" << endl;
	cout << "|     \033[31m    |######|      \033[0m   |" << endl;
	cout << "|     \033[31m    |######|      \033[0m   |" << endl;
	cout << "|     \033[31m    \\##|##/       \033[0m   |" << endl;
	cout << "|          --|--           |" << endl;
	for (int i = 0; i < height; i++) {
	cout << "|        mmmmmmmmm         |" << endl;
	}
	cout << "\\__________________________/" << endl;

	height -= 1;
	cout << "Нажмите ENTER чтобы вернуться в главное меню";
	WaitUntilEnter();
	MainMenu();

}

void MainMenu() {
	ClearConsole();
	//Menu init
	while (true) {
		
		cout << "   ______                ____   " << endl <<
			"  / ____/___ _____  ____/ / /__ " << endl <<
			" / /   / __ `/ __ \\/ __  / / _ \\" << endl <<
			"/ /___/ /_/ / / / / /_/ / /  __/" << endl <<
			"\\____/\\__,_/_/ /_/\\__,_/_/\\___/" << endl << endl;

		cout << "Добро пожаловать в программу-свечку" << endl;

		int choose;
		cout << "Выберите пункт из меню: \n1. Ввести длину свечки\n2. Вывести потухшую свечку\n3. Зажечь свечку (убирает 1 ед. длины)\n0. Выйти из программы\n\nТекущая высота свечки: " << height << "\n\nВыбор: "; cin >> choose;

		switch (choose) {

		case 1:
			ClearConsole();
			cout << "Введите новое значение высоты свечки (средняя свечка - 12): ";
			cin >> height;
			break;

		case 2:
			ExtinguishedСandle();
			break;

		case 3:
			LitCandle();
			break;

		case 0:
			exit(EXIT_SUCCESS);
		default:
			cout << "Пункт с таким номером отсутствует" << endl << "Нажмите ENTER чтобы продолжить";
			WaitUntilEnter();
			break;
		}

		WaitUntilEnter();
		ClearConsole();
	}
}

int main() {

	setlocale(LC_ALL, "Russian");
	MainMenu();
	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
