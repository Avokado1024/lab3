#include <stdlib.h>
using namespace std;
#include <iostream>
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	double mas[20];
	for (int i = 0; i < 20; ++i) {
		mas[i] = rand() % 99 + 1;
		cout << mas[i] << " ";
	}
	cout << endl;
	double a1, a2, a3;
	a1 = mas[0];
	a2 = mas[1];
	a3 = mas[2];
	mas[0] = mas[17];
	mas[1] = mas[18];
	mas[2] = mas[19];
	mas[17] = a1;
	mas[18] = a2;
	mas[19] = a3;
	for (int i = 0; i < 20; ++i) {
		cout << mas[i] << " ";
	}




}