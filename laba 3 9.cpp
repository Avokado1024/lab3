using namespace std;
#include <vector>
#include <iostream>
#include <string>
int main() {
	setlocale(LC_ALL, "Russian");
	string str1;
	getline(cin, str1);
	int count = 0;
	for (char f : str1) {
		if (f == 'a' or f == 'A') {
			++count;
		}
	}
	double num = (count * 100) / str1.size();
	cout << num<<"%";

}
