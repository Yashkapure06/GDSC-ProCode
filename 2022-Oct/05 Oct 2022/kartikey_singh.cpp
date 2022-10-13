
#include <bits/stdc++.h>
using namespace std;

int maxWordLength(string & str)
{
	
	int n = str.length();
	int res = 0, curr_length = 0;
	for (int i = 0; i < n; i++) {
		if (str[i] != ' ')
			curr_length++;
		else {
			res = max(res, curr_length);
			curr_length = 0;
		}
	}
	int ans = max(res, curr_length);
	return ans;
}
int main()
{

    string name = "";
    cin.ignore();
    getline(cin, name, '\n');		
	cout << maxWordLength(name);
	return 0;
}

