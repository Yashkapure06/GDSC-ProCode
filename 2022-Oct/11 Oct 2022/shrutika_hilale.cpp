#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string word, int start, int end)
{
    if (start > end)
        return true;
    return (word[start] == word[end]) && isPalindrome(word, start + 1, end - 1);
}

int num_palindromes(vector<string> input)
{
    int count = 0;

    for (auto word : input)
    {
        if (isPalindrome(word, 0, word.size() - 1))
        {
            count++;
        }
    }
    return count;
}

int main()
{
    string str;

    getline(cin, str);
    istringstream is(str);

    vector<string> input((istream_iterator<string>(is)), istream_iterator<string>());

    cout << num_palindromes(input) << endl;
    return 0;
}