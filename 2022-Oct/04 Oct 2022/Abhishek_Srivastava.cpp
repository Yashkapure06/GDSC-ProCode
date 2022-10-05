#include <bits/stdc++.h>
using namespace std;
bool anagram(string s1, string s2){
    sort (s1.begin(), s1.end());
    sort (s2.begin(), s2.end());
    if (s1==s2) return true;
    return false;
}
int main(){
    string s1, s2;
    cin>>s1>>s2;
    if (anagram(s1, s2)) cout<<"The strings are anagrams of each other";
    else cout<<"The strings are not an anagram of each other";
    return 0;
}
