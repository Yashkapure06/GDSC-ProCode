//Palindrome

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "AABBCC";
    int l = str.length();
    int start =0;
    int end = l-1;
    for(int i=0;i<l;i++){
        if(str[i]!=str[l-i-1]){
            cout<<"Not Palindrome";
            return 0;
        }
    }
    cout<<"Palindrome";
}
