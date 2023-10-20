using namespace std;
#include <vector>
#include <iostream>
#include <string>
int main(){
	string str;
	getline(cin, str);
	vector<char> v1(str.begin(), str.end());
	for (char f : v1) {
		cout << f << " ";
	}
	cout << endl;
	if (str.size() % 2 == 0) {
		cout << "chetno";
	}
	else {
		cout << "nechetno";
	}
}