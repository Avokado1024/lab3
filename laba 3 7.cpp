using namespace std;
#include <vector>
#include <iostream>
#include <string>
int main() {
	string str1;
	string str2;
	string str3;
	getline(cin, str1);
	getline(cin, str2);
	getline(cin, str3);
	vector<char> v1(str1.begin(), str1.end());
	vector<char> v2(str2.begin(), str2.end());
	vector<char> v3(str3.begin(), str3.end());
	if (v1.size() == max(v1.size(), max(v2.size(), v3.size()))) {
		cout<<"The largest: " << str1;
	}
	if (v2.size() == max(v1.size(), max(v2.size(), v3.size()))) {
		cout << "The largest: " << str2;

	}
	if (v3.size() == max(v1.size(), max(v2.size(), v3.size()))) {
		cout << "The largest: " << str3;
	}
	cout << endl;
	if (v1.size() == min(v1.size(), min(v2.size(), v3.size()))) {
		cout << "The shortest: " << str1;
	}
	if (v2.size() == min(v1.size(), min(v2.size(), v3.size()))) {
		cout << "The shortest: " << str2;
	}
	if (v3.size() == min(v1.size(), min(v2.size(), v3.size()))) {
		cout << "The shortest: " << str3;
	}

}