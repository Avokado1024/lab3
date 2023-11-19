#include <iostream>
#include <string>
using namespace std;
int main()
{
	string c1;
	string c2;
	string c3;//3 gorod
	cin >> c1;
	cin >> c2;
	cin >> c3;

	if (c1.length() > c2.length())
	{
		if (c1.length() > c3.length()) {
			cout << "the_longest" << " "<<c1 << endl;
		}
		else {
			cout << "the_longest" << " "<<c3 << endl;
		}
	}
	else
	{
		if (c2.length() > c3.length()) {
			cout << "the_longest" << " "<<c2 << endl;
		}
		else {
			cout << "the_longest" << " "<<c3 << endl;
		}
	}

	if (c1.length() < c2.length())
	{
		if (c1.length() < c3.length()) {
			cout << "the_shortest" << " "<<c1 << endl;
		}
		else {
			cout << "the_shortest" << " "<<c3 << endl;
		}
	}
	else
	{
		if (c2.length() < c3.length()) {
			cout << "the_shortest" << " "<<c2 << endl;
		}
		else {
			cout << "the_shortest" << " "<<c3 << endl;
		}
	}
}
