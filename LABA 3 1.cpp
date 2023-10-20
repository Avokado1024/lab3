#include <stdlib.h>
using namespace std;
#include <iostream>
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	double mas[10];
	for (int i = 0; i < 10; ++i) {
		mas[i] = rand() % 99 + 1;
		cout << mas[i] << " ";
	}
	int punkt;
	cout << endl;
	cout << "Введите какой пункт хотите выполнить:";
	cin >> punkt;
	switch (punkt) {
	case 1:
		for (int i = 0; i < 10; ++i) {
			mas[i] = mas[i] * 2;
			cout << mas[i] << " ";

		}
		break;
	case 2:
		int a;
		cout << "Введите а:";
		cin >> a;

		for (int i = 0; i < 10; ++i) {
			mas[i] = mas[i] - a;
			cout << mas[i] << " ";

		}
		break;
	case 3:
		int k = mas[0];
		for (int i = 0; i < 10; ++i) {
			mas[i] = mas[i] / k;
			cout << mas[i] << " ";
		}
		break;
	}
	
}

