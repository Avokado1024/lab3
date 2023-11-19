using namespace std;
#include <vector>
#include <string>
#include <iostream>
int main() {
 string word;
 cin >> word;
 for (int i = 0; i < word.length(); ++i) {
  cout << "*";
 }
 cout << word;
 for (int i = word.length(); i < 2 * word.length(); ++i) {
  cout << "*";
 }
}
