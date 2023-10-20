using namespace std;
#include <vector>
#include <iostream>
#include <string>
int main() {
	setlocale(LC_ALL, "Russian");
	string str= " Can you can a can as a canner can can a can?";
	vector<char> v1(str.begin(), str.end());
	vector<char> v2;
	int i = 1;
	while (i < v1.size()) {
		if ((v1[i] == 'c' or v1[i] == 'C') and v1[i + 1] == 'a' and v1[i + 2] == 'n' and v1[i - 1] == ' ' and (v1[i + 3] == ' ' or v1[i + 3] == '?')) {
			v2.push_back('n');
			v2.push_back('e');
			v2.push_back('w');
			v2.push_back('_');
			v2.push_back('w');
			v2.push_back('o');
			v2.push_back('r');
			v2.push_back('d');
			i = i + 3;
		}
		else {
			v2.push_back(v1[i]);
			i = i + 1;
		}
	}
	for (char f : v2) {
		cout << f;
	}
	
	
	
	}


