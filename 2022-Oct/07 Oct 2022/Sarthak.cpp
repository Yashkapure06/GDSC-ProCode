/* C++ program to print longest palindrome
word in a sentence and its length*/
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

// Function to check if a
// word is palindrome
bool checkPalin(string word)
{
	int n = word.length();

	// making the check case
	// case insensitive
	// word = word.toLowerCase();
	transform(word.begin(), word.end(),
			word.begin(), ::tolower);

	// loop to check palindrome
	for (int i = 0; i < n; i++, n--)
		if (word[i] != word[n - 1])
			return false;

	return true;
}

// Function to find longest
// palindrome word
string longestPalin(string str)
{
	
	// to check last word for palindrome
	str = str + " ";

	// to store each word
	string longestword = "", word = "";

	int length, length1 = 0;
	for (int i = 0; i < str.length(); i++)
	{
		char ch = str[i];

		// extracting each word
		if (ch != ' ')
			word = word + ch;
		else {
			length = word.length();
			if (checkPalin(word) &&
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

// Driver code
int main()
{
	string s = "My name is ava and i love"
						" Geeksforgeeks";

	if (longestPalin(s) == "")
		cout<<"No Palindrome"<<" Word";
	else
		cout<<longestPalin(s);
	return 0;
}

// This code is contributed by Manish
// Shaw (manishshaw1)
