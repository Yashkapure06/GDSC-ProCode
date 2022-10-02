#include <iostream>
using namespace std;
 

string isPalindrome(string S)
{
    string P = S;
 
    reverse(P.begin(), P.end());
 
     if (S == P)
     {
        return "Palindrome";
     }
    else
    {
        return "No Palindrome";
    }
}
 
int main()
{
    string S ;
    cout<<"ENTER THE string: ";
    cin>>S;
    cout << isPalindrome(S);
 
    return 0;
}

