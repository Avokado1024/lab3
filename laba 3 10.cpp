#include <iostream>
using namespace std;
#include <string>
int main() {
	setlocale(LC_ALL, "Russian");
	string v2{""};
    string v1{ " Can you can a can as a canner can can a can?"};
    string n;
    getline(cin, n);
    int i = 1;
	while (i < v1.size()) {
		if ((v1[i] == 'c' or v1[i] == 'C') and v1[i + 1] == 'a' and v1[i + 2] == 'n' and v1[i - 1] == ' ' and (v1[i + 3] == ' ' or v1[i + 3] == '?')) {
		for(char f:n){
			v2.push_back(f);}
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


