# include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s){
	int n = s.length();
	for(int i = 0; i < n / 2; i++){
		if(s[i] != s[n - i - 1]){
			return false;
		}
	}
	return true;
}

int main(){
	string s;
	getline(cin, s);
	string word = "";
	int count = 0;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == ' '){
			count += isPalindrome(word);
			word = "";
		}
		else{
			word += s[i];
		}
	}
	if(word.length() > 0){
		count += isPalindrome(word);
		
	}
	cout << count << "\n";
	return 0;
}