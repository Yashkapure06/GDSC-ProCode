#include<bits/stdc++.h>
using namespace std;

bool is_palindrome(string s, int l, int r) {
    if(l > r)return true;
    if(s[l] != s[r])return false;
    return is_palindrome(s, l+1, r-1);
}

int main(){
    string input;
    getline(cin, input);
    int n = input.size();
    cout<<(is_palindrome(input, 0, n-1) ? "Palindrome" : "NOT Palindrome")<<endl;
    return 0;
}