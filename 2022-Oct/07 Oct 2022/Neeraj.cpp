#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool check(string word)
{
	int n = word.length();
  transform(word.begin(), word.end(),word.begin(), ::tolower);

	for (int i = 0; i < n; i++, n--)
		if (word[i] != word[n - 1])
			return false;

	return true;
}

string getAns(string str)
{
	str = str + " ";
  string longestword = "", word = "";

	int length, length1 = 0;
	for (int i = 0; i < str.length(); i++)
	{
		char ch = str[i];
		if (ch != ' ')
			word = word + ch;
		else {
			length = word.length();
			if (check(word) &&
					length > length1)
			{
				length1 = length;
				longestword = word;
			}

			word = "";
		}
	}

	return longestword;
}
int main()
{
    string ans;
    getline(cin,ans);
    if (getAns(ans) == "")
        cout<<"No Palindrome Word";
    else
        cout<<getAns(ans);
    return 0;
	}
