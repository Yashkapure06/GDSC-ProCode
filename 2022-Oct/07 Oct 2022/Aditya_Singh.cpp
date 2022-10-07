#include<bits/stdc++.h>
 
using namespace std;
bool checkPalin(string word)
{
    int n = word.length();;
    transform(word.begin(), word.end(),
              word.begin(), ::tolower);
    for (int i = 0; i < n; i++, n--)
        if (word[i] != word[n - 1])
            return false;
 
    return true;
}
string longestPalin(string str)
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
int main()
{
    string s;
    getline(cin,s);
    if (longestPalin(s) == "")
        cout<<"No Palindrome"<<" Word";
    else
        cout<<longestPalin(s);
    return 0;
}
