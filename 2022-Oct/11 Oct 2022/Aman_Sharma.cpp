#include <bits/stdc++.h>
using namespace std;
 
bool checkPalinDrome(string word)
{
    int n = word.length();
    transform(word.begin(), word.end(), word.begin(), ::tolower);
 
    for (int i = 0; i < n; i++,n--)
    if (word.at(i) != word.at(n - 1))
        return false;    
    return true;
}

int countPalinDrome(string str)
{        
    str = str + " ";
    string word = "";
    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str.at(i);
        if (ch != ' ')
            word = word + ch;
        else {
            if (checkPalinDrome(word))
                count++;
            word = "";
        }
    }
    return count;
}

int main()
{
    cout<<countPalinDrome("ABCBA ABCD DBBD BCDCB")<<endl;
}
