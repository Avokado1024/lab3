using namespace std;
#include <vector>
#include <iostream>
#include <string>
int main() {
	string str1;
	getline(cin, str1);
	vector<char> v1(str1.begin(), str1.end());
	vector<char> v2;
	for (int i = 0; i < v1.size(); ++i) {
		v2.push_back('*');
	}
	for (int i = 0; i < v1.size(); ++i) {
		v2.push_back(v1[i]);
	}
	for (int i = 0; i < v1.size(); ++i) {
		v2.push_back('*');
	}
	for (char f : v2) {
		cout << f << " ";
	}
}