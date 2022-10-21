#include<bits/stdc++.h>
using namespace std;
string getLongestPalindrome(string s) {
   int n = s.size();
   int index  = 0, palindromeLength = 1;
   for (int i = 1; i < n; i++) {
       int left = i - 1, right = i;
       while(left >= 0 && right < n && s[left] == s[right]) {
           if(right - left + 1 > palindromeLength) {
               index = left;
               palindromeLength = right - left + 1;
           }
           left--;
           right++;
       }
       left = i - 1;
       right = i + 1;
       while(left >= 0 && right < n && s[left] == s[right]) {
           if(right - left + 1 > palindromeLength) {
               index = left;
               palindromeLength = right - left + 1;
           }
           left--;
           right++;
       }
   }
   string ans = "";
   for (int i = index; i < index + palindromeLength; i++) {
       ans += s[i];
   }
   return ans;
}
int main()
{
	string s;
	getline(cin,s);
	s=getLongestPalindrome(s);
	cout<<s;
	return 0;
}