#include <iostream>
#include <string>
using namespace std;

void reverseString (string &str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}

string getWordsReversed(string str)
{
    string ans = "";

    for(int i=0;i<str.length();i++)
    {
        string word="";
        while(i<str.length() && str[i] != ' ')
        {
            word += str[i];
            i++;
        }
        reverseString(word);
        ans += word + ' ';
    }

    return ans;
}

int main()
{
    string str = "I am a student";
    cout<<getWordsReversed(str);
    return 0;
}
