using namespace std;
#include <vector>
#include <iostream>
#include <string>
int main() {
	setlocale(LC_ALL, "Russian");
	string str1;
	getline(cin, str1);
	vector<char> v1(str1.begin(), str1.end());
	int count = 0;
	for (char f : v1) {
		if (f == 'a' or f == 'A') {
			++count;
		}
	}
	double num = (count * 100) / v1.size();
	cout << num<<"%";

}