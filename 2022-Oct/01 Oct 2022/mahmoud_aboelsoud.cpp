#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(string s){
    string k = s;
    reverse(k.begin(), k.end());

    return s == k;
}


int main(){
    string s;
    getline(cin, s);

    if(is_palindrome(s)){
        cout << "Palindrome\n";
    }else{
        cout << "NOT Palindrome\n";
    }

    return 0;
}