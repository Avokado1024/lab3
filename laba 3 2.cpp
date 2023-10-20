#include <stdlib.h>
using namespace std;
#include <iostream>
int main()
{
	double sm = 0;
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
			sm = mas[i] + sm;
		}
		cout << sm << endl;
		break;
	case 2:
		for (int i = 0; i < 10; ++i) {
			sm = pow(mas[i], 2) + sm;
		}
		cout << sm << endl;
		break;
	case 3:
		for (int i = 0; i < 6; ++i) {
			sm = mas[i] + sm;
		}
		cout << sm << endl;
		break;
	case 4:
		int k1, k2;
		cout << "Введите промежуток:   ";
		cin >> k1 >> k2;
		if (k1 < 0 or k2 < 0 or k1>10 or k2>10 or k1 > k2) {
			cout << "WRONG VALUE";
			break;
			
		}
		k1 = k1 - 1;
		k2 = k2 - 1;
		for (k1; k1<=k2; ++k1) {
			sm = mas[k1] + sm;
		}
		cout << sm << endl;
		break;
	case 5:
		for (int i = 0; i < 10; ++i) {
			sm = mas[i] + sm;
		}
		cout << sm/10 << endl;
		break;
	case 6:
		int s1, s2;
		cout << "Введите промежуток:   ";
		cin >> s1 >> s2;
		int k = s2 - s1+1;
		if (s1 < 0 or s2 < 0 or s1>10 or s2>10 or s1 > s2) {
			cout << "WRONG VALUE";
			break;
		}
		s1 = s1 - 1;
		s2 = s2 - 1;
		for (s1; s1 <= s2; ++s1) {
			sm = mas[s1] + sm;
		}
		cout << sm/k << endl;
		break;

















	}
}