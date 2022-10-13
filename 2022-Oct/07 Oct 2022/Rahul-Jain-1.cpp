#include <iostream>
#include <algorithm>
#include <string>
 
using namespace std;

bool checkPalin(string word){
    int n = word.length();
 
    transform(word.begin(), word.end(),
              word.begin(), ::tolower);
 
    // loop to check palindrome
    for (int i = 0; i < n; i++, n--)
        if (word[i] != word[n - 1])
            return false;
 
    return true;
}

string largestPalindrome(string str){
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
            if (checkPalin(word) && length > length1){
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
    string str ;
    getline(cin,str);
    if (largestPalindrome(str) == "")
        cout<<"No Palindrome"<<" Word";
    else
        cout<<largestPalindrome(str);
    return 0;
}
 