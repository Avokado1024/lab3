using namespace std;
#include <vector>
#include <iostream>
#include <string>
int main() {
	string str1;
	string str2;
	getline(cin, str1);
	getline(cin, str2);
	vector<char> v1(str1.begin(), str1.end());
	vector<char> v2(str2.begin(), str2.end());
	if (str1.size()> str2.size()) {
		cout << "true";
	}
	else {
		cout << "false";
	}
}