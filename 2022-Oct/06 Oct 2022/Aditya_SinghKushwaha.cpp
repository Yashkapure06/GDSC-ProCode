#include <bits/stdc++.h>
using namespace std;
void reverseWords(string str)
{
	stack<char> st;

	for (int i = 0; i < str.length(); ++i) {
		if (str[i] != ' ')
			st.push(str[i]);

		else {
			while (st.empty() == false) {
				cout << st.top();
				st.pop();
			}
			cout << " ";
		}
	}

	while (st.empty() == false) {
		cout << st.top();
		st.pop();
	}
}

int main()
{
  string str;
  getline(cin,str);
	
	reverseWords(str);
	return 0;
}
