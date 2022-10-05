#include <iostream>

using namespace std;

bool is_palindrome(const string& s) {
	int l = 0, r = s.size() - 1;
	while (l < r) {
		if (s[l] != s[r]) return false;
		l++, r--;
	}
	return true;
}

int main() {
	string s;
	getline(cin, s);
	cout << (is_palindrome(s) ? "Palindrome" : "NOT Palindrome") << endl;
  return 0;
}
